#include "__cf_SeatSensingLeft.h"
#ifndef _RTW_HEADER_SeatSensingLeft_cap_host_h__
#define _RTW_HEADER_SeatSensingLeft_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
SeatSensingLeft_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void SeatSensingLeft_host_InitializeDataMapInfo (
SeatSensingLeft_host_DataMapInfo_T * dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
