/*
 * commerce_params.h
 *
 * 
 */

#ifndef _commerce_params_H_
#define _commerce_params_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct commerce_params_t commerce_params_t;




typedef struct commerce_params_t {
    int is_cart_enabled; //boolean
    int is_catalog_visible; //boolean

} commerce_params_t;

commerce_params_t *commerce_params_create(
    int is_cart_enabled,
    int is_catalog_visible
);

void commerce_params_free(commerce_params_t *commerce_params);

commerce_params_t *commerce_params_parseFromJSON(cJSON *commerce_paramsJSON);

cJSON *commerce_params_convertToJSON(commerce_params_t *commerce_params);

#endif /* _commerce_params_H_ */

