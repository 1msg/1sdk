#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "WebhooksAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Check ACKs
//
// 
//
get_ack_info_t*
WebhooksAPI_ackHookInfo(apiClient_t *apiClient, char * messageId )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/hookInfo")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/hookInfo");




    // query parameters
    char *keyQuery_messageId = NULL;
    char * valueQuery_messageId = NULL;
    keyValuePair_t *keyPairQuery_messageId = 0;
    if (messageId)
    {
        keyQuery_messageId = strdup("messageId");
        valueQuery_messageId = strdup((messageId));
        keyPairQuery_messageId = keyValuePair_create(keyQuery_messageId, valueQuery_messageId);
        list_addElement(localVarQueryParameters,keyPairQuery_messageId);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Server response example");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Invalid token");
    //}
    //nonprimitive not container
    cJSON *WebhooksAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    get_ack_info_t *elementToReturn = get_ack_info_parseFromJSON(WebhooksAPIlocalVarJSON);
    cJSON_Delete(WebhooksAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_messageId){
        free(keyQuery_messageId);
        keyQuery_messageId = NULL;
    }
    if(valueQuery_messageId){
        free(valueQuery_messageId);
        valueQuery_messageId = NULL;
    }
    if(keyPairQuery_messageId){
        keyValuePair_free(keyPairQuery_messageId);
        keyPairQuery_messageId = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Set webhook
//
// Sets the URL for receiving webhook notifications of new messages and message delivery events (ack).  **API responses in \"Callbacks\" tab**
//
set_webhook_status_t*
WebhooksAPI_setWebhook(apiClient_t *apiClient, webhook_url_t * webhook_url )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/webhook")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/webhook");




    // Body Param
    cJSON *localVarSingleItemJSON_webhook_url = NULL;
    if (webhook_url != NULL)
    {
        //string
        localVarSingleItemJSON_webhook_url = webhook_url_convertToJSON(webhook_url);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_webhook_url);
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
    cJSON *WebhooksAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    set_webhook_status_t *elementToReturn = set_webhook_status_parseFromJSON(WebhooksAPIlocalVarJSON);
    cJSON_Delete(WebhooksAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_webhook_url) {
        cJSON_Delete(localVarSingleItemJSON_webhook_url);
        localVarSingleItemJSON_webhook_url = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

