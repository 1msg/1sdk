#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "set_settings_200_response_all_of_update.h"



set_settings_200_response_all_of_update_t *set_settings_200_response_all_of_update_create(
    char *webhook_url
    ) {
    set_settings_200_response_all_of_update_t *set_settings_200_response_all_of_update_local_var = malloc(sizeof(set_settings_200_response_all_of_update_t));
    if (!set_settings_200_response_all_of_update_local_var) {
        return NULL;
    }
    set_settings_200_response_all_of_update_local_var->webhook_url = webhook_url;

    return set_settings_200_response_all_of_update_local_var;
}


void set_settings_200_response_all_of_update_free(set_settings_200_response_all_of_update_t *set_settings_200_response_all_of_update) {
    if(NULL == set_settings_200_response_all_of_update){
        return ;
    }
    listEntry_t *listEntry;
    if (set_settings_200_response_all_of_update->webhook_url) {
        free(set_settings_200_response_all_of_update->webhook_url);
        set_settings_200_response_all_of_update->webhook_url = NULL;
    }
    free(set_settings_200_response_all_of_update);
}

cJSON *set_settings_200_response_all_of_update_convertToJSON(set_settings_200_response_all_of_update_t *set_settings_200_response_all_of_update) {
    cJSON *item = cJSON_CreateObject();

    // set_settings_200_response_all_of_update->webhook_url
    if(set_settings_200_response_all_of_update->webhook_url) {
    if(cJSON_AddStringToObject(item, "webhookUrl", set_settings_200_response_all_of_update->webhook_url) == NULL) {
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

set_settings_200_response_all_of_update_t *set_settings_200_response_all_of_update_parseFromJSON(cJSON *set_settings_200_response_all_of_updateJSON){

    set_settings_200_response_all_of_update_t *set_settings_200_response_all_of_update_local_var = NULL;

    // set_settings_200_response_all_of_update->webhook_url
    cJSON *webhook_url = cJSON_GetObjectItemCaseSensitive(set_settings_200_response_all_of_updateJSON, "webhookUrl");
    if (webhook_url) { 
    if(!cJSON_IsString(webhook_url) && !cJSON_IsNull(webhook_url))
    {
    goto end; //String
    }
    }


    set_settings_200_response_all_of_update_local_var = set_settings_200_response_all_of_update_create (
        webhook_url && !cJSON_IsNull(webhook_url) ? strdup(webhook_url->valuestring) : NULL
        );

    return set_settings_200_response_all_of_update_local_var;
end:
    return NULL;

}
