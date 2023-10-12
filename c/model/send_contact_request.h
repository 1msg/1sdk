/*
 * send_contact_request.h
 *
 * 
 */

#ifndef _send_contact_request_H_
#define _send_contact_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct send_contact_request_t send_contact_request_t;

#include "object.h"



typedef struct send_contact_request_t {
    char *chat_id; // string
    int phone; //numeric
    list_t *contacts; //nonprimitive container

} send_contact_request_t;

send_contact_request_t *send_contact_request_create(
    char *chat_id,
    int phone,
    list_t *contacts
);

void send_contact_request_free(send_contact_request_t *send_contact_request);

send_contact_request_t *send_contact_request_parseFromJSON(cJSON *send_contact_requestJSON);

cJSON *send_contact_request_convertToJSON(send_contact_request_t *send_contact_request);

#endif /* _send_contact_request_H_ */

