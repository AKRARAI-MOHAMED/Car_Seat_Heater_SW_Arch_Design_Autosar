#include "__cf_SeatSensingRight.h"
#ifndef RTW_HEADER_SeatSensingRight_h_
#define RTW_HEADER_SeatSensingRight_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef SeatSensingRight_COMMON_INCLUDES_
#define SeatSensingRight_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "SeatSensingRight_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "rt_nonfinite.h"
#ifndef SeatSensingRight_MDLREF_HIDE_CHILD_
typedef struct { int8_T hrxfas23a0 ; } lkptedb0obi ;
#endif
#ifndef SeatSensingRight_MDLREF_HIDE_CHILD_
struct hyyf3twa53_ { boolean_T P_0 ; } ;
#endif
#ifndef SeatSensingRight_MDLREF_HIDE_CHILD_
struct p1opxzzlyw { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 3 ] ; int_T systemTid [ 3 ] ;
} DataMapInfo ; } ;
#endif
#ifndef SeatSensingRight_MDLREF_HIDE_CHILD_
typedef struct { bjaifyrytb rtm ; } jmyjvg0y0ug ;
#endif
extern void d5tble1ktm ( boolean_T * hvw2tzyzk5 ) ; extern void
SeatSensingRight ( void ) ; extern void er25btevih ( SimStruct * _mdlRefSfcnS
, int_T mdlref_TID0 , int_T mdlref_TID1 , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_SeatSensingRight_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_SeatSensingRight_GetDWork
( ) ; extern void mr_SeatSensingRight_SetDWork ( const mxArray * ssDW ) ;
extern void mr_SeatSensingRight_RegisterSimStateChecksum ( SimStruct * S ) ;
extern void pkikjs55ho ( const boolean_T * oppzsxrvnb , boolean_T *
hvw2tzyzk5 ) ; extern const rtwCAPI_ModelMappingStaticInfo *
SeatSensingRight_GetCAPIStaticMap ( void ) ;
#ifndef SeatSensingRight_MDLREF_HIDE_CHILD_
extern jmyjvg0y0ug jmyjvg0y0u ;
#endif
#ifndef SeatSensingRight_MDLREF_HIDE_CHILD_
extern lkptedb0obi c1rse23wpah ;
#endif
#endif
