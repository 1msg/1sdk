#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "get_ack_info_hooks_inner.h"



get_ack_info_hooks_inner_t *get_ack_info_hooks_inner_create(
    char *id,
    char *type,
    char *status,
    object_t *pricing,
    char *timestamp,
    object_t *conversation,
    char *recipient_id
    ) {
    get_ack_info_hooks_inner_t *get_ack_info_hooks_inner_local_var = malloc(sizeof(get_ack_info_hooks_inner_t));
    if (!get_ack_info_hooks_inner_local_var) {
        return NULL;
    }
    get_ack_info_hooks_inner_local_var->id = id;
    get_ack_info_hooks_inner_local_var->type = type;
    get_ack_info_hooks_inner_local_var->status = status;
    get_ack_info_hooks_inner_local_var->pricing = pricing;
    get_ack_info_hooks_inner_local_var->timestamp = timestamp;
    get_ack_info_hooks_inner_local_var->conversation = conversation;
    get_ack_info_hooks_inner_local_var->recipient_id = recipient_id;

    return get_ack_info_hooks_inner_local_var;
}


void get_ack_info_hooks_inner_free(get_ack_info_hooks_inner_t *get_ack_info_hooks_inner) {
    if(NULL == get_ack_info_hooks_inner){
        return ;
    }
    listEntry_t *listEntry;
    if (get_ack_info_hooks_inner->id) {
        free(get_ack_info_hooks_inner->id);
        get_ack_info_hooks_inner->id = NULL;
    }
    if (get_ack_info_hooks_inner->type) {
        free(get_ack_info_hooks_inner->type);
        get_ack_info_hooks_inner->type = NULL;
    }
    if (get_ack_info_hooks_inner->status) {
        free(get_ack_info_hooks_inner->status);
        get_ack_info_hooks_inner->status = NULL;
    }
    if (get_ack_info_hooks_inner->pricing) {
        object_free(get_ack_info_hooks_inner->pricing);
        get_ack_info_hooks_inner->pricing = NULL;
    }
    if (get_ack_info_hooks_inner->timestamp) {
        free(get_ack_info_hooks_inner->timestamp);
        get_ack_info_hooks_inner->timestamp = NULL;
    }
    if (get_ack_info_hooks_inner->conversation) {
        object_free(get_ack_info_hooks_inner->conversation);
        get_ack_info_hooks_inner->conversation = NULL;
    }
    if (get_ack_info_hooks_inner->recipient_id) {
        free(get_ack_info_hooks_inner->recipient_id);
        get_ack_info_hooks_inner->recipient_id = NULL;
    }
    free(get_ack_info_hooks_inner);
}

cJSON *get_ack_info_hooks_inner_convertToJSON(get_ack_info_hooks_inner_t *get_ack_info_hooks_inner) {
    cJSON *item = cJSON_CreateObject();

    // get_ack_info_hooks_inner->id
    if(get_ack_info_hooks_inner->id) {
    if(cJSON_AddStringToObject(item, "id", get_ack_info_hooks_inner->id) == NULL) {
    goto fail; //String
    }
    }


    // get_ack_info_hooks_inner->type
    if(get_ack_info_hooks_inner->type) {
    if(cJSON_AddStringToObject(item, "type", get_ack_info_hooks_inner->type) == NULL) {
    goto fail; //String
    }
    }


    // get_ack_info_hooks_inner->status
    if(get_ack_info_hooks_inner->status) {
    if(cJSON_AddStringToObject(item, "status", get_ack_info_hooks_inner->status) == NULL) {
    goto fail; //String
    }
    }


    // get_ack_info_hooks_inner->pricing
    if(get_ack_info_hooks_inner->pricing) {
    cJSON *pricing_object = object_convertToJSON(get_ack_info_hooks_inner->pricing);
    if(pricing_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "pricing", pricing_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // get_ack_info_hooks_inner->timestamp
    if(get_ack_info_hooks_inner->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", get_ack_info_hooks_inner->timestamp) == NULL) {
    goto fail; //String
    }
    }


    // get_ack_info_hooks_inner->conversation
    if(get_ack_info_hooks_inner->conversation) {
    cJSON *conversation_object = object_convertToJSON(get_ack_info_hooks_inner->conversation);
    if(conversation_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "conversation", conversation_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // get_ack_info_hooks_inner->recipient_id
    if(get_ack_info_hooks_inner->recipient_id) {
    if(cJSON_AddStringToObject(item, "recipient_id", get_ack_info_hooks_inner->recipient_id) == NULL) {
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

get_ack_info_hooks_inner_t *get_ack_info_hooks_inner_parseFromJSON(cJSON *get_ack_info_hooks_innerJSON){

    get_ack_info_hooks_inner_t *get_ack_info_hooks_inner_local_var = NULL;

    // get_ack_info_hooks_inner->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(get_ack_info_hooks_innerJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // get_ack_info_hooks_inner->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(get_ack_info_hooks_innerJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // get_ack_info_hooks_inner->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(get_ack_info_hooks_innerJSON, "status");
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // get_ack_info_hooks_inner->pricing
    cJSON *pricing = cJSON_GetObjectItemCaseSensitive(get_ack_info_hooks_innerJSON, "pricing");
    object_t *pricing_local_object = NULL;
    if (pricing) { 
    pricing_local_object = object_parseFromJSON(pricing); //object
    }

    // get_ack_info_hooks_inner->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(get_ack_info_hooks_innerJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //String
    }
    }

    // get_ack_info_hooks_inner->conversation
    cJSON *conversation = cJSON_GetObjectItemCaseSensitive(get_ack_info_hooks_innerJSON, "conversation");
    object_t *conversation_local_object = NULL;
    if (conversation) { 
    conversation_local_object = object_parseFromJSON(conversation); //object
    }

    // get_ack_info_hooks_inner->recipient_id
    cJSON *recipient_id = cJSON_GetObjectItemCaseSensitive(get_ack_info_hooks_innerJSON, "recipient_id");
    if (recipient_id) { 
    if(!cJSON_IsString(recipient_id) && !cJSON_IsNull(recipient_id))
    {
    goto end; //String
    }
    }


    get_ack_info_hooks_inner_local_var = get_ack_info_hooks_inner_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL,
        pricing ? pricing_local_object : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        conversation ? conversation_local_object : NULL,
        recipient_id && !cJSON_IsNull(recipient_id) ? strdup(recipient_id->valuestring) : NULL
        );

    return get_ack_info_hooks_inner_local_var;
end:
    return NULL;

}
