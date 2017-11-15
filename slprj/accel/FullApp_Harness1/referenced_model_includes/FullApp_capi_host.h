#include "__cf_FullApp.h"
#ifndef _RTW_HEADER_FullApp_cap_host_h__
#define _RTW_HEADER_FullApp_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
#include "SeatSensingLeft_capi_host.h"
#include "SeatSensingRight_capi_host.h"
#include "HeatRegulatorApp_capi_host.h"
#include "SeatHeating_capi_host.h"
#include "SeatHeaterapp_capi_host.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMappingInfo *
childMMI [ 5 ] ; SeatSensingLeft_host_DataMapInfo_T child0 ;
SeatSensingRight_host_DataMapInfo_T child1 ;
HeatRegulatorApp_host_DataMapInfo_T child2 ; SeatHeating_host_DataMapInfo_T
child3 ; SeatHeaterapp_host_DataMapInfo_T child4 ; }
FullApp_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void FullApp_host_InitializeDataMapInfo ( FullApp_host_DataMapInfo_T *
dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
