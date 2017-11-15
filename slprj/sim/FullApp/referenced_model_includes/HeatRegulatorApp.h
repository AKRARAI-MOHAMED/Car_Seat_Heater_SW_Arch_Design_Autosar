#include "__cf_HeatRegulatorApp.h"
#ifndef RTW_HEADER_HeatRegulatorApp_h_
#define RTW_HEADER_HeatRegulatorApp_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef HeatRegulatorApp_COMMON_INCLUDES_
#define HeatRegulatorApp_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "HeatRegulatorApp_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "rt_nonfinite.h"
#ifndef HeatRegulatorApp_MDLREF_HIDE_CHILD_
typedef struct { int8_T jqnzluodoj ; } hfftsrg0bwj ;
#endif
#ifndef HeatRegulatorApp_MDLREF_HIDE_CHILD_
struct i0114kbp3p { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 3 ] ; int_T systemTid [ 3 ] ;
} DataMapInfo ; } ;
#endif
#ifndef HeatRegulatorApp_MDLREF_HIDE_CHILD_
typedef struct { i44af2u2ks rtm ; } erxsgasvu0x ;
#endif
extern void HeatRegulatorApp ( void ) ; extern void hi1hxyp1ws ( SimStruct *
_mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , void * sysRanPtr , int
contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_HeatRegulatorApp_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_HeatRegulatorApp_GetDWork
( ) ; extern void mr_HeatRegulatorApp_SetDWork ( const mxArray * ssDW ) ;
extern void mr_HeatRegulatorApp_RegisterSimStateChecksum ( SimStruct * S ) ;
extern void lkakj4swzu ( const uint16_T * kxs5zre1ov ) ; extern const
rtwCAPI_ModelMappingStaticInfo * HeatRegulatorApp_GetCAPIStaticMap ( void ) ;
#ifndef HeatRegulatorApp_MDLREF_HIDE_CHILD_
extern erxsgasvu0x erxsgasvu0 ;
#endif
#ifndef HeatRegulatorApp_MDLREF_HIDE_CHILD_
extern hfftsrg0bwj i5cj4kcrzix ;
#endif
extern void SeatHeatingControllerSetPosition ( uint16_T argin0 ) ;
#endif
