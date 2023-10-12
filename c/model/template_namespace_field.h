/*
 * template_namespace_field.h
 *
 * 
 */

#ifndef _template_namespace_field_H_
#define _template_namespace_field_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct template_namespace_field_t template_namespace_field_t;




typedef struct template_namespace_field_t {
    char *_namespace; // string

} template_namespace_field_t;

template_namespace_field_t *template_namespace_field_create(
    char *_namespace
);

void template_namespace_field_free(template_namespace_field_t *template_namespace_field);

template_namespace_field_t *template_namespace_field_parseFromJSON(cJSON *template_namespace_fieldJSON);

cJSON *template_namespace_field_convertToJSON(template_namespace_field_t *template_namespace_field);

#endif /* _template_namespace_field_H_ */

