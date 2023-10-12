/*
 * get_ack_info_hooks_inner.h
 *
 * 
 */

#ifndef _get_ack_info_hooks_inner_H_
#define _get_ack_info_hooks_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct get_ack_info_hooks_inner_t get_ack_info_hooks_inner_t;

#include "object.h"



typedef struct get_ack_info_hooks_inner_t {
    char *id; // string
    char *type; // string
    char *status; // string
    object_t *pricing; //object
    char *timestamp; // string
    object_t *conversation; //object
    char *recipient_id; // string

} get_ack_info_hooks_inner_t;

get_ack_info_hooks_inner_t *get_ack_info_hooks_inner_create(
    char *id,
    char *type,
    char *status,
    object_t *pricing,
    char *timestamp,
    object_t *conversation,
    char *recipient_id
);

void get_ack_info_hooks_inner_free(get_ack_info_hooks_inner_t *get_ack_info_hooks_inner);

get_ack_info_hooks_inner_t *get_ack_info_hooks_inner_parseFromJSON(cJSON *get_ack_info_hooks_innerJSON);

cJSON *get_ack_info_hooks_inner_convertToJSON(get_ack_info_hooks_inner_t *get_ack_info_hooks_inner);

#endif /* _get_ack_info_hooks_inner_H_ */

