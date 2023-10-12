#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ack.h"


char* statusack_ToString(one_msg_waba_sdk_ack_STATUS_e status) {
    char* statusArray[] =  { "NULL", "delivered", "viewed", "sent" };
	return statusArray[status];
}

one_msg_waba_sdk_ack_STATUS_e statusack_FromString(char* status){
    int stringToReturn = 0;
    char *statusArray[] =  { "NULL", "delivered", "viewed", "sent" };
    size_t sizeofArray = sizeof(statusArray) / sizeof(statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(status, statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ack_t *ack_create(
    char *id,
    char *chat_id,
    one_msg_waba_sdk_ack_STATUS_e status
    ) {
    ack_t *ack_local_var = malloc(sizeof(ack_t));
    if (!ack_local_var) {
        return NULL;
    }
    ack_local_var->id = id;
    ack_local_var->chat_id = chat_id;
    ack_local_var->status = status;

    return ack_local_var;
}


void ack_free(ack_t *ack) {
    if(NULL == ack){
        return ;
    }
    listEntry_t *listEntry;
    if (ack->id) {
        free(ack->id);
        ack->id = NULL;
    }
    if (ack->chat_id) {
        free(ack->chat_id);
        ack->chat_id = NULL;
    }
    free(ack);
}

cJSON *ack_convertToJSON(ack_t *ack) {
    cJSON *item = cJSON_CreateObject();

    // ack->id
    if(ack->id) {
    if(cJSON_AddStringToObject(item, "id", ack->id) == NULL) {
    goto fail; //String
    }
    }


    // ack->chat_id
    if(ack->chat_id) {
    if(cJSON_AddStringToObject(item, "chatId", ack->chat_id) == NULL) {
    goto fail; //String
    }
    }


    // ack->status
    if(ack->status != one_msg_waba_sdk_ack_STATUS_NULL) {
    if(cJSON_AddStringToObject(item, "status", statusack_ToString(ack->status)) == NULL)
    {
    goto fail; //Enum
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ack_t *ack_parseFromJSON(cJSON *ackJSON){

    ack_t *ack_local_var = NULL;

    // ack->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(ackJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // ack->chat_id
    cJSON *chat_id = cJSON_GetObjectItemCaseSensitive(ackJSON, "chatId");
    if (chat_id) { 
    if(!cJSON_IsString(chat_id) && !cJSON_IsNull(chat_id))
    {
    goto end; //String
    }
    }

    // ack->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(ackJSON, "status");
    one_msg_waba_sdk_ack_STATUS_e statusVariable;
    if (status) { 
    if(!cJSON_IsString(status))
    {
    goto end; //Enum
    }
    statusVariable = statusack_FromString(status->valuestring);
    }


    ack_local_var = ack_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        chat_id && !cJSON_IsNull(chat_id) ? strdup(chat_id->valuestring) : NULL,
        status ? statusVariable : -1
        );

    return ack_local_var;
end:
    return NULL;

}
