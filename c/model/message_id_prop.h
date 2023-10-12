/*
 * message_id_prop.h
 *
 * 
 */

#ifndef _message_id_prop_H_
#define _message_id_prop_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct message_id_prop_t message_id_prop_t;




typedef struct message_id_prop_t {
    char *message_id; // string

} message_id_prop_t;

message_id_prop_t *message_id_prop_create(
    char *message_id
);

void message_id_prop_free(message_id_prop_t *message_id_prop);

message_id_prop_t *message_id_prop_parseFromJSON(cJSON *message_id_propJSON);

cJSON *message_id_prop_convertToJSON(message_id_prop_t *message_id_prop);

#endif /* _message_id_prop_H_ */

