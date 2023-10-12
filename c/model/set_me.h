/*
 * set_me.h
 *
 * 
 */

#ifndef _set_me_H_
#define _set_me_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct set_me_t set_me_t;




typedef struct set_me_t {
    char *result; // string

} set_me_t;

set_me_t *set_me_create(
    char *result
);

void set_me_free(set_me_t *set_me);

set_me_t *set_me_parseFromJSON(cJSON *set_meJSON);

cJSON *set_me_convertToJSON(set_me_t *set_me);

#endif /* _set_me_H_ */

