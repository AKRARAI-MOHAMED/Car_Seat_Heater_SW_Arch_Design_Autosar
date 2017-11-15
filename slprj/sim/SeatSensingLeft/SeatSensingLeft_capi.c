#include "__cf_SeatSensingLeft.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "SeatSensingLeft_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "SeatSensingLeft.h"
#include "SeatSensingLeft_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , - 1
, ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "" , "" , 0 ,
0 , 0 , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 0 , 0 } } ; static uint_T rtDimensionArray [ ] = { 0 } ;
static rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( NULL ) , ( NULL ) , 0 , 0 } } ; static int_T
rtContextSystems [ 3 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] =
{ { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo
mmiStaticInfoLogging = { 3 , rtContextSystems , loggingMetaInfo , 0 , NULL ,
{ 0 , NULL , NULL } , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL
) , 0 , ( NULL ) , 0 } , { rtBlockStates , 0 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 3433873919U , 2822478228U , 95159626U ,
2385335078U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * SeatSensingLeft_GetCAPIStaticMap ( ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void SeatSensingLeft_InitializeSystemRan ( jmpkia5fbb * const
kmacop0wmt , sysRanDType * systemRan [ ] , int_T systemTid [ ] , void *
rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( kmacop0wmt ) ; systemRan [
0 ] = ( sysRanDType * ) rootSysRanPtr ; systemRan [ 1 ] = ( sysRanDType * ) &
j3saetzrysp . cg5ntsybew ; systemRan [ 2 ] = ( NULL ) ; systemTid [ 1 ] =
ak2gp1dw05 [ 1 ] ; systemTid [ 2 ] = ak2gp1dw05 [ 0 ] ; systemTid [ 0 ] =
rootTid ; rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 1 ;
rtContextSystems [ 2 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void SeatSensingLeft_InitializeDataMapInfo ( jmpkia5fbb * const kmacop0wmt ,
void * sysRanPtr , int contextTid ) { rtwCAPI_SetVersion ( kmacop0wmt ->
DataMapInfo . mmi , 1 ) ; rtwCAPI_SetStaticMap ( kmacop0wmt -> DataMapInfo .
mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( kmacop0wmt -> DataMapInfo
. mmi , & mmiStaticInfoLogging ) ; rtwCAPI_SetPath ( kmacop0wmt ->
DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath ( kmacop0wmt ->
DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetInstanceLoggingInfo ( kmacop0wmt
-> DataMapInfo . mmi , & kmacop0wmt -> DataMapInfo . mmiLogInstanceInfo ) ;
rtwCAPI_SetChildMMIArray ( kmacop0wmt -> DataMapInfo . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( kmacop0wmt -> DataMapInfo . mmi , 0 ) ;
SeatSensingLeft_InitializeSystemRan ( kmacop0wmt , kmacop0wmt -> DataMapInfo
. systemRan , kmacop0wmt -> DataMapInfo . systemTid , sysRanPtr , contextTid
) ; rtwCAPI_SetSystemRan ( kmacop0wmt -> DataMapInfo . mmi , kmacop0wmt ->
DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid ( kmacop0wmt -> DataMapInfo
. mmi , kmacop0wmt -> DataMapInfo . systemTid ) ; rtwCAPI_SetGlobalTIDMap (
kmacop0wmt -> DataMapInfo . mmi , & ak2gp1dw05 [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void SeatSensingLeft_host_InitializeDataMapInfo (
SeatSensingLeft_host_DataMapInfo_T * dataMap , const char * path ) {
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
