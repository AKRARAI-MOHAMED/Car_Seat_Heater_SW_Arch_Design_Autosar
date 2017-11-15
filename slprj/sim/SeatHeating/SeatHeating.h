#include "__cf_SeatHeating.h"
#ifndef RTW_HEADER_SeatHeating_h_
#define RTW_HEADER_SeatHeating_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef SeatHeating_COMMON_INCLUDES_
#define SeatHeating_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "SeatHeating_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "rt_nonfinite.h"
#ifndef SeatHeating_MDLREF_HIDE_CHILD_
typedef struct { uint16_T azldcrpzg0 ; } jhkr2zhblwd ;
#endif
#ifndef SeatHeating_MDLREF_HIDE_CHILD_
typedef struct { int8_T ccwjoobfbm ; int8_T he0i4epyoh ; } jkccabo2egd ;
#endif
#ifndef SeatHeating_MDLREF_HIDE_CHILD_
struct ppum5as1ou_ { uint16_T P_0 ; } ;
#endif
#ifndef SeatHeating_MDLREF_HIDE_CHILD_
struct pru34pwyaz { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 4 ] ; int_T systemTid [ 4 ] ;
} DataMapInfo ; } ;
#endif
#ifndef SeatHeating_MDLREF_HIDE_CHILD_
typedef struct { cnujs5nqdj rtm ; } fwkgdm3c1zp ;
#endif
extern void ophhir0jhp ( void ) ; extern void lxevvanarv ( void ) ; extern
void SeatHeating ( void ) ; extern void jfx5lmwkl3 ( SimStruct * _mdlRefSfcnS
, int_T mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern
void mr_SeatHeating_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_SeatHeating_GetDWork ( ) ;
extern void mr_SeatHeating_SetDWork ( const mxArray * ssDW ) ; extern void
mr_SeatHeating_RegisterSimStateChecksum ( SimStruct * S ) ; extern void
natdmm1ohu ( const boolean_T * px1jo0vzii , const boolean_T * o0esijcd5d ) ;
extern const rtwCAPI_ModelMappingStaticInfo * SeatHeating_GetCAPIStaticMap (
void ) ;
#ifndef SeatHeating_MDLREF_HIDE_CHILD_
extern void SeatHeatingControllerSetPosition_Start ( void ) ;
#endif
#ifndef SeatHeating_MDLREF_HIDE_CHILD_
extern fwkgdm3c1zp fwkgdm3c1z ;
#endif
#ifndef SeatHeating_MDLREF_HIDE_CHILD_
extern jhkr2zhblwd ostyzfdpf00 ; extern jkccabo2egd k2fqcecao2z ;
#endif
extern void SeatHeaterMain ( uint16_T argin0 , uint16_T argin1 ) ; extern
void SeatHeatingControllerSetPosition ( uint16_T argin0 ) ;
#endif
