#include "__cf_Logic.h"
#ifndef RTW_HEADER_Logic_h_
#define RTW_HEADER_Logic_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef Logic_COMMON_INCLUDES_
#define Logic_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "sigstream_rtw.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "Logic_types.h"
#include "multiword_types.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME Logic
#define NSAMPLE_TIMES (2) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (15) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (0)   
#elif NCSTATES != 0
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
typedef struct { real_T o4uy54sjdr ; real_T kvuqatmfiu ; real_T pz3sgulmrd [
2 ] ; real_T dvthak2tzz ; real_T j5pov4a2qg ; real_T jc350ax3kt ; real_T
h40c3szdy1 ; real_T pouedse2fy ; real_T kagekh3501 ; real_T fttkw03t0o ;
real_T aojyt1wlmj ; boolean_T pmy5ciwhe2 ; boolean_T jt0zbcc1cn ; boolean_T
pqzlyjczm1 ; boolean_T ilxajoeed3 ; } B ; typedef struct { real_T cpsqce0ty4
; real_T fmsq0iydhi ; real_T oewm0uh1ts ; struct { void * LoggedData [ 2 ] ;
} abk2lrxwy0 ; struct { void * LoggedData [ 9 ] ; } cyex23m2vs ; boolean_T
i0baecw4zr ; int8_T fseqvbrxou ; int8_T nv1quhs2qf ; int8_T iiarwlcfsc ; } DW
; typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ {
real_T EdgeDetector1_model ; boolean_T EdgeDetector1_ic ; real_T
UnitDelay2_InitialCondition ; real_T DiscreteTimeIntegrator_gainval ; real_T
DiscreteTimeIntegrator_IC ; real_T posedge_Value [ 2 ] ; real_T negedge_Value
[ 2 ] ; real_T eitheredge_Value [ 2 ] ; real_T UnitDelay1_InitialCondition ;
real_T Constant_Value ; real_T Constant1_Value ; real_T Constant2_Value ;
real_T Switch_Threshold ; boolean_T OUT_Y0 ; boolean_T OUT_Y0_fuzds5ezzb ; }
; extern const char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern DW
rtDW ; extern P rtP ; extern const rtwCAPI_ModelMappingStaticInfo *
Logic_GetCAPIStaticMap ( void ) ; extern SimStruct * const rtS ; extern const
int_T gblNumToFiles ; extern const int_T gblNumFrFiles ; extern const int_T
gblNumFrWksBlocks ; extern rtInportTUtable * gblInportTUtables ; extern const
char * gblInportFileName ; extern const int_T gblNumRootInportBlks ; extern
const int_T gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ;
extern const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [
] ; extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
size_t gblCurrentSFcnIdx ; extern size_t * gblChildIdxToInfoIdx ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( void
) ;
#endif
