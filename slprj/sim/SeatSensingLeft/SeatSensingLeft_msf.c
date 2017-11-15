#include "__cf_SeatSensingLeft.h"
#if !defined(S_FUNCTION_NAME)
#define S_FUNCTION_NAME SeatSensingLeft_msf
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
#include "SeatSensingLeft_types.h"
#include "SeatSensingLeft.h"
#include "SeatSensingLeft_private.h"
MdlRefChildMdlRec childModels [ 1 ] = { "SeatSensingLeft" , "SeatSensingLeft"
, 1 } ; const char * rt_GetMatSignalLoggingFileName ( void ) { return NULL ;
} const char * rt_GetMatSigLogSelectorFileName ( void ) { return NULL ; }
boolean_T slIsRapidAcceleratorSimulating ( void ) { return false ; } void
rt_RAccelReplaceFromFilename ( const char * blockpath , char * fileName ) { (
void ) blockpath ; ( void ) fileName ; } void rt_RAccelReplaceToFilename (
const char * blockpath , char * fileName ) { ( void ) blockpath ; ( void )
fileName ; }
#define MDL_PROCESS_PARAMETERS
#if defined(MATLAB_MEX_FILE)
static void mdlProcessParameters ( SimStruct * S ) { boolean_T * o_o_B_2_1 =
( boolean_T * ) ssGetOutputPortSignal ( S , 0 ) ; }
#endif
ssFcnCallErr_T f4cppocnpc_sf ( SimStruct * S , int_T el , int_T idx ) { const
boolean_T * i_a0bshum1q1 = ( boolean_T * ) ssGetInputPortSignal ( S , 1 ) ;
boolean_T * o_o_B_2_1 = ( boolean_T * ) ssGetOutputPortSignal ( S , 0 ) ;
f4cppocnpc ( i_a0bshum1q1 , o_o_B_2_1 ) ; return SS_FCNCALL_NO_ERR ; } static
void mdlInitializeSizes ( SimStruct * S ) { ssSetNumSFcnParams ( S , 0 ) ;
ssFxpSetU32BitRegionCompliant ( S , 1 ) ; rt_InitInfAndNaN ( sizeof ( real_T
) ) ; if ( S -> mdlInfo -> genericFcn != ( NULL ) ) { _GenericFcn fcn = S ->
mdlInfo -> genericFcn ; real_T lifeSpan = 1.0 ; real_T startTime = 0.0 ;
real_T stopTime = 10.0 ; int_T hwSettings [ 15 ] ; int_T opSettings [ 2 ] ;
boolean_T concurrTaskSupport = 0 ; boolean_T hasDiscTs = 1 ; real_T fixedStep
= 0.1 ; ( fcn ) ( S , GEN_FCN_CHK_MODELREF_SOLVER_TYPE_EARLY , 2 , ( NULL ) )
; ( fcn ) ( S , GEN_FCN_MODELREF_RATE_GROUPED , 0 , ( NULL ) ) ; if ( ! ( fcn
) ( S , GEN_FCN_CHK_MODELREF_LIFE_SPAN , - 1 , & lifeSpan ) ) return ; if ( !
( fcn ) ( S , GEN_FCN_CHK_MODELREF_START_TIME , - 1 , & startTime ) ) return
; if ( ! ( fcn ) ( S , GEN_FCN_CHK_MODELREF_STOP_TIME , - 1 , & stopTime ) )
return ; hwSettings [ 0 ] = 8 ; hwSettings [ 1 ] = 16 ; hwSettings [ 2 ] = 32
; hwSettings [ 3 ] = 32 ; hwSettings [ 4 ] = 32 ; hwSettings [ 5 ] = 64 ;
hwSettings [ 6 ] = 32 ; hwSettings [ 7 ] = 2 ; hwSettings [ 8 ] = 0 ;
hwSettings [ 9 ] = 32 ; hwSettings [ 10 ] = 1 ; hwSettings [ 11 ] = 0 ;
hwSettings [ 12 ] = 2 ; hwSettings [ 13 ] = 64 ; hwSettings [ 14 ] = 0 ; if (
! ( fcn ) ( S , GEN_FCN_CHK_MODELREF_HARDWARE_SETTINGS , 15 , hwSettings ) )
return ; if ( ! ( fcn ) ( S , GEN_FCN_CHK_MODELREF_DATA_DICTIONARY , 0 , (
void * ) "" ) ) return ; slmrSetDataDictionarySet ( S , "" ) ; opSettings [ 0
] = 0 ; opSettings [ 1 ] = 0 ; if ( ! ( fcn ) ( S ,
GEN_FCN_CHK_MODELREF_OPTIM_SETTINGS , 2 , opSettings ) ) return ; if ( ! (
fcn ) ( S , GEN_FCN_CHK_MODELREF_CONCURRETNT_TASK_SUPPORT , ( int_T )
concurrTaskSupport , ( NULL ) ) ) return ; if ( ! ( fcn ) ( S ,
GEN_FCN_CHK_MODELREF_SOLVER_TYPE , 0 , & hasDiscTs ) ) return ; if ( ! ( fcn
) ( S , GEN_FCN_CHK_MODELREF_SOLVER_NAME , 0 , ( void * ) "FixedStepDiscrete"
) ) return ; if ( ! ( fcn ) ( S , GEN_FCN_CHK_MODELREF_SOLVER_MODE ,
SOLVER_MODE_SINGLETASKING , ( NULL ) ) ) return ; if ( ! ( fcn ) ( S ,
GEN_FCN_CHK_MODELREF_FIXED_STEP , 0 , & fixedStep ) ) return ; ( fcn ) ( S ,
GEN_FCN_CHK_MODELREF_FRAME_UPGRADE_DIAGNOSTICS , 2 , ( NULL ) ) ; }
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
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 1 , SS_BOOLEAN )
; } ssSetInputPortDirectFeedThrough ( S , 1 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 1 , 1 ) ; ssSetInputPortOptimOpts ( S
, 1 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 1 ,
false ) ; ssSetInputPortSampleTime ( S , 1 , - 1 ) ; if ( !
ssSetNumOutputPorts ( S , 1 ) ) return ; if ( !
ssSetOutputPortVectorDimension ( S , 0 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 0 , SS_BOOLEAN )
; } ssSetOutputPortSampleTime ( S , 0 , - 1 ) ;
ssSetOutputPortDiscreteValuedOutput ( S , 0 , 0 ) ; ssSetOutputPortOkToMerge
( S , 0 , SS_OK_TO_MERGE ) ; ssSetOutputPortICAttributes ( S , 0 , true ,
false , false ) ; ssSetModelRefOutputBlkIOUpdatedInAnotherExecContext ( S , 0
, true ) ; slmrModelRefSetOutputPortDrivenByNonCondExecStateflow ( S , 0 ,
false ) ; slmrModelRefSetOutputPortDrivenByResetITVS ( S , 0 , false ) ;
ssSetOutputPortOptimOpts ( S , 0 , SS_NOT_REUSABLE_AND_GLOBAL ) ;
slmrModelRefSetNumInportFcnCallPortGroups ( S , 1 ) ;
ssModelRefInitNewFcnCallPortGroup ( S ) ;
ssModelRefFcnCallPortGroupSetFcnCallInputPort ( S , 0 ) ;
slmrModelRefFcnCallPortGroupSetServiceName ( S , "" ) ;
slmrModelRefFcnCallPortGroupSetIsServerFcnCall ( S , false ) ;
ssModelRefPortGroupAddDataInputPort ( S , 1 ) ;
ssModelRefPortGroupAddDataOutputPort ( S , 0 ) ;
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
, f4cppocnpc_sf ) ; { real_T minValue = rtMinusInf ; real_T maxValue = rtInf
; ssSetModelRefInputSignalDesignMin ( S , 0 , & minValue ) ;
ssSetModelRefInputSignalDesignMax ( S , 0 , & maxValue ) ; } { real_T
minValue = rtMinusInf ; real_T maxValue = rtInf ;
ssSetModelRefInputSignalDesignMin ( S , 1 , & minValue ) ;
ssSetModelRefInputSignalDesignMax ( S , 1 , & maxValue ) ; } { real_T
minValue = rtMinusInf ; real_T maxValue = rtInf ;
ssSetModelRefOutputSignalDesignMin ( S , 0 , & minValue ) ;
ssSetModelRefOutputSignalDesignMax ( S , 0 , & maxValue ) ; }
ssSetSimStateCompliance ( S , USE_CUSTOM_SIM_STATE ) ;
mr_SeatSensingLeft_RegisterSimStateChecksum ( S ) ; { static ssRTWStorageType
storageClass [ 3 ] = { SS_RTW_STORAGE_AUTO , SS_RTW_STORAGE_AUTO ,
SS_RTW_STORAGE_AUTO } ; ssSetModelRefPortRTWStorageClasses ( S , storageClass
) ; } ssSetModelRefSignalLoggingSaveFormat ( S , SS_DATASET_FORMAT ) ;
slmrSetModelRefLoggingSaveFormat ( S , SS_STRUCTUREWITHTIME_FORMAT ) ;
ssSetNumSampleTimes ( S , PORT_BASED_SAMPLE_TIMES ) ; ssSetNumRWork ( S , 0 )
; ssSetNumIWork ( S , 0 ) ; ssSetNumPWork ( S , 0 ) ; ssSetNumModes ( S , 0 )
; { int_T zcsIdx = 0 ; } ssSetOutputPortIsNonContinuous ( S , 0 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 0 , 0 ) ;
ssSetInputPortIsNotDerivPort ( S , 0 , 1 ) ; ssSetInputPortIsNotDerivPort ( S
, 1 , 1 ) ; ssSetModelReferenceSampleTimeInheritanceRule ( S ,
DISALLOW_SAMPLE_TIME_INHERITANCE ) ; ssSetOptimizeModelRefInitCode ( S , 1 )
; ssSetModelReferenceConsistentOutportInitialization ( S , true ) ;
ssSetModelRefIsExportFcnDiagram ( S , true ) ; ssSetAcceptsFcnCallInputs ( S
) ; ssSetModelReferenceNormalModeSupport ( S ,
MDL_START_AND_MDL_PROCESS_PARAMS_OK ) ; ssSupportsMultipleExecInstances ( S ,
false ) ; ssRegisterMsgForNotSupportingMultiExecInst ( S ,
 "<diag_root><diag id=\"Simulink:blocks:BlockDoesNotSupportMultiExecInstances\"><arguments><arg type=\"encoded\">UwBlAGEAdABTAGUAbgBzAGkAbgBnAEwAZQBmAHQALwBTAGUAYQB0AFMAZQBuAHMAbwByAE0AYQBpAG4AAAA=</arg><arg type=\"encoded\">PABfAF8AaQBpAFMAUwBfAF8APgA8AC8AXwBfAGkAaQBTAFMAXwBfAD4AAAA=</arg><arg type=\"encoded\">PABfAF8AaQB0AGUAcgBCAGwAawBfAF8APgA8AC8AXwBfAGkAdABlAHIAQgBsAGsAXwBfAD4AAAA=</arg></arguments></diag>\n</diag_root>"
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
mr_SeatSensingLeft_MdlInfoRegFcn ( S , "SeatSensingLeft" , & retVal ) ; if (
! retVal ) return ; }
#endif
ssSetNumDWork ( S , 0 ) ; slmrSetDataTypeOverrideSettings ( S , 0 , 0 ) ; {
size_t allStructs [ ] = { 0 , 2 , 1 , 2 } ; slmrPortSampleTimeMapAddStructs (
S , 1 , allStructs ) ; } ssSetSimulinkVersionGeneratedIn ( S , "8.5" ) ;
ssSetModelRefHasEnablePort ( S , 0 ) ; } static void mdlInitializeSampleTimes
( SimStruct * S ) { return ; }
#define MDL_SET_WORK_WIDTHS
static void mdlSetWorkWidths ( SimStruct * S ) { if ( S -> mdlInfo ->
genericFcn != ( NULL ) ) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ;
ssSetSignalSizesComputeType ( S , SS_VARIABLE_SIZE_FROM_INPUT_VALUE_AND_SIZE
) ; } { static const char * toFileNames [ ] = { "" } ; static const char *
fromFileNames [ ] = { "" } ; if ( ! ssSetModelRefFromFiles ( S , 0 ,
fromFileNames ) ) return ; if ( ! ssSetModelRefToFiles ( S , 0 , toFileNames
) ) return ; } }
#define MDL_START
static void mdlStart ( SimStruct * S ) { boolean_T * o_o_B_2_1 = ( boolean_T
* ) ssGetOutputPortSignal ( S , 0 ) ; void * sysRanPtr = ( NULL ) ; int
sysTid = 0 ; ssGetContextSysRanBCPtr ( S , & sysRanPtr ) ; ssGetContextSysTid
( S , & sysTid ) ; if ( sysTid == CONSTANT_TID ) { sysTid = 0 ; } c5r5owjbgn
( S , ssGetSampleTimeTaskID ( S , 0 ) , slmrGetParentTidFromExpFcnMdlChildTid
( S , 1 ) , sysRanPtr , sysTid , ( NULL ) , ( NULL ) , 0 , - 1 ) ;
ssSetModelMappingInfoPtr ( S , & ( kknrxcngex . rtm . DataMapInfo . mmi ) ) ;
if ( S -> mdlInfo -> genericFcn != ( NULL ) ) { _GenericFcn fcn = S ->
mdlInfo -> genericFcn ; } cz42yur5l2 ( o_o_B_2_1 ) ; } static void mdlOutputs
( SimStruct * S , int_T tid ) { if ( tid != CONSTANT_TID ) { SeatSensingLeft
( ) ; } } static void mdlTerminate ( SimStruct * S ) { return ; }
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
mxArray * mdlrefDW = mr_SeatSensingLeft_GetDWork ( ) ; if ( NULL != mdlrefDW
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
( localX , & rawData [ 0 ] , numBytes ) ; } mr_SeatSensingLeft_SetDWork (
mxGetFieldByNumber ( ss , 0 , 1 ) ) ; ssSetTNext ( S , ( time_T ) mxGetScalar
( mxGetFieldByNumber ( ss , 0 , 3 ) ) ) ; ssSetTNextTid ( S , ( int_T )
mxGetScalar ( mxGetFieldByNumber ( ss , 0 , 4 ) ) ) ; }
#ifdef MATLAB_MEX_FILE 
#include "simulink.c"
#include "fixedpoint.c"
#else
#error Assertion failed: file must be compiled as a MEX-file
#endif
