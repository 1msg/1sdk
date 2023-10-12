/*
 * get_ack_info.h
 *
 * 
 */

#ifndef _get_ack_info_H_
#define _get_ack_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct get_ack_info_t get_ack_info_t;

#include "get_ack_info_hooks_inner.h"



typedef struct get_ack_info_t {
    list_t *hooks; //nonprimitive container

} get_ack_info_t;

get_ack_info_t *get_ack_info_create(
    list_t *hooks
);

void get_ack_info_free(get_ack_info_t *get_ack_info);

get_ack_info_t *get_ack_info_parseFromJSON(cJSON *get_ack_infoJSON);

cJSON *get_ack_info_convertToJSON(get_ack_info_t *get_ack_info);

#endif /* _get_ack_info_H_ */

