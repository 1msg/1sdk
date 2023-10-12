/*
 * message.h
 *
 * 
 */

#ifndef _message_H_
#define _message_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct message_t message_t;


// Enum TYPE for message

typedef enum  { one_msg_waba_sdk_message_TYPE_NULL = 0, one_msg_waba_sdk_message_TYPE_chat, one_msg_waba_sdk_message_TYPE_interactive, one_msg_waba_sdk_message_TYPE_image, one_msg_waba_sdk_message_TYPE_video, one_msg_waba_sdk_message_TYPE_document, one_msg_waba_sdk_message_TYPE_audio, one_msg_waba_sdk_message_TYPE_sticker, one_msg_waba_sdk_message_TYPE_voice } one_msg_waba_sdk_message_TYPE_e;

char* message_type_ToString(one_msg_waba_sdk_message_TYPE_e type);

one_msg_waba_sdk_message_TYPE_e message_type_FromString(char* type);



typedef struct message_t {
    char *id; // string
    char *body; // string
    int from_me; //boolean
    int self; //numeric
    int is_forwarded; //boolean
    char *author; // string
    int time; //numeric
    char *chat_id; // string
    one_msg_waba_sdk_message_TYPE_e type; //enum
    char *sender_name; // string
    char *caption; // string
    char *quoted_msg_id; // string

} message_t;

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
);

void message_free(message_t *message);

message_t *message_parseFromJSON(cJSON *messageJSON);

cJSON *message_convertToJSON(message_t *message);

#endif /* _message_H_ */

