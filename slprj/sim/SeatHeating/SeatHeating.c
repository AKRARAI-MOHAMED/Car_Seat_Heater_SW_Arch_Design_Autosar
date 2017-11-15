#include "__cf_SeatHeating.h"
#include "SeatHeating_capi.h"
#include "SeatHeating.h"
#include "SeatHeating_private.h"
int_T fm54wupk3a [ 3 ] ; static RegMdlInfo rtMdlInfo_SeatHeating [ 64 ] = { {
"cxu0ojdzbx" , MDL_INFO_ID_FCNNAME , 0 , 0 , ( void * )
"SeatHeating/SeatHeatingControllerMain" } , { "natdmm1ohu" ,
MDL_INFO_ID_FCNNAME , 0 , 0 , ( void * )
"SeatHeating/SeatHeatingControllerMain" } , { "fwkgdm3c1zp" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "SeatHeating" } , {
"fwkgdm3c1z" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SeatHeating" } , { "ni0q3slehjx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "SeatHeating" } , { "dy2xuo1ujvd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SeatHeating" } , {
"lzipefnykhh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SeatHeating" } , { "kccthbqrpua" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "SeatHeating" } , { "evbhppyk2kz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SeatHeating" } , {
"crrfushqwxg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SeatHeating" } , { "o2yhqmhpelu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "SeatHeating" } , { "kng53b5djgl" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SeatHeating" } , {
"fhi3cgewe3u" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SeatHeating" } , { "jkccabo2egd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "SeatHeating" } , { "jhkr2zhblwd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SeatHeating" } , {
"ni0q3slehj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SeatHeating" } , { "dy2xuo1ujv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "SeatHeating" } , { "lzipefnykh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SeatHeating" } , {
"kccthbqrpu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SeatHeating" } , { "evbhppyk2k" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "SeatHeating" } , { "crrfushqwx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SeatHeating" } , {
"o2yhqmhpel" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SeatHeating" } , { "kng53b5djg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "SeatHeating" } , { "fhi3cgewe3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SeatHeating" } , {
"jkccabo2eg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SeatHeating" } , { "jhkr2zhblw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "SeatHeating" } , { "eadohyivqj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SeatHeating" } , {
"ok4zudj0xi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SeatHeating" } , { "nmpre3ule3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "SeatHeating" } , { "mfctl4czql" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SeatHeating" } , {
"ohqdata44c" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SeatHeating" } , { "khfao4zoki" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "SeatHeating" } , { "lxevvanarv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SeatHeating" } , {
"hzxt3rx1dj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SeatHeating" } , { "jfx5lmwkl3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "SeatHeating" } , { "ophhir0jhp" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SeatHeating" } , {
"SeatHeating" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , {
"SeatHeatingControllerSetPosition_Const" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "SeatHeating" } , {
"SeatHeatingControllerSetPosition_Term" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "SeatHeating" } , {
"SeatHeatingControllerSetPosition_initialize" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SeatHeating" } , {
"SeatHeatingControllerSetPosition_Start" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "SeatHeating" } , { "SeatHeatingControllerSetPosition" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * )
"SeatHeatingControllerSetPosition_sys" } , { "pru34pwyaz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SeatHeating" } , {
"cnujs5nqdj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SeatHeating" } , { "fm54wupk3a" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "SeatHeating" } , { "k2fqcecao2z" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SeatHeating" } , {
"ostyzfdpf00" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SeatHeating" } , { "cInt32" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , ( void
* ) "Int32" } , { "Int32" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"cufix10" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , ( void * ) "ufix10" } , {
"ufix10" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_SeatHeating_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "SeatHeating" } , {
"mr_SeatHeating_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "SeatHeating" } , {
"mr_SeatHeating_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "SeatHeating" } , {
"mr_SeatHeating_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "SeatHeating" } , {
"mr_SeatHeating_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "SeatHeating" } , {
"mr_SeatHeating_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "SeatHeating" } , { "mr_SeatHeating_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "SeatHeating" } , {
"mr_SeatHeating_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 ,
( void * ) "SeatHeating" } , { "mr_SeatHeating_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "SeatHeating" } , {
"mr_SeatHeating_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"SeatHeating" } , { "mr_SeatHeating_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "SeatHeating" } , { "SeatHeating.h" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , { "SeatHeating.c" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * ) "SeatHeating" } } ; ppum5as1ou
fhi3cgewe3 = { 0U } ; fwkgdm3c1zp fwkgdm3c1z ; jhkr2zhblwd ostyzfdpf00 ;
jkccabo2egd k2fqcecao2z ; const boolean_T * ok4zudj0xi ; const boolean_T *
eadohyivqj ; void SeatHeatingControllerSetPosition_Start ( void ) {
ostyzfdpf00 . azldcrpzg0 = fhi3cgewe3 . P_0 ; } void
SeatHeatingControllerSetPosition ( uint16_T lj333stct0 ) { ostyzfdpf00 .
azldcrpzg0 = lj333stct0 ; k2fqcecao2z . he0i4epyoh = 4 ; } void natdmm1ohu (
const boolean_T * px1jo0vzii , const boolean_T * o0esijcd5d ) { cnujs5nqdj *
const cistc0xkkc = & ( fwkgdm3c1z . rtm ) ; ok4zudj0xi = px1jo0vzii ;
eadohyivqj = o0esijcd5d ; { _ssFcnCallExecArgInfo args [ 2 ] ; uint16_T
ehs1o51g0z ; uint16_T pcdabp3oih ; ehs1o51g0z = ( uint16_T ) ( * px1jo0vzii ?
( int32_T ) ostyzfdpf00 . azldcrpzg0 : 0 ) ; pcdabp3oih = ( uint16_T ) ( *
o0esijcd5d ? ( int32_T ) ostyzfdpf00 . azldcrpzg0 : 0 ) ; args [ 0 ] .
dataPtr = ( void * ) & ehs1o51g0z ; args [ 1 ] . dataPtr = ( void * ) &
pcdabp3oih ; if ( slIsRapidAcceleratorSimulating ( ) ) { SeatHeaterMain (
ehs1o51g0z , pcdabp3oih ) ; } else { slcsInvokeSimulinkFunction ( cistc0xkkc
-> _mdlRefSfcnS , "SeatHeaterMain" , & args [ 0 ] ) ; } k2fqcecao2z .
ccwjoobfbm = 4 ; } } void ophhir0jhp ( void ) {
SeatHeatingControllerSetPosition_Start ( ) ; } void SeatHeating ( void ) { }
void lxevvanarv ( void ) { } void jfx5lmwkl3 ( SimStruct * _mdlRefSfcnS ,
int_T mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 , void * sysRanPtr
, int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { cnujs5nqdj *
const cistc0xkkc = & ( fwkgdm3c1z . rtm ) ; rt_InitInfAndNaN ( sizeof (
real_T ) ) ; ( void ) memset ( ( void * ) cistc0xkkc , 0 , sizeof (
cnujs5nqdj ) ) ; fm54wupk3a [ 0 ] = mdlref_TID0 ; fm54wupk3a [ 1 ] =
mdlref_TID1 ; fm54wupk3a [ 2 ] = mdlref_TID2 ; cistc0xkkc -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; ( void ) memset ( ( ( void * ) & ostyzfdpf00 ) , 0 , sizeof
( jhkr2zhblwd ) ) ; ( void ) memset ( ( void * ) & k2fqcecao2z , 0 , sizeof (
jkccabo2egd ) ) ; SeatHeating_InitializeDataMapInfo ( cistc0xkkc , sysRanPtr
, contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != (
NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & (
cistc0xkkc -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( cistc0xkkc ->
DataMapInfo . mmi , rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex (
cistc0xkkc -> DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void
mr_SeatHeating_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName ,
int_T * retVal ) { * retVal = 0 ; * retVal = 0 ; ssRegModelRefMdlInfo (
mdlRefSfcnS , modelName , rtMdlInfo_SeatHeating , 64 ) ; * retVal = 1 ; }
static void mr_SeatHeating_cacheDataAsMxArray ( mxArray * destArray , mwIndex
i , int j , const void * srcData , size_t numBytes ) ; static void
mr_SeatHeating_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_SeatHeating_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_SeatHeating_restoreDataFromMxArray ( void * destData , const mxArray
* srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_SeatHeating_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_SeatHeating_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int
j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_SeatHeating_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_SeatHeating_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_SeatHeating_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i
, int j , mwIndex offset , const void * srcData , size_t numBytes ) ; static
void mr_SeatHeating_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
{ uint8_T * varData = ( uint8_T * ) mxGetData ( mxGetFieldByNumber (
destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData [ offset * numBytes
] , ( const uint8_T * ) srcData , numBytes ) ; } static void
mr_SeatHeating_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_SeatHeating_restoreDataFromMxArrayWithOffset ( void * destData
, const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_SeatHeating_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray
, mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_SeatHeating_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_SeatHeating_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_SeatHeating_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_SeatHeating_GetDWork ( ) { static const char *
dwFieldNames [ 4 ] = { "ostyzfdpf00" , "k2fqcecao2z" , "NULL_PrevZCX" ,
"numPWorks" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 4 ,
dwFieldNames ) ; int_T numPWorks = 0 ; mr_SeatHeating_cacheDataAsMxArray (
ssDW , 0 , 0 , & ( ostyzfdpf00 ) , sizeof ( ostyzfdpf00 ) ) ; { static const
char * dwFieldNames [ 2 ] = { "k2fqcecao2z.ccwjoobfbm" ,
"k2fqcecao2z.he0i4epyoh" , } ; mxArray * rtdwData = mxCreateStructMatrix ( 1
, 1 , 2 , dwFieldNames ) ; mr_SeatHeating_cacheDataAsMxArray ( rtdwData , 0 ,
0 , & ( k2fqcecao2z . ccwjoobfbm ) , sizeof ( k2fqcecao2z . ccwjoobfbm ) ) ;
mr_SeatHeating_cacheDataAsMxArray ( rtdwData , 0 , 1 , & ( k2fqcecao2z .
he0i4epyoh ) , sizeof ( k2fqcecao2z . he0i4epyoh ) ) ; mxSetFieldByNumber (
ssDW , 0 , 1 , rtdwData ) ; } mxSetFieldByNumber ( ssDW , 0 , 3 ,
mxCreateDoubleScalar ( ( double ) numPWorks ) ) ; return ssDW ; } void
mr_SeatHeating_SetDWork ( const mxArray * ssDW ) {
mr_SeatHeating_restoreDataFromMxArray ( & ( ostyzfdpf00 ) , ssDW , 0 , 0 ,
sizeof ( ostyzfdpf00 ) ) ; { const mxArray * rtdwData = mxGetFieldByNumber (
ssDW , 0 , 1 ) ; mr_SeatHeating_restoreDataFromMxArray ( & ( k2fqcecao2z .
ccwjoobfbm ) , rtdwData , 0 , 0 , sizeof ( k2fqcecao2z . ccwjoobfbm ) ) ;
mr_SeatHeating_restoreDataFromMxArray ( & ( k2fqcecao2z . he0i4epyoh ) ,
rtdwData , 0 , 1 , sizeof ( k2fqcecao2z . he0i4epyoh ) ) ; } } void
mr_SeatHeating_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T
chksum [ 4 ] = { 2071141577U , 845027225U , 1025773980U , 1599342342U , } ;
slmrModelRefRegisterSimStateChecksum ( S , "SeatHeating" , & chksum [ 0 ] ) ;
}
