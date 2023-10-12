/*
 * get_messages.h
 *
 * 
 */

#ifndef _get_messages_H_
#define _get_messages_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct get_messages_t get_messages_t;

#include "get_messages_messages_inner.h"



typedef struct get_messages_t {
    list_t *messages; //nonprimitive container

} get_messages_t;

get_messages_t *get_messages_create(
    list_t *messages
);

void get_messages_free(get_messages_t *get_messages);

get_messages_t *get_messages_parseFromJSON(cJSON *get_messagesJSON);

cJSON *get_messages_convertToJSON(get_messages_t *get_messages);

#endif /* _get_messages_H_ */

