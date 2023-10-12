#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "send_file_request.h"



send_file_request_t *send_file_request_create(
    char *chat_id,
    int phone,
    char *body,
    char *filename,
    char *caption
    ) {
    send_file_request_t *send_file_request_local_var = malloc(sizeof(send_file_request_t));
    if (!send_file_request_local_var) {
        return NULL;
    }
    send_file_request_local_var->chat_id = chat_id;
    send_file_request_local_var->phone = phone;
    send_file_request_local_var->body = body;
    send_file_request_local_var->filename = filename;
    send_file_request_local_var->caption = caption;

    return send_file_request_local_var;
}


void send_file_request_free(send_file_request_t *send_file_request) {
    if(NULL == send_file_request){
        return ;
    }
    listEntry_t *listEntry;
    if (send_file_request->chat_id) {
        free(send_file_request->chat_id);
        send_file_request->chat_id = NULL;
    }
    if (send_file_request->body) {
        free(send_file_request->body);
        send_file_request->body = NULL;
    }
    if (send_file_request->filename) {
        free(send_file_request->filename);
        send_file_request->filename = NULL;
    }
    if (send_file_request->caption) {
        free(send_file_request->caption);
        send_file_request->caption = NULL;
    }
    free(send_file_request);
}

cJSON *send_file_request_convertToJSON(send_file_request_t *send_file_request) {
    cJSON *item = cJSON_CreateObject();

    // send_file_request->chat_id
    if(send_file_request->chat_id) {
    if(cJSON_AddStringToObject(item, "chatId", send_file_request->chat_id) == NULL) {
    goto fail; //String
    }
    }


    // send_file_request->phone
    if(send_file_request->phone) {
    if(cJSON_AddNumberToObject(item, "phone", send_file_request->phone) == NULL) {
    goto fail; //Numeric
    }
    }


    // send_file_request->body
    if (!send_file_request->body) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "body", send_file_request->body) == NULL) {
    goto fail; //String
    }


    // send_file_request->filename
    if (!send_file_request->filename) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "filename", send_file_request->filename) == NULL) {
    goto fail; //String
    }


    // send_file_request->caption
    if(send_file_request->caption) {
    if(cJSON_AddStringToObject(item, "caption", send_file_request->caption) == NULL) {
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

send_file_request_t *send_file_request_parseFromJSON(cJSON *send_file_requestJSON){

    send_file_request_t *send_file_request_local_var = NULL;

    // send_file_request->chat_id
    cJSON *chat_id = cJSON_GetObjectItemCaseSensitive(send_file_requestJSON, "chatId");
    if (chat_id) { 
    if(!cJSON_IsString(chat_id) && !cJSON_IsNull(chat_id))
    {
    goto end; //String
    }
    }

    // send_file_request->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(send_file_requestJSON, "phone");
    if (phone) { 
    if(!cJSON_IsNumber(phone))
    {
    goto end; //Numeric
    }
    }

    // send_file_request->body
    cJSON *body = cJSON_GetObjectItemCaseSensitive(send_file_requestJSON, "body");
    if (!body) {
        goto end;
    }

    
    if(!cJSON_IsString(body))
    {
    goto end; //String
    }

    // send_file_request->filename
    cJSON *filename = cJSON_GetObjectItemCaseSensitive(send_file_requestJSON, "filename");
    if (!filename) {
        goto end;
    }

    
    if(!cJSON_IsString(filename))
    {
    goto end; //String
    }

    // send_file_request->caption
    cJSON *caption = cJSON_GetObjectItemCaseSensitive(send_file_requestJSON, "caption");
    if (caption) { 
    if(!cJSON_IsString(caption) && !cJSON_IsNull(caption))
    {
    goto end; //String
    }
    }


    send_file_request_local_var = send_file_request_create (
        chat_id && !cJSON_IsNull(chat_id) ? strdup(chat_id->valuestring) : NULL,
        phone ? phone->valuedouble : 0,
        strdup(body->valuestring),
        strdup(filename->valuestring),
        caption && !cJSON_IsNull(caption) ? strdup(caption->valuestring) : NULL
        );

    return send_file_request_local_var;
end:
    return NULL;

}
