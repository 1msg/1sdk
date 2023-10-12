/*
 * contacts.h
 *
 * 
 */

#ifndef _contacts_H_
#define _contacts_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contacts_t contacts_t;

#include "contacts_contacts_inner.h"



typedef struct contacts_t {
    list_t *contacts; //nonprimitive container

} contacts_t;

contacts_t *contacts_create(
    list_t *contacts
);

void contacts_free(contacts_t *contacts);

contacts_t *contacts_parseFromJSON(cJSON *contactsJSON);

cJSON *contacts_convertToJSON(contacts_t *contacts);

#endif /* _contacts_H_ */

