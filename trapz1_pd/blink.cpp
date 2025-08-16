#include <cxxrtl/cxxrtl.h>

#if defined(CXXRTL_INCLUDE_CAPI_IMPL) || \
    defined(CXXRTL_INCLUDE_VCD_CAPI_IMPL)
#include <cxxrtl/capi/cxxrtl_capi.cc>
#endif

#if defined(CXXRTL_INCLUDE_VCD_CAPI_IMPL)
#include <cxxrtl/capi/cxxrtl_capi_vcd.cc>
#endif

using namespace cxxrtl_yosys;

namespace cxxrtl_design {

// \top: 1
// \src: blink.v:100.1-110.10
struct p_blink : public module {
	// \init: 0
	// \hdlname: pd state
	// \src: blink.v:11.8-11.13
	wire<1> p_pd_2e_state;
	// \hdlname: pd peak1
	// \src: blink.v:12.22-12.27
	wire<24> p_pd_2e_peak1;
	// \hdlname: pd peak2
	// \src: blink.v:12.29-12.34
	wire<24> p_pd_2e_peak2;
	// \hdlname: pd peak
	// \src: blink.v:12.36-12.40
	wire<24> p_pd_2e_peak;
	// \hdlname: pd valid1
	// \src: blink.v:13.8-13.14
	wire<1> p_pd_2e_valid1;
	// \hdlname: pd valid2
	// \src: blink.v:13.16-13.22
	wire<1> p_pd_2e_valid2;
	// \hdlname: tr1 accumulator
	// \src: blink.v:82.22-82.33
	wire<24> p_tr1_2e_accumulator;
	// \hdlname: tr1 sum1
	// \src: blink.v:82.35-82.39
	wire<24> p_tr1_2e_sum1;
	// \hdlname: tr1 sum2
	// \src: blink.v:82.41-82.45
	wire<24> p_tr1_2e_sum2;
	// \hdlname: tr1 sum3
	// \src: blink.v:82.47-82.51
	wire<24> p_tr1_2e_sum3;
	// \hdlname: tr1 i
	// \src: blink.v:86.15-86.16
	wire<16> p_tr1_2e_i;
	// \hdlname: tr1 delay_line[0]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_0_5d_;
	// \hdlname: tr1 delay_line[1]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_1_5d_;
	// \hdlname: tr1 delay_line[2]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_2_5d_;
	// \hdlname: tr1 delay_line[3]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_3_5d_;
	// \hdlname: tr1 delay_line[4]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_4_5d_;
	// \hdlname: tr1 delay_line[5]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_5_5d_;
	// \hdlname: tr1 delay_line[6]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_6_5d_;
	// \hdlname: tr1 delay_line[7]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_7_5d_;
	// \hdlname: tr1 delay_line[8]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_8_5d_;
	// \hdlname: tr1 delay_line[9]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_9_5d_;
	// \hdlname: tr1 delay_line[10]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_10_5d_;
	// \hdlname: tr1 delay_line[11]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_11_5d_;
	// \hdlname: tr1 delay_line[12]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_12_5d_;
	// \hdlname: tr1 delay_line[13]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_13_5d_;
	// \hdlname: tr1 delay_line[14]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_14_5d_;
	// \hdlname: tr1 delay_line[15]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_15_5d_;
	// \hdlname: tr1 delay_line[16]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_16_5d_;
	// \hdlname: tr1 delay_line[17]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_17_5d_;
	// \hdlname: tr1 delay_line[18]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_18_5d_;
	// \hdlname: tr1 delay_line[19]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_19_5d_;
	// \hdlname: tr1 delay_line[20]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_20_5d_;
	// \hdlname: tr1 delay_line[21]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_21_5d_;
	// \hdlname: tr1 delay_line[22]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_22_5d_;
	// \hdlname: tr1 delay_line[23]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_23_5d_;
	// \hdlname: tr1 delay_line[24]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_24_5d_;
	// \hdlname: tr1 delay_line[25]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_25_5d_;
	// \hdlname: tr1 delay_line[26]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_26_5d_;
	// \hdlname: tr1 delay_line[27]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_27_5d_;
	// \hdlname: tr1 delay_line[28]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_28_5d_;
	// \hdlname: tr1 delay_line[29]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_29_5d_;
	// \hdlname: tr1 delay_line[30]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_30_5d_;
	// \hdlname: tr1 delay_line[31]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_31_5d_;
	// \hdlname: tr1 delay_line[32]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_32_5d_;
	// \hdlname: tr1 delay_line[33]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_33_5d_;
	// \hdlname: tr1 delay_line[34]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_34_5d_;
	// \hdlname: tr1 delay_line[35]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_35_5d_;
	// \hdlname: tr1 delay_line[36]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_36_5d_;
	// \hdlname: tr1 delay_line[37]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_37_5d_;
	// \hdlname: tr1 delay_line[38]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_38_5d_;
	// \hdlname: tr1 delay_line[39]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_39_5d_;
	// \hdlname: tr1 delay_line[40]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_40_5d_;
	// \hdlname: tr1 delay_line[41]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_41_5d_;
	// \hdlname: tr1 delay_line[42]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_42_5d_;
	// \hdlname: tr1 delay_line[43]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_43_5d_;
	// \hdlname: tr1 delay_line[44]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_44_5d_;
	// \hdlname: tr1 delay_line[45]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_45_5d_;
	// \hdlname: tr1 delay_line[46]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_46_5d_;
	// \hdlname: tr1 delay_line[47]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_47_5d_;
	// \hdlname: tr1 delay_line[48]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_48_5d_;
	// \hdlname: tr1 delay_line[49]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_49_5d_;
	// \hdlname: tr1 delay_line[50]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_50_5d_;
	// \hdlname: tr1 delay_line[51]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_51_5d_;
	// \hdlname: tr1 delay_line[52]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_52_5d_;
	// \hdlname: tr1 delay_line[53]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_53_5d_;
	// \hdlname: tr1 delay_line[54]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_54_5d_;
	// \hdlname: tr1 delay_line[55]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_55_5d_;
	// \hdlname: tr1 delay_line[56]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_56_5d_;
	// \hdlname: tr1 delay_line[57]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_57_5d_;
	// \hdlname: tr1 delay_line[58]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_58_5d_;
	// \hdlname: tr1 delay_line[59]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_59_5d_;
	// \hdlname: tr1 delay_line[60]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_60_5d_;
	// \hdlname: tr1 delay_line[61]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_61_5d_;
	// \hdlname: tr1 delay_line[62]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_62_5d_;
	// \hdlname: tr1 delay_line[63]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_63_5d_;
	// \hdlname: tr1 delay_line[64]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_64_5d_;
	// \hdlname: tr1 delay_line[65]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_65_5d_;
	// \hdlname: tr1 delay_line[66]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_66_5d_;
	// \hdlname: tr1 delay_line[67]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_67_5d_;
	// \hdlname: tr1 delay_line[68]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_68_5d_;
	// \hdlname: tr1 delay_line[69]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_69_5d_;
	// \hdlname: tr1 delay_line[70]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_70_5d_;
	// \hdlname: tr1 delay_line[71]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_71_5d_;
	// \hdlname: tr1 delay_line[72]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_72_5d_;
	// \hdlname: tr1 delay_line[73]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_73_5d_;
	// \hdlname: tr1 delay_line[74]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_74_5d_;
	// \hdlname: tr1 delay_line[75]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_75_5d_;
	// \hdlname: tr1 delay_line[76]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_76_5d_;
	// \hdlname: tr1 delay_line[77]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_77_5d_;
	// \hdlname: tr1 delay_line[78]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_78_5d_;
	// \hdlname: tr1 delay_line[79]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_79_5d_;
	// \hdlname: tr1 delay_line[80]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_80_5d_;
	// \hdlname: tr1 delay_line[81]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_81_5d_;
	// \hdlname: tr1 delay_line[82]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_82_5d_;
	// \hdlname: tr1 delay_line[83]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_83_5d_;
	// \hdlname: tr1 delay_line[84]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_84_5d_;
	// \hdlname: tr1 delay_line[85]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_85_5d_;
	// \hdlname: tr1 delay_line[86]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_86_5d_;
	// \hdlname: tr1 delay_line[87]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_87_5d_;
	// \hdlname: tr1 delay_line[88]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_88_5d_;
	// \hdlname: tr1 delay_line[89]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_89_5d_;
	// \hdlname: tr1 delay_line[90]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_90_5d_;
	// \hdlname: tr1 delay_line[91]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_91_5d_;
	// \hdlname: tr1 delay_line[92]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_92_5d_;
	// \hdlname: tr1 delay_line[93]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_93_5d_;
	// \hdlname: tr1 delay_line[94]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_94_5d_;
	// \hdlname: tr1 delay_line[95]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_95_5d_;
	// \hdlname: tr1 delay_line[96]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_96_5d_;
	// \hdlname: tr1 delay_line[97]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_97_5d_;
	// \hdlname: tr1 delay_line[98]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_98_5d_;
	// \hdlname: tr1 delay_line[99]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_99_5d_;
	// \hdlname: tr1 delay_line[100]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_100_5d_;
	// \hdlname: tr1 delay_line[101]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_101_5d_;
	// \hdlname: tr1 delay_line[102]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_102_5d_;
	// \hdlname: tr1 delay_line[103]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_103_5d_;
	// \hdlname: tr1 delay_line[104]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_104_5d_;
	// \hdlname: tr1 delay_line[105]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_105_5d_;
	// \hdlname: tr1 delay_line[106]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_106_5d_;
	// \hdlname: tr1 delay_line[107]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_107_5d_;
	// \hdlname: tr1 delay_line[108]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_108_5d_;
	// \hdlname: tr1 delay_line[109]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_109_5d_;
	// \hdlname: tr1 delay_line[110]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_110_5d_;
	// \hdlname: tr1 delay_line[111]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_111_5d_;
	// \hdlname: tr1 delay_line[112]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_112_5d_;
	// \hdlname: tr1 delay_line[113]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_113_5d_;
	// \hdlname: tr1 delay_line[114]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_114_5d_;
	// \hdlname: tr1 delay_line[115]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_115_5d_;
	// \hdlname: tr1 delay_line[116]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_116_5d_;
	// \hdlname: tr1 delay_line[117]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_117_5d_;
	// \hdlname: tr1 delay_line[118]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_118_5d_;
	// \hdlname: tr1 delay_line[119]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_119_5d_;
	// \hdlname: tr1 delay_line[120]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_120_5d_;
	// \hdlname: tr1 delay_line[121]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_121_5d_;
	// \hdlname: tr1 delay_line[122]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_122_5d_;
	// \hdlname: tr1 delay_line[123]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_123_5d_;
	// \hdlname: tr1 delay_line[124]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_124_5d_;
	// \hdlname: tr1 delay_line[125]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_125_5d_;
	// \hdlname: tr1 delay_line[126]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_126_5d_;
	// \hdlname: tr1 delay_line[127]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_127_5d_;
	// \hdlname: tr1 delay_line[128]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_128_5d_;
	// \hdlname: tr1 delay_line[129]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_129_5d_;
	// \hdlname: tr1 delay_line[130]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_130_5d_;
	// \hdlname: tr1 delay_line[131]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_131_5d_;
	// \hdlname: tr1 delay_line[132]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_132_5d_;
	// \hdlname: tr1 delay_line[133]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_133_5d_;
	// \hdlname: tr1 delay_line[134]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_134_5d_;
	// \hdlname: tr1 delay_line[135]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_135_5d_;
	// \hdlname: tr1 delay_line[136]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_136_5d_;
	// \hdlname: tr1 delay_line[137]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_137_5d_;
	// \hdlname: tr1 delay_line[138]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_138_5d_;
	// \hdlname: tr1 delay_line[139]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_139_5d_;
	// \hdlname: tr1 delay_line[140]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_140_5d_;
	// \hdlname: tr1 delay_line[141]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_141_5d_;
	// \hdlname: tr1 delay_line[142]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_142_5d_;
	// \hdlname: tr1 delay_line[143]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_143_5d_;
	// \hdlname: tr1 delay_line[144]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_144_5d_;
	// \hdlname: tr1 delay_line[145]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_145_5d_;
	// \hdlname: tr1 delay_line[146]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_146_5d_;
	// \hdlname: tr1 delay_line[147]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_147_5d_;
	// \hdlname: tr1 delay_line[148]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_148_5d_;
	// \hdlname: tr1 delay_line[149]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_149_5d_;
	// \hdlname: tr1 delay_line[150]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_150_5d_;
	// \hdlname: tr1 delay_line[151]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_151_5d_;
	// \hdlname: tr1 delay_line[152]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_152_5d_;
	// \hdlname: tr1 delay_line[153]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_153_5d_;
	// \hdlname: tr1 delay_line[154]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_154_5d_;
	// \hdlname: tr1 delay_line[155]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_155_5d_;
	// \hdlname: tr1 delay_line[156]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_156_5d_;
	// \hdlname: tr1 delay_line[157]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_157_5d_;
	// \hdlname: tr1 delay_line[158]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_158_5d_;
	// \hdlname: tr1 delay_line[159]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_159_5d_;
	// \hdlname: tr1 delay_line[160]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_160_5d_;
	// \hdlname: tr1 delay_line[161]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_161_5d_;
	// \hdlname: tr1 delay_line[162]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_162_5d_;
	// \hdlname: tr1 delay_line[163]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_163_5d_;
	// \hdlname: tr1 delay_line[164]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_164_5d_;
	// \hdlname: tr1 delay_line[165]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_165_5d_;
	// \hdlname: tr1 delay_line[166]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_166_5d_;
	// \hdlname: tr1 delay_line[167]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_167_5d_;
	// \hdlname: tr1 delay_line[168]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_168_5d_;
	// \hdlname: tr1 delay_line[169]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_169_5d_;
	// \hdlname: tr1 delay_line[170]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_170_5d_;
	// \hdlname: tr1 delay_line[171]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_171_5d_;
	// \hdlname: tr1 delay_line[172]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_172_5d_;
	// \hdlname: tr1 delay_line[173]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_173_5d_;
	// \hdlname: tr1 delay_line[174]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_174_5d_;
	// \hdlname: tr1 delay_line[175]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_175_5d_;
	// \hdlname: tr1 delay_line[176]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_176_5d_;
	// \hdlname: tr1 delay_line[177]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_177_5d_;
	// \hdlname: tr1 delay_line[178]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_178_5d_;
	// \hdlname: tr1 delay_line[179]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_179_5d_;
	// \hdlname: tr1 delay_line[180]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_180_5d_;
	// \hdlname: tr1 delay_line[181]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_181_5d_;
	// \hdlname: tr1 delay_line[182]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_182_5d_;
	// \hdlname: tr1 delay_line[183]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_183_5d_;
	// \hdlname: tr1 delay_line[184]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_184_5d_;
	// \hdlname: tr1 delay_line[185]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_185_5d_;
	// \hdlname: tr1 delay_line[186]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_186_5d_;
	// \hdlname: tr1 delay_line[187]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_187_5d_;
	// \hdlname: tr1 delay_line[188]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_188_5d_;
	// \hdlname: tr1 delay_line[189]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_189_5d_;
	// \hdlname: tr1 delay_line[190]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_190_5d_;
	// \hdlname: tr1 delay_line[191]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_191_5d_;
	// \hdlname: tr1 delay_line[192]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_192_5d_;
	// \hdlname: tr1 delay_line[193]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_193_5d_;
	// \hdlname: tr1 delay_line[194]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_194_5d_;
	// \hdlname: tr1 delay_line[195]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_195_5d_;
	// \hdlname: tr1 delay_line[196]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_196_5d_;
	// \hdlname: tr1 delay_line[197]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_197_5d_;
	// \hdlname: tr1 delay_line[198]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_198_5d_;
	// \hdlname: tr1 delay_line[199]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_199_5d_;
	// \hdlname: tr1 delay_line[200]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_200_5d_;
	// \hdlname: tr1 delay_line[201]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_201_5d_;
	// \hdlname: tr1 delay_line[202]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_202_5d_;
	// \hdlname: tr1 delay_line[203]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_203_5d_;
	// \hdlname: tr1 delay_line[204]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_204_5d_;
	// \hdlname: tr1 delay_line[205]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_205_5d_;
	// \hdlname: tr1 delay_line[206]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_206_5d_;
	// \hdlname: tr1 delay_line[207]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_207_5d_;
	// \hdlname: tr1 delay_line[208]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_208_5d_;
	// \hdlname: tr1 delay_line[209]
	// \src: blink.v:83.22-83.32
	wire<24> p_tr1_2e_delay__line_5b_209_5d_;
	// \src: blink.v:100.72-100.75
	/*input*/ value<1> p_clk;
	value<1> prev_p_clk;
	bool posedge_p_clk() const {
		return !prev_p_clk.slice<0>().val() && p_clk.slice<0>().val();
	}
	// \src: blink.v:100.60-100.64
	/*output*/ value<24> p_outs;
	// \src: blink.v:100.34-100.37
	/*input*/ value<24> p_ins;
	// \hdlname: pd threshold
	// \src: blink.v:4.31-4.40
	/*outline*/ value<24> p_pd_2e_threshold;
	// \hdlname: pd below_threshold
	// \src: blink.v:15.9-15.24
	/*outline*/ value<1> p_pd_2e_below__threshold;
	// \hdlname: pd write_shift
	// \src: blink.v:16.9-16.20
	/*outline*/ value<1> p_pd_2e_write__shift;
	p_blink(interior) {}
	p_blink() {
		reset();
	};

