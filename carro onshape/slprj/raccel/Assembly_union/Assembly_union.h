#ifndef RTW_HEADER_Assembly_union_h_
#define RTW_HEADER_Assembly_union_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef Assembly_union_COMMON_INCLUDES_
#define Assembly_union_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#include "HostLib_Audio.h"
#include "nesl_rtw.h"
#include "Assembly_union_99d6582_1_gateway.h"
#endif
#include "Assembly_union_types.h"
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#define MODEL_NAME Assembly_union
#define NSAMPLE_TIMES (5) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (13) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (2)   
#elif NCSTATES != 2
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { creal_T mmfvjxnz4s_mbvzarwird [ 1024 ] ; real_T jmbrinrcc0 [
1024 ] ; real_T fmjef2xupi ; real_T peesnpswbt ; real_T err200kyss ; real_T
lhfok4mewg ; real_T ae0bs4tk0s ; real_T o55dfxmcva [ 2 ] ; real_T aklpimtd25
[ 2048 ] ; real_T mqf5entwth [ 4 ] ; real_T jjftmzrghi [ 4 ] ; real_T
iawkydyf0w [ 4 ] ; real_T df2x4tndrs [ 2 ] ; boolean_T peyasizthg ; } B ;
typedef struct { real_T des53pjgjx [ 12 ] ; real_T idaiz1pzba ; real_T
kh3legjcxx ; real_T jdgb423jwi [ 1024 ] ; real_T biqfwvkqbg [ 4096 ] ; real_T
dxlz22r12r [ 2 ] ; real_T cc0rusxmac [ 2 ] ; real_T i44wfwjq2k [ 2 ] ; real_T
nojv0qp5ip ; real_T irclvydtac ; real_T pr2p113g4l ; real_T jvysttsx3f ;
real_T jttd3wqvnc ; real_T erq15xwmcc ; struct { void * AQHandles ; void *
SlioLTF ; } dkwyihf2m5 ; struct { void * AQHandles ; void * SlioLTF ; }
f5ydchrbvh ; void * dooe2tph4s ; void * eofe3feb5y ; void * a3kmlvnjvv ; void
* geo4bpyv35 ; void * exan11c3da ; int32_T ixefe3xj3w ; int32_T cjprqfnvyh ;
int32_T mytesxcron ; int32_T jdhwwwmzwp ; int32_T lsghnajswa ; int32_T
bgh1m05jtp ; int32_T evgmgea2zv ; int_T kcwmpmtfh0 ; uint8_T ipdhtvwlhs [
1096 ] ; uint8_T daunq334wk [ 1096 ] ; boolean_T l5tbtwep4q ; } DW ; typedef
struct { real_T p1aheqtlq5 [ 2 ] ; } X ; typedef struct { real_T p1aheqtlq5 [
2 ] ; } XDot ; typedef struct { boolean_T p1aheqtlq5 [ 2 ] ; } XDis ; typedef
struct { real_T p1aheqtlq5 [ 2 ] ; } CStateAbsTol ; typedef struct { real_T
p1aheqtlq5 [ 2 ] ; } CXPtMin ; typedef struct { real_T p1aheqtlq5 [ 2 ] ; }
CXPtMax ; typedef struct { real_T kvvlx3bgkm [ 768 ] ; } ConstP ; typedef
struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
CompareToConstant_const ; real_T mapminmax_xmax [ 63 ] ; real_T
mapminmax_reverse_xmax [ 63 ] ; real_T mapminmax_xmin [ 63 ] ; real_T
mapminmax_reverse_xmin [ 63 ] ; real_T mapminmax_ymax ; real_T
mapminmax_reverse_ymax ; real_T mapminmax_ymin ; real_T
mapminmax_reverse_ymin ; real_T AudioDeviceReader_P1 ; real_T Gain_Gain ;
real_T Gain1_Gain ; real_T Gain_Gain_dpk240szdk ; real_T
Gain1_Gain_b4jlhg2sol ; real_T Gain_Gain_csfnf22a3b ; real_T
Gain1_Gain_gtcmu0pqip ; real_T Gain_Gain_bnezk4n3uj ; real_T
Gain1_Gain_hl5mzazeb2 ; real_T Gain_Gain_nhjxmpgxp3 ; real_T
Gain1_Gain_j5abzvpppc ; real_T Gain_Gain_kopjgwuwrj ; real_T
Gain1_Gain_iisxq3asgt ; real_T Gain_Gain_ibxoqwhdka ; real_T
Gain1_Gain_jonj2zx5r2 ; real_T Gain_Gain_hsp1ikwoyc ; real_T
Gain1_Gain_hb25hpwvbq ; real_T Buffer1_ic ; real_T Delay_InitialCondition ;
real_T Unbuffer_ic ; real_T Buffer_ic ; real_T AudioDeviceWriter_P1 ; real_T
DataStoreMemory_InitialValue ; real_T DataStoreMemory1_InitialValue ; real_T
DataStoreMemory2_InitialValue ; real_T IW111_Value [ 63 ] ; real_T
IW1110_Value [ 63 ] ; real_T IW1111_Value [ 63 ] ; real_T IW1112_Value [ 63 ]
; real_T IW1113_Value [ 63 ] ; real_T IW1114_Value [ 63 ] ; real_T
IW1115_Value [ 63 ] ; real_T IW1116_Value [ 63 ] ; real_T IW1117_Value [ 63 ]
; real_T IW1118_Value [ 63 ] ; real_T IW1119_Value [ 63 ] ; real_T
IW112_Value [ 63 ] ; real_T IW1120_Value [ 63 ] ; real_T IW1121_Value [ 63 ]
; real_T IW1122_Value [ 63 ] ; real_T IW1123_Value [ 63 ] ; real_T
IW1124_Value [ 63 ] ; real_T IW1125_Value [ 63 ] ; real_T IW1126_Value [ 63 ]
; real_T IW1127_Value [ 63 ] ; real_T IW1128_Value [ 63 ] ; real_T
IW1129_Value [ 63 ] ; real_T IW113_Value [ 63 ] ; real_T IW1130_Value [ 63 ]
; real_T IW1131_Value [ 63 ] ; real_T IW1132_Value [ 63 ] ; real_T
IW1133_Value [ 63 ] ; real_T IW1134_Value [ 63 ] ; real_T IW1135_Value [ 63 ]
; real_T IW1136_Value [ 63 ] ; real_T IW1137_Value [ 63 ] ; real_T
IW1138_Value [ 63 ] ; real_T IW1139_Value [ 63 ] ; real_T IW114_Value [ 63 ]
; real_T IW1140_Value [ 63 ] ; real_T IW1141_Value [ 63 ] ; real_T
IW1142_Value [ 63 ] ; real_T IW1143_Value [ 63 ] ; real_T IW1144_Value [ 63 ]
; real_T IW1145_Value [ 63 ] ; real_T IW1146_Value [ 63 ] ; real_T
IW1147_Value [ 63 ] ; real_T IW1148_Value [ 63 ] ; real_T IW1149_Value [ 63 ]
; real_T IW115_Value [ 63 ] ; real_T IW1150_Value [ 63 ] ; real_T
IW1151_Value [ 63 ] ; real_T IW1152_Value [ 63 ] ; real_T IW1153_Value [ 63 ]
; real_T IW1154_Value [ 63 ] ; real_T IW1155_Value [ 63 ] ; real_T
IW1156_Value [ 63 ] ; real_T IW1157_Value [ 63 ] ; real_T IW1158_Value [ 63 ]
; real_T IW1159_Value [ 63 ] ; real_T IW116_Value [ 63 ] ; real_T
IW1160_Value [ 63 ] ; real_T IW1161_Value [ 63 ] ; real_T IW1162_Value [ 63 ]
; real_T IW1163_Value [ 63 ] ; real_T IW1164_Value [ 63 ] ; real_T
IW1165_Value [ 63 ] ; real_T IW1166_Value [ 63 ] ; real_T IW1167_Value [ 63 ]
; real_T IW1168_Value [ 63 ] ; real_T IW1169_Value [ 63 ] ; real_T
IW117_Value [ 63 ] ; real_T IW1170_Value [ 63 ] ; real_T IW118_Value [ 63 ] ;
real_T IW119_Value [ 63 ] ; real_T b1_Value [ 70 ] ; real_T one_Value ;
real_T one1_Value ; real_T IW211_Value [ 70 ] ; real_T IW2110_Value [ 70 ] ;
real_T IW2111_Value [ 70 ] ; real_T IW2112_Value [ 70 ] ; real_T IW2113_Value
[ 70 ] ; real_T IW2114_Value [ 70 ] ; real_T IW2115_Value [ 70 ] ; real_T
IW2116_Value [ 70 ] ; real_T IW2117_Value [ 70 ] ; real_T IW2118_Value [ 70 ]
; real_T IW2119_Value [ 70 ] ; real_T IW212_Value [ 70 ] ; real_T
IW2120_Value [ 70 ] ; real_T IW2121_Value [ 70 ] ; real_T IW2122_Value [ 70 ]
; real_T IW2123_Value [ 70 ] ; real_T IW2124_Value [ 70 ] ; real_T
IW2125_Value [ 70 ] ; real_T IW2126_Value [ 70 ] ; real_T IW2127_Value [ 70 ]
; real_T IW2128_Value [ 70 ] ; real_T IW2129_Value [ 70 ] ; real_T
IW213_Value [ 70 ] ; real_T IW2130_Value [ 70 ] ; real_T IW2131_Value [ 70 ]
; real_T IW2132_Value [ 70 ] ; real_T IW2133_Value [ 70 ] ; real_T
IW2134_Value [ 70 ] ; real_T IW2135_Value [ 70 ] ; real_T IW2136_Value [ 70 ]
; real_T IW2137_Value [ 70 ] ; real_T IW2138_Value [ 70 ] ; real_T
IW2139_Value [ 70 ] ; real_T IW214_Value [ 70 ] ; real_T IW2140_Value [ 70 ]
; real_T IW2141_Value [ 70 ] ; real_T IW2142_Value [ 70 ] ; real_T
IW2143_Value [ 70 ] ; real_T IW2144_Value [ 70 ] ; real_T IW2145_Value [ 70 ]
; real_T IW2146_Value [ 70 ] ; real_T IW2147_Value [ 70 ] ; real_T
IW2148_Value [ 70 ] ; real_T IW2149_Value [ 70 ] ; real_T IW215_Value [ 70 ]
; real_T IW2150_Value [ 70 ] ; real_T IW2151_Value [ 70 ] ; real_T
IW2152_Value [ 70 ] ; real_T IW2153_Value [ 70 ] ; real_T IW2154_Value [ 70 ]
; real_T IW2155_Value [ 70 ] ; real_T IW2156_Value [ 70 ] ; real_T
IW2157_Value [ 70 ] ; real_T IW2158_Value [ 70 ] ; real_T IW2159_Value [ 70 ]
; real_T IW216_Value [ 70 ] ; real_T IW2160_Value [ 70 ] ; real_T
IW2161_Value [ 70 ] ; real_T IW2162_Value [ 70 ] ; real_T IW2163_Value [ 70 ]
; real_T IW2164_Value [ 70 ] ; real_T IW2165_Value [ 70 ] ; real_T
IW2166_Value [ 70 ] ; real_T IW2167_Value [ 70 ] ; real_T IW2168_Value [ 70 ]
; real_T IW2169_Value [ 70 ] ; real_T IW217_Value [ 70 ] ; real_T
IW2170_Value [ 70 ] ; real_T IW218_Value [ 70 ] ; real_T IW219_Value [ 70 ] ;
real_T b2_Value [ 70 ] ; real_T one_Value_pnc5nhiviv ; real_T
one1_Value_gdsft3kniu ; real_T IW321_Value [ 70 ] ; real_T IW3210_Value [ 70
] ; real_T IW3211_Value [ 70 ] ; real_T IW3212_Value [ 70 ] ; real_T
IW3213_Value [ 70 ] ; real_T IW3214_Value [ 70 ] ; real_T IW3215_Value [ 70 ]
; real_T IW3216_Value [ 70 ] ; real_T IW3217_Value [ 70 ] ; real_T
IW3218_Value [ 70 ] ; real_T IW3219_Value [ 70 ] ; real_T IW322_Value [ 70 ]
; real_T IW3220_Value [ 70 ] ; real_T IW3221_Value [ 70 ] ; real_T
IW3222_Value [ 70 ] ; real_T IW3223_Value [ 70 ] ; real_T IW3224_Value [ 70 ]
; real_T IW3225_Value [ 70 ] ; real_T IW3226_Value [ 70 ] ; real_T
IW3227_Value [ 70 ] ; real_T IW3228_Value [ 70 ] ; real_T IW3229_Value [ 70 ]
; real_T IW323_Value [ 70 ] ; real_T IW3230_Value [ 70 ] ; real_T
IW3231_Value [ 70 ] ; real_T IW3232_Value [ 70 ] ; real_T IW3233_Value [ 70 ]
; real_T IW3234_Value [ 70 ] ; real_T IW3235_Value [ 70 ] ; real_T
IW3236_Value [ 70 ] ; real_T IW3237_Value [ 70 ] ; real_T IW3238_Value [ 70 ]
; real_T IW3239_Value [ 70 ] ; real_T IW324_Value [ 70 ] ; real_T
IW3240_Value [ 70 ] ; real_T IW3241_Value [ 70 ] ; real_T IW3242_Value [ 70 ]
; real_T IW3243_Value [ 70 ] ; real_T IW3244_Value [ 70 ] ; real_T
IW3245_Value [ 70 ] ; real_T IW3246_Value [ 70 ] ; real_T IW3247_Value [ 70 ]
; real_T IW3248_Value [ 70 ] ; real_T IW3249_Value [ 70 ] ; real_T
IW325_Value [ 70 ] ; real_T IW3250_Value [ 70 ] ; real_T IW3251_Value [ 70 ]
; real_T IW3252_Value [ 70 ] ; real_T IW3253_Value [ 70 ] ; real_T
IW3254_Value [ 70 ] ; real_T IW3255_Value [ 70 ] ; real_T IW3256_Value [ 70 ]
; real_T IW3257_Value [ 70 ] ; real_T IW3258_Value [ 70 ] ; real_T
IW3259_Value [ 70 ] ; real_T IW326_Value [ 70 ] ; real_T IW3260_Value [ 70 ]
; real_T IW3261_Value [ 70 ] ; real_T IW3262_Value [ 70 ] ; real_T
IW3263_Value [ 70 ] ; real_T IW3264_Value [ 70 ] ; real_T IW3265_Value [ 70 ]
; real_T IW3266_Value [ 70 ] ; real_T IW3267_Value [ 70 ] ; real_T
IW3268_Value [ 70 ] ; real_T IW3269_Value [ 70 ] ; real_T IW327_Value [ 70 ]
; real_T IW3270_Value [ 70 ] ; real_T IW328_Value [ 70 ] ; real_T IW329_Value
[ 70 ] ; real_T b3_Value [ 70 ] ; real_T one_Value_c5mvhqt4g1 ; real_T
one1_Value_be5kdhnvlu ; real_T IW431_Value [ 70 ] ; real_T IW4310_Value [ 70
] ; real_T IW4311_Value [ 70 ] ; real_T IW4312_Value [ 70 ] ; real_T
IW4313_Value [ 70 ] ; real_T IW4314_Value [ 70 ] ; real_T IW4315_Value [ 70 ]
; real_T IW4316_Value [ 70 ] ; real_T IW4317_Value [ 70 ] ; real_T
IW4318_Value [ 70 ] ; real_T IW4319_Value [ 70 ] ; real_T IW432_Value [ 70 ]
; real_T IW4320_Value [ 70 ] ; real_T IW4321_Value [ 70 ] ; real_T
IW4322_Value [ 70 ] ; real_T IW4323_Value [ 70 ] ; real_T IW4324_Value [ 70 ]
; real_T IW4325_Value [ 70 ] ; real_T IW4326_Value [ 70 ] ; real_T
IW4327_Value [ 70 ] ; real_T IW4328_Value [ 70 ] ; real_T IW4329_Value [ 70 ]
; real_T IW433_Value [ 70 ] ; real_T IW4330_Value [ 70 ] ; real_T
IW4331_Value [ 70 ] ; real_T IW4332_Value [ 70 ] ; real_T IW4333_Value [ 70 ]
; real_T IW4334_Value [ 70 ] ; real_T IW4335_Value [ 70 ] ; real_T
IW4336_Value [ 70 ] ; real_T IW4337_Value [ 70 ] ; real_T IW4338_Value [ 70 ]
; real_T IW4339_Value [ 70 ] ; real_T IW434_Value [ 70 ] ; real_T
IW4340_Value [ 70 ] ; real_T IW4341_Value [ 70 ] ; real_T IW4342_Value [ 70 ]
; real_T IW4343_Value [ 70 ] ; real_T IW4344_Value [ 70 ] ; real_T
IW4345_Value [ 70 ] ; real_T IW4346_Value [ 70 ] ; real_T IW4347_Value [ 70 ]
; real_T IW4348_Value [ 70 ] ; real_T IW4349_Value [ 70 ] ; real_T
IW435_Value [ 70 ] ; real_T IW4350_Value [ 70 ] ; real_T IW4351_Value [ 70 ]
; real_T IW4352_Value [ 70 ] ; real_T IW4353_Value [ 70 ] ; real_T
IW4354_Value [ 70 ] ; real_T IW4355_Value [ 70 ] ; real_T IW4356_Value [ 70 ]
; real_T IW4357_Value [ 70 ] ; real_T IW4358_Value [ 70 ] ; real_T
IW4359_Value [ 70 ] ; real_T IW436_Value [ 70 ] ; real_T IW4360_Value [ 70 ]
; real_T IW4361_Value [ 70 ] ; real_T IW4362_Value [ 70 ] ; real_T
IW4363_Value [ 70 ] ; real_T IW4364_Value [ 70 ] ; real_T IW4365_Value [ 70 ]
; real_T IW4366_Value [ 70 ] ; real_T IW4367_Value [ 70 ] ; real_T
IW4368_Value [ 70 ] ; real_T IW4369_Value [ 70 ] ; real_T IW437_Value [ 70 ]
; real_T IW4370_Value [ 70 ] ; real_T IW438_Value [ 70 ] ; real_T IW439_Value
[ 70 ] ; real_T b4_Value [ 70 ] ; real_T one_Value_auznjftxds ; real_T
one1_Value_hlcfpmv23j ; real_T IW541_Value [ 70 ] ; real_T IW5410_Value [ 70
] ; real_T IW5411_Value [ 70 ] ; real_T IW5412_Value [ 70 ] ; real_T
IW5413_Value [ 70 ] ; real_T IW5414_Value [ 70 ] ; real_T IW5415_Value [ 70 ]
; real_T IW5416_Value [ 70 ] ; real_T IW5417_Value [ 70 ] ; real_T
IW5418_Value [ 70 ] ; real_T IW5419_Value [ 70 ] ; real_T IW542_Value [ 70 ]
; real_T IW5420_Value [ 70 ] ; real_T IW5421_Value [ 70 ] ; real_T
IW5422_Value [ 70 ] ; real_T IW5423_Value [ 70 ] ; real_T IW5424_Value [ 70 ]
; real_T IW5425_Value [ 70 ] ; real_T IW5426_Value [ 70 ] ; real_T
IW5427_Value [ 70 ] ; real_T IW5428_Value [ 70 ] ; real_T IW5429_Value [ 70 ]
; real_T IW543_Value [ 70 ] ; real_T IW5430_Value [ 70 ] ; real_T
IW5431_Value [ 70 ] ; real_T IW5432_Value [ 70 ] ; real_T IW5433_Value [ 70 ]
; real_T IW5434_Value [ 70 ] ; real_T IW5435_Value [ 70 ] ; real_T
IW5436_Value [ 70 ] ; real_T IW5437_Value [ 70 ] ; real_T IW5438_Value [ 70 ]
; real_T IW5439_Value [ 70 ] ; real_T IW544_Value [ 70 ] ; real_T
IW5440_Value [ 70 ] ; real_T IW5441_Value [ 70 ] ; real_T IW5442_Value [ 70 ]
; real_T IW5443_Value [ 70 ] ; real_T IW5444_Value [ 70 ] ; real_T
IW5445_Value [ 70 ] ; real_T IW5446_Value [ 70 ] ; real_T IW5447_Value [ 70 ]
; real_T IW5448_Value [ 70 ] ; real_T IW5449_Value [ 70 ] ; real_T
IW545_Value [ 70 ] ; real_T IW5450_Value [ 70 ] ; real_T IW5451_Value [ 70 ]
; real_T IW5452_Value [ 70 ] ; real_T IW5453_Value [ 70 ] ; real_T
IW5454_Value [ 70 ] ; real_T IW5455_Value [ 70 ] ; real_T IW5456_Value [ 70 ]
; real_T IW5457_Value [ 70 ] ; real_T IW5458_Value [ 70 ] ; real_T
IW5459_Value [ 70 ] ; real_T IW546_Value [ 70 ] ; real_T IW5460_Value [ 70 ]
; real_T IW5461_Value [ 70 ] ; real_T IW5462_Value [ 70 ] ; real_T
IW5463_Value [ 70 ] ; real_T IW5464_Value [ 70 ] ; real_T IW5465_Value [ 70 ]
; real_T IW5466_Value [ 70 ] ; real_T IW5467_Value [ 70 ] ; real_T
IW5468_Value [ 70 ] ; real_T IW5469_Value [ 70 ] ; real_T IW547_Value [ 70 ]
; real_T IW5470_Value [ 70 ] ; real_T IW548_Value [ 70 ] ; real_T IW549_Value
[ 70 ] ; real_T b5_Value [ 70 ] ; real_T one_Value_p0iyicytip ; real_T
one1_Value_bvhr2aqds1 ; real_T IW651_Value [ 70 ] ; real_T IW6510_Value [ 70
] ; real_T IW6511_Value [ 70 ] ; real_T IW6512_Value [ 70 ] ; real_T
IW6513_Value [ 70 ] ; real_T IW6514_Value [ 70 ] ; real_T IW6515_Value [ 70 ]
; real_T IW6516_Value [ 70 ] ; real_T IW6517_Value [ 70 ] ; real_T
IW6518_Value [ 70 ] ; real_T IW6519_Value [ 70 ] ; real_T IW652_Value [ 70 ]
; real_T IW6520_Value [ 70 ] ; real_T IW6521_Value [ 70 ] ; real_T
IW6522_Value [ 70 ] ; real_T IW6523_Value [ 70 ] ; real_T IW6524_Value [ 70 ]
; real_T IW6525_Value [ 70 ] ; real_T IW6526_Value [ 70 ] ; real_T
IW6527_Value [ 70 ] ; real_T IW6528_Value [ 70 ] ; real_T IW6529_Value [ 70 ]
; real_T IW653_Value [ 70 ] ; real_T IW6530_Value [ 70 ] ; real_T
IW6531_Value [ 70 ] ; real_T IW6532_Value [ 70 ] ; real_T IW6533_Value [ 70 ]
; real_T IW6534_Value [ 70 ] ; real_T IW6535_Value [ 70 ] ; real_T
IW6536_Value [ 70 ] ; real_T IW6537_Value [ 70 ] ; real_T IW6538_Value [ 70 ]
; real_T IW6539_Value [ 70 ] ; real_T IW654_Value [ 70 ] ; real_T
IW6540_Value [ 70 ] ; real_T IW6541_Value [ 70 ] ; real_T IW6542_Value [ 70 ]
; real_T IW6543_Value [ 70 ] ; real_T IW6544_Value [ 70 ] ; real_T
IW6545_Value [ 70 ] ; real_T IW6546_Value [ 70 ] ; real_T IW6547_Value [ 70 ]
; real_T IW6548_Value [ 70 ] ; real_T IW6549_Value [ 70 ] ; real_T
IW655_Value [ 70 ] ; real_T IW6550_Value [ 70 ] ; real_T IW6551_Value [ 70 ]
; real_T IW6552_Value [ 70 ] ; real_T IW6553_Value [ 70 ] ; real_T
IW6554_Value [ 70 ] ; real_T IW6555_Value [ 70 ] ; real_T IW6556_Value [ 70 ]
; real_T IW6557_Value [ 70 ] ; real_T IW6558_Value [ 70 ] ; real_T
IW6559_Value [ 70 ] ; real_T IW656_Value [ 70 ] ; real_T IW6560_Value [ 70 ]
; real_T IW6561_Value [ 70 ] ; real_T IW6562_Value [ 70 ] ; real_T
IW6563_Value [ 70 ] ; real_T IW6564_Value [ 70 ] ; real_T IW6565_Value [ 70 ]
; real_T IW6566_Value [ 70 ] ; real_T IW6567_Value [ 70 ] ; real_T
IW6568_Value [ 70 ] ; real_T IW6569_Value [ 70 ] ; real_T IW657_Value [ 70 ]
; real_T IW6570_Value [ 70 ] ; real_T IW658_Value [ 70 ] ; real_T IW659_Value
[ 70 ] ; real_T b6_Value [ 70 ] ; real_T one_Value_couf3v4kop ; real_T
one1_Value_fuydcombbu ; real_T IW761_Value [ 70 ] ; real_T IW7610_Value [ 70
] ; real_T IW7611_Value [ 70 ] ; real_T IW7612_Value [ 70 ] ; real_T
IW7613_Value [ 70 ] ; real_T IW7614_Value [ 70 ] ; real_T IW7615_Value [ 70 ]
; real_T IW7616_Value [ 70 ] ; real_T IW7617_Value [ 70 ] ; real_T
IW7618_Value [ 70 ] ; real_T IW7619_Value [ 70 ] ; real_T IW762_Value [ 70 ]
; real_T IW7620_Value [ 70 ] ; real_T IW7621_Value [ 70 ] ; real_T
IW7622_Value [ 70 ] ; real_T IW7623_Value [ 70 ] ; real_T IW7624_Value [ 70 ]
; real_T IW7625_Value [ 70 ] ; real_T IW7626_Value [ 70 ] ; real_T
IW7627_Value [ 70 ] ; real_T IW7628_Value [ 70 ] ; real_T IW7629_Value [ 70 ]
; real_T IW763_Value [ 70 ] ; real_T IW7630_Value [ 70 ] ; real_T
IW7631_Value [ 70 ] ; real_T IW7632_Value [ 70 ] ; real_T IW7633_Value [ 70 ]
; real_T IW7634_Value [ 70 ] ; real_T IW7635_Value [ 70 ] ; real_T
IW7636_Value [ 70 ] ; real_T IW7637_Value [ 70 ] ; real_T IW7638_Value [ 70 ]
; real_T IW7639_Value [ 70 ] ; real_T IW764_Value [ 70 ] ; real_T
IW7640_Value [ 70 ] ; real_T IW7641_Value [ 70 ] ; real_T IW7642_Value [ 70 ]
; real_T IW7643_Value [ 70 ] ; real_T IW7644_Value [ 70 ] ; real_T
IW7645_Value [ 70 ] ; real_T IW7646_Value [ 70 ] ; real_T IW7647_Value [ 70 ]
; real_T IW7648_Value [ 70 ] ; real_T IW7649_Value [ 70 ] ; real_T
IW765_Value [ 70 ] ; real_T IW7650_Value [ 70 ] ; real_T IW7651_Value [ 70 ]
; real_T IW7652_Value [ 70 ] ; real_T IW7653_Value [ 70 ] ; real_T
IW7654_Value [ 70 ] ; real_T IW7655_Value [ 70 ] ; real_T IW7656_Value [ 70 ]
; real_T IW7657_Value [ 70 ] ; real_T IW7658_Value [ 70 ] ; real_T
IW7659_Value [ 70 ] ; real_T IW766_Value [ 70 ] ; real_T IW7660_Value [ 70 ]
; real_T IW7661_Value [ 70 ] ; real_T IW7662_Value [ 70 ] ; real_T
IW7663_Value [ 70 ] ; real_T IW7664_Value [ 70 ] ; real_T IW7665_Value [ 70 ]
; real_T IW7666_Value [ 70 ] ; real_T IW7667_Value [ 70 ] ; real_T
IW7668_Value [ 70 ] ; real_T IW7669_Value [ 70 ] ; real_T IW767_Value [ 70 ]
; real_T IW7670_Value [ 70 ] ; real_T IW768_Value [ 70 ] ; real_T IW769_Value
[ 70 ] ; real_T b7_Value [ 70 ] ; real_T one_Value_m0j1s0oxst ; real_T
one1_Value_dj3bk5514x ; real_T IW871_Value [ 70 ] ; real_T IW8710_Value [ 70
] ; real_T IW8711_Value [ 70 ] ; real_T IW8712_Value [ 70 ] ; real_T
IW8713_Value [ 70 ] ; real_T IW8714_Value [ 70 ] ; real_T IW8715_Value [ 70 ]
; real_T IW8716_Value [ 70 ] ; real_T IW8717_Value [ 70 ] ; real_T
IW8718_Value [ 70 ] ; real_T IW8719_Value [ 70 ] ; real_T IW872_Value [ 70 ]
; real_T IW8720_Value [ 70 ] ; real_T IW8721_Value [ 70 ] ; real_T
IW8722_Value [ 70 ] ; real_T IW8723_Value [ 70 ] ; real_T IW8724_Value [ 70 ]
; real_T IW8725_Value [ 70 ] ; real_T IW8726_Value [ 70 ] ; real_T
IW8727_Value [ 70 ] ; real_T IW8728_Value [ 70 ] ; real_T IW8729_Value [ 70 ]
; real_T IW873_Value [ 70 ] ; real_T IW8730_Value [ 70 ] ; real_T
IW8731_Value [ 70 ] ; real_T IW8732_Value [ 70 ] ; real_T IW8733_Value [ 70 ]
; real_T IW8734_Value [ 70 ] ; real_T IW8735_Value [ 70 ] ; real_T
IW8736_Value [ 70 ] ; real_T IW8737_Value [ 70 ] ; real_T IW8738_Value [ 70 ]
; real_T IW8739_Value [ 70 ] ; real_T IW874_Value [ 70 ] ; real_T
IW8740_Value [ 70 ] ; real_T IW8741_Value [ 70 ] ; real_T IW8742_Value [ 70 ]
; real_T IW8743_Value [ 70 ] ; real_T IW8744_Value [ 70 ] ; real_T
IW8745_Value [ 70 ] ; real_T IW8746_Value [ 70 ] ; real_T IW8747_Value [ 70 ]
; real_T IW8748_Value [ 70 ] ; real_T IW8749_Value [ 70 ] ; real_T
IW875_Value [ 70 ] ; real_T IW8750_Value [ 70 ] ; real_T IW8751_Value [ 70 ]
; real_T IW8752_Value [ 70 ] ; real_T IW8753_Value [ 70 ] ; real_T
IW8754_Value [ 70 ] ; real_T IW8755_Value [ 70 ] ; real_T IW8756_Value [ 70 ]
; real_T IW8757_Value [ 70 ] ; real_T IW8758_Value [ 70 ] ; real_T
IW8759_Value [ 70 ] ; real_T IW876_Value [ 70 ] ; real_T IW8760_Value [ 70 ]
; real_T IW8761_Value [ 70 ] ; real_T IW8762_Value [ 70 ] ; real_T
IW8763_Value [ 70 ] ; real_T IW877_Value [ 70 ] ; real_T IW878_Value [ 70 ] ;
real_T IW879_Value [ 70 ] ; real_T b8_Value [ 63 ] ; real_T
one_Value_d22xrk10vq ; real_T one1_Value_mkzkjwsbn5 ; int32_T
maxnota_prodDims [ 2 ] ; } ; extern const char * RT_MEMORY_ALLOCATION_ERROR ;
extern B rtB ; extern X rtX ; extern DW rtDW ; extern P rtP ; extern const
ConstP rtConstP ; extern const rtwCAPI_ModelMappingStaticInfo *
Assembly_union_GetCAPIStaticMap ( void ) ; extern SimStruct * const rtS ;
extern const int_T gblNumToFiles ; extern const int_T gblNumFrFiles ; extern
const int_T gblNumFrWksBlocks ; extern rtInportTUtable * gblInportTUtables ;
extern const char * gblInportFileName ; extern const int_T
gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern const
int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( void ) ;
#endif
