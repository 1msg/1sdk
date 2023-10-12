/*
 * chat_id_prop.h
 *
 * 
 */

#ifndef _chat_id_prop_H_
#define _chat_id_prop_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct chat_id_prop_t chat_id_prop_t;




typedef struct chat_id_prop_t {
    char *chat_id; // string

} chat_id_prop_t;

chat_id_prop_t *chat_id_prop_create(
    char *chat_id
);

void chat_id_prop_free(chat_id_prop_t *chat_id_prop);

chat_id_prop_t *chat_id_prop_parseFromJSON(cJSON *chat_id_propJSON);

cJSON *chat_id_prop_convertToJSON(chat_id_prop_t *chat_id_prop);

#endif /* _chat_id_prop_H_ */

