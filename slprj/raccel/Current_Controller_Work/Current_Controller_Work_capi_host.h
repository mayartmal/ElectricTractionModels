#include "__cf_Current_Controller_Work.h"
#ifndef RTW_HEADER_Current_Controller_Work_cap_host_h_
#define RTW_HEADER_Current_Controller_Work_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
Current_Controller_Work_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void Current_Controller_Work_host_InitializeDataMapInfo (
Current_Controller_Work_host_DataMapInfo_T * dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