	void reset() override;

	bool eval(performer *performer = nullptr) override;

	template<class ObserverT>
	bool commit(ObserverT &observer) {
		bool changed = false;
		if (p_pd_2e_state.commit(observer)) changed = true;
		if (p_pd_2e_peak1.commit(observer)) changed = true;
		if (p_pd_2e_peak2.commit(observer)) changed = true;
		if (p_pd_2e_peak.commit(observer)) changed = true;
		if (p_pd_2e_valid1.commit(observer)) changed = true;
		if (p_pd_2e_valid2.commit(observer)) changed = true;
		if (p_tr1_2e_accumulator.commit(observer)) changed = true;
		if (p_tr1_2e_sum1.commit(observer)) changed = true;
		if (p_tr1_2e_sum2.commit(observer)) changed = true;
		if (p_tr1_2e_sum3.commit(observer)) changed = true;
		if (p_tr1_2e_i.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_0_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_1_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_2_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_3_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_4_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_5_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_6_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_7_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_8_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_9_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_10_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_11_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_12_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_13_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_14_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_15_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_16_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_17_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_18_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_19_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_20_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_21_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_22_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_23_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_24_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_25_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_26_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_27_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_28_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_29_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_30_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_31_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_32_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_33_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_34_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_35_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_36_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_37_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_38_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_39_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_40_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_41_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_42_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_43_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_44_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_45_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_46_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_47_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_48_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_49_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_50_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_51_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_52_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_53_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_54_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_55_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_56_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_57_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_58_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_59_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_60_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_61_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_62_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_63_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_64_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_65_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_66_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_67_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_68_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_69_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_70_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_71_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_72_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_73_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_74_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_75_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_76_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_77_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_78_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_79_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_80_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_81_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_82_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_83_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_84_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_85_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_86_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_87_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_88_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_89_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_90_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_91_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_92_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_93_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_94_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_95_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_96_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_97_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_98_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_99_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_100_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_101_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_102_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_103_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_104_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_105_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_106_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_107_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_108_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_109_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_110_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_111_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_112_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_113_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_114_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_115_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_116_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_117_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_118_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_119_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_120_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_121_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_122_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_123_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_124_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_125_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_126_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_127_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_128_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_129_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_130_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_131_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_132_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_133_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_134_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_135_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_136_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_137_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_138_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_139_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_140_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_141_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_142_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_143_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_144_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_145_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_146_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_147_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_148_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_149_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_150_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_151_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_152_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_153_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_154_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_155_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_156_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_157_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_158_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_159_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_160_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_161_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_162_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_163_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_164_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_165_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_166_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_167_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_168_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_169_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_170_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_171_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_172_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_173_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_174_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_175_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_176_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_177_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_178_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_179_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_180_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_181_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_182_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_183_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_184_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_185_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_186_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_187_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_188_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_189_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_190_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_191_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_192_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_193_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_194_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_195_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_196_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_197_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_198_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_199_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_200_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_201_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_202_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_203_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_204_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_205_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_206_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_207_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_208_5d_.commit(observer)) changed = true;
		if (p_tr1_2e_delay__line_5b_209_5d_.commit(observer)) changed = true;
		prev_p_clk = p_clk;
		return changed;
	}

