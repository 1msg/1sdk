/*
 * send_product_request.h
 *
 * 
 */

#ifndef _send_product_request_H_
#define _send_product_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct send_product_request_t send_product_request_t;

#include "send_product_request_all_of_action.h"



typedef struct send_product_request_t {
    char *chat_id; // string
    int phone; //numeric
    struct send_product_request_all_of_action_t *action; //model
    char *body; // string
    char *footer; // string
    char *header; // string

} send_product_request_t;

send_product_request_t *send_product_request_create(
    char *chat_id,
    int phone,
    send_product_request_all_of_action_t *action,
    char *body,
    char *footer,
    char *header
);

void send_product_request_free(send_product_request_t *send_product_request);

send_product_request_t *send_product_request_parseFromJSON(cJSON *send_product_requestJSON);

cJSON *send_product_request_convertToJSON(send_product_request_t *send_product_request);

#endif /* _send_product_request_H_ */

