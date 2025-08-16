`define WD 23

module pd2(input signed [`WD:0] ins, 
          input signed [`WD:0] threshold, 
          output signed [`WD:0] peak_out,
          output valid_out,
          input read_shift,
          input clk);


   reg state = 0;
   reg signed [`WD:0] peak1, peak2, peak;
   reg valid1, valid2;
   
   wire below_threshold = (ins < threshold) ? 1 : 0;
   wire write_shift = (state == 1) & below_threshold;
   assign peak_out = peak2;
   assign valid_out = valid2;

   always @ (posedge clk) begin
      if(read_shift | write_shift) begin
         valid1 <= write_shift ? 1 : 0;
         valid2 <= valid1;
         peak1 <= write_shift ? peak : 0; //could also just write peak, since valid instructs downstream module to ignore if zero
         peak2 <= peak1;
      end
   end

   always @ (posedge clk) begin
      if(state == 0) begin
         if(below_threshold) begin
            state <= 0;
         end else begin
            state <= 1;
            peak <= ins;
         end
      end else begin
         if(below_threshold) begin
            state <= 0;
         end else begin
            if(ins > peak) peak <= ins;
            state <= 1;
         end
      end
   end
endmodule

module trapz(input signed [`WD:0] ins, output signed [`WD:0] outs, input clk);
   localparam n_peaking = 100;
   localparam n_flat = 10;
   localparam n_length = (2*n_peaking) + n_flat;

   reg signed [`WD:0] accumulator, outz;
   reg signed [`WD:0] delay_line [0:n_length-1];

   reg [15:0] i;

   always @ (posedge clk) begin
      outz <= accumulator;
      accumulator <= accumulator + (ins - delay_line[n_peaking-1]) - (delay_line[(n_peaking+n_flat)-1] - delay_line[n_length-1]);
      for( i = 1; i < n_length; i = i + 1)
         delay_line[i] <= delay_line[i-1];
      delay_line[0] <= ins;
   end

   reg signed [`WD:0] outz1, outz2, outz3, outz4, outz5;
   assign outs = outz5;
   always @ (posedge clk) begin
      outz1 <= outz;
      outz2 <= outz1;
      outz3 <= outz2;
      outz4 <= outz3;
      outz5 <= outz4;
   end
endmodule

module trapz2(input signed [`WD:0] ins, output signed [`WD:0] outs, input clk);
   localparam n_peaking = 100;
   localparam n_flat = 10;
   localparam n_length = (2*n_peaking) + n_flat;

   reg signed [`WD:0] accumulator, sum1, sum2, sum3;
   reg signed [`WD:0] delay_line [0:n_length-1];
   assign outs = accumulator;

   reg [15:0] i;

   always @ (posedge clk) begin
      sum1 <= ins - delay_line[n_peaking-1];
      sum2 <= delay_line[(n_peaking+n_flat)-1] - delay_line[n_length-1];
      sum3 <= sum1 - sum2;
      accumulator <= accumulator + sum3;

      for( i = 1; i < n_length; i = i + 1)
         delay_line[i] <= delay_line[i-1];
      delay_line[0] <= ins;
   end
endmodule

module blink(input signed [`WD:0] ins, output signed [`WD:0] outs, input clk);

  wire signed [`WD:0] peak_out, trapz_out;
  wire valid_out;
  wire read_shift = 1;
  //trapz tr1(ins, trapz_out, clk);
  trapz2 tr1(ins, trapz_out, clk);
  pd2 pd(trapz_out, 500, peak_out, valid_out, read_shift, clk);
  assign outs = trapz_out;

endmodule
   
