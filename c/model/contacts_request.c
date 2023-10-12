#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contacts_request.h"



contacts_request_t *contacts_request_create(
    char *blocking,
    int force_check,
    list_t *contacts
    ) {
    contacts_request_t *contacts_request_local_var = malloc(sizeof(contacts_request_t));
    if (!contacts_request_local_var) {
        return NULL;
    }
    contacts_request_local_var->blocking = blocking;
    contacts_request_local_var->force_check = force_check;
    contacts_request_local_var->contacts = contacts;

    return contacts_request_local_var;
}


void contacts_request_free(contacts_request_t *contacts_request) {
    if(NULL == contacts_request){
        return ;
    }
    listEntry_t *listEntry;
    if (contacts_request->blocking) {
        free(contacts_request->blocking);
        contacts_request->blocking = NULL;
    }
    if (contacts_request->contacts) {
        list_ForEach(listEntry, contacts_request->contacts) {
            free(listEntry->data);
        }
        list_freeList(contacts_request->contacts);
        contacts_request->contacts = NULL;
    }
    free(contacts_request);
}

cJSON *contacts_request_convertToJSON(contacts_request_t *contacts_request) {
    cJSON *item = cJSON_CreateObject();

    // contacts_request->blocking
    if(contacts_request->blocking) {
    if(cJSON_AddStringToObject(item, "blocking", contacts_request->blocking) == NULL) {
    goto fail; //String
    }
    }


    // contacts_request->force_check
    if(contacts_request->force_check) {
    if(cJSON_AddBoolToObject(item, "force_check", contacts_request->force_check) == NULL) {
    goto fail; //Bool
    }
    }


    // contacts_request->contacts
    if (!contacts_request->contacts) {
        goto fail;
    }
    cJSON *contacts = cJSON_AddArrayToObject(item, "contacts");
    if(contacts == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *contactsListEntry;
    list_ForEach(contactsListEntry, contacts_request->contacts) {
    if(cJSON_AddStringToObject(contacts, "", (char*)contactsListEntry->data) == NULL)
    {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

contacts_request_t *contacts_request_parseFromJSON(cJSON *contacts_requestJSON){

    contacts_request_t *contacts_request_local_var = NULL;

    // define the local list for contacts_request->contacts
    list_t *contactsList = NULL;

    // contacts_request->blocking
    cJSON *blocking = cJSON_GetObjectItemCaseSensitive(contacts_requestJSON, "blocking");
    if (blocking) { 
    if(!cJSON_IsString(blocking) && !cJSON_IsNull(blocking))
    {
    goto end; //String
    }
    }

    // contacts_request->force_check
    cJSON *force_check = cJSON_GetObjectItemCaseSensitive(contacts_requestJSON, "force_check");
    if (force_check) { 
    if(!cJSON_IsBool(force_check))
    {
    goto end; //Bool
    }
    }

    // contacts_request->contacts
    cJSON *contacts = cJSON_GetObjectItemCaseSensitive(contacts_requestJSON, "contacts");
    if (!contacts) {
        goto end;
    }

    
    cJSON *contacts_local = NULL;
    if(!cJSON_IsArray(contacts)) {
        goto end;//primitive container
    }
    contactsList = list_createList();

    cJSON_ArrayForEach(contacts_local, contacts)
    {
        if(!cJSON_IsString(contacts_local))
        {
            goto end;
        }
        list_addElement(contactsList , strdup(contacts_local->valuestring));
    }


    contacts_request_local_var = contacts_request_create (
        blocking && !cJSON_IsNull(blocking) ? strdup(blocking->valuestring) : NULL,
        force_check ? force_check->valueint : 0,
        contactsList
        );

    return contacts_request_local_var;
end:
    if (contactsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, contactsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(contactsList);
        contactsList = NULL;
    }
    return NULL;

}
