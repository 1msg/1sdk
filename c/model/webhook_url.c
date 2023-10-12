#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_url.h"



webhook_url_t *webhook_url_create(
    char *webhook_url
    ) {
    webhook_url_t *webhook_url_local_var = malloc(sizeof(webhook_url_t));
    if (!webhook_url_local_var) {
        return NULL;
    }
    webhook_url_local_var->webhook_url = webhook_url;

    return webhook_url_local_var;
}


void webhook_url_free(webhook_url_t *webhook_url) {
    if(NULL == webhook_url){
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_url->webhook_url) {
        free(webhook_url->webhook_url);
        webhook_url->webhook_url = NULL;
    }
    free(webhook_url);
}

cJSON *webhook_url_convertToJSON(webhook_url_t *webhook_url) {
    cJSON *item = cJSON_CreateObject();

    // webhook_url->webhook_url
    if (!webhook_url->webhook_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "webhookUrl", webhook_url->webhook_url) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

webhook_url_t *webhook_url_parseFromJSON(cJSON *webhook_urlJSON){

    webhook_url_t *webhook_url_local_var = NULL;

    // webhook_url->webhook_url
    cJSON *webhook_url = cJSON_GetObjectItemCaseSensitive(webhook_urlJSON, "webhookUrl");
    if (!webhook_url) {
        goto end;
    }

    
    if(!cJSON_IsString(webhook_url))
    {
    goto end; //String
    }


    webhook_url_local_var = webhook_url_create (
        strdup(webhook_url->valuestring)
        );

    return webhook_url_local_var;
end:
    return NULL;

}
