/*
 * template_components_prop_inner.h
 *
 * 
 */

#ifndef _template_components_prop_inner_H_
#define _template_components_prop_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct template_components_prop_inner_t template_components_prop_inner_t;

#include "object.h"
#include "template_components_prop_inner_buttons_inner.h"

// Enum TYPE for template_components_prop_inner

typedef enum  { one_msg_waba_sdk_template_components_prop_inner_TYPE_NULL = 0, one_msg_waba_sdk_template_components_prop_inner_TYPE_BODY, one_msg_waba_sdk_template_components_prop_inner_TYPE_HEADER, one_msg_waba_sdk_template_components_prop_inner_TYPE_FOOTER, one_msg_waba_sdk_template_components_prop_inner_TYPE_BUTTONS } one_msg_waba_sdk_template_components_prop_inner_TYPE_e;

char* template_components_prop_inner_type_ToString(one_msg_waba_sdk_template_components_prop_inner_TYPE_e type);

one_msg_waba_sdk_template_components_prop_inner_TYPE_e template_components_prop_inner_type_FromString(char* type);

// Enum FORMAT for template_components_prop_inner

typedef enum  { one_msg_waba_sdk_template_components_prop_inner_FORMAT_NULL = 0, one_msg_waba_sdk_template_components_prop_inner_FORMAT_TEXT, one_msg_waba_sdk_template_components_prop_inner_FORMAT_IMAGE, one_msg_waba_sdk_template_components_prop_inner_FORMAT_DOCUMENT, one_msg_waba_sdk_template_components_prop_inner_FORMAT_VIDEO } one_msg_waba_sdk_template_components_prop_inner_FORMAT_e;

char* template_components_prop_inner_format_ToString(one_msg_waba_sdk_template_components_prop_inner_FORMAT_e format);

one_msg_waba_sdk_template_components_prop_inner_FORMAT_e template_components_prop_inner_format_FromString(char* format);



typedef struct template_components_prop_inner_t {
    one_msg_waba_sdk_template_components_prop_inner_TYPE_e type; //enum
    one_msg_waba_sdk_template_components_prop_inner_FORMAT_e format; //enum
    char *text; // string
    object_t *example; //object
    list_t *buttons; //nonprimitive container

} template_components_prop_inner_t;

template_components_prop_inner_t *template_components_prop_inner_create(
    one_msg_waba_sdk_template_components_prop_inner_TYPE_e type,
    one_msg_waba_sdk_template_components_prop_inner_FORMAT_e format,
    char *text,
    object_t *example,
    list_t *buttons
);

void template_components_prop_inner_free(template_components_prop_inner_t *template_components_prop_inner);

template_components_prop_inner_t *template_components_prop_inner_parseFromJSON(cJSON *template_components_prop_innerJSON);

cJSON *template_components_prop_inner_convertToJSON(template_components_prop_inner_t *template_components_prop_inner);

#endif /* _template_components_prop_inner_H_ */

