#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "send_location_request.h"



send_location_request_t *send_location_request_create(
    char *chat_id,
    int phone,
    char *lat,
    char *lng,
    char *address,
    char *name
    ) {
    send_location_request_t *send_location_request_local_var = malloc(sizeof(send_location_request_t));
    if (!send_location_request_local_var) {
        return NULL;
    }
    send_location_request_local_var->chat_id = chat_id;
    send_location_request_local_var->phone = phone;
    send_location_request_local_var->lat = lat;
    send_location_request_local_var->lng = lng;
    send_location_request_local_var->address = address;
    send_location_request_local_var->name = name;

    return send_location_request_local_var;
}


void send_location_request_free(send_location_request_t *send_location_request) {
    if(NULL == send_location_request){
        return ;
    }
    listEntry_t *listEntry;
    if (send_location_request->chat_id) {
        free(send_location_request->chat_id);
        send_location_request->chat_id = NULL;
    }
    if (send_location_request->lat) {
        free(send_location_request->lat);
        send_location_request->lat = NULL;
    }
    if (send_location_request->lng) {
        free(send_location_request->lng);
        send_location_request->lng = NULL;
    }
    if (send_location_request->address) {
        free(send_location_request->address);
        send_location_request->address = NULL;
    }
    if (send_location_request->name) {
        free(send_location_request->name);
        send_location_request->name = NULL;
    }
    free(send_location_request);
}

cJSON *send_location_request_convertToJSON(send_location_request_t *send_location_request) {
    cJSON *item = cJSON_CreateObject();

    // send_location_request->chat_id
    if(send_location_request->chat_id) {
    if(cJSON_AddStringToObject(item, "chatId", send_location_request->chat_id) == NULL) {
    goto fail; //String
    }
    }


    // send_location_request->phone
    if(send_location_request->phone) {
    if(cJSON_AddNumberToObject(item, "phone", send_location_request->phone) == NULL) {
    goto fail; //Numeric
    }
    }


    // send_location_request->lat
    if (!send_location_request->lat) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "lat", send_location_request->lat) == NULL) {
    goto fail; //String
    }


    // send_location_request->lng
    if (!send_location_request->lng) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "lng", send_location_request->lng) == NULL) {
    goto fail; //String
    }


    // send_location_request->address
    if(send_location_request->address) {
    if(cJSON_AddStringToObject(item, "address", send_location_request->address) == NULL) {
    goto fail; //String
    }
    }


    // send_location_request->name
    if(send_location_request->name) {
    if(cJSON_AddStringToObject(item, "name", send_location_request->name) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

send_location_request_t *send_location_request_parseFromJSON(cJSON *send_location_requestJSON){

    send_location_request_t *send_location_request_local_var = NULL;

    // send_location_request->chat_id
    cJSON *chat_id = cJSON_GetObjectItemCaseSensitive(send_location_requestJSON, "chatId");
    if (chat_id) { 
    if(!cJSON_IsString(chat_id) && !cJSON_IsNull(chat_id))
    {
    goto end; //String
    }
    }

    // send_location_request->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(send_location_requestJSON, "phone");
    if (phone) { 
    if(!cJSON_IsNumber(phone))
    {
    goto end; //Numeric
    }
    }

    // send_location_request->lat
    cJSON *lat = cJSON_GetObjectItemCaseSensitive(send_location_requestJSON, "lat");
    if (!lat) {
        goto end;
    }

    
    if(!cJSON_IsString(lat))
    {
    goto end; //String
    }

    // send_location_request->lng
    cJSON *lng = cJSON_GetObjectItemCaseSensitive(send_location_requestJSON, "lng");
    if (!lng) {
        goto end;
    }

    
    if(!cJSON_IsString(lng))
    {
    goto end; //String
    }

    // send_location_request->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(send_location_requestJSON, "address");
    if (address) { 
    if(!cJSON_IsString(address) && !cJSON_IsNull(address))
    {
    goto end; //String
    }
    }

    // send_location_request->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(send_location_requestJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }


    send_location_request_local_var = send_location_request_create (
        chat_id && !cJSON_IsNull(chat_id) ? strdup(chat_id->valuestring) : NULL,
        phone ? phone->valuedouble : 0,
        strdup(lat->valuestring),
        strdup(lng->valuestring),
        address && !cJSON_IsNull(address) ? strdup(address->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL
        );

    return send_location_request_local_var;
end:
    return NULL;

}
