/*
 * send_location_request.h
 *
 * 
 */

#ifndef _send_location_request_H_
#define _send_location_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct send_location_request_t send_location_request_t;




typedef struct send_location_request_t {
    char *chat_id; // string
    int phone; //numeric
    char *lat; // string
    char *lng; // string
    char *address; // string
    char *name; // string

} send_location_request_t;

send_location_request_t *send_location_request_create(
    char *chat_id,
    int phone,
    char *lat,
    char *lng,
    char *address,
    char *name
);

void send_location_request_free(send_location_request_t *send_location_request);

send_location_request_t *send_location_request_parseFromJSON(cJSON *send_location_requestJSON);

cJSON *send_location_request_convertToJSON(send_location_request_t *send_location_request);

#endif /* _send_location_request_H_ */

