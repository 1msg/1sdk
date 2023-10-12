#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "chat_id_prop.h"



chat_id_prop_t *chat_id_prop_create(
    char *chat_id
    ) {
    chat_id_prop_t *chat_id_prop_local_var = malloc(sizeof(chat_id_prop_t));
    if (!chat_id_prop_local_var) {
        return NULL;
    }
    chat_id_prop_local_var->chat_id = chat_id;

    return chat_id_prop_local_var;
}


void chat_id_prop_free(chat_id_prop_t *chat_id_prop) {
    if(NULL == chat_id_prop){
        return ;
    }
    listEntry_t *listEntry;
    if (chat_id_prop->chat_id) {
        free(chat_id_prop->chat_id);
        chat_id_prop->chat_id = NULL;
    }
    free(chat_id_prop);
}

cJSON *chat_id_prop_convertToJSON(chat_id_prop_t *chat_id_prop) {
    cJSON *item = cJSON_CreateObject();

    // chat_id_prop->chat_id
    if(chat_id_prop->chat_id) {
    if(cJSON_AddStringToObject(item, "chatId", chat_id_prop->chat_id) == NULL) {
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

chat_id_prop_t *chat_id_prop_parseFromJSON(cJSON *chat_id_propJSON){

    chat_id_prop_t *chat_id_prop_local_var = NULL;

    // chat_id_prop->chat_id
    cJSON *chat_id = cJSON_GetObjectItemCaseSensitive(chat_id_propJSON, "chatId");
    if (chat_id) { 
    if(!cJSON_IsString(chat_id) && !cJSON_IsNull(chat_id))
    {
    goto end; //String
    }
    }


    chat_id_prop_local_var = chat_id_prop_create (
        chat_id && !cJSON_IsNull(chat_id) ? strdup(chat_id->valuestring) : NULL
        );

    return chat_id_prop_local_var;
end:
    return NULL;

}
