#include "__cf_SeatSensingLeft.h"
#ifndef RTW_HEADER_SeatSensingLeft_h_
#define RTW_HEADER_SeatSensingLeft_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef SeatSensingLeft_COMMON_INCLUDES_
#define SeatSensingLeft_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "SeatSensingLeft_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "rt_nonfinite.h"
#ifndef SeatSensingLeft_MDLREF_HIDE_CHILD_
typedef struct { int8_T cg5ntsybew ; } iytbez3uizf ;
#endif
#ifndef SeatSensingLeft_MDLREF_HIDE_CHILD_
struct cu2snqs3dq_ { boolean_T P_0 ; } ;
#endif
#ifndef SeatSensingLeft_MDLREF_HIDE_CHILD_
struct jdhq4epszs { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 3 ] ; int_T systemTid [ 3 ] ;
} DataMapInfo ; } ;
#endif
#ifndef SeatSensingLeft_MDLREF_HIDE_CHILD_
typedef struct { jmpkia5fbb rtm ; } kknrxcngexm ;
#endif
extern void cz42yur5l2 ( boolean_T * ghyeh3ivb1 ) ; extern void
SeatSensingLeft ( void ) ; extern void c5r5owjbgn ( SimStruct * _mdlRefSfcnS
, int_T mdlref_TID0 , int_T mdlref_TID1 , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_SeatSensingLeft_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_SeatSensingLeft_GetDWork (
) ; extern void mr_SeatSensingLeft_SetDWork ( const mxArray * ssDW ) ; extern
void mr_SeatSensingLeft_RegisterSimStateChecksum ( SimStruct * S ) ; extern
void f4cppocnpc ( const boolean_T * mo5wcfyitm , boolean_T * ghyeh3ivb1 ) ;
extern const rtwCAPI_ModelMappingStaticInfo *
SeatSensingLeft_GetCAPIStaticMap ( void ) ;
#ifndef SeatSensingLeft_MDLREF_HIDE_CHILD_
extern kknrxcngexm kknrxcngex ;
#endif
#ifndef SeatSensingLeft_MDLREF_HIDE_CHILD_
extern iytbez3uizf j3saetzrysp ;
#endif
#endif
