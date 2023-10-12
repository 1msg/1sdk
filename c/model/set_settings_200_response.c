#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "set_settings_200_response.h"



set_settings_200_response_t *set_settings_200_response_create(
    char *webhook_url,
    set_settings_200_response_all_of_update_t *update
    ) {
    set_settings_200_response_t *set_settings_200_response_local_var = malloc(sizeof(set_settings_200_response_t));
    if (!set_settings_200_response_local_var) {
        return NULL;
    }
    set_settings_200_response_local_var->webhook_url = webhook_url;
    set_settings_200_response_local_var->update = update;

    return set_settings_200_response_local_var;
}


void set_settings_200_response_free(set_settings_200_response_t *set_settings_200_response) {
    if(NULL == set_settings_200_response){
        return ;
    }
    listEntry_t *listEntry;
    if (set_settings_200_response->webhook_url) {
        free(set_settings_200_response->webhook_url);
        set_settings_200_response->webhook_url = NULL;
    }
    if (set_settings_200_response->update) {
        set_settings_200_response_all_of_update_free(set_settings_200_response->update);
        set_settings_200_response->update = NULL;
    }
    free(set_settings_200_response);
}

cJSON *set_settings_200_response_convertToJSON(set_settings_200_response_t *set_settings_200_response) {
    cJSON *item = cJSON_CreateObject();

    // set_settings_200_response->webhook_url
    if(set_settings_200_response->webhook_url) {
    if(cJSON_AddStringToObject(item, "webhookUrl", set_settings_200_response->webhook_url) == NULL) {
    goto fail; //String
    }
    }


    // set_settings_200_response->update
    if (!set_settings_200_response->update) {
        goto fail;
    }
    cJSON *update_local_JSON = set_settings_200_response_all_of_update_convertToJSON(set_settings_200_response->update);
    if(update_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "update", update_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

set_settings_200_response_t *set_settings_200_response_parseFromJSON(cJSON *set_settings_200_responseJSON){

    set_settings_200_response_t *set_settings_200_response_local_var = NULL;

    // define the local variable for set_settings_200_response->update
    set_settings_200_response_all_of_update_t *update_local_nonprim = NULL;

    // set_settings_200_response->webhook_url
    cJSON *webhook_url = cJSON_GetObjectItemCaseSensitive(set_settings_200_responseJSON, "webhookUrl");
    if (webhook_url) { 
    if(!cJSON_IsString(webhook_url) && !cJSON_IsNull(webhook_url))
    {
    goto end; //String
    }
    }

    // set_settings_200_response->update
    cJSON *update = cJSON_GetObjectItemCaseSensitive(set_settings_200_responseJSON, "update");
    if (!update) {
        goto end;
    }

    
    update_local_nonprim = set_settings_200_response_all_of_update_parseFromJSON(update); //nonprimitive


    set_settings_200_response_local_var = set_settings_200_response_create (
        webhook_url && !cJSON_IsNull(webhook_url) ? strdup(webhook_url->valuestring) : NULL,
        update_local_nonprim
        );

    return set_settings_200_response_local_var;
end:
    if (update_local_nonprim) {
        set_settings_200_response_all_of_update_free(update_local_nonprim);
        update_local_nonprim = NULL;
    }
    return NULL;

}
