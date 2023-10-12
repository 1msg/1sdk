#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "MediaAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Upload media & get mediaId
//
// Upload media and get mediaId. Uploaded media can be sent in template
//
media_id_t*
MediaAPI_uploadMedia(apiClient_t *apiClient, upload_media_t * upload_media )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/uploadMedia")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/uploadMedia");




    // Body Param
    cJSON *localVarSingleItemJSON_upload_media = NULL;
    if (upload_media != NULL)
    {
        //string
        localVarSingleItemJSON_upload_media = upload_media_convertToJSON(upload_media);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_upload_media);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/x-www-form-urlencoded"); //consumes
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Server response example");
    //}
    //nonprimitive not container
    cJSON *MediaAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    media_id_t *elementToReturn = media_id_parseFromJSON(MediaAPIlocalVarJSON);
    cJSON_Delete(MediaAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_upload_media) {
        cJSON_Delete(localVarSingleItemJSON_upload_media);
        localVarSingleItemJSON_upload_media = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

