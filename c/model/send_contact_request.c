#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "send_contact_request.h"



send_contact_request_t *send_contact_request_create(
    char *chat_id,
    int phone,
    list_t *contacts
    ) {
    send_contact_request_t *send_contact_request_local_var = malloc(sizeof(send_contact_request_t));
    if (!send_contact_request_local_var) {
        return NULL;
    }
    send_contact_request_local_var->chat_id = chat_id;
    send_contact_request_local_var->phone = phone;
    send_contact_request_local_var->contacts = contacts;

    return send_contact_request_local_var;
}


void send_contact_request_free(send_contact_request_t *send_contact_request) {
    if(NULL == send_contact_request){
        return ;
    }
    listEntry_t *listEntry;
    if (send_contact_request->chat_id) {
        free(send_contact_request->chat_id);
        send_contact_request->chat_id = NULL;
    }
    if (send_contact_request->contacts) {
        list_ForEach(listEntry, send_contact_request->contacts) {
            object_free(listEntry->data);
        }
        list_freeList(send_contact_request->contacts);
        send_contact_request->contacts = NULL;
    }
    free(send_contact_request);
}

cJSON *send_contact_request_convertToJSON(send_contact_request_t *send_contact_request) {
    cJSON *item = cJSON_CreateObject();

    // send_contact_request->chat_id
    if(send_contact_request->chat_id) {
    if(cJSON_AddStringToObject(item, "chatId", send_contact_request->chat_id) == NULL) {
    goto fail; //String
    }
    }


    // send_contact_request->phone
    if(send_contact_request->phone) {
    if(cJSON_AddNumberToObject(item, "phone", send_contact_request->phone) == NULL) {
    goto fail; //Numeric
    }
    }


    // send_contact_request->contacts
    if(send_contact_request->contacts) {
    cJSON *contacts = cJSON_AddArrayToObject(item, "contacts");
    if(contacts == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *contactsListEntry;
    if (send_contact_request->contacts) {
    list_ForEach(contactsListEntry, send_contact_request->contacts) {
    cJSON *itemLocal = object_convertToJSON(contactsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(contacts, itemLocal);
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

send_contact_request_t *send_contact_request_parseFromJSON(cJSON *send_contact_requestJSON){

    send_contact_request_t *send_contact_request_local_var = NULL;

    // define the local list for send_contact_request->contacts
    list_t *contactsList = NULL;

    // send_contact_request->chat_id
    cJSON *chat_id = cJSON_GetObjectItemCaseSensitive(send_contact_requestJSON, "chatId");
    if (chat_id) { 
    if(!cJSON_IsString(chat_id) && !cJSON_IsNull(chat_id))
    {
    goto end; //String
    }
    }

    // send_contact_request->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(send_contact_requestJSON, "phone");
    if (phone) { 
    if(!cJSON_IsNumber(phone))
    {
    goto end; //Numeric
    }
    }

    // send_contact_request->contacts
    cJSON *contacts = cJSON_GetObjectItemCaseSensitive(send_contact_requestJSON, "contacts");
    if (contacts) { 
    cJSON *contacts_local_nonprimitive = NULL;
    if(!cJSON_IsArray(contacts)){
        goto end; //nonprimitive container
    }

    contactsList = list_createList();

    cJSON_ArrayForEach(contacts_local_nonprimitive,contacts )
    {
        if(!cJSON_IsObject(contacts_local_nonprimitive)){
            goto end;
        }
        object_t *contactsItem = object_parseFromJSON(contacts_local_nonprimitive);

        list_addElement(contactsList, contactsItem);
    }
    }


    send_contact_request_local_var = send_contact_request_create (
        chat_id && !cJSON_IsNull(chat_id) ? strdup(chat_id->valuestring) : NULL,
        phone ? phone->valuedouble : 0,
        contacts ? contactsList : NULL
        );

    return send_contact_request_local_var;
end:
    if (contactsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, contactsList) {
            object_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(contactsList);
        contactsList = NULL;
    }
    return NULL;

}
