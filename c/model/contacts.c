#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contacts.h"



contacts_t *contacts_create(
    list_t *contacts
    ) {
    contacts_t *contacts_local_var = malloc(sizeof(contacts_t));
    if (!contacts_local_var) {
        return NULL;
    }
    contacts_local_var->contacts = contacts;

    return contacts_local_var;
}


void contacts_free(contacts_t *contacts) {
    if(NULL == contacts){
        return ;
    }
    listEntry_t *listEntry;
    if (contacts->contacts) {
        list_ForEach(listEntry, contacts->contacts) {
            contacts_contacts_inner_free(listEntry->data);
        }
        list_freeList(contacts->contacts);
        contacts->contacts = NULL;
    }
    free(contacts);
}

cJSON *contacts_convertToJSON(contacts_t *contacts) {
    cJSON *item = cJSON_CreateObject();

    // contacts->contacts
    if(contacts->contacts) {
    cJSON *contacts = cJSON_AddArrayToObject(item, "contacts");
    if(contacts == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *contactsListEntry;
    if (contacts->contacts) {
    list_ForEach(contactsListEntry, contacts->contacts) {
    cJSON *itemLocal = contacts_contacts_inner_convertToJSON(contactsListEntry->data);
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

contacts_t *contacts_parseFromJSON(cJSON *contactsJSON){

    contacts_t *contacts_local_var = NULL;

    // define the local list for contacts->contacts
    list_t *contactsList = NULL;

    // contacts->contacts
    cJSON *contacts = cJSON_GetObjectItemCaseSensitive(contactsJSON, "contacts");
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
        contacts_contacts_inner_t *contactsItem = contacts_contacts_inner_parseFromJSON(contacts_local_nonprimitive);

        list_addElement(contactsList, contactsItem);
    }
    }


    contacts_local_var = contacts_create (
        contacts ? contactsList : NULL
        );

    return contacts_local_var;
end:
    if (contactsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, contactsList) {
            contacts_contacts_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(contactsList);
        contactsList = NULL;
    }
    return NULL;

}
