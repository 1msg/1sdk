/*
 * template_category_prop.h
 *
 * Template category
 */

#ifndef _template_category_prop_H_
#define _template_category_prop_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct template_category_prop_t template_category_prop_t;


// Enum  for template_category_prop

typedef enum { one_msg_waba_sdk_template_category_prop__NULL = 0, one_msg_waba_sdk_template_category_prop__MARKETING, one_msg_waba_sdk_template_category_prop__TRANSACTIONAL, one_msg_waba_sdk_template_category_prop__OTP } one_msg_waba_sdk_template_category_prop__e;

char* template_category_prop_template_category_prop_ToString(one_msg_waba_sdk_template_category_prop__e template_category_prop);

one_msg_waba_sdk_template_category_prop__e template_category_prop_template_category_prop_FromString(char* template_category_prop);

//cJSON *template_category_prop_template_category_prop_convertToJSON(one_msg_waba_sdk_template_category_prop__e template_category_prop);

//one_msg_waba_sdk_template_category_prop__e template_category_prop_template_category_prop_parseFromJSON(cJSON *template_category_propJSON);

#endif /* _template_category_prop_H_ */

