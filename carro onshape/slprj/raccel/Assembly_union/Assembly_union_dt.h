#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "struct_tWjMVrOBp0cYoZ8XXGA92G" , 14 ,
112 } , { "struct_Ys0g6NvmxKEOD5COiDA9mC" , 15 , 64 } , {
"struct_TiYjGQy9n8bHGyacNpAe5G" , 16 , 64 } } ; static uint_T rtDataTypeSizes
[ ] = { sizeof ( real_T ) , sizeof ( real32_T ) , sizeof ( int8_T ) , sizeof
( uint8_T ) , sizeof ( int16_T ) , sizeof ( uint16_T ) , sizeof ( int32_T ) ,
sizeof ( uint32_T ) , sizeof ( boolean_T ) , sizeof ( fcn_call_T ) , sizeof (
int_T ) , sizeof ( pointer_T ) , sizeof ( action_T ) , 2 * sizeof ( uint32_T
) , sizeof ( struct_tWjMVrOBp0cYoZ8XXGA92G ) , sizeof (
struct_Ys0g6NvmxKEOD5COiDA9mC ) , sizeof ( struct_TiYjGQy9n8bHGyacNpAe5G ) }
; static const char_T * rtDataTypeNames [ ] = { "real_T" , "real32_T" ,
"int8_T" , "uint8_T" , "int16_T" , "uint16_T" , "int32_T" , "uint32_T" ,
"boolean_T" , "fcn_call_T" , "int_T" , "pointer_T" , "action_T" ,
"timer_uint32_pair_T" , "struct_tWjMVrOBp0cYoZ8XXGA92G" ,
"struct_Ys0g6NvmxKEOD5COiDA9mC" , "struct_TiYjGQy9n8bHGyacNpAe5G" } ; static
DataTypeTransition rtBTransitions [ ] = { { ( char_T * ) ( & rtB . jmbrinrcc0
[ 0 ] ) , 0 , 0 , 3093 } , { ( char_T * ) ( & rtB . peyasizthg ) , 8 , 0 , 1
} , { ( char_T * ) ( & rtDW . des53pjgjx [ 0 ] ) , 0 , 0 , 5146 } , { (
char_T * ) ( & rtDW . dkwyihf2m5 . AQHandles ) , 11 , 0 , 7 } , { ( char_T *
) ( & rtDW . ixefe3xj3w ) , 6 , 0 , 7 } , { ( char_T * ) ( & rtDW .
kcwmpmtfh0 ) , 10 , 0 , 1 } , { ( char_T * ) ( & rtDW . ipdhtvwlhs [ 0 ] ) ,
3 , 0 , 2192 } , { ( char_T * ) ( & rtDW . l5tbtwep4q ) , 8 , 0 , 1 } } ;
static DataTypeTransitionTable rtBTransTable = { 8U , rtBTransitions } ;
static DataTypeTransition rtPTransitions [ ] = { { ( char_T * ) ( & rtP .
CompareToConstant_const ) , 0 , 0 , 39071 } , { ( char_T * ) ( & rtP .
maxnota_prodDims [ 0 ] ) , 6 , 0 , 2 } } ; static DataTypeTransitionTable
rtPTransTable = { 2U , rtPTransitions } ;
