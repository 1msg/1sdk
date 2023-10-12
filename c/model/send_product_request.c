#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "send_product_request.h"



send_product_request_t *send_product_request_create(
    char *chat_id,
    int phone,
    send_product_request_all_of_action_t *action,
    char *body,
    char *footer,
    char *header
    ) {
    send_product_request_t *send_product_request_local_var = malloc(sizeof(send_product_request_t));
    if (!send_product_request_local_var) {
        return NULL;
    }
    send_product_request_local_var->chat_id = chat_id;
    send_product_request_local_var->phone = phone;
    send_product_request_local_var->action = action;
    send_product_request_local_var->body = body;
    send_product_request_local_var->footer = footer;
    send_product_request_local_var->header = header;

    return send_product_request_local_var;
}


void send_product_request_free(send_product_request_t *send_product_request) {
    if(NULL == send_product_request){
        return ;
    }
    listEntry_t *listEntry;
    if (send_product_request->chat_id) {
        free(send_product_request->chat_id);
        send_product_request->chat_id = NULL;
    }
    if (send_product_request->action) {
        send_product_request_all_of_action_free(send_product_request->action);
        send_product_request->action = NULL;
    }
    if (send_product_request->body) {
        free(send_product_request->body);
        send_product_request->body = NULL;
    }
    if (send_product_request->footer) {
        free(send_product_request->footer);
        send_product_request->footer = NULL;
    }
    if (send_product_request->header) {
        free(send_product_request->header);
        send_product_request->header = NULL;
    }
    free(send_product_request);
}

cJSON *send_product_request_convertToJSON(send_product_request_t *send_product_request) {
    cJSON *item = cJSON_CreateObject();

    // send_product_request->chat_id
    if(send_product_request->chat_id) {
    if(cJSON_AddStringToObject(item, "chatId", send_product_request->chat_id) == NULL) {
    goto fail; //String
    }
    }


    // send_product_request->phone
    if(send_product_request->phone) {
    if(cJSON_AddNumberToObject(item, "phone", send_product_request->phone) == NULL) {
    goto fail; //Numeric
    }
    }


    // send_product_request->action
    if (!send_product_request->action) {
        goto fail;
    }
    cJSON *action_local_JSON = send_product_request_all_of_action_convertToJSON(send_product_request->action);
    if(action_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "action", action_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // send_product_request->body
    if(send_product_request->body) {
    if(cJSON_AddStringToObject(item, "body", send_product_request->body) == NULL) {
    goto fail; //String
    }
    }


    // send_product_request->footer
    if(send_product_request->footer) {
    if(cJSON_AddStringToObject(item, "footer", send_product_request->footer) == NULL) {
    goto fail; //String
    }
    }


    // send_product_request->header
    if(send_product_request->header) {
    if(cJSON_AddStringToObject(item, "header", send_product_request->header) == NULL) {
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

send_product_request_t *send_product_request_parseFromJSON(cJSON *send_product_requestJSON){

    send_product_request_t *send_product_request_local_var = NULL;

    // define the local variable for send_product_request->action
    send_product_request_all_of_action_t *action_local_nonprim = NULL;

    // send_product_request->chat_id
    cJSON *chat_id = cJSON_GetObjectItemCaseSensitive(send_product_requestJSON, "chatId");
    if (chat_id) { 
    if(!cJSON_IsString(chat_id) && !cJSON_IsNull(chat_id))
    {
    goto end; //String
    }
    }

    // send_product_request->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(send_product_requestJSON, "phone");
    if (phone) { 
    if(!cJSON_IsNumber(phone))
    {
    goto end; //Numeric
    }
    }

    // send_product_request->action
    cJSON *action = cJSON_GetObjectItemCaseSensitive(send_product_requestJSON, "action");
    if (!action) {
        goto end;
    }

    
    action_local_nonprim = send_product_request_all_of_action_parseFromJSON(action); //nonprimitive

    // send_product_request->body
    cJSON *body = cJSON_GetObjectItemCaseSensitive(send_product_requestJSON, "body");
    if (body) { 
    if(!cJSON_IsString(body) && !cJSON_IsNull(body))
    {
    goto end; //String
    }
    }

    // send_product_request->footer
    cJSON *footer = cJSON_GetObjectItemCaseSensitive(send_product_requestJSON, "footer");
    if (footer) { 
    if(!cJSON_IsString(footer) && !cJSON_IsNull(footer))
    {
    goto end; //String
    }
    }

    // send_product_request->header
    cJSON *header = cJSON_GetObjectItemCaseSensitive(send_product_requestJSON, "header");
    if (header) { 
    if(!cJSON_IsString(header) && !cJSON_IsNull(header))
    {
    goto end; //String
    }
    }


    send_product_request_local_var = send_product_request_create (
        chat_id && !cJSON_IsNull(chat_id) ? strdup(chat_id->valuestring) : NULL,
        phone ? phone->valuedouble : 0,
        action_local_nonprim,
        body && !cJSON_IsNull(body) ? strdup(body->valuestring) : NULL,
        footer && !cJSON_IsNull(footer) ? strdup(footer->valuestring) : NULL,
        header && !cJSON_IsNull(header) ? strdup(header->valuestring) : NULL
        );

    return send_product_request_local_var;
end:
    if (action_local_nonprim) {
        send_product_request_all_of_action_free(action_local_nonprim);
        action_local_nonprim = NULL;
    }
    return NULL;

}
