#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ProductsCatalogsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Send a Product
//
// Send a single product or product list to a new or existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.  First, you need to upload your inventory to Facebook. You can use the API or Facebook’s Commerce Manager to do that. If you already have a Facebook catalog set up, we suggest that you leverage that catalog for WhatsApp commerce use cases.  **You can not send products to Business WhatsApp clients.**
//
send_message_status_t*
ProductsCatalogsAPI_sendProduct(apiClient_t *apiClient, send_product_request_t * send_product_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/sendProduct")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/sendProduct");




    // Body Param
    cJSON *localVarSingleItemJSON_send_product_request = NULL;
    if (send_product_request != NULL)
    {
        //string
        localVarSingleItemJSON_send_product_request = send_product_request_convertToJSON(send_product_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_send_product_request);
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
    cJSON *ProductsCatalogsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    send_message_status_t *elementToReturn = send_message_status_parseFromJSON(ProductsCatalogsAPIlocalVarJSON);
    cJSON_Delete(ProductsCatalogsAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_send_product_request) {
        cJSON_Delete(localVarSingleItemJSON_send_product_request);
        localVarSingleItemJSON_send_product_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Set Commerce Settings
//
// **is_catalog_visible** - Set to true to show catalog storefront icon or false to hide it. **is_cart_enabled** - Set to true to enable cart or false to disable it.
//
set_commerce_t*
ProductsCatalogsAPI_setCommerce(apiClient_t *apiClient, commerce_t * commerce )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/commerce")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/commerce");




    // Body Param
    cJSON *localVarSingleItemJSON_commerce = NULL;
    if (commerce != NULL)
    {
        //string
        localVarSingleItemJSON_commerce = commerce_convertToJSON(commerce);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_commerce);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    list_addElement(localVarContentType,"application/x-www-form-urlencoded"); //consumes
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
    cJSON *ProductsCatalogsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    set_commerce_t *elementToReturn = set_commerce_parseFromJSON(ProductsCatalogsAPIlocalVarJSON);
    cJSON_Delete(ProductsCatalogsAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_commerce) {
        cJSON_Delete(localVarSingleItemJSON_commerce);
        localVarSingleItemJSON_commerce = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

