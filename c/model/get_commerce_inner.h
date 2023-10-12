/*
 * get_commerce_inner.h
 *
 * 
 */

#ifndef _get_commerce_inner_H_
#define _get_commerce_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct get_commerce_inner_t get_commerce_inner_t;




typedef struct get_commerce_inner_t {
    char *id; // string
    int is_cart_enabled; //boolean
    int is_catalog_visible; //boolean

} get_commerce_inner_t;

get_commerce_inner_t *get_commerce_inner_create(
    char *id,
    int is_cart_enabled,
    int is_catalog_visible
);

void get_commerce_inner_free(get_commerce_inner_t *get_commerce_inner);

get_commerce_inner_t *get_commerce_inner_parseFromJSON(cJSON *get_commerce_innerJSON);

cJSON *get_commerce_inner_convertToJSON(get_commerce_inner_t *get_commerce_inner);

#endif /* _get_commerce_inner_H_ */