	bool commit() override {
		observer observer;
		return commit<>(observer);
	}

	void debug_eval();
	debug_outline debug_eval_outline { std::bind(&p_blink::debug_eval, this) };

	void debug_info(debug_items *items, debug_scopes *scopes, std::string path, metadata_map &&cell_attrs = {}) override;
}; // struct p_blink

void p_blink::reset() {
	p_pd_2e_state = wire<1>{0u};
}

bool p_blink::eval(performer *performer) {
	bool converged = true;
	bool posedge_p_clk = this->posedge_p_clk();
	// \hdlname: pd ins
	// \src: blink.v:3.32-3.35
	value<24> p_pd_2e_ins;
	// \hdlname: pd clk
	// \src: blink.v:8.17-8.20
	value<1> p_pd_2e_clk;
	// \hdlname: pd below_threshold
	// \src: blink.v:15.9-15.24
	value<1> p_pd_2e_below__threshold;
	// \hdlname: pd write_shift
	// \src: blink.v:16.9-16.20
	value<1> p_pd_2e_write__shift;
	// \hdlname: tr1 clk
	// \src: blink.v:77.73-77.76
	value<1> p_tr1_2e_clk;
	// \src: blink.v:102.32-102.41
	value<24> p_trapz__out;
	// connection
	p_trapz__out = p_tr1_2e_accumulator.curr;
	// connection
	p_pd_2e_ins = p_trapz__out;
	// cells $flatten\pd.$ternary$blink.v:15$4 $flatten\pd.$lt$blink.v:15$3
	p_pd_2e_below__threshold = (lt_ss<1>(p_pd_2e_ins, value<24>{0x1f4u}) ? value<32>{0x1u} : value<32>{0u}).slice<0>().val();
	// \src: blink.v:16.23-16.53
	// cell $flatten\pd.$and$blink.v:16$6
	p_pd_2e_write__shift = and_uu<1>(p_pd_2e_state.curr, p_pd_2e_below__threshold);
	// connection
	p_tr1_2e_clk = p_clk;
	// connection
	p_pd_2e_clk = p_clk;
	// cells $procdff$277 $flatten\tr1.$sub$blink.v:90$24
	if (posedge_p_clk) {
		p_tr1_2e_sum2.next = sub_ss<24>(p_tr1_2e_delay__line_5b_109_5d_.curr, p_tr1_2e_delay__line_5b_209_5d_.curr);
	}
	// cells $procdff$278 $flatten\tr1.$sub$blink.v:91$25
	if (posedge_p_clk) {
		p_tr1_2e_sum3.next = sub_ss<24>(p_tr1_2e_sum1.curr, p_tr1_2e_sum2.curr);
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$273
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_207_5d_.next = p_tr1_2e_delay__line_5b_206_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$274
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_208_5d_.next = p_tr1_2e_delay__line_5b_207_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$275
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_209_5d_.next = p_tr1_2e_delay__line_5b_208_5d_.curr;
	}
	// cells $procdff$276 $flatten\tr1.$sub$blink.v:89$23
	if (posedge_p_clk) {
		p_tr1_2e_sum1.next = sub_ss<24>(p_ins, p_tr1_2e_delay__line_5b_99_5d_.curr);
	}
	// cells $procdff$58 $flatten\pd.$ternary$blink.v:24$11 $flatten\pd.$extend$blink.v:24$10
	if (posedge_p_clk) {
		p_pd_2e_peak1.next = (p_pd_2e_write__shift ? pos_s<32>(p_pd_2e_peak.curr) : value<32>{0u}).slice<23,0>().val();
	}
	// \src: blink.v:20.4-27.7
	// cell $procdff$59
	if (posedge_p_clk) {
		p_pd_2e_peak2.next = p_pd_2e_peak1.curr;
	}
	// cells $procdff$60 $flatten\pd.$ternary$blink.v:22$9
	if (posedge_p_clk) {
		p_pd_2e_valid1.next = (p_pd_2e_write__shift ? value<32>{0x1u} : value<32>{0u}).slice<0>().val();
	}
	// \src: blink.v:20.4-27.7
	// cell $procdff$61
	if (posedge_p_clk) {
		p_pd_2e_valid2.next = p_pd_2e_valid1.curr;
	}
	// cells $procdff$62 $procmux$45 $procmux$39 $procmux$43
	if (posedge_p_clk) {
		p_pd_2e_state.next = (p_pd_2e_state.curr ? (p_pd_2e_below__threshold ? value<1>{0u} : value<1>{0x1u}) : (p_pd_2e_below__threshold ? value<1>{0u} : value<1>{0x1u}));
	}
	// cells $procdff$63 $procmux$56 $procmux$50 $procmux$47 $flatten\pd.$gt$blink.v:41$14 $procmux$54
	if (posedge_p_clk) {
		p_pd_2e_peak.next = (p_pd_2e_state.curr ? (p_pd_2e_below__threshold ? p_pd_2e_peak.curr : (gt_ss<1>(p_pd_2e_ins, p_pd_2e_peak.curr) ? p_tr1_2e_accumulator.curr : p_pd_2e_peak.curr)) : (p_pd_2e_below__threshold ? p_pd_2e_peak.curr : p_tr1_2e_accumulator.curr));
	}
	// cells $procdff$64 $flatten\tr1.$add$blink.v:92$26
	if (posedge_p_clk) {
		p_tr1_2e_accumulator.next = add_ss<24>(p_tr1_2e_accumulator.curr, p_tr1_2e_sum3.curr);
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$65
	if (posedge_p_clk) {
		p_tr1_2e_i.next = value<16>{0xd2u};
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$66
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_0_5d_.next = p_ins;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$67
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_1_5d_.next = p_tr1_2e_delay__line_5b_0_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$68
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_2_5d_.next = p_tr1_2e_delay__line_5b_1_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$69
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_3_5d_.next = p_tr1_2e_delay__line_5b_2_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$70
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_4_5d_.next = p_tr1_2e_delay__line_5b_3_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$71
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_5_5d_.next = p_tr1_2e_delay__line_5b_4_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$72
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_6_5d_.next = p_tr1_2e_delay__line_5b_5_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$73
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_7_5d_.next = p_tr1_2e_delay__line_5b_6_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$74
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_8_5d_.next = p_tr1_2e_delay__line_5b_7_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$75
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_9_5d_.next = p_tr1_2e_delay__line_5b_8_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$76
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_10_5d_.next = p_tr1_2e_delay__line_5b_9_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$77
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_11_5d_.next = p_tr1_2e_delay__line_5b_10_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$78
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_12_5d_.next = p_tr1_2e_delay__line_5b_11_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$79
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_13_5d_.next = p_tr1_2e_delay__line_5b_12_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$80
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_14_5d_.next = p_tr1_2e_delay__line_5b_13_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$81
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_15_5d_.next = p_tr1_2e_delay__line_5b_14_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$82
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_16_5d_.next = p_tr1_2e_delay__line_5b_15_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$83
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_17_5d_.next = p_tr1_2e_delay__line_5b_16_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$84
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_18_5d_.next = p_tr1_2e_delay__line_5b_17_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$85
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_19_5d_.next = p_tr1_2e_delay__line_5b_18_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$86
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_20_5d_.next = p_tr1_2e_delay__line_5b_19_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$87
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_21_5d_.next = p_tr1_2e_delay__line_5b_20_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$88
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_22_5d_.next = p_tr1_2e_delay__line_5b_21_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$89
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_23_5d_.next = p_tr1_2e_delay__line_5b_22_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$90
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_24_5d_.next = p_tr1_2e_delay__line_5b_23_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$91
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_25_5d_.next = p_tr1_2e_delay__line_5b_24_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$92
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_26_5d_.next = p_tr1_2e_delay__line_5b_25_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$93
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_27_5d_.next = p_tr1_2e_delay__line_5b_26_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$94
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_28_5d_.next = p_tr1_2e_delay__line_5b_27_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$95
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_29_5d_.next = p_tr1_2e_delay__line_5b_28_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$96
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_30_5d_.next = p_tr1_2e_delay__line_5b_29_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$97
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_31_5d_.next = p_tr1_2e_delay__line_5b_30_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$98
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_32_5d_.next = p_tr1_2e_delay__line_5b_31_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$99
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_33_5d_.next = p_tr1_2e_delay__line_5b_32_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$100
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_34_5d_.next = p_tr1_2e_delay__line_5b_33_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$101
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_35_5d_.next = p_tr1_2e_delay__line_5b_34_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$102
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_36_5d_.next = p_tr1_2e_delay__line_5b_35_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$103
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_37_5d_.next = p_tr1_2e_delay__line_5b_36_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$104
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_38_5d_.next = p_tr1_2e_delay__line_5b_37_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$105
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_39_5d_.next = p_tr1_2e_delay__line_5b_38_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$106
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_40_5d_.next = p_tr1_2e_delay__line_5b_39_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$107
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_41_5d_.next = p_tr1_2e_delay__line_5b_40_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$108
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_42_5d_.next = p_tr1_2e_delay__line_5b_41_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$109
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_43_5d_.next = p_tr1_2e_delay__line_5b_42_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$110
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_44_5d_.next = p_tr1_2e_delay__line_5b_43_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$111
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_45_5d_.next = p_tr1_2e_delay__line_5b_44_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$112
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_46_5d_.next = p_tr1_2e_delay__line_5b_45_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$113
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_47_5d_.next = p_tr1_2e_delay__line_5b_46_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$114
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_48_5d_.next = p_tr1_2e_delay__line_5b_47_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$115
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_49_5d_.next = p_tr1_2e_delay__line_5b_48_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$116
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_50_5d_.next = p_tr1_2e_delay__line_5b_49_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$117
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_51_5d_.next = p_tr1_2e_delay__line_5b_50_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$118
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_52_5d_.next = p_tr1_2e_delay__line_5b_51_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$119
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_53_5d_.next = p_tr1_2e_delay__line_5b_52_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$120
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_54_5d_.next = p_tr1_2e_delay__line_5b_53_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$121
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_55_5d_.next = p_tr1_2e_delay__line_5b_54_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$122
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_56_5d_.next = p_tr1_2e_delay__line_5b_55_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$123
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_57_5d_.next = p_tr1_2e_delay__line_5b_56_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$124
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_58_5d_.next = p_tr1_2e_delay__line_5b_57_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$125
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_59_5d_.next = p_tr1_2e_delay__line_5b_58_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$126
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_60_5d_.next = p_tr1_2e_delay__line_5b_59_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$127
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_61_5d_.next = p_tr1_2e_delay__line_5b_60_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$128
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_62_5d_.next = p_tr1_2e_delay__line_5b_61_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$129
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_63_5d_.next = p_tr1_2e_delay__line_5b_62_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$130
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_64_5d_.next = p_tr1_2e_delay__line_5b_63_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$131
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_65_5d_.next = p_tr1_2e_delay__line_5b_64_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$132
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_66_5d_.next = p_tr1_2e_delay__line_5b_65_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$133
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_67_5d_.next = p_tr1_2e_delay__line_5b_66_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$134
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_68_5d_.next = p_tr1_2e_delay__line_5b_67_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$135
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_69_5d_.next = p_tr1_2e_delay__line_5b_68_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$136
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_70_5d_.next = p_tr1_2e_delay__line_5b_69_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$137
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_71_5d_.next = p_tr1_2e_delay__line_5b_70_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$138
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_72_5d_.next = p_tr1_2e_delay__line_5b_71_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$139
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_73_5d_.next = p_tr1_2e_delay__line_5b_72_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$140
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_74_5d_.next = p_tr1_2e_delay__line_5b_73_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$141
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_75_5d_.next = p_tr1_2e_delay__line_5b_74_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$142
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_76_5d_.next = p_tr1_2e_delay__line_5b_75_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$143
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_77_5d_.next = p_tr1_2e_delay__line_5b_76_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$144
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_78_5d_.next = p_tr1_2e_delay__line_5b_77_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$145
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_79_5d_.next = p_tr1_2e_delay__line_5b_78_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$146
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_80_5d_.next = p_tr1_2e_delay__line_5b_79_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$147
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_81_5d_.next = p_tr1_2e_delay__line_5b_80_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$148
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_82_5d_.next = p_tr1_2e_delay__line_5b_81_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$149
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_83_5d_.next = p_tr1_2e_delay__line_5b_82_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$150
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_84_5d_.next = p_tr1_2e_delay__line_5b_83_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$151
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_85_5d_.next = p_tr1_2e_delay__line_5b_84_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$152
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_86_5d_.next = p_tr1_2e_delay__line_5b_85_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$153
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_87_5d_.next = p_tr1_2e_delay__line_5b_86_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$154
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_88_5d_.next = p_tr1_2e_delay__line_5b_87_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$155
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_89_5d_.next = p_tr1_2e_delay__line_5b_88_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$156
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_90_5d_.next = p_tr1_2e_delay__line_5b_89_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$157
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_91_5d_.next = p_tr1_2e_delay__line_5b_90_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$158
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_92_5d_.next = p_tr1_2e_delay__line_5b_91_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$159
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_93_5d_.next = p_tr1_2e_delay__line_5b_92_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$160
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_94_5d_.next = p_tr1_2e_delay__line_5b_93_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$161
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_95_5d_.next = p_tr1_2e_delay__line_5b_94_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$162
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_96_5d_.next = p_tr1_2e_delay__line_5b_95_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$163
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_97_5d_.next = p_tr1_2e_delay__line_5b_96_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$164
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_98_5d_.next = p_tr1_2e_delay__line_5b_97_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$165
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_99_5d_.next = p_tr1_2e_delay__line_5b_98_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$166
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_100_5d_.next = p_tr1_2e_delay__line_5b_99_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$167
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_101_5d_.next = p_tr1_2e_delay__line_5b_100_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$168
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_102_5d_.next = p_tr1_2e_delay__line_5b_101_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$169
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_103_5d_.next = p_tr1_2e_delay__line_5b_102_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$170
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_104_5d_.next = p_tr1_2e_delay__line_5b_103_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$171
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_105_5d_.next = p_tr1_2e_delay__line_5b_104_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$172
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_106_5d_.next = p_tr1_2e_delay__line_5b_105_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$173
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_107_5d_.next = p_tr1_2e_delay__line_5b_106_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$174
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_108_5d_.next = p_tr1_2e_delay__line_5b_107_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$175
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_109_5d_.next = p_tr1_2e_delay__line_5b_108_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$176
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_110_5d_.next = p_tr1_2e_delay__line_5b_109_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$177
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_111_5d_.next = p_tr1_2e_delay__line_5b_110_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$178
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_112_5d_.next = p_tr1_2e_delay__line_5b_111_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$179
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_113_5d_.next = p_tr1_2e_delay__line_5b_112_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$180
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_114_5d_.next = p_tr1_2e_delay__line_5b_113_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$181
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_115_5d_.next = p_tr1_2e_delay__line_5b_114_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$182
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_116_5d_.next = p_tr1_2e_delay__line_5b_115_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$183
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_117_5d_.next = p_tr1_2e_delay__line_5b_116_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$184
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_118_5d_.next = p_tr1_2e_delay__line_5b_117_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$185
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_119_5d_.next = p_tr1_2e_delay__line_5b_118_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$186
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_120_5d_.next = p_tr1_2e_delay__line_5b_119_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$187
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_121_5d_.next = p_tr1_2e_delay__line_5b_120_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$188
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_122_5d_.next = p_tr1_2e_delay__line_5b_121_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$189
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_123_5d_.next = p_tr1_2e_delay__line_5b_122_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$190
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_124_5d_.next = p_tr1_2e_delay__line_5b_123_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$191
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_125_5d_.next = p_tr1_2e_delay__line_5b_124_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$192
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_126_5d_.next = p_tr1_2e_delay__line_5b_125_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$193
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_127_5d_.next = p_tr1_2e_delay__line_5b_126_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$194
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_128_5d_.next = p_tr1_2e_delay__line_5b_127_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$195
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_129_5d_.next = p_tr1_2e_delay__line_5b_128_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$196
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_130_5d_.next = p_tr1_2e_delay__line_5b_129_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$197
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_131_5d_.next = p_tr1_2e_delay__line_5b_130_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$198
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_132_5d_.next = p_tr1_2e_delay__line_5b_131_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$199
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_133_5d_.next = p_tr1_2e_delay__line_5b_132_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$200
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_134_5d_.next = p_tr1_2e_delay__line_5b_133_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$201
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_135_5d_.next = p_tr1_2e_delay__line_5b_134_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$202
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_136_5d_.next = p_tr1_2e_delay__line_5b_135_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$203
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_137_5d_.next = p_tr1_2e_delay__line_5b_136_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$204
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_138_5d_.next = p_tr1_2e_delay__line_5b_137_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$205
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_139_5d_.next = p_tr1_2e_delay__line_5b_138_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$206
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_140_5d_.next = p_tr1_2e_delay__line_5b_139_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$207
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_141_5d_.next = p_tr1_2e_delay__line_5b_140_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$208
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_142_5d_.next = p_tr1_2e_delay__line_5b_141_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$209
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_143_5d_.next = p_tr1_2e_delay__line_5b_142_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$210
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_144_5d_.next = p_tr1_2e_delay__line_5b_143_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$211
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_145_5d_.next = p_tr1_2e_delay__line_5b_144_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$212
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_146_5d_.next = p_tr1_2e_delay__line_5b_145_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$213
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_147_5d_.next = p_tr1_2e_delay__line_5b_146_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$214
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_148_5d_.next = p_tr1_2e_delay__line_5b_147_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$215
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_149_5d_.next = p_tr1_2e_delay__line_5b_148_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$216
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_150_5d_.next = p_tr1_2e_delay__line_5b_149_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$217
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_151_5d_.next = p_tr1_2e_delay__line_5b_150_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$218
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_152_5d_.next = p_tr1_2e_delay__line_5b_151_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$219
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_153_5d_.next = p_tr1_2e_delay__line_5b_152_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$220
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_154_5d_.next = p_tr1_2e_delay__line_5b_153_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$221
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_155_5d_.next = p_tr1_2e_delay__line_5b_154_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$222
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_156_5d_.next = p_tr1_2e_delay__line_5b_155_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$223
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_157_5d_.next = p_tr1_2e_delay__line_5b_156_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$224
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_158_5d_.next = p_tr1_2e_delay__line_5b_157_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$225
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_159_5d_.next = p_tr1_2e_delay__line_5b_158_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$226
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_160_5d_.next = p_tr1_2e_delay__line_5b_159_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$227
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_161_5d_.next = p_tr1_2e_delay__line_5b_160_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$228
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_162_5d_.next = p_tr1_2e_delay__line_5b_161_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$229
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_163_5d_.next = p_tr1_2e_delay__line_5b_162_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$230
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_164_5d_.next = p_tr1_2e_delay__line_5b_163_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$231
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_165_5d_.next = p_tr1_2e_delay__line_5b_164_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$232
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_166_5d_.next = p_tr1_2e_delay__line_5b_165_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$233
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_167_5d_.next = p_tr1_2e_delay__line_5b_166_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$234
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_168_5d_.next = p_tr1_2e_delay__line_5b_167_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$235
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_169_5d_.next = p_tr1_2e_delay__line_5b_168_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$236
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_170_5d_.next = p_tr1_2e_delay__line_5b_169_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$237
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_171_5d_.next = p_tr1_2e_delay__line_5b_170_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$238
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_172_5d_.next = p_tr1_2e_delay__line_5b_171_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$239
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_173_5d_.next = p_tr1_2e_delay__line_5b_172_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$240
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_174_5d_.next = p_tr1_2e_delay__line_5b_173_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$241
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_175_5d_.next = p_tr1_2e_delay__line_5b_174_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$242
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_176_5d_.next = p_tr1_2e_delay__line_5b_175_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$243
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_177_5d_.next = p_tr1_2e_delay__line_5b_176_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$244
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_178_5d_.next = p_tr1_2e_delay__line_5b_177_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$245
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_179_5d_.next = p_tr1_2e_delay__line_5b_178_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$246
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_180_5d_.next = p_tr1_2e_delay__line_5b_179_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$247
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_181_5d_.next = p_tr1_2e_delay__line_5b_180_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$248
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_182_5d_.next = p_tr1_2e_delay__line_5b_181_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$249
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_183_5d_.next = p_tr1_2e_delay__line_5b_182_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$250
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_184_5d_.next = p_tr1_2e_delay__line_5b_183_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$251
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_185_5d_.next = p_tr1_2e_delay__line_5b_184_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$252
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_186_5d_.next = p_tr1_2e_delay__line_5b_185_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$253
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_187_5d_.next = p_tr1_2e_delay__line_5b_186_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$254
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_188_5d_.next = p_tr1_2e_delay__line_5b_187_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$255
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_189_5d_.next = p_tr1_2e_delay__line_5b_188_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$256
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_190_5d_.next = p_tr1_2e_delay__line_5b_189_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$257
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_191_5d_.next = p_tr1_2e_delay__line_5b_190_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$258
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_192_5d_.next = p_tr1_2e_delay__line_5b_191_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$259
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_193_5d_.next = p_tr1_2e_delay__line_5b_192_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$260
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_194_5d_.next = p_tr1_2e_delay__line_5b_193_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$261
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_195_5d_.next = p_tr1_2e_delay__line_5b_194_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$262
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_196_5d_.next = p_tr1_2e_delay__line_5b_195_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$263
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_197_5d_.next = p_tr1_2e_delay__line_5b_196_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$264
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_198_5d_.next = p_tr1_2e_delay__line_5b_197_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$265
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_199_5d_.next = p_tr1_2e_delay__line_5b_198_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$266
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_200_5d_.next = p_tr1_2e_delay__line_5b_199_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$267
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_201_5d_.next = p_tr1_2e_delay__line_5b_200_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$268
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_202_5d_.next = p_tr1_2e_delay__line_5b_201_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$269
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_203_5d_.next = p_tr1_2e_delay__line_5b_202_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$270
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_204_5d_.next = p_tr1_2e_delay__line_5b_203_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$271
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_205_5d_.next = p_tr1_2e_delay__line_5b_204_5d_.curr;
	}
	// \src: blink.v:88.4-97.7
	// cell $procdff$272
	if (posedge_p_clk) {
		p_tr1_2e_delay__line_5b_206_5d_.next = p_tr1_2e_delay__line_5b_205_5d_.curr;
	}
	// connection
	p_outs = p_trapz__out;
	return converged;
}

void p_blink::debug_eval() {
	// cells $flatten\pd.$ternary$blink.v:15$4 $flatten\pd.$lt$blink.v:15$3
	p_pd_2e_below__threshold = (lt_ss<1>(p_tr1_2e_accumulator.curr, value<24>{0x1f4u}) ? value<32>{0x1u} : value<32>{0u}).slice<0>().val();
	// \src: blink.v:16.23-16.53
	// cell $flatten\pd.$and$blink.v:16$6
	p_pd_2e_write__shift = and_uu<1>(p_pd_2e_state.curr, p_pd_2e_below__threshold);
	// connection
	p_pd_2e_threshold = value<24>{0x1f4u};
}

CXXRTL_EXTREMELY_COLD
void p_blink::debug_info(debug_items *items, debug_scopes *scopes, std::string path, metadata_map &&cell_attrs) {
	assert(path.empty() || path[path.size() - 1] == ' ');
	if (scopes) {
		scopes->add(path.empty() ? path : path.substr(0, path.size() - 1), "blink", metadata_map({
			{ "top", UINT64_C(1) },
			{ "src", "blink.v:100.1-110.10" },
		}), std::move(cell_attrs));
		scopes->add(path, "pd", "pd2", "src\000sblink.v:3.1-46.10\000", "src\000sblink.v:107.7-107.63\000");
		scopes->add(path, "tr1", "trapz2", "src\000sblink.v:77.1-98.10\000", "src\000sblink.v:106.10-106.34\000");
	}
	if (items) {
		items->add(path, "pd ins", "src\000sblink.v:82.22-82.33\000", debug_alias(), p_tr1_2e_accumulator);
		items->add(path, "pd threshold", "src\000sblink.v:4.31-4.40\000", debug_eval_outline, p_pd_2e_threshold);
		items->add(path, "pd peak_out", "src\000sblink.v:12.29-12.34\000", debug_alias(), p_pd_2e_peak2);
		items->add(path, "pd valid_out", "src\000sblink.v:13.16-13.22\000", debug_alias(), p_pd_2e_valid2);
		static const value<1> const_p_pd_2e_read__shift = value<1>{0x1u};
		items->add(path, "pd read_shift", "src\000sblink.v:7.17-7.27\000", const_p_pd_2e_read__shift);
		items->add(path, "pd clk", "src\000sblink.v:100.72-100.75\000", debug_alias(), p_clk);
		items->add(path, "pd state", "init\000u\000\000\000\000\000\000\000\000src\000sblink.v:11.8-11.13\000", p_pd_2e_state, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "pd peak1", "src\000sblink.v:12.22-12.27\000", p_pd_2e_peak1, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "pd peak2", "src\000sblink.v:12.29-12.34\000", p_pd_2e_peak2, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "pd peak", "src\000sblink.v:12.36-12.40\000", p_pd_2e_peak, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "pd valid1", "src\000sblink.v:13.8-13.14\000", p_pd_2e_valid1, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "pd valid2", "src\000sblink.v:13.16-13.22\000", p_pd_2e_valid2, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "pd below_threshold", "src\000sblink.v:15.9-15.24\000", debug_eval_outline, p_pd_2e_below__threshold);
		items->add(path, "pd write_shift", "src\000sblink.v:16.9-16.20\000", debug_eval_outline, p_pd_2e_write__shift);
		items->add(path, "tr1 ins", "src\000sblink.v:100.34-100.37\000", debug_alias(), p_ins);
		items->add(path, "tr1 outs", "src\000sblink.v:82.22-82.33\000", debug_alias(), p_tr1_2e_accumulator);
		items->add(path, "tr1 clk", "src\000sblink.v:100.72-100.75\000", debug_alias(), p_clk);
		items->add(path, "tr1 accumulator", "src\000sblink.v:82.22-82.33\000", p_tr1_2e_accumulator, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 sum1", "src\000sblink.v:82.35-82.39\000", p_tr1_2e_sum1, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 sum2", "src\000sblink.v:82.41-82.45\000", p_tr1_2e_sum2, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 sum3", "src\000sblink.v:82.47-82.51\000", p_tr1_2e_sum3, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 i", "src\000sblink.v:86.15-86.16\000", p_tr1_2e_i, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[0]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_0_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[1]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_1_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[2]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_2_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[3]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_3_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[4]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_4_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[5]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_5_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[6]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_6_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[7]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_7_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[8]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_8_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[9]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_9_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[10]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_10_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[11]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_11_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[12]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_12_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[13]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_13_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[14]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_14_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[15]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_15_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[16]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_16_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[17]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_17_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[18]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_18_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[19]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_19_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[20]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_20_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[21]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_21_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[22]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_22_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[23]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_23_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[24]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_24_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[25]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_25_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[26]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_26_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[27]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_27_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[28]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_28_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[29]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_29_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[30]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_30_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[31]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_31_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[32]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_32_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[33]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_33_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[34]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_34_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[35]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_35_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[36]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_36_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[37]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_37_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[38]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_38_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[39]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_39_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[40]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_40_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[41]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_41_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[42]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_42_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[43]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_43_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[44]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_44_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[45]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_45_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[46]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_46_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[47]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_47_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[48]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_48_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[49]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_49_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[50]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_50_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[51]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_51_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[52]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_52_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[53]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_53_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[54]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_54_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[55]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_55_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[56]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_56_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[57]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_57_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[58]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_58_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[59]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_59_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[60]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_60_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[61]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_61_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[62]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_62_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[63]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_63_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[64]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_64_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[65]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_65_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[66]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_66_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[67]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_67_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[68]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_68_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[69]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_69_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[70]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_70_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[71]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_71_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[72]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_72_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[73]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_73_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[74]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_74_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[75]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_75_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[76]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_76_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[77]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_77_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[78]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_78_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[79]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_79_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[80]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_80_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[81]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_81_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[82]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_82_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[83]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_83_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[84]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_84_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[85]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_85_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[86]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_86_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[87]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_87_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[88]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_88_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[89]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_89_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[90]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_90_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[91]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_91_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[92]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_92_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[93]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_93_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[94]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_94_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[95]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_95_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[96]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_96_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[97]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_97_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[98]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_98_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[99]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_99_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[100]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_100_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[101]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_101_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[102]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_102_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[103]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_103_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[104]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_104_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[105]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_105_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[106]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_106_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[107]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_107_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[108]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_108_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[109]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_109_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[110]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_110_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[111]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_111_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[112]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_112_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[113]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_113_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[114]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_114_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[115]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_115_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[116]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_116_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[117]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_117_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[118]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_118_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[119]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_119_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[120]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_120_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[121]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_121_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[122]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_122_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[123]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_123_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[124]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_124_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[125]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_125_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[126]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_126_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[127]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_127_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[128]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_128_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[129]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_129_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[130]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_130_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[131]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_131_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[132]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_132_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[133]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_133_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[134]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_134_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[135]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_135_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[136]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_136_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[137]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_137_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[138]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_138_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[139]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_139_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[140]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_140_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[141]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_141_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[142]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_142_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[143]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_143_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[144]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_144_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[145]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_145_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[146]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_146_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[147]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_147_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[148]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_148_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[149]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_149_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[150]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_150_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[151]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_151_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[152]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_152_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[153]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_153_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[154]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_154_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[155]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_155_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[156]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_156_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[157]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_157_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[158]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_158_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[159]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_159_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[160]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_160_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[161]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_161_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[162]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_162_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[163]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_163_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[164]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_164_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[165]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_165_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[166]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_166_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[167]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_167_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[168]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_168_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[169]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_169_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[170]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_170_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[171]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_171_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[172]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_172_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[173]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_173_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[174]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_174_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[175]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_175_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[176]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_176_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[177]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_177_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[178]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_178_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[179]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_179_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[180]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_180_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[181]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_181_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[182]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_182_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[183]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_183_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[184]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_184_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[185]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_185_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[186]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_186_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[187]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_187_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[188]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_188_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[189]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_189_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[190]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_190_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[191]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_191_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[192]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_192_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[193]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_193_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[194]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_194_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[195]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_195_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[196]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_196_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[197]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_197_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[198]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_198_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[199]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_199_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[200]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_200_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[201]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_201_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[202]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_202_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[203]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_203_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[204]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_204_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[205]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_205_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[206]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_206_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[207]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_207_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[208]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_208_5d_, 0, debug_item::DRIVEN_SYNC);
		items->add(path, "tr1 delay_line[209]", "src\000sblink.v:83.22-83.32\000", p_tr1_2e_delay__line_5b_209_5d_, 0, debug_item::DRIVEN_SYNC);
		static const value<1> const_p_read__shift = value<1>{0x1u};
		items->add(path, "read_shift", "src\000sblink.v:104.8-104.18\000", const_p_read__shift);
		items->add(path, "valid_out", "src\000sblink.v:13.16-13.22\000", debug_alias(), p_pd_2e_valid2);
		items->add(path, "trapz_out", "src\000sblink.v:82.22-82.33\000", debug_alias(), p_tr1_2e_accumulator);
		items->add(path, "peak_out", "src\000sblink.v:12.29-12.34\000", debug_alias(), p_pd_2e_peak2);
		items->add(path, "clk", "src\000sblink.v:100.72-100.75\000", p_clk, 0, debug_item::INPUT|debug_item::UNDRIVEN);
		items->add(path, "outs", "src\000sblink.v:100.60-100.64\000", p_outs, 0, debug_item::OUTPUT|debug_item::DRIVEN_COMB);
		items->add(path, "ins", "src\000sblink.v:100.34-100.37\000", p_ins, 0, debug_item::INPUT|debug_item::UNDRIVEN);
	}
}

} // namespace cxxrtl_design

extern "C"
cxxrtl_toplevel cxxrtl_design_create() {
	return new _cxxrtl_toplevel { std::unique_ptr<cxxrtl_design::p_blink>(new cxxrtl_design::p_blink) };
}
