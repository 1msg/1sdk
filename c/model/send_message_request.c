#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "send_message_request.h"



send_message_request_t *send_message_request_create(
    char *chat_id,
    int phone,
    char *body
    ) {
    send_message_request_t *send_message_request_local_var = malloc(sizeof(send_message_request_t));
    if (!send_message_request_local_var) {
        return NULL;
    }
    send_message_request_local_var->chat_id = chat_id;
    send_message_request_local_var->phone = phone;
    send_message_request_local_var->body = body;

    return send_message_request_local_var;
}


void send_message_request_free(send_message_request_t *send_message_request) {
    if(NULL == send_message_request){
        return ;
    }
    listEntry_t *listEntry;
    if (send_message_request->chat_id) {
        free(send_message_request->chat_id);
        send_message_request->chat_id = NULL;
    }
    if (send_message_request->body) {
        free(send_message_request->body);
        send_message_request->body = NULL;
    }
    free(send_message_request);
}

cJSON *send_message_request_convertToJSON(send_message_request_t *send_message_request) {
    cJSON *item = cJSON_CreateObject();

    // send_message_request->chat_id
    if(send_message_request->chat_id) {
    if(cJSON_AddStringToObject(item, "chatId", send_message_request->chat_id) == NULL) {
    goto fail; //String
    }
    }


    // send_message_request->phone
    if(send_message_request->phone) {
    if(cJSON_AddNumberToObject(item, "phone", send_message_request->phone) == NULL) {
    goto fail; //Numeric
    }
    }


    // send_message_request->body
    if (!send_message_request->body) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "body", send_message_request->body) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

send_message_request_t *send_message_request_parseFromJSON(cJSON *send_message_requestJSON){

    send_message_request_t *send_message_request_local_var = NULL;

    // send_message_request->chat_id
    cJSON *chat_id = cJSON_GetObjectItemCaseSensitive(send_message_requestJSON, "chatId");
    if (chat_id) { 
    if(!cJSON_IsString(chat_id) && !cJSON_IsNull(chat_id))
    {
    goto end; //String
    }
    }

    // send_message_request->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(send_message_requestJSON, "phone");
    if (phone) { 
    if(!cJSON_IsNumber(phone))
    {
    goto end; //Numeric
    }
    }

    // send_message_request->body
    cJSON *body = cJSON_GetObjectItemCaseSensitive(send_message_requestJSON, "body");
    if (!body) {
        goto end;
    }

    
    if(!cJSON_IsString(body))
    {
    goto end; //String
    }


    send_message_request_local_var = send_message_request_create (
        chat_id && !cJSON_IsNull(chat_id) ? strdup(chat_id->valuestring) : NULL,
        phone ? phone->valuedouble : 0,
        strdup(body->valuestring)
        );

    return send_message_request_local_var;
end:
    return NULL;

}
