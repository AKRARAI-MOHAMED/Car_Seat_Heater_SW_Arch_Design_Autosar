#include "__cf_HeatRegulatorApp.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "HeatRegulatorApp_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "HeatRegulatorApp.h"
#include "HeatRegulatorApp_private.h"
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
rtDimensionArray } , "float" , { 4149270170U , 2836122835U , 266675482U ,
2596217277U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * HeatRegulatorApp_GetCAPIStaticMap ( ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void HeatRegulatorApp_InitializeSystemRan ( i44af2u2ks * const
or1xyr5cjg , sysRanDType * systemRan [ ] , int_T systemTid [ ] , void *
rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( or1xyr5cjg ) ; systemRan [
0 ] = ( sysRanDType * ) rootSysRanPtr ; systemRan [ 1 ] = ( sysRanDType * ) &
i5cj4kcrzix . jqnzluodoj ; systemRan [ 2 ] = ( NULL ) ; systemTid [ 1 ] =
n0341lmchr [ 1 ] ; systemTid [ 2 ] = n0341lmchr [ 0 ] ; systemTid [ 0 ] =
rootTid ; rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 1 ;
rtContextSystems [ 2 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void HeatRegulatorApp_InitializeDataMapInfo ( i44af2u2ks * const or1xyr5cjg ,
void * sysRanPtr , int contextTid ) { rtwCAPI_SetVersion ( or1xyr5cjg ->
DataMapInfo . mmi , 1 ) ; rtwCAPI_SetStaticMap ( or1xyr5cjg -> DataMapInfo .
mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( or1xyr5cjg -> DataMapInfo
. mmi , & mmiStaticInfoLogging ) ; rtwCAPI_SetPath ( or1xyr5cjg ->
DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath ( or1xyr5cjg ->
DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetInstanceLoggingInfo ( or1xyr5cjg
-> DataMapInfo . mmi , & or1xyr5cjg -> DataMapInfo . mmiLogInstanceInfo ) ;
rtwCAPI_SetChildMMIArray ( or1xyr5cjg -> DataMapInfo . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( or1xyr5cjg -> DataMapInfo . mmi , 0 ) ;
HeatRegulatorApp_InitializeSystemRan ( or1xyr5cjg , or1xyr5cjg -> DataMapInfo
. systemRan , or1xyr5cjg -> DataMapInfo . systemTid , sysRanPtr , contextTid
) ; rtwCAPI_SetSystemRan ( or1xyr5cjg -> DataMapInfo . mmi , or1xyr5cjg ->
DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid ( or1xyr5cjg -> DataMapInfo
. mmi , or1xyr5cjg -> DataMapInfo . systemTid ) ; rtwCAPI_SetGlobalTIDMap (
or1xyr5cjg -> DataMapInfo . mmi , & n0341lmchr [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void HeatRegulatorApp_host_InitializeDataMapInfo (
HeatRegulatorApp_host_DataMapInfo_T * dataMap , const char * path ) {
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
