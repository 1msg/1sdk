/*
 * set_commerce.h
 *
 * 
 */

#ifndef _set_commerce_H_
#define _set_commerce_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct set_commerce_t set_commerce_t;




typedef struct set_commerce_t {
    int success; //boolean

} set_commerce_t;

set_commerce_t *set_commerce_create(
    int success
);

void set_commerce_free(set_commerce_t *set_commerce);

set_commerce_t *set_commerce_parseFromJSON(cJSON *set_commerceJSON);

cJSON *set_commerce_convertToJSON(set_commerce_t *set_commerce);

#endif /* _set_commerce_H_ */

