/*
 * template_components_prop_inner_buttons_inner.h
 *
 * 
 */

#ifndef _template_components_prop_inner_buttons_inner_H_
#define _template_components_prop_inner_buttons_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct template_components_prop_inner_buttons_inner_t template_components_prop_inner_buttons_inner_t;

#include "any_type.h"

// Enum TYPE for template_components_prop_inner_buttons_inner

typedef enum  { one_msg_waba_sdk_template_components_prop_inner_buttons_inner_TYPE_NULL = 0, one_msg_waba_sdk_template_components_prop_inner_buttons_inner_TYPE_PHONE_NUMBER, one_msg_waba_sdk_template_components_prop_inner_buttons_inner_TYPE_URL, one_msg_waba_sdk_template_components_prop_inner_buttons_inner_TYPE_QUICK_REPLY } one_msg_waba_sdk_template_components_prop_inner_buttons_inner_TYPE_e;

char* template_components_prop_inner_buttons_inner_type_ToString(one_msg_waba_sdk_template_components_prop_inner_buttons_inner_TYPE_e type);

one_msg_waba_sdk_template_components_prop_inner_buttons_inner_TYPE_e template_components_prop_inner_buttons_inner_type_FromString(char* type);



typedef struct template_components_prop_inner_buttons_inner_t {
    one_msg_waba_sdk_template_components_prop_inner_buttons_inner_TYPE_e type; //enum
    char *text; // string
    char *url; // string
    char *phone_number; // string
    list_t *example; //nonprimitive container

} template_components_prop_inner_buttons_inner_t;

template_components_prop_inner_buttons_inner_t *template_components_prop_inner_buttons_inner_create(
    one_msg_waba_sdk_template_components_prop_inner_buttons_inner_TYPE_e type,
    char *text,
    char *url,
    char *phone_number,
    list_t *example
);

void template_components_prop_inner_buttons_inner_free(template_components_prop_inner_buttons_inner_t *template_components_prop_inner_buttons_inner);

template_components_prop_inner_buttons_inner_t *template_components_prop_inner_buttons_inner_parseFromJSON(cJSON *template_components_prop_inner_buttons_innerJSON);

cJSON *template_components_prop_inner_buttons_inner_convertToJSON(template_components_prop_inner_buttons_inner_t *template_components_prop_inner_buttons_inner);

#endif /* _template_components_prop_inner_buttons_inner_H_ */

