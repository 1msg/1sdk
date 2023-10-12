/*
 * remove_template_request.h
 *
 * 
 */

#ifndef _remove_template_request_H_
#define _remove_template_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct remove_template_request_t remove_template_request_t;




typedef struct remove_template_request_t {
    char *name; // string

} remove_template_request_t;

remove_template_request_t *remove_template_request_create(
    char *name
);

void remove_template_request_free(remove_template_request_t *remove_template_request);

remove_template_request_t *remove_template_request_parseFromJSON(cJSON *remove_template_requestJSON);

cJSON *remove_template_request_convertToJSON(remove_template_request_t *remove_template_request);

#endif /* _remove_template_request_H_ */

