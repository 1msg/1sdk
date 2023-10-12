/*
 * phone_prop.h
 *
 * 
 */

#ifndef _phone_prop_H_
#define _phone_prop_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct phone_prop_t phone_prop_t;




typedef struct phone_prop_t {
    int phone; //numeric

} phone_prop_t;

phone_prop_t *phone_prop_create(
    int phone
);

void phone_prop_free(phone_prop_t *phone_prop);

phone_prop_t *phone_prop_parseFromJSON(cJSON *phone_propJSON);

cJSON *phone_prop_convertToJSON(phone_prop_t *phone_prop);

#endif /* _phone_prop_H_ */

