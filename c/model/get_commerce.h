/*
 * get_commerce.h
 *
 * 
 */

#ifndef _get_commerce_H_
#define _get_commerce_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct get_commerce_t get_commerce_t;

#include "get_commerce_inner.h"



typedef struct get_commerce_t {

} get_commerce_t;

get_commerce_t *get_commerce_create(
);

void get_commerce_free(get_commerce_t *get_commerce);

get_commerce_t *get_commerce_parseFromJSON(cJSON *get_commerceJSON);

cJSON *get_commerce_convertToJSON(get_commerce_t *get_commerce);

#endif /* _get_commerce_H_ */

