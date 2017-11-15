#include "__cf_FullApp_Harness1.h"
#include <math.h>
#include "FullApp_Harness1_acc.h"
#include "FullApp_Harness1_acc_private.h"
#include <stdio.h>
#include "simstruc.h"
#include "fixedpoint.h"
#define CodeFormat S-Function
#define AccDefine1 Accelerator_S-Function
static void mdlOutputs ( SimStruct * S , int_T tid ) { l5e4nwdg4d * _rtB ;
kwjh0prdea * _rtP ; b0d5mbliv0 * _rtDW ; _rtDW = ( ( b0d5mbliv0 * )
ssGetRootDWork ( S ) ) ; _rtP = ( ( kwjh0prdea * ) ssGetDefaultParam ( S ) )
; _rtB = ( ( l5e4nwdg4d * ) _ssGetBlockIO ( S ) ) ; _rtB -> b0k3l03fh3 = _rtP
-> P_1 ; _rtB -> nbjkpeckhy = _rtP -> P_2 ; _rtB -> c42ds0f2tz = _rtP -> P_0
; ssCallAccelRunBlock ( S , 0 , 3 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 0 , 4 , SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock
( S , 0 , 5 , SS_CALL_MDL_OUTPUTS ) ; UNUSED_PARAMETER ( tid ) ; }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { l5e4nwdg4d * _rtB ;
_rtB = ( ( l5e4nwdg4d * ) _ssGetBlockIO ( S ) ) ; ssCallAccelRunBlock ( S , 0
, 3 , SS_CALL_MDL_UPDATE ) ; UNUSED_PARAMETER ( tid ) ; } static void
mdlInitializeSizes ( SimStruct * S ) { ssSetChecksumVal ( S , 0 , 2396690651U
) ; ssSetChecksumVal ( S , 1 , 2474703985U ) ; ssSetChecksumVal ( S , 2 ,
2242104338U ) ; ssSetChecksumVal ( S , 3 , 2957540230U ) ; { mxArray *
slVerStructMat = NULL ; mxArray * slStrMat = mxCreateString ( "simulink" ) ;
char slVerChar [ 10 ] ; int status = mexCallMATLAB ( 1 , & slVerStructMat , 1
, & slStrMat , "ver" ) ; if ( status == 0 ) { mxArray * slVerMat = mxGetField
( slVerStructMat , 0 , "Version" ) ; if ( slVerMat == NULL ) { status = 1 ; }
else { status = mxGetString ( slVerMat , slVerChar , 10 ) ; } }
mxDestroyArray ( slStrMat ) ; mxDestroyArray ( slVerStructMat ) ; if ( (
status == 1 ) || ( strcmp ( slVerChar , "8.5" ) != 0 ) ) { return ; } }
ssSetOptions ( S , SS_OPTION_EXCEPTION_FREE_CODE ) ; if ( ssGetSizeofDWork (
S ) != sizeof ( b0d5mbliv0 ) ) { ssSetErrorStatus ( S ,
"Unexpected error: Internal DWork sizes do "
"not match for accelerator mex file." ) ; } if ( ssGetSizeofGlobalBlockIO ( S
) != sizeof ( l5e4nwdg4d ) ) { ssSetErrorStatus ( S ,
"Unexpected error: Internal BlockIO sizes do "
"not match for accelerator mex file." ) ; } { int ssSizeofParams ;
ssGetSizeofParams ( S , & ssSizeofParams ) ; if ( ssSizeofParams != sizeof (
kwjh0prdea ) ) { static char msg [ 256 ] ; sprintf ( msg ,
"Unexpected error: Internal Parameters sizes do "
"not match for accelerator mex file." ) ; } } _ssSetDefaultParam ( S , (
real_T * ) & m2juecugf0 ) ; } static void mdlInitializeSampleTimes (
SimStruct * S ) { } static void mdlTerminate ( SimStruct * S ) { }
#include "simulink.c"
