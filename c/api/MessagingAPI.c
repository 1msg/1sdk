#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "MessagingAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Get messages list
//
// 
//
get_messages_t*
MessagingAPI_messagesList(apiClient_t *apiClient, int last , int lastMessageNumber , int firstMessageNumber , int limit , char * chatId , int min_time , int max_time , char * msgId )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/messages")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/messages");




    // query parameters
    char *keyQuery_last = NULL;
    char * valueQuery_last = NULL;
    keyValuePair_t *keyPairQuery_last = 0;
    if (1) // Always send boolean parameters to the API server
    {
        keyQuery_last = strdup("last");
        valueQuery_last = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_last, MAX_NUMBER_LENGTH, "%d", last);
        keyPairQuery_last = keyValuePair_create(keyQuery_last, valueQuery_last);
        list_addElement(localVarQueryParameters,keyPairQuery_last);
    }

    // query parameters
    char *keyQuery_lastMessageNumber = NULL;
    char * valueQuery_lastMessageNumber = NULL;
    keyValuePair_t *keyPairQuery_lastMessageNumber = 0;
    if (1) // Always send integer parameters to the API server
    {
        keyQuery_lastMessageNumber = strdup("lastMessageNumber");
        valueQuery_lastMessageNumber = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_lastMessageNumber, MAX_NUMBER_LENGTH, "%d", lastMessageNumber);
        keyPairQuery_lastMessageNumber = keyValuePair_create(keyQuery_lastMessageNumber, valueQuery_lastMessageNumber);
        list_addElement(localVarQueryParameters,keyPairQuery_lastMessageNumber);
    }

    // query parameters
    char *keyQuery_firstMessageNumber = NULL;
    char * valueQuery_firstMessageNumber = NULL;
    keyValuePair_t *keyPairQuery_firstMessageNumber = 0;
    if (1) // Always send integer parameters to the API server
    {
        keyQuery_firstMessageNumber = strdup("firstMessageNumber");
        valueQuery_firstMessageNumber = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_firstMessageNumber, MAX_NUMBER_LENGTH, "%d", firstMessageNumber);
        keyPairQuery_firstMessageNumber = keyValuePair_create(keyQuery_firstMessageNumber, valueQuery_firstMessageNumber);
        list_addElement(localVarQueryParameters,keyPairQuery_firstMessageNumber);
    }

    // query parameters
    char *keyQuery_limit = NULL;
    char * valueQuery_limit = NULL;
    keyValuePair_t *keyPairQuery_limit = 0;
    if (1) // Always send integer parameters to the API server
    {
        keyQuery_limit = strdup("limit");
        valueQuery_limit = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_limit, MAX_NUMBER_LENGTH, "%d", limit);
        keyPairQuery_limit = keyValuePair_create(keyQuery_limit, valueQuery_limit);
        list_addElement(localVarQueryParameters,keyPairQuery_limit);
    }

    // query parameters
    char *keyQuery_chatId = NULL;
    char * valueQuery_chatId = NULL;
    keyValuePair_t *keyPairQuery_chatId = 0;
    if (chatId)
    {
        keyQuery_chatId = strdup("chatId");
        valueQuery_chatId = strdup((chatId));
        keyPairQuery_chatId = keyValuePair_create(keyQuery_chatId, valueQuery_chatId);
        list_addElement(localVarQueryParameters,keyPairQuery_chatId);
    }

    // query parameters
    char *keyQuery_min_time = NULL;
    char * valueQuery_min_time = NULL;
    keyValuePair_t *keyPairQuery_min_time = 0;
    if (1) // Always send integer parameters to the API server
    {
        keyQuery_min_time = strdup("min_time");
        valueQuery_min_time = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_min_time, MAX_NUMBER_LENGTH, "%d", min_time);
        keyPairQuery_min_time = keyValuePair_create(keyQuery_min_time, valueQuery_min_time);
        list_addElement(localVarQueryParameters,keyPairQuery_min_time);
    }

    // query parameters
    char *keyQuery_max_time = NULL;
    char * valueQuery_max_time = NULL;
    keyValuePair_t *keyPairQuery_max_time = 0;
    if (1) // Always send integer parameters to the API server
    {
        keyQuery_max_time = strdup("max_time");
        valueQuery_max_time = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_max_time, MAX_NUMBER_LENGTH, "%d", max_time);
        keyPairQuery_max_time = keyValuePair_create(keyQuery_max_time, valueQuery_max_time);
        list_addElement(localVarQueryParameters,keyPairQuery_max_time);
    }

    // query parameters
    char *keyQuery_msgId = NULL;
    char * valueQuery_msgId = NULL;
    keyValuePair_t *keyPairQuery_msgId = 0;
    if (msgId)
    {
        keyQuery_msgId = strdup("msgId");
        valueQuery_msgId = strdup((msgId));
        keyPairQuery_msgId = keyValuePair_create(keyQuery_msgId, valueQuery_msgId);
        list_addElement(localVarQueryParameters,keyPairQuery_msgId);
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
    cJSON *MessagingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    get_messages_t *elementToReturn = get_messages_parseFromJSON(MessagingAPIlocalVarJSON);
    cJSON_Delete(MessagingAPIlocalVarJSON);
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
    if(keyQuery_last){
        free(keyQuery_last);
        keyQuery_last = NULL;
    }
    if(valueQuery_last){
        free(valueQuery_last);
        valueQuery_last = NULL;
    }
    if(keyPairQuery_last){
        keyValuePair_free(keyPairQuery_last);
        keyPairQuery_last = NULL;
    }
    if(keyQuery_lastMessageNumber){
        free(keyQuery_lastMessageNumber);
        keyQuery_lastMessageNumber = NULL;
    }
    if(valueQuery_lastMessageNumber){
        free(valueQuery_lastMessageNumber);
        valueQuery_lastMessageNumber = NULL;
    }
    if(keyPairQuery_lastMessageNumber){
        keyValuePair_free(keyPairQuery_lastMessageNumber);
        keyPairQuery_lastMessageNumber = NULL;
    }
    if(keyQuery_firstMessageNumber){
        free(keyQuery_firstMessageNumber);
        keyQuery_firstMessageNumber = NULL;
    }
    if(valueQuery_firstMessageNumber){
        free(valueQuery_firstMessageNumber);
        valueQuery_firstMessageNumber = NULL;
    }
    if(keyPairQuery_firstMessageNumber){
        keyValuePair_free(keyPairQuery_firstMessageNumber);
        keyPairQuery_firstMessageNumber = NULL;
    }
    if(keyQuery_limit){
        free(keyQuery_limit);
        keyQuery_limit = NULL;
    }
    if(valueQuery_limit){
        free(valueQuery_limit);
        valueQuery_limit = NULL;
    }
    if(keyPairQuery_limit){
        keyValuePair_free(keyPairQuery_limit);
        keyPairQuery_limit = NULL;
    }
    if(keyQuery_chatId){
        free(keyQuery_chatId);
        keyQuery_chatId = NULL;
    }
    if(valueQuery_chatId){
        free(valueQuery_chatId);
        valueQuery_chatId = NULL;
    }
    if(keyPairQuery_chatId){
        keyValuePair_free(keyPairQuery_chatId);
        keyPairQuery_chatId = NULL;
    }
    if(keyQuery_min_time){
        free(keyQuery_min_time);
        keyQuery_min_time = NULL;
    }
    if(valueQuery_min_time){
        free(valueQuery_min_time);
        valueQuery_min_time = NULL;
    }
    if(keyPairQuery_min_time){
        keyValuePair_free(keyPairQuery_min_time);
        keyPairQuery_min_time = NULL;
    }
    if(keyQuery_max_time){
        free(keyQuery_max_time);
        keyQuery_max_time = NULL;
    }
    if(valueQuery_max_time){
        free(valueQuery_max_time);
        valueQuery_max_time = NULL;
    }
    if(keyPairQuery_max_time){
        keyValuePair_free(keyPairQuery_max_time);
        keyPairQuery_max_time = NULL;
    }
    if(keyQuery_msgId){
        free(keyQuery_msgId);
        keyQuery_msgId = NULL;
    }
    if(valueQuery_msgId){
        free(valueQuery_msgId);
        valueQuery_msgId = NULL;
    }
    if(keyPairQuery_msgId){
        keyValuePair_free(keyPairQuery_msgId);
        keyPairQuery_msgId = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Mark message as read
//
// 
//
set_me_t*
MessagingAPI_readMessage(apiClient_t *apiClient, read_message_request_t * read_message_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/readMessage")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/readMessage");




    // Body Param
    cJSON *localVarSingleItemJSON_read_message_request = NULL;
    if (read_message_request != NULL)
    {
        //string
        localVarSingleItemJSON_read_message_request = read_message_request_convertToJSON(read_message_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_read_message_request);
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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Invalid token");
    //}
    //nonprimitive not container
    cJSON *MessagingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    set_me_t *elementToReturn = set_me_parseFromJSON(MessagingAPIlocalVarJSON);
    cJSON_Delete(MessagingAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_read_message_request) {
        cJSON_Delete(localVarSingleItemJSON_read_message_request);
        localVarSingleItemJSON_read_message_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Send a Contact
//
// Send a contact to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.
//
send_message_status_t*
MessagingAPI_sendContact(apiClient_t *apiClient, send_contact_request_t * send_contact_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/sendContact")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/sendContact");




    // Body Param
    cJSON *localVarSingleItemJSON_send_contact_request = NULL;
    if (send_contact_request != NULL)
    {
        //string
        localVarSingleItemJSON_send_contact_request = send_contact_request_convertToJSON(send_contact_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_send_contact_request);
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
    cJSON *MessagingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    send_message_status_t *elementToReturn = send_message_status_parseFromJSON(MessagingAPIlocalVarJSON);
    cJSON_Delete(MessagingAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_send_contact_request) {
        cJSON_Delete(localVarSingleItemJSON_send_contact_request);
        localVarSingleItemJSON_send_contact_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Send a File
//
// Send a file to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.
//
send_message_status_t*
MessagingAPI_sendFile(apiClient_t *apiClient, send_file_request_t * send_file_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/sendFile")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/sendFile");




    // Body Param
    cJSON *localVarSingleItemJSON_send_file_request = NULL;
    if (send_file_request != NULL)
    {
        //string
        localVarSingleItemJSON_send_file_request = send_file_request_convertToJSON(send_file_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_send_file_request);
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
    cJSON *MessagingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    send_message_status_t *elementToReturn = send_message_status_parseFromJSON(MessagingAPIlocalVarJSON);
    cJSON_Delete(MessagingAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_send_file_request) {
        cJSON_Delete(localVarSingleItemJSON_send_file_request);
        localVarSingleItemJSON_send_file_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Send List Message
//
// Send Interactive List Message to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.
//
send_message_status_t*
MessagingAPI_sendList(apiClient_t *apiClient, send_list_request_t * send_list_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/sendList")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/sendList");




    // Body Param
    cJSON *localVarSingleItemJSON_send_list_request = NULL;
    if (send_list_request != NULL)
    {
        //string
        localVarSingleItemJSON_send_list_request = send_list_request_convertToJSON(send_list_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_send_list_request);
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
    cJSON *MessagingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    send_message_status_t *elementToReturn = send_message_status_parseFromJSON(MessagingAPIlocalVarJSON);
    cJSON_Delete(MessagingAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_send_list_request) {
        cJSON_Delete(localVarSingleItemJSON_send_list_request);
        localVarSingleItemJSON_send_list_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Send a Location
//
// Send a location to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.
//
send_message_status_t*
MessagingAPI_sendLocation(apiClient_t *apiClient, send_location_request_t * send_location_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/sendLocation")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/sendLocation");




    // Body Param
    cJSON *localVarSingleItemJSON_send_location_request = NULL;
    if (send_location_request != NULL)
    {
        //string
        localVarSingleItemJSON_send_location_request = send_location_request_convertToJSON(send_location_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_send_location_request);
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
    cJSON *MessagingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    send_message_status_t *elementToReturn = send_message_status_parseFromJSON(MessagingAPIlocalVarJSON);
    cJSON_Delete(MessagingAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_send_location_request) {
        cJSON_Delete(localVarSingleItemJSON_send_location_request);
        localVarSingleItemJSON_send_location_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Send a Message
//
// Send a message to an existing chat. (Only if the dialogue has an Open Session). The message will be added to the queue for sending and delivered even if the phone is disconnected from the Internet or authorization is not passed.  Only one of two parameters is needed to determine the destination - chatId or phone.
//
send_message_status_t*
MessagingAPI_sendMessage(apiClient_t *apiClient, send_message_request_t * send_message_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/sendMessage")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/sendMessage");




    // Body Param
    cJSON *localVarSingleItemJSON_send_message_request = NULL;
    if (send_message_request != NULL)
    {
        //string
        localVarSingleItemJSON_send_message_request = send_message_request_convertToJSON(send_message_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_send_message_request);
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
    cJSON *MessagingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    send_message_status_t *elementToReturn = send_message_status_parseFromJSON(MessagingAPIlocalVarJSON);
    cJSON_Delete(MessagingAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_send_message_request) {
        cJSON_Delete(localVarSingleItemJSON_send_message_request);
        localVarSingleItemJSON_send_message_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

