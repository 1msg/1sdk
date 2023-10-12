#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "send_template_request.h"



send_template_request_t *send_template_request_create(
    char *_namespace,
    char *chat_id,
    int phone,
    char *_template,
    send_template_request_all_of_language_t *language,
    list_t *params
    ) {
    send_template_request_t *send_template_request_local_var = malloc(sizeof(send_template_request_t));
    if (!send_template_request_local_var) {
        return NULL;
    }
    send_template_request_local_var->_namespace = _namespace;
    send_template_request_local_var->chat_id = chat_id;
    send_template_request_local_var->phone = phone;
    send_template_request_local_var->_template = _template;
    send_template_request_local_var->language = language;
    send_template_request_local_var->params = params;

    return send_template_request_local_var;
}


void send_template_request_free(send_template_request_t *send_template_request) {
    if(NULL == send_template_request){
        return ;
    }
    listEntry_t *listEntry;
    if (send_template_request->_namespace) {
        free(send_template_request->_namespace);
        send_template_request->_namespace = NULL;
    }
    if (send_template_request->chat_id) {
        free(send_template_request->chat_id);
        send_template_request->chat_id = NULL;
    }
    if (send_template_request->_template) {
        free(send_template_request->_template);
        send_template_request->_template = NULL;
    }
    if (send_template_request->language) {
        send_template_request_all_of_language_free(send_template_request->language);
        send_template_request->language = NULL;
    }
    if (send_template_request->params) {
        list_ForEach(listEntry, send_template_request->params) {
            send_template_request_all_of_params_free(listEntry->data);
        }
        list_freeList(send_template_request->params);
        send_template_request->params = NULL;
    }
    free(send_template_request);
}

cJSON *send_template_request_convertToJSON(send_template_request_t *send_template_request) {
    cJSON *item = cJSON_CreateObject();

    // send_template_request->_namespace
    if (!send_template_request->_namespace) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "namespace", send_template_request->_namespace) == NULL) {
    goto fail; //String
    }


    // send_template_request->chat_id
    if(send_template_request->chat_id) {
    if(cJSON_AddStringToObject(item, "chatId", send_template_request->chat_id) == NULL) {
    goto fail; //String
    }
    }


    // send_template_request->phone
    if(send_template_request->phone) {
    if(cJSON_AddNumberToObject(item, "phone", send_template_request->phone) == NULL) {
    goto fail; //Numeric
    }
    }


    // send_template_request->_template
    if (!send_template_request->_template) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "template", send_template_request->_template) == NULL) {
    goto fail; //String
    }


    // send_template_request->language
    if (!send_template_request->language) {
        goto fail;
    }
    cJSON *language_local_JSON = send_template_request_all_of_language_convertToJSON(send_template_request->language);
    if(language_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "language", language_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // send_template_request->params
    if(send_template_request->params) {
    cJSON *params = cJSON_AddArrayToObject(item, "params");
    if(params == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *paramsListEntry;
    if (send_template_request->params) {
    list_ForEach(paramsListEntry, send_template_request->params) {
    cJSON *itemLocal = send_template_request_all_of_params_convertToJSON(paramsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(params, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

send_template_request_t *send_template_request_parseFromJSON(cJSON *send_template_requestJSON){

    send_template_request_t *send_template_request_local_var = NULL;

    // define the local variable for send_template_request->language
    send_template_request_all_of_language_t *language_local_nonprim = NULL;

    // define the local list for send_template_request->params
    list_t *paramsList = NULL;

    // send_template_request->_namespace
    cJSON *_namespace = cJSON_GetObjectItemCaseSensitive(send_template_requestJSON, "namespace");
    if (!_namespace) {
        goto end;
    }

    
    if(!cJSON_IsString(_namespace))
    {
    goto end; //String
    }

    // send_template_request->chat_id
    cJSON *chat_id = cJSON_GetObjectItemCaseSensitive(send_template_requestJSON, "chatId");
    if (chat_id) { 
    if(!cJSON_IsString(chat_id) && !cJSON_IsNull(chat_id))
    {
    goto end; //String
    }
    }

    // send_template_request->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(send_template_requestJSON, "phone");
    if (phone) { 
    if(!cJSON_IsNumber(phone))
    {
    goto end; //Numeric
    }
    }

    // send_template_request->_template
    cJSON *_template = cJSON_GetObjectItemCaseSensitive(send_template_requestJSON, "template");
    if (!_template) {
        goto end;
    }

    
    if(!cJSON_IsString(_template))
    {
    goto end; //String
    }

    // send_template_request->language
    cJSON *language = cJSON_GetObjectItemCaseSensitive(send_template_requestJSON, "language");
    if (!language) {
        goto end;
    }

    
    language_local_nonprim = send_template_request_all_of_language_parseFromJSON(language); //nonprimitive

    // send_template_request->params
    cJSON *params = cJSON_GetObjectItemCaseSensitive(send_template_requestJSON, "params");
    if (params) { 
    cJSON *params_local_nonprimitive = NULL;
    if(!cJSON_IsArray(params)){
        goto end; //nonprimitive container
    }

    paramsList = list_createList();

    cJSON_ArrayForEach(params_local_nonprimitive,params )
    {
        if(!cJSON_IsObject(params_local_nonprimitive)){
            goto end;
        }
        send_template_request_all_of_params_t *paramsItem = send_template_request_all_of_params_parseFromJSON(params_local_nonprimitive);

        list_addElement(paramsList, paramsItem);
    }
    }


    send_template_request_local_var = send_template_request_create (
        strdup(_namespace->valuestring),
        chat_id && !cJSON_IsNull(chat_id) ? strdup(chat_id->valuestring) : NULL,
        phone ? phone->valuedouble : 0,
        strdup(_template->valuestring),
        language_local_nonprim,
        params ? paramsList : NULL
        );

    return send_template_request_local_var;
end:
    if (language_local_nonprim) {
        send_template_request_all_of_language_free(language_local_nonprim);
        language_local_nonprim = NULL;
    }
    if (paramsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, paramsList) {
            send_template_request_all_of_params_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(paramsList);
        paramsList = NULL;
    }
    return NULL;

}
