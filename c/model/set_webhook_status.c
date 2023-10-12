#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "set_webhook_status.h"



set_webhook_status_t *set_webhook_status_create(
    int set,
    char *message
    ) {
    set_webhook_status_t *set_webhook_status_local_var = malloc(sizeof(set_webhook_status_t));
    if (!set_webhook_status_local_var) {
        return NULL;
    }
    set_webhook_status_local_var->set = set;
    set_webhook_status_local_var->message = message;

    return set_webhook_status_local_var;
}


void set_webhook_status_free(set_webhook_status_t *set_webhook_status) {
    if(NULL == set_webhook_status){
        return ;
    }
    listEntry_t *listEntry;
    if (set_webhook_status->message) {
        free(set_webhook_status->message);
        set_webhook_status->message = NULL;
    }
    free(set_webhook_status);
}

cJSON *set_webhook_status_convertToJSON(set_webhook_status_t *set_webhook_status) {
    cJSON *item = cJSON_CreateObject();

    // set_webhook_status->set
    if(set_webhook_status->set) {
    if(cJSON_AddBoolToObject(item, "set", set_webhook_status->set) == NULL) {
    goto fail; //Bool
    }
    }


    // set_webhook_status->message
    if(set_webhook_status->message) {
    if(cJSON_AddStringToObject(item, "message", set_webhook_status->message) == NULL) {
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

set_webhook_status_t *set_webhook_status_parseFromJSON(cJSON *set_webhook_statusJSON){

    set_webhook_status_t *set_webhook_status_local_var = NULL;

    // set_webhook_status->set
    cJSON *set = cJSON_GetObjectItemCaseSensitive(set_webhook_statusJSON, "set");
    if (set) { 
    if(!cJSON_IsBool(set))
    {
    goto end; //Bool
    }
    }

    // set_webhook_status->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(set_webhook_statusJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }


    set_webhook_status_local_var = set_webhook_status_create (
        set ? set->valueint : 0,
        message && !cJSON_IsNull(message) ? strdup(message->valuestring) : NULL
        );

    return set_webhook_status_local_var;
end:
    return NULL;

}
