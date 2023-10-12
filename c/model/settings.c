#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "settings.h"



settings_t *settings_create(
    char *webhook_url
    ) {
    settings_t *settings_local_var = malloc(sizeof(settings_t));
    if (!settings_local_var) {
        return NULL;
    }
    settings_local_var->webhook_url = webhook_url;

    return settings_local_var;
}


void settings_free(settings_t *settings) {
    if(NULL == settings){
        return ;
    }
    listEntry_t *listEntry;
    if (settings->webhook_url) {
        free(settings->webhook_url);
        settings->webhook_url = NULL;
    }
    free(settings);
}

cJSON *settings_convertToJSON(settings_t *settings) {
    cJSON *item = cJSON_CreateObject();

    // settings->webhook_url
    if(settings->webhook_url) {
    if(cJSON_AddStringToObject(item, "webhookUrl", settings->webhook_url) == NULL) {
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

settings_t *settings_parseFromJSON(cJSON *settingsJSON){

    settings_t *settings_local_var = NULL;

    // settings->webhook_url
    cJSON *webhook_url = cJSON_GetObjectItemCaseSensitive(settingsJSON, "webhookUrl");
    if (webhook_url) { 
    if(!cJSON_IsString(webhook_url) && !cJSON_IsNull(webhook_url))
    {
    goto end; //String
    }
    }


    settings_local_var = settings_create (
        webhook_url && !cJSON_IsNull(webhook_url) ? strdup(webhook_url->valuestring) : NULL
        );

    return settings_local_var;
end:
    return NULL;

}
