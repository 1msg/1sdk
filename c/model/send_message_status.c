#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "send_message_status.h"



send_message_status_t *send_message_status_create(
    int sent,
    char *id,
    char *message,
    char *description
    ) {
    send_message_status_t *send_message_status_local_var = malloc(sizeof(send_message_status_t));
    if (!send_message_status_local_var) {
        return NULL;
    }
    send_message_status_local_var->sent = sent;
    send_message_status_local_var->id = id;
    send_message_status_local_var->message = message;
    send_message_status_local_var->description = description;

    return send_message_status_local_var;
}


void send_message_status_free(send_message_status_t *send_message_status) {
    if(NULL == send_message_status){
        return ;
    }
    listEntry_t *listEntry;
    if (send_message_status->id) {
        free(send_message_status->id);
        send_message_status->id = NULL;
    }
    if (send_message_status->message) {
        free(send_message_status->message);
        send_message_status->message = NULL;
    }
    if (send_message_status->description) {
        free(send_message_status->description);
        send_message_status->description = NULL;
    }
    free(send_message_status);
}

cJSON *send_message_status_convertToJSON(send_message_status_t *send_message_status) {
    cJSON *item = cJSON_CreateObject();

    // send_message_status->sent
    if(send_message_status->sent) {
    if(cJSON_AddBoolToObject(item, "sent", send_message_status->sent) == NULL) {
    goto fail; //Bool
    }
    }


    // send_message_status->id
    if(send_message_status->id) {
    if(cJSON_AddStringToObject(item, "id", send_message_status->id) == NULL) {
    goto fail; //String
    }
    }


    // send_message_status->message
    if(send_message_status->message) {
    if(cJSON_AddStringToObject(item, "message", send_message_status->message) == NULL) {
    goto fail; //String
    }
    }


    // send_message_status->description
    if(send_message_status->description) {
    if(cJSON_AddStringToObject(item, "description", send_message_status->description) == NULL) {
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

send_message_status_t *send_message_status_parseFromJSON(cJSON *send_message_statusJSON){

    send_message_status_t *send_message_status_local_var = NULL;

    // send_message_status->sent
    cJSON *sent = cJSON_GetObjectItemCaseSensitive(send_message_statusJSON, "sent");
    if (sent) { 
    if(!cJSON_IsBool(sent))
    {
    goto end; //Bool
    }
    }

    // send_message_status->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(send_message_statusJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // send_message_status->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(send_message_statusJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }

    // send_message_status->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(send_message_statusJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    send_message_status_local_var = send_message_status_create (
        sent ? sent->valueint : 0,
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        message && !cJSON_IsNull(message) ? strdup(message->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return send_message_status_local_var;
end:
    return NULL;

}
