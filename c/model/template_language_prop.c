#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "template_language_prop.h"


char* template_language_prop_template_language_prop_ToString(one_msg_waba_sdk_template_language_prop__e template_language_prop) {
    char *template_language_propArray[] =  { "NULL", "af", "sq", "ar", "az", "bn", "bg", "ca", "zh_CN", "zh_HK", "zh_TW", "hr", "cs", "da", "nl", "en", "en_GB", "en_US", "et", "fil", "fi", "fr", "de", "el", "gu", "he", "hi", "hu", "id", "ga", "it", "ja", "kn", "kk", "ko", "lo", "lv", "lt", "mk", "ms", "mr", "nb", "fa", "pl", "pt_BR", "pt_PT", "pa", "ro", "ru", "sr", "sk", "sl", "es", "es_AR", "es_ES", "es_MX", "sw", "sv", "ta", "te", "th", "tr", "uk", "ur", "uz", "vi" };
    return template_language_propArray[template_language_prop];
}

one_msg_waba_sdk_template_language_prop__e template_language_prop_template_language_prop_FromString(char* template_language_prop) {
    int stringToReturn = 0;
    char *template_language_propArray[] =  { "NULL", "af", "sq", "ar", "az", "bn", "bg", "ca", "zh_CN", "zh_HK", "zh_TW", "hr", "cs", "da", "nl", "en", "en_GB", "en_US", "et", "fil", "fi", "fr", "de", "el", "gu", "he", "hi", "hu", "id", "ga", "it", "ja", "kn", "kk", "ko", "lo", "lv", "lt", "mk", "ms", "mr", "nb", "fa", "pl", "pt_BR", "pt_PT", "pa", "ro", "ru", "sr", "sk", "sl", "es", "es_AR", "es_ES", "es_MX", "sw", "sv", "ta", "te", "th", "tr", "uk", "ur", "uz", "vi" };
    size_t sizeofArray = sizeof(template_language_propArray) / sizeof(template_language_propArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(template_language_prop, template_language_propArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *template_language_prop_template_language_prop_convertToJSON(one_msg_waba_sdk_template_language_prop__e template_language_prop) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "template_language_prop", template_language_prop_template_language_prop_ToString(template_language_prop)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

one_msg_waba_sdk_template_language_prop__e template_language_prop_template_language_prop_parseFromJSON(cJSON *template_language_propJSON) {
    one_msg_waba_sdk_template_language_prop__e *template_language_prop = NULL;
    one_msg_waba_sdk_template_language_prop__e template_language_propVariable;
    cJSON *template_language_propVar = cJSON_GetObjectItemCaseSensitive(template_language_propJSON, "template_language_prop");
    if(!cJSON_IsString(template_language_propVar) || (template_language_propVar->valuestring == NULL)){
        goto end;
    }
    template_language_propVariable = template_language_prop_template_language_prop_FromString(template_language_propVar->valuestring);
    return template_language_propVariable;
end:
    return 0;
}
