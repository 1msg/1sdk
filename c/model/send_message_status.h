/*
 * send_message_status.h
 *
 * 
 */

#ifndef _send_message_status_H_
#define _send_message_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct send_message_status_t send_message_status_t;




typedef struct send_message_status_t {
    int sent; //boolean
    char *id; // string
    char *message; // string
    char *description; // string

} send_message_status_t;

send_message_status_t *send_message_status_create(
    int sent,
    char *id,
    char *message,
    char *description
);

void send_message_status_free(send_message_status_t *send_message_status);

send_message_status_t *send_message_status_parseFromJSON(cJSON *send_message_statusJSON);

cJSON *send_message_status_convertToJSON(send_message_status_t *send_message_status);

#endif /* _send_message_status_H_ */

