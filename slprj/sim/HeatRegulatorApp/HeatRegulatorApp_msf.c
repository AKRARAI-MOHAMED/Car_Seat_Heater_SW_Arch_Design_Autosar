#include "__cf_HeatRegulatorApp.h"
#if !defined(S_FUNCTION_NAME)
#define S_FUNCTION_NAME HeatRegulatorApp_msf
#endif
#define S_FUNCTION_LEVEL 2
#if !defined(RTW_GENERATED_S_FUNCTION)
#define RTW_GENERATED_S_FUNCTION
#endif
#define S_FUNCTION_EXPORTS_FUNCTION_CALLS
#define MODELREF_EXPORTS_FUNCTION_CALLS
#include <stdio.h>
#include <math.h>
#include "simstruc.h"
#include "fixedpoint.h"
#define rt_logging_h
#include "HeatRegulatorApp_types.h"
#include "HeatRegulatorApp.h"
#include "HeatRegulatorApp_private.h"
MdlRefChildMdlRec childModels [ 1 ] = { "HeatRegulatorApp" ,
"HeatRegulatorApp" , 1 } ; const char * rt_GetMatSignalLoggingFileName ( void
) { return NULL ; } const char * rt_GetMatSigLogSelectorFileName ( void ) {
return NULL ; } boolean_T slIsRapidAcceleratorSimulating ( void ) { return
false ; } void rt_RAccelReplaceFromFilename ( const char * blockpath , char *
fileName ) { ( void ) blockpath ; ( void ) fileName ; } void
rt_RAccelReplaceToFilename ( const char * blockpath , char * fileName ) { (
void ) blockpath ; ( void ) fileName ; } ssFcnCallErr_T lkakj4swzu_sf (
SimStruct * S , int_T el , int_T idx ) { const uint16_T * i_ROOT_U1 = (
uint16_T * ) ssGetInputPortSignal ( S , 1 ) ; lkakj4swzu ( i_ROOT_U1 ) ;
return SS_FCNCALL_NO_ERR ; } void SeatHeatingControllerSetPosition ( uint16_T
ain0 ) { } static void mdlRegisterSimulinkFunctions ( SimStruct * S ) { { int
arginDims0 [ 2 ] = { 1 , 1 } ; DimsInfo_T arginDims [ 1 ] ; DimsInfo_T *
argoutDims = NULL ; _ssFcnCallArgInfo arginSpecs [ 1 ] ; _ssFcnCallArgInfo *
argoutSpecs = NULL ; const char * refBlockPaths [ 1 ] ; const char * argNames
[ 1 ] ; const char * argIndices [ 1 ] ; _ssFcnCallInfo argSpec ;
refBlockPaths [ 0 ] =
"HeatRegulatorApp/HeatRegulatorMain_sys/Position_SetPosition" ; argIndices [
0 ] = "I0" ; argNames [ 0 ] = "Position" ; arginDims [ 0 ] . width = 1 ;
arginDims [ 0 ] . numDims = 2 ; arginDims [ 0 ] . dims = arginDims0 ;
arginDims [ 0 ] . nextSigDims = 0 ; arginSpecs [ 0 ] . dimsInfo = & arginDims
[ 0 ] ;
#if defined (MATLAB_MEX_FILE)
{ DTypeId dataTypeIdReg = ssRegisterDataTypeFxpFSlopeFixExpBias ( S , 0 , 10
, 1.0 , 0 , 0.0 , 0 ) ; arginSpecs [ 0 ] . dataType = dataTypeIdReg ; }
#endif
arginSpecs [ 0 ] . argumentType = 1 ; arginSpecs [ 0 ] . complexSignal = 0 ;
slcsInitFcnCallInfo ( & argSpec , 1 , 0 , & arginSpecs [ 0 ] , & argoutSpecs
[ 0 ] ) ; slcsSetArgumentIndices ( & argSpec , argNames , argIndices ) ;
slcsSetReturnArgIndex ( & argSpec , - 1 ) ; slcsSetReturnArgName ( & argSpec
, "" ) ; slcsSetCallerBlockPaths ( & argSpec , 1 , refBlockPaths ) ;
slcsRegisterCallerBlock ( S , "SeatHeatingControllerSetPosition" , argSpec )
; } } static void mdlInitializeSizes ( SimStruct * S ) { ssSetNumSFcnParams (
S , 0 ) ; ssFxpSetU32BitRegionCompliant ( S , 1 ) ; rt_InitInfAndNaN ( sizeof
( real_T ) ) ; if ( S -> mdlInfo -> genericFcn != ( NULL ) ) { _GenericFcn
fcn = S -> mdlInfo -> genericFcn ; real_T lifeSpan = 1.0 ; real_T startTime =
0.0 ; real_T stopTime = 10.0 ; int_T hwSettings [ 15 ] ; int_T opSettings [ 2
] ; boolean_T concurrTaskSupport = 0 ; boolean_T hasDiscTs = 1 ; real_T
fixedStep = 0.2 ; ( fcn ) ( S , GEN_FCN_CHK_MODELREF_SOLVER_TYPE_EARLY , 2 ,
( NULL ) ) ; ( fcn ) ( S , GEN_FCN_MODELREF_RATE_GROUPED , 0 , ( NULL ) ) ;
if ( ! ( fcn ) ( S , GEN_FCN_CHK_MODELREF_LIFE_SPAN , - 1 , & lifeSpan ) )
return ; if ( ! ( fcn ) ( S , GEN_FCN_CHK_MODELREF_START_TIME , - 1 , &
startTime ) ) return ; if ( ! ( fcn ) ( S , GEN_FCN_CHK_MODELREF_STOP_TIME ,
- 1 , & stopTime ) ) return ; hwSettings [ 0 ] = 8 ; hwSettings [ 1 ] = 16 ;
hwSettings [ 2 ] = 32 ; hwSettings [ 3 ] = 32 ; hwSettings [ 4 ] = 32 ;
hwSettings [ 5 ] = 64 ; hwSettings [ 6 ] = 32 ; hwSettings [ 7 ] = 2 ;
hwSettings [ 8 ] = 0 ; hwSettings [ 9 ] = 32 ; hwSettings [ 10 ] = 1 ;
hwSettings [ 11 ] = 0 ; hwSettings [ 12 ] = 2 ; hwSettings [ 13 ] = 64 ;
hwSettings [ 14 ] = 0 ; if ( ! ( fcn ) ( S ,
GEN_FCN_CHK_MODELREF_HARDWARE_SETTINGS , 15 , hwSettings ) ) return ; if ( !
( fcn ) ( S , GEN_FCN_CHK_MODELREF_DATA_DICTIONARY , 0 , ( void * ) "" ) )
return ; slmrSetDataDictionarySet ( S , "" ) ; opSettings [ 0 ] = 0 ;
opSettings [ 1 ] = 0 ; if ( ! ( fcn ) ( S ,
GEN_FCN_CHK_MODELREF_OPTIM_SETTINGS , 2 , opSettings ) ) return ; if ( ! (
fcn ) ( S , GEN_FCN_CHK_MODELREF_CONCURRETNT_TASK_SUPPORT , ( int_T )
concurrTaskSupport , ( NULL ) ) ) return ; if ( ! ( fcn ) ( S ,
GEN_FCN_CHK_MODELREF_SOLVER_TYPE , 0 , & hasDiscTs ) ) return ; if ( ! ( fcn
) ( S , GEN_FCN_CHK_MODELREF_SOLVER_NAME , 0 , ( void * ) "FixedStepDiscrete"
) ) return ; if ( ! ( fcn ) ( S , GEN_FCN_CHK_MODELREF_SOLVER_MODE ,
SOLVER_MODE_SINGLETASKING , ( NULL ) ) ) return ; if ( ! ( fcn ) ( S ,
GEN_FCN_CHK_MODELREF_FIXED_STEP , 0 , & fixedStep ) ) return ; ( fcn ) ( S ,
GEN_FCN_CHK_MODELREF_FRAME_UPGRADE_DIAGNOSTICS , 2 , ( NULL ) ) ; } { static
const char * globalVarList [ ] = { "Int32" , "P_Int32" } ;
ssRegModelRefGlobalVarUsage ( S , 2 , ( void * ) globalVarList ) ; }
ssSetRTWGeneratedSFcn ( S , 2 ) ; ssSetNumContStates ( S , 0 ) ;
ssSetNumDiscStates ( S , 0 ) ; { const char * modelNames [ ] = { "" } ; const
size_t numModelNames = 0 ; slmrSetHasNonBuiltinLoggedState ( S ,
numModelNames , modelNames ) ; } if ( ! ssSetNumInputPorts ( S , 2 ) ) return
; if ( ! ssSetInputPortVectorDimension ( S , 0 , 1 ) ) return ;
ssSetInputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 0 , FRAME_NO ) ; ssSetInputPortDataType ( S , 0
, SS_FCN_CALL ) ; ssSetInputPortDirectFeedThrough ( S , 0 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 0 , 1 ) ; ssSetInputPortOptimOpts ( S
, 0 , SS_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 0 , false )
; ssSetInputPortSampleTime ( S , 0 , - 1 ) ; if ( !
ssSetInputPortVectorDimension ( S , 1 , 1 ) ) return ;
ssSetInputPortDimensionsMode ( S , 1 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 1 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
{ DTypeId dataTypeIdReg = ssRegisterDataTypeFxpFSlopeFixExpBias ( S , 0 , 10
, 1.0 , 0 , 0.0 , 0 ) ; ssSetInputPortDataType ( S , 1 , dataTypeIdReg ) ; }
#endif
} ssSetInputPortDirectFeedThrough ( S , 1 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 1 , 1 ) ; ssSetInputPortOptimOpts ( S
, 1 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 1 ,
false ) ; ssSetInputPortSampleTime ( S , 1 , - 1 ) ; if ( !
ssSetNumOutputPorts ( S , 0 ) ) return ;
slmrModelRefSetNumInportFcnCallPortGroups ( S , 1 ) ;
ssModelRefInitNewFcnCallPortGroup ( S ) ;
ssModelRefFcnCallPortGroupSetFcnCallInputPort ( S , 0 ) ;
slmrModelRefFcnCallPortGroupAddCallerName ( S ,
"SeatHeatingControllerSetPosition" ) ;
slmrModelRefFcnCallPortGroupSetServiceName ( S , "" ) ;
slmrModelRefFcnCallPortGroupSetIsServerFcnCall ( S , false ) ;
ssModelRefPortGroupAddDataInputPort ( S , 1 ) ;
ssModelRefFcnCallPortGroupSetAsyncTid ( S , 1 ) ;
ssModelRefFcnCallPortGroupSetHasAsyncTaskPriority ( S , true ) ;
ssModelRefFcnCallPortGroupSetAsyncTaskPriority ( S , 40 ) ;
ssModelRefFcnCallPortGroupSetIsAsync ( S , true ) ;
ssModelRefFcnCallPortGroupSetHasEnableMethod ( S , true ) ;
ssModelRefFcnCallPortGroupSetHasDisableMethod ( S , true ) ;
ssModelRefFcnCallPortGroupSetNeedAbsoluteTime ( S , false ) ;
slmrModelRefFcnCallPortGroupSetNeedRunTimeCheck ( S , false ) ;
slmrModelRefFcnCallPortGroupSetSpecifiedTs ( S , - 1.000000 , 0.000000 ) ;
ssModelRefInitDataPortGroup ( S ) ; slmrModelRefInitPortGroupsInSameRate ( S
) ; slmrModelRefSetHasDescExpFcnMdl ( S , false ) ; ssExportOutputFcn ( S , 0
, lkakj4swzu_sf ) ; { real_T minValue = rtMinusInf ; real_T maxValue = rtInf
; ssSetModelRefInputSignalDesignMin ( S , 0 , & minValue ) ;
ssSetModelRefInputSignalDesignMax ( S , 0 , & maxValue ) ; } { real_T
minValue = rtMinusInf ; real_T maxValue = rtInf ;
ssSetModelRefInputSignalDesignMin ( S , 1 , & minValue ) ;
ssSetModelRefInputSignalDesignMax ( S , 1 , & maxValue ) ; }
ssSetSimStateCompliance ( S , USE_CUSTOM_SIM_STATE ) ;
mr_HeatRegulatorApp_RegisterSimStateChecksum ( S ) ; { static
ssRTWStorageType storageClass [ 2 ] = { SS_RTW_STORAGE_AUTO ,
SS_RTW_STORAGE_AUTO } ; ssSetModelRefPortRTWStorageClasses ( S , storageClass
) ; } ssSetModelRefSignalLoggingSaveFormat ( S , SS_DATASET_FORMAT ) ;
slmrSetModelRefLoggingSaveFormat ( S , SS_STRUCTUREWITHTIME_FORMAT ) ;
ssSetNumSampleTimes ( S , PORT_BASED_SAMPLE_TIMES ) ; ssSetNumRWork ( S , 0 )
; ssSetNumIWork ( S , 0 ) ; ssSetNumPWork ( S , 0 ) ; ssSetNumModes ( S , 0 )
; { int_T zcsIdx = 0 ; } ssSetInputPortIsNotDerivPort ( S , 0 , 1 ) ;
ssSetInputPortIsNotDerivPort ( S , 1 , 1 ) ;
ssSetModelReferenceSampleTimeInheritanceRule ( S ,
DISALLOW_SAMPLE_TIME_INHERITANCE ) ; ssSetOptimizeModelRefInitCode ( S , 1 )
; ssSetModelReferenceConsistentOutportInitialization ( S , true ) ;
ssSetModelRefIsExportFcnDiagram ( S , true ) ; ssSetAcceptsFcnCallInputs ( S
) ; ssSetModelReferenceNormalModeSupport ( S ,
MDL_START_AND_MDL_PROCESS_PARAMS_OK ) ; ssSupportsMultipleExecInstances ( S ,
false ) ; ssRegisterMsgForNotSupportingMultiExecInst ( S ,
 "<diag_root><diag id=\"Simulink:blocks:BlockDoesNotSupportMultiExecInstances\"><arguments><arg type=\"encoded\">SABlAGEAdABSAGUAZwB1AGwAYQB0AG8AcgBBAHAAcAAvAEgAZQBhAHQAUgBlAGcAdQBsAGEAdABvAHIATQBhAGkAbgAAAA==</arg><arg type=\"encoded\">PABfAF8AaQBpAFMAUwBfAF8APgA8AC8AXwBfAGkAaQBTAFMAXwBfAD4AAAA=</arg><arg type=\"encoded\">PABfAF8AaQB0AGUAcgBCAGwAawBfAF8APgA8AC8AXwBfAGkAdABlAHIAQgBsAGsAXwBfAD4AAAA=</arg></arguments></diag>\n</diag_root>"
) ; ssHasStateInsideForEachSS ( S , false ) ; ssSetModelRefHasParforForEachSS
( S , false ) ; ssSetModelRefHasVariantModelOrSubsystem ( S , false ) ;
ssSetNumAsyncTs ( S , 1 ) ; ssSetOptions ( S ,
SS_OPTION_SUPPORTS_ALIAS_DATA_TYPES | SS_OPTION_DISALLOW_CONSTANT_SAMPLE_TIME
| SS_OPTION_EXCEPTION_FREE_CODE | SS_OPTION_WORKS_WITH_CODE_REUSE ) ; if ( S
-> mdlInfo -> genericFcn != ( NULL ) ) { if ( ! ssRegModelRefChildModel ( S ,
1 , childModels ) ) { return ; } }
#if SS_SFCN_FOR_SIM
if ( S -> mdlInfo -> genericFcn != ( NULL ) && ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { int_T retVal = 1 ;
mr_HeatRegulatorApp_MdlInfoRegFcn ( S , "HeatRegulatorApp" , & retVal ) ; if
( ! retVal ) return ; }
#endif
ssSetNumDWork ( S , 0 ) ; slmrSetDataTypeOverrideSettings ( S , 0 , 0 ) ; {
size_t allStructs [ ] = { 0 , 1 , 1 } ; slmrPortSampleTimeMapAddStructs ( S ,
1 , allStructs ) ; } mdlRegisterSimulinkFunctions ( S ) ;
ssSetSimulinkVersionGeneratedIn ( S , "8.5" ) ; ssSetModelRefHasEnablePort (
S , 0 ) ; } static void mdlInitializeSampleTimes ( SimStruct * S ) { return ;
}
#define MDL_SET_WORK_WIDTHS
static void mdlSetWorkWidths ( SimStruct * S ) { if ( S -> mdlInfo ->
genericFcn != ( NULL ) ) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ;
ssSetSignalSizesComputeType ( S , SS_VARIABLE_SIZE_FROM_INPUT_VALUE_AND_SIZE
) ; } { static const char * toFileNames [ ] = { "" } ; static const char *
fromFileNames [ ] = { "" } ; if ( ! ssSetModelRefFromFiles ( S , 0 ,
fromFileNames ) ) return ; if ( ! ssSetModelRefToFiles ( S , 0 , toFileNames
) ) return ; } }
#define MDL_START
static void mdlStart ( SimStruct * S ) { void * sysRanPtr = ( NULL ) ; int
sysTid = 0 ; ssGetContextSysRanBCPtr ( S , & sysRanPtr ) ; ssGetContextSysTid
( S , & sysTid ) ; if ( sysTid == CONSTANT_TID ) { sysTid = 0 ; } hi1hxyp1ws
( S , ssGetSampleTimeTaskID ( S , 0 ) , slmrGetParentTidFromExpFcnMdlChildTid
( S , 1 ) , sysRanPtr , sysTid , ( NULL ) , ( NULL ) , 0 , - 1 ) ;
ssSetModelMappingInfoPtr ( S , & ( erxsgasvu0 . rtm . DataMapInfo . mmi ) ) ;
if ( S -> mdlInfo -> genericFcn != ( NULL ) ) { _GenericFcn fcn = S ->
mdlInfo -> genericFcn ; } } static void mdlOutputs ( SimStruct * S , int_T
tid ) { if ( tid != CONSTANT_TID ) { HeatRegulatorApp ( ) ; } } static void
mdlTerminate ( SimStruct * S ) { return ; }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static mxArray * mdlGetSimState ( SimStruct * S ) { static const char *
dwFieldNames [ 5 ] = { "localX" , "mdlrefDW" , "numPWorks" , "tNext" ,
"tNextTid" , } ; mxArray * ss = mxCreateStructMatrix ( 1 , 1 , 5 ,
dwFieldNames ) ; { const real_T * localX = ( const real_T * ) ssGetContStates
( S ) ; const int_T numStates = ssGetNumContStates ( S ) ; const size_t
numBytes = numStates * sizeof ( real_T ) ; mxArray * storedX =
mxCreateNumericMatrix ( 1 , numBytes , mxUINT8_CLASS , mxREAL ) ; UINT8_T *
rawData = ( UINT8_T * ) mxGetData ( storedX ) ; memcpy ( & rawData [ 0 ] ,
localX , numBytes ) ; mxSetFieldByNumber ( ss , 0 , 0 , storedX ) ; } {
mxArray * mdlrefDW = mr_HeatRegulatorApp_GetDWork ( ) ; if ( NULL != mdlrefDW
) { mxSetFieldByNumber ( ss , 0 , 2 , mxDuplicateArray ( mxGetFieldByNumber (
mdlrefDW , 0 , 3 ) ) ) ; } else { mxSetFieldByNumber ( ss , 0 , 2 ,
mxCreateDoubleScalar ( 0.0 ) ) ; } mxSetFieldByNumber ( ss , 0 , 1 , mdlrefDW
) ; } mxSetFieldByNumber ( ss , 0 , 3 , mxCreateDoubleScalar ( ( double )
ssGetTNext ( S ) ) ) ; mxSetFieldByNumber ( ss , 0 , 4 , mxCreateDoubleScalar
( ( double ) ssGetTNextTid ( S ) ) ) ; return ss ; }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static void mdlSetSimState ( SimStruct * S , const mxArray * ss ) { { real_T
* localX = ( real_T * ) ssGetContStates ( S ) ; const int_T numStates =
ssGetNumContStates ( S ) ; const size_t numBytes = numStates * sizeof (
real_T ) ; const mxArray * storedX = mxGetFieldByNumber ( ss , 0 , 0 ) ;
const UINT8_T * rawData = ( const UINT8_T * ) mxGetData ( storedX ) ; memcpy
( localX , & rawData [ 0 ] , numBytes ) ; } mr_HeatRegulatorApp_SetDWork (
mxGetFieldByNumber ( ss , 0 , 1 ) ) ; ssSetTNext ( S , ( time_T ) mxGetScalar
( mxGetFieldByNumber ( ss , 0 , 3 ) ) ) ; ssSetTNextTid ( S , ( int_T )
mxGetScalar ( mxGetFieldByNumber ( ss , 0 , 4 ) ) ) ; }
#ifdef MATLAB_MEX_FILE 
#include "simulink.c"
#include "fixedpoint.c"
#else
#error Assertion failed: file must be compiled as a MEX-file
#endif
