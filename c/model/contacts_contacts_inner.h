/*
 * contacts_contacts_inner.h
 *
 * 
 */

#ifndef _contacts_contacts_inner_H_
#define _contacts_contacts_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contacts_contacts_inner_t contacts_contacts_inner_t;




typedef struct contacts_contacts_inner_t {
    char *input; // string
    char *status; // string
    char *wa_id; // string

} contacts_contacts_inner_t;

contacts_contacts_inner_t *contacts_contacts_inner_create(
    char *input,
    char *status,
    char *wa_id
);

void contacts_contacts_inner_free(contacts_contacts_inner_t *contacts_contacts_inner);

contacts_contacts_inner_t *contacts_contacts_inner_parseFromJSON(cJSON *contacts_contacts_innerJSON);

cJSON *contacts_contacts_inner_convertToJSON(contacts_contacts_inner_t *contacts_contacts_inner);

#endif /* _contacts_contacts_inner_H_ */

