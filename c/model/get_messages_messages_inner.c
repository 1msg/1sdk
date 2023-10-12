#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "get_messages_messages_inner.h"



get_messages_messages_inner_t *get_messages_messages_inner_create(
    int message_number,
    char *id,
    char *body,
    int from_me,
    int self,
    int is_forwarded,
    char *author,
    int time,
    char *chat_id,
    char *type,
    char *sender_name,
    char *caption,
    char *quoted_msg_id,
    object_t *metadata,
    char *chat_name
    ) {
    get_messages_messages_inner_t *get_messages_messages_inner_local_var = malloc(sizeof(get_messages_messages_inner_t));
    if (!get_messages_messages_inner_local_var) {
        return NULL;
    }
    get_messages_messages_inner_local_var->message_number = message_number;
    get_messages_messages_inner_local_var->id = id;
    get_messages_messages_inner_local_var->body = body;
    get_messages_messages_inner_local_var->from_me = from_me;
    get_messages_messages_inner_local_var->self = self;
    get_messages_messages_inner_local_var->is_forwarded = is_forwarded;
    get_messages_messages_inner_local_var->author = author;
    get_messages_messages_inner_local_var->time = time;
    get_messages_messages_inner_local_var->chat_id = chat_id;
    get_messages_messages_inner_local_var->type = type;
    get_messages_messages_inner_local_var->sender_name = sender_name;
    get_messages_messages_inner_local_var->caption = caption;
    get_messages_messages_inner_local_var->quoted_msg_id = quoted_msg_id;
    get_messages_messages_inner_local_var->metadata = metadata;
    get_messages_messages_inner_local_var->chat_name = chat_name;

    return get_messages_messages_inner_local_var;
}


void get_messages_messages_inner_free(get_messages_messages_inner_t *get_messages_messages_inner) {
    if(NULL == get_messages_messages_inner){
        return ;
    }
    listEntry_t *listEntry;
    if (get_messages_messages_inner->id) {
        free(get_messages_messages_inner->id);
        get_messages_messages_inner->id = NULL;
    }
    if (get_messages_messages_inner->body) {
        free(get_messages_messages_inner->body);
        get_messages_messages_inner->body = NULL;
    }
    if (get_messages_messages_inner->author) {
        free(get_messages_messages_inner->author);
        get_messages_messages_inner->author = NULL;
    }
    if (get_messages_messages_inner->chat_id) {
        free(get_messages_messages_inner->chat_id);
        get_messages_messages_inner->chat_id = NULL;
    }
    if (get_messages_messages_inner->type) {
        free(get_messages_messages_inner->type);
        get_messages_messages_inner->type = NULL;
    }
    if (get_messages_messages_inner->sender_name) {
        free(get_messages_messages_inner->sender_name);
        get_messages_messages_inner->sender_name = NULL;
    }
    if (get_messages_messages_inner->caption) {
        free(get_messages_messages_inner->caption);
        get_messages_messages_inner->caption = NULL;
    }
    if (get_messages_messages_inner->quoted_msg_id) {
        free(get_messages_messages_inner->quoted_msg_id);
        get_messages_messages_inner->quoted_msg_id = NULL;
    }
    if (get_messages_messages_inner->metadata) {
        object_free(get_messages_messages_inner->metadata);
        get_messages_messages_inner->metadata = NULL;
    }
    if (get_messages_messages_inner->chat_name) {
        free(get_messages_messages_inner->chat_name);
        get_messages_messages_inner->chat_name = NULL;
    }
    free(get_messages_messages_inner);
}

