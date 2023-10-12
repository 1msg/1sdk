/*
 * send_list_request.h
 *
 * 
 */

#ifndef _send_list_request_H_
#define _send_list_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct send_list_request_t send_list_request_t;

#include "send_list_request_all_of_sections.h"



typedef struct send_list_request_t {
    char *chat_id; // string
    int phone; //numeric
    char *body; // string
    char *header; // string
    char *footer; // string
    char *action; // string
    list_t *sections; //nonprimitive container

} send_list_request_t;

send_list_request_t *send_list_request_create(
    char *chat_id,
    int phone,
    char *body,
    char *header,
    char *footer,
    char *action,
    list_t *sections
);

void send_list_request_free(send_list_request_t *send_list_request);

send_list_request_t *send_list_request_parseFromJSON(cJSON *send_list_requestJSON);

cJSON *send_list_request_convertToJSON(send_list_request_t *send_list_request);

#endif /* _send_list_request_H_ */

