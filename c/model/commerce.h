/*
 * commerce.h
 *
 * 
 */

#ifndef _commerce_H_
#define _commerce_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct commerce_t commerce_t;

#include "commerce_params.h"



typedef struct commerce_t {
    struct commerce_params_t *params; //model

} commerce_t;

commerce_t *commerce_create(
    commerce_params_t *params
);

void commerce_free(commerce_t *commerce);

commerce_t *commerce_parseFromJSON(cJSON *commerceJSON);

cJSON *commerce_convertToJSON(commerce_t *commerce);

#endif /* _commerce_H_ */

