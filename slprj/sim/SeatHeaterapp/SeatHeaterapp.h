#include "__cf_SeatHeaterapp.h"
#ifndef RTW_HEADER_SeatHeaterapp_h_
#define RTW_HEADER_SeatHeaterapp_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef SeatHeaterapp_COMMON_INCLUDES_
#define SeatHeaterapp_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "SeatHeaterapp_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "rt_nonfinite.h"
#ifndef SeatHeaterapp_MDLREF_HIDE_CHILD_
typedef struct { int8_T lew3nmuii0 ; } hhsooedtkqm ;
#endif
#ifndef SeatHeaterapp_MDLREF_HIDE_CHILD_
struct dbej4dd5sb_ { uint16_T P_0 ; uint16_T P_1 ; } ;
#endif
#ifndef SeatHeaterapp_MDLREF_HIDE_CHILD_
struct btdl21qxwu { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 3 ] ; int_T systemTid [ 3 ] ;
} DataMapInfo ; } ;
#endif
#ifndef SeatHeaterapp_MDLREF_HIDE_CHILD_
typedef struct { cpv4syaf2e rtm ; } eq2kkmuzw2b ;
#endif
extern void ij150itoj3 ( uint16_T * a0li1uqgvr , uint16_T * eezodz3pdg ) ;
extern void li04odldwo ( void ) ; extern void SeatHeaterapp ( void ) ; extern
void feojfafcyh ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T
mdlref_TID1 , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo *
rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T
rt_CSTATEIdx ) ; extern void mr_SeatHeaterapp_MdlInfoRegFcn ( SimStruct *
mdlRefSfcnS , char_T * modelName , int_T * retVal ) ; extern mxArray *
mr_SeatHeaterapp_GetDWork ( ) ; extern void mr_SeatHeaterapp_SetDWork ( const
mxArray * ssDW ) ; extern void mr_SeatHeaterapp_RegisterSimStateChecksum (
SimStruct * S ) ; extern const rtwCAPI_ModelMappingStaticInfo *
SeatHeaterapp_GetCAPIStaticMap ( void ) ;
#ifndef SeatHeaterapp_MDLREF_HIDE_CHILD_
extern void SeatHeaterMain_Start ( void ) ;
#endif
#ifndef SeatHeaterapp_MDLREF_HIDE_CHILD_
extern eq2kkmuzw2b eq2kkmuzw2 ;
#endif
#ifndef SeatHeaterapp_MDLREF_HIDE_CHILD_
extern hhsooedtkqm ara1zpzho2v ;
#endif
extern void SeatHeaterMain ( uint16_T argin0 , uint16_T argin1 ) ;
#endif
