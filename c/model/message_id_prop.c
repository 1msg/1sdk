#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "message_id_prop.h"



message_id_prop_t *message_id_prop_create(
    char *message_id
    ) {
    message_id_prop_t *message_id_prop_local_var = malloc(sizeof(message_id_prop_t));
    if (!message_id_prop_local_var) {
        return NULL;
    }
    message_id_prop_local_var->message_id = message_id;

    return message_id_prop_local_var;
}


void message_id_prop_free(message_id_prop_t *message_id_prop) {
    if(NULL == message_id_prop){
        return ;
    }
    listEntry_t *listEntry;
    if (message_id_prop->message_id) {
        free(message_id_prop->message_id);
        message_id_prop->message_id = NULL;
    }
    free(message_id_prop);
}

cJSON *message_id_prop_convertToJSON(message_id_prop_t *message_id_prop) {
    cJSON *item = cJSON_CreateObject();

    // message_id_prop->message_id
    if(message_id_prop->message_id) {
    if(cJSON_AddStringToObject(item, "messageId", message_id_prop->message_id) == NULL) {
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

message_id_prop_t *message_id_prop_parseFromJSON(cJSON *message_id_propJSON){

    message_id_prop_t *message_id_prop_local_var = NULL;

    // message_id_prop->message_id
    cJSON *message_id = cJSON_GetObjectItemCaseSensitive(message_id_propJSON, "messageId");
    if (message_id) { 
    if(!cJSON_IsString(message_id) && !cJSON_IsNull(message_id))
    {
    goto end; //String
    }
    }


    message_id_prop_local_var = message_id_prop_create (
        message_id && !cJSON_IsNull(message_id) ? strdup(message_id->valuestring) : NULL
        );

    return message_id_prop_local_var;
end:
    return NULL;

}
