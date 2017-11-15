#include "__cf_FullApp.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "FullApp_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "FullApp.h"
#include "FullApp_private.h"
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
rtDimensionArray } , "float" , { 3850510895U , 890171080U , 2772472240U ,
1621452131U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * FullApp_GetCAPIStaticMap ( ) { return &
mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void FullApp_InitializeSystemRan ( kjcfosfnzl * const m4coqvrhys ,
sysRanDType * systemRan [ ] , int_T systemTid [ ] , void * rootSysRanPtr ,
int rootTid ) { UNUSED_PARAMETER ( m4coqvrhys ) ; systemRan [ 0 ] = (
sysRanDType * ) rootSysRanPtr ; systemRan [ 1 ] = ( sysRanDType * ) &
lpgy1wacnhh . irdranm0i2 ; systemRan [ 2 ] = ( NULL ) ; systemTid [ 1 ] =
a2x4z2v50f [ 0 ] ; systemTid [ 2 ] = a2x4z2v50f [ 0 ] ; systemTid [ 0 ] =
rootTid ; rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 1 ;
rtContextSystems [ 2 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void FullApp_InitializeDataMapInfo ( kjcfosfnzl * const m4coqvrhys , void *
sysRanPtr , int contextTid ) { rtwCAPI_SetVersion ( m4coqvrhys -> DataMapInfo
. mmi , 1 ) ; rtwCAPI_SetStaticMap ( m4coqvrhys -> DataMapInfo . mmi , &
mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( m4coqvrhys -> DataMapInfo . mmi ,
& mmiStaticInfoLogging ) ; rtwCAPI_SetPath ( m4coqvrhys -> DataMapInfo . mmi
, ( NULL ) ) ; rtwCAPI_SetFullPath ( m4coqvrhys -> DataMapInfo . mmi , ( NULL
) ) ; rtwCAPI_SetInstanceLoggingInfo ( m4coqvrhys -> DataMapInfo . mmi , &
m4coqvrhys -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
m4coqvrhys -> DataMapInfo . mmi , m4coqvrhys -> DataMapInfo . childMMI ) ;
rtwCAPI_SetChildMMIArrayLen ( m4coqvrhys -> DataMapInfo . mmi , 5 ) ;
FullApp_InitializeSystemRan ( m4coqvrhys , m4coqvrhys -> DataMapInfo .
systemRan , m4coqvrhys -> DataMapInfo . systemTid , sysRanPtr , contextTid )
; rtwCAPI_SetSystemRan ( m4coqvrhys -> DataMapInfo . mmi , m4coqvrhys ->
DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid ( m4coqvrhys -> DataMapInfo
. mmi , m4coqvrhys -> DataMapInfo . systemTid ) ; rtwCAPI_SetGlobalTIDMap (
m4coqvrhys -> DataMapInfo . mmi , & a2x4z2v50f [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void FullApp_host_InitializeDataMapInfo ( FullApp_host_DataMapInfo_T *
dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
dataMap -> childMMI [ 0 ] = & ( dataMap -> child0 . mmi ) ;
SeatSensingLeft_host_InitializeDataMapInfo ( & ( dataMap -> child0 ) ,
"FullApp/Model" ) ; dataMap -> childMMI [ 1 ] = & ( dataMap -> child1 . mmi )
; SeatSensingRight_host_InitializeDataMapInfo ( & ( dataMap -> child1 ) ,
"FullApp/Model1" ) ; dataMap -> childMMI [ 2 ] = & ( dataMap -> child2 . mmi
) ; HeatRegulatorApp_host_InitializeDataMapInfo ( & ( dataMap -> child2 ) ,
"FullApp/Model2" ) ; dataMap -> childMMI [ 3 ] = & ( dataMap -> child3 . mmi
) ; SeatHeating_host_InitializeDataMapInfo ( & ( dataMap -> child3 ) ,
"FullApp/Model3" ) ; dataMap -> childMMI [ 4 ] = & ( dataMap -> child4 . mmi
) ; SeatHeaterapp_host_InitializeDataMapInfo ( & ( dataMap -> child4 ) ,
"FullApp/Model4" ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , dataMap ->
childMMI ) ; rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 5 ) ; }
#ifdef __cplusplus
}
#endif
#endif
