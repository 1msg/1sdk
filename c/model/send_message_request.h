/*
 * send_message_request.h
 *
 * 
 */

#ifndef _send_message_request_H_
#define _send_message_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct send_message_request_t send_message_request_t;




typedef struct send_message_request_t {
    char *chat_id; // string
    int phone; //numeric
    char *body; // string

} send_message_request_t;

send_message_request_t *send_message_request_create(
    char *chat_id,
    int phone,
    char *body
);

void send_message_request_free(send_message_request_t *send_message_request);

send_message_request_t *send_message_request_parseFromJSON(cJSON *send_message_requestJSON);

cJSON *send_message_request_convertToJSON(send_message_request_t *send_message_request);

#endif /* _send_message_request_H_ */

