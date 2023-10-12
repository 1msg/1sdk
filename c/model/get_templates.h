/*
 * get_templates.h
 *
 * 
 */

#ifndef _get_templates_H_
#define _get_templates_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct get_templates_t get_templates_t;

#include "get_templates_templates_inner.h"



typedef struct get_templates_t {
    int total; //numeric
    list_t *templates; //nonprimitive container

} get_templates_t;

get_templates_t *get_templates_create(
    int total,
    list_t *templates
);

void get_templates_free(get_templates_t *get_templates);

get_templates_t *get_templates_parseFromJSON(cJSON *get_templatesJSON);

cJSON *get_templates_convertToJSON(get_templates_t *get_templates);

#endif /* _get_templates_H_ */

