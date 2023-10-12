#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contacts_contacts_inner.h"



contacts_contacts_inner_t *contacts_contacts_inner_create(
    char *input,
    char *status,
    char *wa_id
    ) {
    contacts_contacts_inner_t *contacts_contacts_inner_local_var = malloc(sizeof(contacts_contacts_inner_t));
    if (!contacts_contacts_inner_local_var) {
        return NULL;
    }
    contacts_contacts_inner_local_var->input = input;
    contacts_contacts_inner_local_var->status = status;
    contacts_contacts_inner_local_var->wa_id = wa_id;

    return contacts_contacts_inner_local_var;
}


void contacts_contacts_inner_free(contacts_contacts_inner_t *contacts_contacts_inner) {
    if(NULL == contacts_contacts_inner){
        return ;
    }
    listEntry_t *listEntry;
    if (contacts_contacts_inner->input) {
        free(contacts_contacts_inner->input);
        contacts_contacts_inner->input = NULL;
    }
    if (contacts_contacts_inner->status) {
        free(contacts_contacts_inner->status);
        contacts_contacts_inner->status = NULL;
    }
    if (contacts_contacts_inner->wa_id) {
        free(contacts_contacts_inner->wa_id);
        contacts_contacts_inner->wa_id = NULL;
    }
    free(contacts_contacts_inner);
}

cJSON *contacts_contacts_inner_convertToJSON(contacts_contacts_inner_t *contacts_contacts_inner) {
    cJSON *item = cJSON_CreateObject();

    // contacts_contacts_inner->input
    if(contacts_contacts_inner->input) {
    if(cJSON_AddStringToObject(item, "input", contacts_contacts_inner->input) == NULL) {
    goto fail; //String
    }
    }


    // contacts_contacts_inner->status
    if(contacts_contacts_inner->status) {
    if(cJSON_AddStringToObject(item, "status", contacts_contacts_inner->status) == NULL) {
    goto fail; //String
    }
    }


    // contacts_contacts_inner->wa_id
    if(contacts_contacts_inner->wa_id) {
    if(cJSON_AddStringToObject(item, "wa_id", contacts_contacts_inner->wa_id) == NULL) {
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

contacts_contacts_inner_t *contacts_contacts_inner_parseFromJSON(cJSON *contacts_contacts_innerJSON){

    contacts_contacts_inner_t *contacts_contacts_inner_local_var = NULL;

    // contacts_contacts_inner->input
    cJSON *input = cJSON_GetObjectItemCaseSensitive(contacts_contacts_innerJSON, "input");
    if (input) { 
    if(!cJSON_IsString(input) && !cJSON_IsNull(input))
    {
    goto end; //String
    }
    }

    // contacts_contacts_inner->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(contacts_contacts_innerJSON, "status");
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // contacts_contacts_inner->wa_id
    cJSON *wa_id = cJSON_GetObjectItemCaseSensitive(contacts_contacts_innerJSON, "wa_id");
    if (wa_id) { 
    if(!cJSON_IsString(wa_id) && !cJSON_IsNull(wa_id))
    {
    goto end; //String
    }
    }


    contacts_contacts_inner_local_var = contacts_contacts_inner_create (
        input && !cJSON_IsNull(input) ? strdup(input->valuestring) : NULL,
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL,
        wa_id && !cJSON_IsNull(wa_id) ? strdup(wa_id->valuestring) : NULL
        );

    return contacts_contacts_inner_local_var;
end:
    return NULL;

}