cJSON *get_messages_messages_inner_convertToJSON(get_messages_messages_inner_t *get_messages_messages_inner) {
    cJSON *item = cJSON_CreateObject();

    // get_messages_messages_inner->message_number
    if(get_messages_messages_inner->message_number) {
    if(cJSON_AddNumberToObject(item, "messageNumber", get_messages_messages_inner->message_number) == NULL) {
    goto fail; //Numeric
    }
    }


    // get_messages_messages_inner->id
    if(get_messages_messages_inner->id) {
    if(cJSON_AddStringToObject(item, "id", get_messages_messages_inner->id) == NULL) {
    goto fail; //String
    }
    }


    // get_messages_messages_inner->body
    if(get_messages_messages_inner->body) {
    if(cJSON_AddStringToObject(item, "body", get_messages_messages_inner->body) == NULL) {
    goto fail; //String
    }
    }


    // get_messages_messages_inner->from_me
    if(get_messages_messages_inner->from_me) {
    if(cJSON_AddBoolToObject(item, "fromMe", get_messages_messages_inner->from_me) == NULL) {
    goto fail; //Bool
    }
    }


    // get_messages_messages_inner->self
    if(get_messages_messages_inner->self) {
    if(cJSON_AddNumberToObject(item, "self", get_messages_messages_inner->self) == NULL) {
    goto fail; //Numeric
    }
    }


    // get_messages_messages_inner->is_forwarded
    if(get_messages_messages_inner->is_forwarded) {
    if(cJSON_AddNumberToObject(item, "isForwarded", get_messages_messages_inner->is_forwarded) == NULL) {
    goto fail; //Numeric
    }
    }


    // get_messages_messages_inner->author
    if(get_messages_messages_inner->author) {
    if(cJSON_AddStringToObject(item, "author", get_messages_messages_inner->author) == NULL) {
    goto fail; //String
    }
    }


    // get_messages_messages_inner->time
    if(get_messages_messages_inner->time) {
    if(cJSON_AddNumberToObject(item, "time", get_messages_messages_inner->time) == NULL) {
    goto fail; //Numeric
    }
    }


    // get_messages_messages_inner->chat_id
    if(get_messages_messages_inner->chat_id) {
    if(cJSON_AddStringToObject(item, "chatId", get_messages_messages_inner->chat_id) == NULL) {
    goto fail; //String
    }
    }


    // get_messages_messages_inner->type
    if(get_messages_messages_inner->type) {
    if(cJSON_AddStringToObject(item, "type", get_messages_messages_inner->type) == NULL) {
    goto fail; //String
    }
    }


    // get_messages_messages_inner->sender_name
    if(get_messages_messages_inner->sender_name) {
    if(cJSON_AddStringToObject(item, "senderName", get_messages_messages_inner->sender_name) == NULL) {
    goto fail; //String
    }
    }


    // get_messages_messages_inner->caption
    if(get_messages_messages_inner->caption) {
    if(cJSON_AddStringToObject(item, "caption", get_messages_messages_inner->caption) == NULL) {
    goto fail; //String
    }
    }


    // get_messages_messages_inner->quoted_msg_id
    if(get_messages_messages_inner->quoted_msg_id) {
    if(cJSON_AddStringToObject(item, "quotedMsgId", get_messages_messages_inner->quoted_msg_id) == NULL) {
    goto fail; //String
    }
    }


    // get_messages_messages_inner->metadata
    if(get_messages_messages_inner->metadata) {
    cJSON *metadata_object = object_convertToJSON(get_messages_messages_inner->metadata);
    if(metadata_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // get_messages_messages_inner->chat_name
    if(get_messages_messages_inner->chat_name) {
    if(cJSON_AddStringToObject(item, "chatName", get_messages_messages_inner->chat_name) == NULL) {
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

get_messages_messages_inner_t *get_messages_messages_inner_parseFromJSON(cJSON *get_messages_messages_innerJSON){

    get_messages_messages_inner_t *get_messages_messages_inner_local_var = NULL;

    // get_messages_messages_inner->message_number
    cJSON *message_number = cJSON_GetObjectItemCaseSensitive(get_messages_messages_innerJSON, "messageNumber");
    if (message_number) { 
    if(!cJSON_IsNumber(message_number))
    {
    goto end; //Numeric
    }
    }

    // get_messages_messages_inner->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(get_messages_messages_innerJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // get_messages_messages_inner->body
    cJSON *body = cJSON_GetObjectItemCaseSensitive(get_messages_messages_innerJSON, "body");
    if (body) { 
    if(!cJSON_IsString(body) && !cJSON_IsNull(body))
    {
    goto end; //String
    }
    }

    // get_messages_messages_inner->from_me
    cJSON *from_me = cJSON_GetObjectItemCaseSensitive(get_messages_messages_innerJSON, "fromMe");
    if (from_me) { 
    if(!cJSON_IsBool(from_me))
    {
    goto end; //Bool
    }
    }

    // get_messages_messages_inner->self
    cJSON *self = cJSON_GetObjectItemCaseSensitive(get_messages_messages_innerJSON, "self");
    if (self) { 
    if(!cJSON_IsNumber(self))
    {
    goto end; //Numeric
    }
    }

    // get_messages_messages_inner->is_forwarded
    cJSON *is_forwarded = cJSON_GetObjectItemCaseSensitive(get_messages_messages_innerJSON, "isForwarded");
    if (is_forwarded) { 
    if(!cJSON_IsNumber(is_forwarded))
    {
    goto end; //Numeric
    }
    }

    // get_messages_messages_inner->author
    cJSON *author = cJSON_GetObjectItemCaseSensitive(get_messages_messages_innerJSON, "author");
    if (author) { 
    if(!cJSON_IsString(author) && !cJSON_IsNull(author))
    {
    goto end; //String
    }
    }

    // get_messages_messages_inner->time
    cJSON *time = cJSON_GetObjectItemCaseSensitive(get_messages_messages_innerJSON, "time");
    if (time) { 
    if(!cJSON_IsNumber(time))
    {
    goto end; //Numeric
    }
    }

    // get_messages_messages_inner->chat_id
    cJSON *chat_id = cJSON_GetObjectItemCaseSensitive(get_messages_messages_innerJSON, "chatId");
    if (chat_id) { 
    if(!cJSON_IsString(chat_id) && !cJSON_IsNull(chat_id))
    {
    goto end; //String
    }
    }

    // get_messages_messages_inner->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(get_messages_messages_innerJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // get_messages_messages_inner->sender_name
    cJSON *sender_name = cJSON_GetObjectItemCaseSensitive(get_messages_messages_innerJSON, "senderName");
    if (sender_name) { 
    if(!cJSON_IsString(sender_name) && !cJSON_IsNull(sender_name))
    {
    goto end; //String
    }
    }

    // get_messages_messages_inner->caption
    cJSON *caption = cJSON_GetObjectItemCaseSensitive(get_messages_messages_innerJSON, "caption");
    if (caption) { 
    if(!cJSON_IsString(caption) && !cJSON_IsNull(caption))
    {
    goto end; //String
    }
    }

    // get_messages_messages_inner->quoted_msg_id
    cJSON *quoted_msg_id = cJSON_GetObjectItemCaseSensitive(get_messages_messages_innerJSON, "quotedMsgId");
    if (quoted_msg_id) { 
    if(!cJSON_IsString(quoted_msg_id) && !cJSON_IsNull(quoted_msg_id))
    {
    goto end; //String
    }
    }

    // get_messages_messages_inner->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(get_messages_messages_innerJSON, "metadata");
    object_t *metadata_local_object = NULL;
    if (metadata) { 
    metadata_local_object = object_parseFromJSON(metadata); //object
    }

    // get_messages_messages_inner->chat_name
    cJSON *chat_name = cJSON_GetObjectItemCaseSensitive(get_messages_messages_innerJSON, "chatName");
    if (chat_name) { 
    if(!cJSON_IsString(chat_name) && !cJSON_IsNull(chat_name))
    {
    goto end; //String
    }
    }


    get_messages_messages_inner_local_var = get_messages_messages_inner_create (
        message_number ? message_number->valuedouble : 0,
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        body && !cJSON_IsNull(body) ? strdup(body->valuestring) : NULL,
        from_me ? from_me->valueint : 0,
        self ? self->valuedouble : 0,
        is_forwarded ? is_forwarded->valuedouble : 0,
        author && !cJSON_IsNull(author) ? strdup(author->valuestring) : NULL,
        time ? time->valuedouble : 0,
        chat_id && !cJSON_IsNull(chat_id) ? strdup(chat_id->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        sender_name && !cJSON_IsNull(sender_name) ? strdup(sender_name->valuestring) : NULL,
        caption && !cJSON_IsNull(caption) ? strdup(caption->valuestring) : NULL,
        quoted_msg_id && !cJSON_IsNull(quoted_msg_id) ? strdup(quoted_msg_id->valuestring) : NULL,
        metadata ? metadata_local_object : NULL,
        chat_name && !cJSON_IsNull(chat_name) ? strdup(chat_name->valuestring) : NULL
        );

    return get_messages_messages_inner_local_var;
end:
    return NULL;

}
