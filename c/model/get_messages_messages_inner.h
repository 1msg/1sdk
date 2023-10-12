/*
 * get_messages_messages_inner.h
 *
 * 
 */

#ifndef _get_messages_messages_inner_H_
#define _get_messages_messages_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct get_messages_messages_inner_t get_messages_messages_inner_t;

#include "object.h"



typedef struct get_messages_messages_inner_t {
    int message_number; //numeric
    char *id; // string
    char *body; // string
    int from_me; //boolean
    int self; //numeric
    int is_forwarded; //numeric
    char *author; // string
    int time; //numeric
    char *chat_id; // string
    char *type; // string
    char *sender_name; // string
    char *caption; // string
    char *quoted_msg_id; // string
    object_t *metadata; //object
    char *chat_name; // string

} get_messages_messages_inner_t;

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
);

void get_messages_messages_inner_free(get_messages_messages_inner_t *get_messages_messages_inner);

get_messages_messages_inner_t *get_messages_messages_inner_parseFromJSON(cJSON *get_messages_messages_innerJSON);

cJSON *get_messages_messages_inner_convertToJSON(get_messages_messages_inner_t *get_messages_messages_inner);

#endif /* _get_messages_messages_inner_H_ */

