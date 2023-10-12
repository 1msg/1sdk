#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "message.h"


char* typemessage_ToString(one_msg_waba_sdk_message_TYPE_e type) {
    char* typeArray[] =  { "NULL", "chat", "interactive", "image", "video", "document", "audio", "sticker", "voice" };
	return typeArray[type];
}

one_msg_waba_sdk_message_TYPE_e typemessage_FromString(char* type){
    int stringToReturn = 0;
    char *typeArray[] =  { "NULL", "chat", "interactive", "image", "video", "document", "audio", "sticker", "voice" };
    size_t sizeofArray = sizeof(typeArray) / sizeof(typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(type, typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

message_t *message_create(
    char *id,
    char *body,
    int from_me,
    int self,
    int is_forwarded,
    char *author,
    int time,
    char *chat_id,
    one_msg_waba_sdk_message_TYPE_e type,
    char *sender_name,
    char *caption,
    char *quoted_msg_id
    ) {
    message_t *message_local_var = malloc(sizeof(message_t));
    if (!message_local_var) {
        return NULL;
    }
    message_local_var->id = id;
    message_local_var->body = body;
    message_local_var->from_me = from_me;
    message_local_var->self = self;
    message_local_var->is_forwarded = is_forwarded;
    message_local_var->author = author;
    message_local_var->time = time;
    message_local_var->chat_id = chat_id;
    message_local_var->type = type;
    message_local_var->sender_name = sender_name;
    message_local_var->caption = caption;
    message_local_var->quoted_msg_id = quoted_msg_id;

    return message_local_var;
}


void message_free(message_t *message) {
    if(NULL == message){
        return ;
    }
    listEntry_t *listEntry;
    if (message->id) {
        free(message->id);
        message->id = NULL;
    }
    if (message->body) {
        free(message->body);
        message->body = NULL;
    }
    if (message->author) {
        free(message->author);
        message->author = NULL;
    }
    if (message->chat_id) {
        free(message->chat_id);
        message->chat_id = NULL;
    }
    if (message->sender_name) {
        free(message->sender_name);
        message->sender_name = NULL;
    }
    if (message->caption) {
        free(message->caption);
        message->caption = NULL;
    }
    if (message->quoted_msg_id) {
        free(message->quoted_msg_id);
        message->quoted_msg_id = NULL;
    }
    free(message);
}

cJSON *message_convertToJSON(message_t *message) {
    cJSON *item = cJSON_CreateObject();

    // message->id
    if(message->id) {
    if(cJSON_AddStringToObject(item, "id", message->id) == NULL) {
    goto fail; //String
    }
    }


    // message->body
    if(message->body) {
    if(cJSON_AddStringToObject(item, "body", message->body) == NULL) {
    goto fail; //String
    }
    }


    // message->from_me
    if(message->from_me) {
    if(cJSON_AddBoolToObject(item, "fromMe", message->from_me) == NULL) {
    goto fail; //Bool
    }
    }


    // message->self
    if(message->self) {
    if(cJSON_AddNumberToObject(item, "self", message->self) == NULL) {
    goto fail; //Numeric
    }
    }


    // message->is_forwarded
    if(message->is_forwarded) {
    if(cJSON_AddBoolToObject(item, "isForwarded", message->is_forwarded) == NULL) {
    goto fail; //Bool
    }
    }


    // message->author
    if(message->author) {
    if(cJSON_AddStringToObject(item, "author", message->author) == NULL) {
    goto fail; //String
    }
    }


    // message->time
    if(message->time) {
    if(cJSON_AddNumberToObject(item, "time", message->time) == NULL) {
    goto fail; //Numeric
    }
    }


    // message->chat_id
    if(message->chat_id) {
    if(cJSON_AddStringToObject(item, "chatId", message->chat_id) == NULL) {
    goto fail; //String
    }
    }


    // message->type
    if(message->type != one_msg_waba_sdk_message_TYPE_NULL) {
    if(cJSON_AddStringToObject(item, "type", typemessage_ToString(message->type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // message->sender_name
    if(message->sender_name) {
    if(cJSON_AddStringToObject(item, "senderName", message->sender_name) == NULL) {
    goto fail; //String
    }
    }


    // message->caption
    if(message->caption) {
    if(cJSON_AddStringToObject(item, "caption", message->caption) == NULL) {
    goto fail; //String
    }
    }


    // message->quoted_msg_id
    if(message->quoted_msg_id) {
    if(cJSON_AddStringToObject(item, "quotedMsgId", message->quoted_msg_id) == NULL) {
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

message_t *message_parseFromJSON(cJSON *messageJSON){

    message_t *message_local_var = NULL;

    // message->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(messageJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // message->body
    cJSON *body = cJSON_GetObjectItemCaseSensitive(messageJSON, "body");
    if (body) { 
    if(!cJSON_IsString(body) && !cJSON_IsNull(body))
    {
    goto end; //String
    }
    }

    // message->from_me
    cJSON *from_me = cJSON_GetObjectItemCaseSensitive(messageJSON, "fromMe");
    if (from_me) { 
    if(!cJSON_IsBool(from_me))
    {
    goto end; //Bool
    }
    }

    // message->self
    cJSON *self = cJSON_GetObjectItemCaseSensitive(messageJSON, "self");
    if (self) { 
    if(!cJSON_IsNumber(self))
    {
    goto end; //Numeric
    }
    }

    // message->is_forwarded
    cJSON *is_forwarded = cJSON_GetObjectItemCaseSensitive(messageJSON, "isForwarded");
    if (is_forwarded) { 
    if(!cJSON_IsBool(is_forwarded))
    {
    goto end; //Bool
    }
    }

    // message->author
    cJSON *author = cJSON_GetObjectItemCaseSensitive(messageJSON, "author");
    if (author) { 
    if(!cJSON_IsString(author) && !cJSON_IsNull(author))
    {
    goto end; //String
    }
    }

    // message->time
    cJSON *time = cJSON_GetObjectItemCaseSensitive(messageJSON, "time");
    if (time) { 
    if(!cJSON_IsNumber(time))
    {
    goto end; //Numeric
    }
    }

    // message->chat_id
    cJSON *chat_id = cJSON_GetObjectItemCaseSensitive(messageJSON, "chatId");
    if (chat_id) { 
    if(!cJSON_IsString(chat_id) && !cJSON_IsNull(chat_id))
    {
    goto end; //String
    }
    }

    // message->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(messageJSON, "type");
    one_msg_waba_sdk_message_TYPE_e typeVariable;
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //Enum
    }
    typeVariable = typemessage_FromString(type->valuestring);
    }

    // message->sender_name
    cJSON *sender_name = cJSON_GetObjectItemCaseSensitive(messageJSON, "senderName");
    if (sender_name) { 
    if(!cJSON_IsString(sender_name) && !cJSON_IsNull(sender_name))
    {
    goto end; //String
    }
    }

    // message->caption
    cJSON *caption = cJSON_GetObjectItemCaseSensitive(messageJSON, "caption");
    if (caption) { 
    if(!cJSON_IsString(caption) && !cJSON_IsNull(caption))
    {
    goto end; //String
    }
    }

    // message->quoted_msg_id
    cJSON *quoted_msg_id = cJSON_GetObjectItemCaseSensitive(messageJSON, "quotedMsgId");
    if (quoted_msg_id) { 
    if(!cJSON_IsString(quoted_msg_id) && !cJSON_IsNull(quoted_msg_id))
    {
    goto end; //String
    }
    }


    message_local_var = message_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        body && !cJSON_IsNull(body) ? strdup(body->valuestring) : NULL,
        from_me ? from_me->valueint : 0,
        self ? self->valuedouble : 0,
        is_forwarded ? is_forwarded->valueint : 0,
        author && !cJSON_IsNull(author) ? strdup(author->valuestring) : NULL,
        time ? time->valuedouble : 0,
        chat_id && !cJSON_IsNull(chat_id) ? strdup(chat_id->valuestring) : NULL,
        type ? typeVariable : -1,
        sender_name && !cJSON_IsNull(sender_name) ? strdup(sender_name->valuestring) : NULL,
        caption && !cJSON_IsNull(caption) ? strdup(caption->valuestring) : NULL,
        quoted_msg_id && !cJSON_IsNull(quoted_msg_id) ? strdup(quoted_msg_id->valuestring) : NULL
        );

    return message_local_var;
end:
    return NULL;

}
