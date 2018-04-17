#include "__cf_Logic.h"
#include "ext_types.h"
static uint_T rtDataTypeSizes [ ] = { sizeof ( real_T ) , sizeof ( real32_T )
, sizeof ( int8_T ) , sizeof ( uint8_T ) , sizeof ( int16_T ) , sizeof (
uint16_T ) , sizeof ( int32_T ) , sizeof ( uint32_T ) , sizeof ( boolean_T )
, sizeof ( fcn_call_T ) , sizeof ( int_T ) , sizeof ( pointer_T ) , sizeof (
action_T ) , 2 * sizeof ( uint32_T ) } ; static const char_T *
rtDataTypeNames [ ] = { "real_T" , "real32_T" , "int8_T" , "uint8_T" ,
"int16_T" , "uint16_T" , "int32_T" , "uint32_T" , "boolean_T" , "fcn_call_T"
, "int_T" , "pointer_T" , "action_T" , "timer_uint32_pair_T" } ; static
DataTypeTransition rtBTransitions [ ] = { { ( char_T * ) ( & rtB . o4uy54sjdr
) , 0 , 0 , 12 } , { ( char_T * ) ( & rtB . pmy5ciwhe2 ) , 8 , 0 , 4 } , { (
char_T * ) ( & rtDW . cpsqce0ty4 ) , 0 , 0 , 3 } , { ( char_T * ) ( & rtDW .
abk2lrxwy0 . LoggedData [ 0 ] ) , 11 , 0 , 11 } , { ( char_T * ) ( & rtDW .
i0baecw4zr ) , 8 , 0 , 1 } , { ( char_T * ) ( & rtDW . fseqvbrxou ) , 2 , 0 ,
3 } } ; static DataTypeTransitionTable rtBTransTable = { 6U , rtBTransitions
} ; static DataTypeTransition rtPTransitions [ ] = { { ( char_T * ) ( & rtP .
EdgeDetector1_model ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
EdgeDetector1_ic ) , 8 , 0 , 1 } , { ( char_T * ) ( & rtP .
UnitDelay2_InitialCondition ) , 0 , 0 , 14 } , { ( char_T * ) ( & rtP .
OUT_Y0 ) , 8 , 0 , 2 } } ; static DataTypeTransitionTable rtPTransTable = {
4U , rtPTransitions } ;
