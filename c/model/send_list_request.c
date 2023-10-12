#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "send_list_request.h"



send_list_request_t *send_list_request_create(
    char *chat_id,
    int phone,
    char *body,
    char *header,
    char *footer,
    char *action,
    list_t *sections
    ) {
    send_list_request_t *send_list_request_local_var = malloc(sizeof(send_list_request_t));
    if (!send_list_request_local_var) {
        return NULL;
    }
    send_list_request_local_var->chat_id = chat_id;
    send_list_request_local_var->phone = phone;
    send_list_request_local_var->body = body;
    send_list_request_local_var->header = header;
    send_list_request_local_var->footer = footer;
    send_list_request_local_var->action = action;
    send_list_request_local_var->sections = sections;

    return send_list_request_local_var;
}


void send_list_request_free(send_list_request_t *send_list_request) {
    if(NULL == send_list_request){
        return ;
    }
    listEntry_t *listEntry;
    if (send_list_request->chat_id) {
        free(send_list_request->chat_id);
        send_list_request->chat_id = NULL;
    }
    if (send_list_request->body) {
        free(send_list_request->body);
        send_list_request->body = NULL;
    }
    if (send_list_request->header) {
        free(send_list_request->header);
        send_list_request->header = NULL;
    }
    if (send_list_request->footer) {
        free(send_list_request->footer);
        send_list_request->footer = NULL;
    }
    if (send_list_request->action) {
        free(send_list_request->action);
        send_list_request->action = NULL;
    }
    if (send_list_request->sections) {
        list_ForEach(listEntry, send_list_request->sections) {
            send_list_request_all_of_sections_free(listEntry->data);
        }
        list_freeList(send_list_request->sections);
        send_list_request->sections = NULL;
    }
    free(send_list_request);
}

cJSON *send_list_request_convertToJSON(send_list_request_t *send_list_request) {
    cJSON *item = cJSON_CreateObject();

    // send_list_request->chat_id
    if(send_list_request->chat_id) {
    if(cJSON_AddStringToObject(item, "chatId", send_list_request->chat_id) == NULL) {
    goto fail; //String
    }
    }


    // send_list_request->phone
    if(send_list_request->phone) {
    if(cJSON_AddNumberToObject(item, "phone", send_list_request->phone) == NULL) {
    goto fail; //Numeric
    }
    }


    // send_list_request->body
    if (!send_list_request->body) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "body", send_list_request->body) == NULL) {
    goto fail; //String
    }


    // send_list_request->header
    if(send_list_request->header) {
    if(cJSON_AddStringToObject(item, "header", send_list_request->header) == NULL) {
    goto fail; //String
    }
    }


    // send_list_request->footer
    if(send_list_request->footer) {
    if(cJSON_AddStringToObject(item, "footer", send_list_request->footer) == NULL) {
    goto fail; //String
    }
    }


    // send_list_request->action
    if (!send_list_request->action) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "action", send_list_request->action) == NULL) {
    goto fail; //String
    }


    // send_list_request->sections
    if (!send_list_request->sections) {
        goto fail;
    }
    cJSON *sections = cJSON_AddArrayToObject(item, "sections");
    if(sections == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *sectionsListEntry;
    if (send_list_request->sections) {
    list_ForEach(sectionsListEntry, send_list_request->sections) {
    cJSON *itemLocal = send_list_request_all_of_sections_convertToJSON(sectionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(sections, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

send_list_request_t *send_list_request_parseFromJSON(cJSON *send_list_requestJSON){

    send_list_request_t *send_list_request_local_var = NULL;

    // define the local list for send_list_request->sections
    list_t *sectionsList = NULL;

    // send_list_request->chat_id
    cJSON *chat_id = cJSON_GetObjectItemCaseSensitive(send_list_requestJSON, "chatId");
    if (chat_id) { 
    if(!cJSON_IsString(chat_id) && !cJSON_IsNull(chat_id))
    {
    goto end; //String
    }
    }

    // send_list_request->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(send_list_requestJSON, "phone");
    if (phone) { 
    if(!cJSON_IsNumber(phone))
    {
    goto end; //Numeric
    }
    }

    // send_list_request->body
    cJSON *body = cJSON_GetObjectItemCaseSensitive(send_list_requestJSON, "body");
    if (!body) {
        goto end;
    }

    
    if(!cJSON_IsString(body))
    {
    goto end; //String
    }

    // send_list_request->header
    cJSON *header = cJSON_GetObjectItemCaseSensitive(send_list_requestJSON, "header");
    if (header) { 
    if(!cJSON_IsString(header) && !cJSON_IsNull(header))
    {
    goto end; //String
    }
    }

    // send_list_request->footer
    cJSON *footer = cJSON_GetObjectItemCaseSensitive(send_list_requestJSON, "footer");
    if (footer) { 
    if(!cJSON_IsString(footer) && !cJSON_IsNull(footer))
    {
    goto end; //String
    }
    }

    // send_list_request->action
    cJSON *action = cJSON_GetObjectItemCaseSensitive(send_list_requestJSON, "action");
    if (!action) {
        goto end;
    }

    
    if(!cJSON_IsString(action))
    {
    goto end; //String
    }

    // send_list_request->sections
    cJSON *sections = cJSON_GetObjectItemCaseSensitive(send_list_requestJSON, "sections");
    if (!sections) {
        goto end;
    }

    
    cJSON *sections_local_nonprimitive = NULL;
    if(!cJSON_IsArray(sections)){
        goto end; //nonprimitive container
    }

    sectionsList = list_createList();

    cJSON_ArrayForEach(sections_local_nonprimitive,sections )
    {
        if(!cJSON_IsObject(sections_local_nonprimitive)){
            goto end;
        }
        send_list_request_all_of_sections_t *sectionsItem = send_list_request_all_of_sections_parseFromJSON(sections_local_nonprimitive);

        list_addElement(sectionsList, sectionsItem);
    }


    send_list_request_local_var = send_list_request_create (
        chat_id && !cJSON_IsNull(chat_id) ? strdup(chat_id->valuestring) : NULL,
        phone ? phone->valuedouble : 0,
        strdup(body->valuestring),
        header && !cJSON_IsNull(header) ? strdup(header->valuestring) : NULL,
        footer && !cJSON_IsNull(footer) ? strdup(footer->valuestring) : NULL,
        strdup(action->valuestring),
        sectionsList
        );

    return send_list_request_local_var;
end:
    if (sectionsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, sectionsList) {
            send_list_request_all_of_sections_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(sectionsList);
        sectionsList = NULL;
    }
    return NULL;

}
