#include "__cf_SeatHeating.h"
#ifndef _RTW_HEADER_SeatHeating_cap_host_h__
#define _RTW_HEADER_SeatHeating_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
SeatHeating_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void SeatHeating_host_InitializeDataMapInfo ( SeatHeating_host_DataMapInfo_T
* dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
