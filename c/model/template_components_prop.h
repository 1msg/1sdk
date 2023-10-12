/*
 * template_components_prop.h
 *
 * Array of template components
 */

#ifndef _template_components_prop_H_
#define _template_components_prop_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct template_components_prop_t template_components_prop_t;

#include "template_components_prop_inner.h"



typedef struct template_components_prop_t {

} template_components_prop_t;

template_components_prop_t *template_components_prop_create(
);

void template_components_prop_free(template_components_prop_t *template_components_prop);

template_components_prop_t *template_components_prop_parseFromJSON(cJSON *template_components_propJSON);

cJSON *template_components_prop_convertToJSON(template_components_prop_t *template_components_prop);

#endif /* _template_components_prop_H_ */

