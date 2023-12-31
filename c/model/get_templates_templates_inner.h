/*
 * get_templates_templates_inner.h
 *
 * 
 */

#ifndef _get_templates_templates_inner_H_
#define _get_templates_templates_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct get_templates_templates_inner_t get_templates_templates_inner_t;

#include "template_category_prop.h"
#include "template_components_prop.h"
#include "template_language_prop.h"

// Enum  for get_templates_templates_inner

typedef enum  { one_msg_waba_sdk_get_templates_templates_inner__NULL = 0, one_msg_waba_sdk_get_templates_templates_inner__MARKETING, one_msg_waba_sdk_get_templates_templates_inner__TRANSACTIONAL, one_msg_waba_sdk_get_templates_templates_inner__OTP } one_msg_waba_sdk_get_templates_templates_inner__e;

char* get_templates_templates_inner_category_ToString(one_msg_waba_sdk_get_templates_templates_inner__e category);

one_msg_waba_sdk_get_templates_templates_inner__e get_templates_templates_inner_category_FromString(char* category);

// Enum  for get_templates_templates_inner

typedef enum  { one_msg_waba_sdk_get_templates_templates_inner__NULL = 0, one_msg_waba_sdk_get_templates_templates_inner__af, one_msg_waba_sdk_get_templates_templates_inner__sq, one_msg_waba_sdk_get_templates_templates_inner__ar, one_msg_waba_sdk_get_templates_templates_inner__az, one_msg_waba_sdk_get_templates_templates_inner__bn, one_msg_waba_sdk_get_templates_templates_inner__bg, one_msg_waba_sdk_get_templates_templates_inner__ca, one_msg_waba_sdk_get_templates_templates_inner__zh_CN, one_msg_waba_sdk_get_templates_templates_inner__zh_HK, one_msg_waba_sdk_get_templates_templates_inner__zh_TW, one_msg_waba_sdk_get_templates_templates_inner__hr, one_msg_waba_sdk_get_templates_templates_inner__cs, one_msg_waba_sdk_get_templates_templates_inner__da, one_msg_waba_sdk_get_templates_templates_inner__nl, one_msg_waba_sdk_get_templates_templates_inner__en, one_msg_waba_sdk_get_templates_templates_inner__en_GB, one_msg_waba_sdk_get_templates_templates_inner__en_US, one_msg_waba_sdk_get_templates_templates_inner__et, one_msg_waba_sdk_get_templates_templates_inner__fil, one_msg_waba_sdk_get_templates_templates_inner__fi, one_msg_waba_sdk_get_templates_templates_inner__fr, one_msg_waba_sdk_get_templates_templates_inner__de, one_msg_waba_sdk_get_templates_templates_inner__el, one_msg_waba_sdk_get_templates_templates_inner__gu, one_msg_waba_sdk_get_templates_templates_inner__he, one_msg_waba_sdk_get_templates_templates_inner__hi, one_msg_waba_sdk_get_templates_templates_inner__hu, one_msg_waba_sdk_get_templates_templates_inner__id, one_msg_waba_sdk_get_templates_templates_inner__ga, one_msg_waba_sdk_get_templates_templates_inner__it, one_msg_waba_sdk_get_templates_templates_inner__ja, one_msg_waba_sdk_get_templates_templates_inner__kn, one_msg_waba_sdk_get_templates_templates_inner__kk, one_msg_waba_sdk_get_templates_templates_inner__ko, one_msg_waba_sdk_get_templates_templates_inner__lo, one_msg_waba_sdk_get_templates_templates_inner__lv, one_msg_waba_sdk_get_templates_templates_inner__lt, one_msg_waba_sdk_get_templates_templates_inner__mk, one_msg_waba_sdk_get_templates_templates_inner__ms, one_msg_waba_sdk_get_templates_templates_inner__mr, one_msg_waba_sdk_get_templates_templates_inner__nb, one_msg_waba_sdk_get_templates_templates_inner__fa, one_msg_waba_sdk_get_templates_templates_inner__pl, one_msg_waba_sdk_get_templates_templates_inner__pt_BR, one_msg_waba_sdk_get_templates_templates_inner__pt_PT, one_msg_waba_sdk_get_templates_templates_inner__pa, one_msg_waba_sdk_get_templates_templates_inner__ro, one_msg_waba_sdk_get_templates_templates_inner__ru, one_msg_waba_sdk_get_templates_templates_inner__sr, one_msg_waba_sdk_get_templates_templates_inner__sk, one_msg_waba_sdk_get_templates_templates_inner__sl, one_msg_waba_sdk_get_templates_templates_inner__es, one_msg_waba_sdk_get_templates_templates_inner__es_AR, one_msg_waba_sdk_get_templates_templates_inner__es_ES, one_msg_waba_sdk_get_templates_templates_inner__es_MX, one_msg_waba_sdk_get_templates_templates_inner__sw, one_msg_waba_sdk_get_templates_templates_inner__sv, one_msg_waba_sdk_get_templates_templates_inner__ta, one_msg_waba_sdk_get_templates_templates_inner__te, one_msg_waba_sdk_get_templates_templates_inner__th, one_msg_waba_sdk_get_templates_templates_inner__tr, one_msg_waba_sdk_get_templates_templates_inner__uk, one_msg_waba_sdk_get_templates_templates_inner__ur, one_msg_waba_sdk_get_templates_templates_inner__uz, one_msg_waba_sdk_get_templates_templates_inner__vi } one_msg_waba_sdk_get_templates_templates_inner__e;

char* get_templates_templates_inner_language_ToString(one_msg_waba_sdk_get_templates_templates_inner__e language);

one_msg_waba_sdk_get_templates_templates_inner__e get_templates_templates_inner_language_FromString(char* language);



typedef struct get_templates_templates_inner_t {
    template_category_prop_t *category; // custom
    template_components_prop_t *components; // custom
    template_language_prop_t *language; // custom
    char *name; // string
    char *_namespace; // string
    char *rejected_reason; // string
    char *status; // string

} get_templates_templates_inner_t;

get_templates_templates_inner_t *get_templates_templates_inner_create(
    template_category_prop_t *category,
    template_components_prop_t *components,
    template_language_prop_t *language,
    char *name,
    char *_namespace,
    char *rejected_reason,
    char *status
);

void get_templates_templates_inner_free(get_templates_templates_inner_t *get_templates_templates_inner);

get_templates_templates_inner_t *get_templates_templates_inner_parseFromJSON(cJSON *get_templates_templates_innerJSON);

cJSON *get_templates_templates_inner_convertToJSON(get_templates_templates_inner_t *get_templates_templates_inner);

#endif /* _get_templates_templates_inner_H_ */

