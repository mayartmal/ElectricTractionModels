#include "__cf_Current_Controller_Work.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Current_Controller_Work_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "Current_Controller_Work.h"
#include "Current_Controller_Work_capi.h"
#include "Current_Controller_Work_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 1 , TARGET_STRING (
"Current_Controller_Work/Position Selector" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 1 , 0 , TARGET_STRING (
"Current_Controller_Work/Signal Generator" ) , TARGET_STRING ( "" ) , 0 , 0 ,
1 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"Current_Controller_Work/Edge Detector  /Unit Delay" ) , TARGET_STRING ( "" )
, 0 , 0 , 1 , 0 , 1 } , { 3 , 2 , TARGET_STRING (
 "Current_Controller_Work/Two Direction Counter/Double Dirrection Counter Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"Current_Controller_Work/Two Direction Counter/Unit Delay" ) , TARGET_STRING
( "" ) , 0 , 0 , 1 , 0 , 1 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0
, 0 } } ; static const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 5
, TARGET_STRING ( "Current_Controller_Work/Constant1" ) , TARGET_STRING (
"Value" ) , 0 , 1 , 0 } , { 6 , TARGET_STRING (
"Current_Controller_Work/Signal Generator" ) , TARGET_STRING ( "Amplitude" )
, 0 , 1 , 0 } , { 7 , TARGET_STRING (
"Current_Controller_Work/Signal Generator" ) , TARGET_STRING ( "Frequency" )
, 0 , 1 , 0 } , { 8 , TARGET_STRING (
"Current_Controller_Work/Edge Detector  /Unit Delay" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 1 , 0 } , { 9 , TARGET_STRING (
"Current_Controller_Work/Index Adapter/Constant" ) , TARGET_STRING ( "Value"
) , 0 , 1 , 0 } , { 10 , TARGET_STRING (
"Current_Controller_Work/Two Direction Counter/Unit Delay" ) , TARGET_STRING
( "InitialCondition" ) , 0 , 1 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0
} } ; static const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 11 ,
TARGET_STRING ( "commutationMatrix" ) , 0 , 2 , 0 } , { 0 , ( NULL ) , 0 , 0
, 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . cw1onckxr2 [ 0 ] , & rtB .
egc3dkjd1t , & rtB . gywvzmvv2o , & rtB . cmy5wnuswt , & rtB . lsqtxodnem , &
rtP . Constant1_Value , & rtP . SignalGenerator_Amplitude , & rtP .
SignalGenerator_Frequency , & rtP . UnitDelay_InitialCondition , & rtP .
Constant_Value , & rtP . UnitDelay_InitialCondition_pzx2rrfnsh , & rtP .
commutationMatrix [ 0 ] , } ; static int32_T * rtVarDimsAddrMap [ ] = { (
NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_MATRIX_COL_MAJOR , 0 , 2 , 0 } , { rtwCAPI_SCALAR , 2 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 4 , 2 , 0 } } ; static const uint_T
rtDimensionArray [ ] = { 1 , 32 , 1 , 1 , 48 , 32 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.0 , 1.0E-5 } ; static const rtwCAPI_FixPtMap
rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , 0 }
, } ; static const rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const
void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [
0 ] , 0 , 0 } , { ( const void * ) & rtcapiStoredFloats [ 1 ] , ( const void
* ) & rtcapiStoredFloats [ 0 ] , 1 , 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 5 , ( NULL )
, 0 , ( NULL ) , 0 } , { rtBlockParameters , 6 , rtModelParameters , 1 } , {
( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap
, rtSampleTimeMap , rtDimensionArray } , "float" , { 1642034686U ,
2068109229U , 2257490105U , 701869571U } , ( NULL ) , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * Current_Controller_Work_GetCAPIStaticMap ( )
{ return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void Current_Controller_Work_InitializeDataMapInfo ( ) { rtwCAPI_SetVersion (
( * rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
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
void Current_Controller_Work_host_InitializeDataMapInfo (
Current_Controller_Work_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
