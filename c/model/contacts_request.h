/*
 * contacts_request.h
 *
 * 
 */

#ifndef _contacts_request_H_
#define _contacts_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contacts_request_t contacts_request_t;




typedef struct contacts_request_t {
    char *blocking; // string
    int force_check; //boolean
    list_t *contacts; //primitive container

} contacts_request_t;

contacts_request_t *contacts_request_create(
    char *blocking,
    int force_check,
    list_t *contacts
);

void contacts_request_free(contacts_request_t *contacts_request);

contacts_request_t *contacts_request_parseFromJSON(cJSON *contacts_requestJSON);

cJSON *contacts_request_convertToJSON(contacts_request_t *contacts_request);

#endif /* _contacts_request_H_ */

