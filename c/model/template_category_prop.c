#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "template_category_prop.h"


char* template_category_prop_template_category_prop_ToString(one_msg_waba_sdk_template_category_prop__e template_category_prop) {
    char *template_category_propArray[] =  { "NULL", "MARKETING", "TRANSACTIONAL", "OTP" };
    return template_category_propArray[template_category_prop];
}

one_msg_waba_sdk_template_category_prop__e template_category_prop_template_category_prop_FromString(char* template_category_prop) {
    int stringToReturn = 0;
    char *template_category_propArray[] =  { "NULL", "MARKETING", "TRANSACTIONAL", "OTP" };
    size_t sizeofArray = sizeof(template_category_propArray) / sizeof(template_category_propArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(template_category_prop, template_category_propArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *template_category_prop_template_category_prop_convertToJSON(one_msg_waba_sdk_template_category_prop__e template_category_prop) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "template_category_prop", template_category_prop_template_category_prop_ToString(template_category_prop)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

one_msg_waba_sdk_template_category_prop__e template_category_prop_template_category_prop_parseFromJSON(cJSON *template_category_propJSON) {
    one_msg_waba_sdk_template_category_prop__e *template_category_prop = NULL;
    one_msg_waba_sdk_template_category_prop__e template_category_propVariable;
    cJSON *template_category_propVar = cJSON_GetObjectItemCaseSensitive(template_category_propJSON, "template_category_prop");
    if(!cJSON_IsString(template_category_propVar) || (template_category_propVar->valuestring == NULL)){
        goto end;
    }
    template_category_propVariable = template_category_prop_template_category_prop_FromString(template_category_propVar->valuestring);
    return template_category_propVariable;
end:
    return 0;
}
