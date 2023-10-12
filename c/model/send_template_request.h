/*
 * send_template_request.h
 *
 * 
 */

#ifndef _send_template_request_H_
#define _send_template_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct send_template_request_t send_template_request_t;

#include "send_template_request_all_of_language.h"
#include "send_template_request_all_of_params.h"



typedef struct send_template_request_t {
    char *_namespace; // string
    char *chat_id; // string
    int phone; //numeric
    char *_template; // string
    struct send_template_request_all_of_language_t *language; //model
    list_t *params; //nonprimitive container

} send_template_request_t;

send_template_request_t *send_template_request_create(
    char *_namespace,
    char *chat_id,
    int phone,
    char *_template,
    send_template_request_all_of_language_t *language,
    list_t *params
);

void send_template_request_free(send_template_request_t *send_template_request);

send_template_request_t *send_template_request_parseFromJSON(cJSON *send_template_requestJSON);

cJSON *send_template_request_convertToJSON(send_template_request_t *send_template_request);

#endif /* _send_template_request_H_ */

