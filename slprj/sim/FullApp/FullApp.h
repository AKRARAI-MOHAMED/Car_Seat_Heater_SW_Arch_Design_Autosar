#include "__cf_FullApp.h"
#ifndef RTW_HEADER_FullApp_h_
#define RTW_HEADER_FullApp_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef FullApp_COMMON_INCLUDES_
#define FullApp_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "FullApp_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#ifndef FullApp_MDLREF_HIDE_CHILD_
#define SeatSensingRight_MDLREF_HIDE_CHILD_
#include "SeatSensingRight.h"
#endif
#ifndef FullApp_MDLREF_HIDE_CHILD_
#define SeatSensingLeft_MDLREF_HIDE_CHILD_
#include "SeatSensingLeft.h"
#endif
#ifndef FullApp_MDLREF_HIDE_CHILD_
#define SeatHeating_MDLREF_HIDE_CHILD_
#include "SeatHeating.h"
#endif
#ifndef FullApp_MDLREF_HIDE_CHILD_
#define SeatHeaterapp_MDLREF_HIDE_CHILD_
#include "SeatHeaterapp.h"
#endif
#ifndef FullApp_MDLREF_HIDE_CHILD_
#define HeatRegulatorApp_MDLREF_HIDE_CHILD_
#include "HeatRegulatorApp.h"
#endif
#include "rt_nonfinite.h"
#ifndef FullApp_MDLREF_HIDE_CHILD_
typedef struct { boolean_T bvafdvyd5i ; boolean_T d0mddqthrf ; } aqoxgt3qygj
;
#endif
#ifndef FullApp_MDLREF_HIDE_CHILD_
typedef struct { int8_T irdranm0i2 ; uint8_T nzpu1y1fvo ; uint8_T bbkzg1mu5h
; uint8_T p5nlz5eczt ; } bnv4syr3d0y ;
#endif
#ifndef FullApp_MDLREF_HIDE_CHILD_
struct emo3gebcwi { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; rtwCAPI_ModelMappingInfo * childMMI [ 5 ] ; sysRanDType
* systemRan [ 3 ] ; int_T systemTid [ 3 ] ; } DataMapInfo ; } ;
#endif
#ifndef FullApp_MDLREF_HIDE_CHILD_
typedef struct { kjcfosfnzl rtm ; } pttvvumxwfo ;
#endif
extern void f5esr3kb50 ( void ) ; extern void ov22d5stbx ( uint16_T *
ktpob5xuwm , uint16_T * cvmnzvbjh4 ) ; extern void bv1ovgwsiu ( void ) ;
extern void FullApp ( const boolean_T * iis1vqtqcq , const boolean_T *
dhzdwjro43 , const uint16_T * ajkvkc5cy4 ) ; extern void neeq2gwcah (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , void * sysRanPtr , int
contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_FullApp_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName ,
int_T * retVal ) ; extern mxArray * mr_FullApp_GetDWork ( ) ; extern void
mr_FullApp_SetDWork ( const mxArray * ssDW ) ; extern void
mr_FullApp_RegisterSimStateChecksum ( SimStruct * S ) ; extern const
rtwCAPI_ModelMappingStaticInfo * FullApp_GetCAPIStaticMap ( void ) ;
#ifndef FullApp_MDLREF_HIDE_CHILD_
extern pttvvumxwfo pttvvumxwf ;
#endif
#ifndef FullApp_MDLREF_HIDE_CHILD_
extern aqoxgt3qygj plmxv5pwovw ; extern bnv4syr3d0y lpgy1wacnhh ;
#endif
extern void SeatHeaterMain ( uint16_T argin0 , uint16_T argin1 ) ; extern
void SeatHeatingControllerSetPosition ( uint16_T argin0 ) ;
#endif
