#include "__cf_Logic.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Logic_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "Logic.h"
#include "Logic_capi.h"
#include "Logic_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 3 , TARGET_STRING (
"Logic/ring counter" ) , TARGET_STRING ( "1" ) , 0 , 0 , 0 , 0 , 0 } , { 1 ,
3 , TARGET_STRING ( "Logic/ring counter" ) , TARGET_STRING ( "2" ) , 1 , 0 ,
0 , 0 , 0 } , { 2 , 3 , TARGET_STRING ( "Logic/ring counter" ) ,
TARGET_STRING ( "3" ) , 2 , 0 , 0 , 0 , 0 } , { 3 , 3 , TARGET_STRING (
"Logic/ring counter" ) , TARGET_STRING ( "4" ) , 3 , 0 , 0 , 0 , 0 } , { 4 ,
3 , TARGET_STRING ( "Logic/ring counter" ) , TARGET_STRING ( "5" ) , 4 , 0 ,
0 , 0 , 0 } , { 5 , 3 , TARGET_STRING ( "Logic/ring counter" ) ,
TARGET_STRING ( "6" ) , 5 , 0 , 0 , 0 , 0 } , { 6 , 3 , TARGET_STRING (
"Logic/ring counter" ) , TARGET_STRING ( "" ) , 6 , 0 , 0 , 0 , 0 } , { 7 , 0
, TARGET_STRING ( "Logic/Discrete-Time Integrator" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 8 , 0 , TARGET_STRING ( "Logic/Switch" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"Logic/Unit Delay2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 10 , 1
, TARGET_STRING ( "Logic/Edge Detector1/Model/NEGATIVE Edge" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 0 } , { 11 , 2 , TARGET_STRING (
"Logic/Edge Detector1/Model/POSITIVE Edge" ) , TARGET_STRING ( "" ) , 0 , 1 ,
0 , 0 , 0 } , { 12 , 0 , TARGET_STRING (
"Logic/Edge Detector1/Model/Data Type Conversion2" ) , TARGET_STRING ( "" ) ,
0 , 1 , 0 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
"Logic/Edge Detector1/Model/Logical Operator1" ) , TARGET_STRING ( "" ) , 0 ,
1 , 0 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
"Logic/Edge Detector1/Model/Multiport Switch" ) , TARGET_STRING ( "" ) , 0 ,
0 , 1 , 0 , 1 } , { 15 , 1 , TARGET_STRING (
"Logic/Edge Detector1/Model/NEGATIVE Edge/Relational Operator1" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 0 } , { 16 , 2 , TARGET_STRING (
"Logic/Edge Detector1/Model/POSITIVE Edge/Relational Operator1" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 17 , TARGET_STRING ( "Logic/Edge Detector1" ) ,
TARGET_STRING ( "model" ) , 0 , 0 , 0 } , { 18 , TARGET_STRING (
"Logic/Edge Detector1" ) , TARGET_STRING ( "ic" ) , 1 , 0 , 0 } , { 19 ,
TARGET_STRING ( "Logic/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 }
, { 20 , TARGET_STRING ( "Logic/Constant1" ) , TARGET_STRING ( "Value" ) , 0
, 0 , 0 } , { 21 , TARGET_STRING ( "Logic/Constant2" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 22 , TARGET_STRING (
"Logic/Discrete-Time Integrator" ) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0
} , { 23 , TARGET_STRING ( "Logic/Discrete-Time Integrator" ) , TARGET_STRING
( "InitialCondition" ) , 0 , 0 , 0 } , { 24 , TARGET_STRING ( "Logic/Switch"
) , TARGET_STRING ( "Threshold" ) , 0 , 0 , 0 } , { 25 , TARGET_STRING (
"Logic/Unit Delay1" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } ,
{ 26 , TARGET_STRING ( "Logic/Unit Delay2" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 27 , TARGET_STRING (
"Logic/Edge Detector1/Model/either edge" ) , TARGET_STRING ( "Value" ) , 0 ,
2 , 0 } , { 28 , TARGET_STRING ( "Logic/Edge Detector1/Model/neg. edge" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 29 , TARGET_STRING (
"Logic/Edge Detector1/Model/pos. edge" ) , TARGET_STRING ( "Value" ) , 0 , 2
, 0 } , { 30 , TARGET_STRING ( "Logic/Edge Detector1/Model/NEGATIVE Edge/OUT"
) , TARGET_STRING ( "InitialOutput" ) , 1 , 0 , 0 } , { 31 , TARGET_STRING (
"Logic/Edge Detector1/Model/POSITIVE Edge/OUT" ) , TARGET_STRING (
"InitialOutput" ) , 1 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 } } ;
static const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 0 , ( NULL )
, 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . j5pov4a2qg , & rtB . jc350ax3kt ,
& rtB . h40c3szdy1 , & rtB . pouedse2fy , & rtB . kagekh3501 , & rtB .
fttkw03t0o , & rtB . aojyt1wlmj , & rtB . kvuqatmfiu , & rtB . dvthak2tzz , &
rtB . o4uy54sjdr , & rtB . ilxajoeed3 , & rtB . pqzlyjczm1 , & rtB .
pmy5ciwhe2 , & rtB . jt0zbcc1cn , & rtB . pz3sgulmrd [ 0 ] , & rtB .
ilxajoeed3 , & rtB . pqzlyjczm1 , & rtP . EdgeDetector1_model , & rtP .
EdgeDetector1_ic , & rtP . Constant_Value , & rtP . Constant1_Value , & rtP .
Constant2_Value , & rtP . DiscreteTimeIntegrator_gainval , & rtP .
DiscreteTimeIntegrator_IC , & rtP . Switch_Threshold , & rtP .
UnitDelay1_InitialCondition , & rtP . UnitDelay2_InitialCondition , & rtP .
eitheredge_Value [ 0 ] , & rtP . negedge_Value [ 0 ] , & rtP . posedge_Value
[ 0 ] , & rtP . OUT_Y0 , & rtP . OUT_Y0_fuzds5ezzb , } ; static int32_T *
rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 } , {
"unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , SS_BOOLEAN , 0
, 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] = {
1 , 1 , 2 , 1 , 1 , 2 } ; static const real_T rtcapiStoredFloats [ ] = {
2.0E-6 , 0.0 } ; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL )
, ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 0 ,
0 } , { ( NULL ) , ( NULL ) , 1 , 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 17 , ( NULL )
, 0 , ( NULL ) , 0 } , { rtBlockParameters , 15 , rtModelParameters , 0 } , {
( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap
, rtSampleTimeMap , rtDimensionArray } , "float" , { 1039533450U ,
3498232952U , 4243610776U , 966201367U } , ( NULL ) , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * Logic_GetCAPIStaticMap ( ) { return &
mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void Logic_InitializeDataMapInfo ( ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Logic_host_InitializeDataMapInfo ( Logic_host_DataMapInfo_T * dataMap ,
const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
