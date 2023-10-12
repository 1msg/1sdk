/*
 * read_message_request.h
 *
 * 
 */

#ifndef _read_message_request_H_
#define _read_message_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct read_message_request_t read_message_request_t;




typedef struct read_message_request_t {
    char *message_id; // string

} read_message_request_t;

read_message_request_t *read_message_request_create(
    char *message_id
);

void read_message_request_free(read_message_request_t *read_message_request);

read_message_request_t *read_message_request_parseFromJSON(cJSON *read_message_requestJSON);

cJSON *read_message_request_convertToJSON(read_message_request_t *read_message_request);

#endif /* _read_message_request_H_ */

