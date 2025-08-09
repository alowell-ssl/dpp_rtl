`define SH 4
`define WD 23

function signed [`WD:0] div2(input signed [`WD:0] ins);
   begin
      /*
      //div2 = (ins + (1 << (`SH-1))) >>> `SH; //division by 2 via shift, with rounding to nearest
      */

      //below implements round away from zero. this fixes the problem of the CR stage not decaying all the way to zero.
      if(ins < 0)
         div2 = ins >>> `SH;
      else
         div2 = (ins + ((1 << `SH)-1)) >>> `SH;
      end
endfunction

module rc(input signed [`WD:0] ins, output signed [`WD:0] outs, input clk);
   reg signed [`WD:0] out_prev;
   always @ (posedge clk)
      out_prev <= outs;
   assign outs = ins - div2(out_prev) + out_prev; 
endmodule

module cr(input signed [`WD:0] ins, output signed [`WD:0] outs, input clk);
   reg signed [`WD:0] out_prev, in_prev;
   reg signed [`WD:0] dbg_ins, dbg_in_prev, dbg_out_prev, dbg_div2_out_prev;
   always @ (posedge clk) begin
      out_prev <= outs;
      in_prev <= ins;

      dbg_ins <= ins;
      dbg_in_prev <= in_prev;
      dbg_out_prev <= out_prev;
      dbg_div2_out_prev <= div2(out_prev);


   end
   assign outs = ins - in_prev + out_prev - div2(out_prev);
endmodule

module pd(input signed [`WD:0] ins, input signed [`WD:0] threshold, output signed [`WD:0] peak, output reg valid, input clk);

   reg state = 0;

   always @ (posedge clk) begin
      if(state == 0) begin
         if(ins < threshold) begin
            state <= 0;
            valid <= 0;
         end else begin
            state <= 1;
            peak <= ins;
         end
      end else begin
         if(ins < threshold) begin
            valid <= 1;
            state <= 0;
         end else begin
            if(ins > peak) peak <= ins;
            state <= 1;
         end
      end
   end
endmodule

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
         peak1 <= write_shift ? peak : 0;
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

module blink(input signed [`WD:0] ins, output signed [`WD:0] outs, input clk);


   wire signed [`WD:0] rc1_out, rc2_out, rc3_out, rc4_out, cr1_out, peak_out;
   wire peak_valid;
   wire read_shift = 1;
   rc rc1(ins,rc1_out,clk);
   rc rc2(div2(rc1_out), rc2_out, clk);
   rc rc3(div2(rc2_out), rc3_out, clk);
   rc rc4(rc3_out, rc4_out, clk);
   cr cr1(rc4_out, outs, clk);
   //pd pd1(outs, 500, pd1_out, pd_valid, clk);
   pd2 pd(outs, 500, peak_out, valid_out, read_shift, clk);

   //cr  cr1(ins, outs, clk);

endmodule
   







