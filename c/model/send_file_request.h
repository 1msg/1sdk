/*
 * send_file_request.h
 *
 * 
 */

#ifndef _send_file_request_H_
#define _send_file_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct send_file_request_t send_file_request_t;




typedef struct send_file_request_t {
    char *chat_id; // string
    int phone; //numeric
    char *body; // string
    char *filename; // string
    char *caption; // string

} send_file_request_t;

send_file_request_t *send_file_request_create(
    char *chat_id,
    int phone,
    char *body,
    char *filename,
    char *caption
);

void send_file_request_free(send_file_request_t *send_file_request);

send_file_request_t *send_file_request_parseFromJSON(cJSON *send_file_requestJSON);

cJSON *send_file_request_convertToJSON(send_file_request_t *send_file_request);

#endif /* _send_file_request_H_ */

