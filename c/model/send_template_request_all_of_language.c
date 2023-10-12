#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "send_template_request_all_of_language.h"


char* policysend_template_request_all_of_language_ToString(one_msg_waba_sdk_send_template_request_all_of_language_POLICY_e policy) {
    char* policyArray[] =  { "NULL", "deterministic" };
	return policyArray[policy];
}

one_msg_waba_sdk_send_template_request_all_of_language_POLICY_e policysend_template_request_all_of_language_FromString(char* policy){
    int stringToReturn = 0;
    char *policyArray[] =  { "NULL", "deterministic" };
    size_t sizeofArray = sizeof(policyArray) / sizeof(policyArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(policy, policyArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* codesend_template_request_all_of_language_ToString(one_msg_waba_sdk_send_template_request_all_of_language__e code) {
    char* codeArray[] =  { "NULL", "af", "sq", "ar", "az", "bn", "bg", "ca", "zh_CN", "zh_HK", "zh_TW", "hr", "cs", "da", "nl", "en", "en_GB", "en_US", "et", "fil", "fi", "fr", "de", "el", "gu", "he", "hi", "hu", "id", "ga", "it", "ja", "kn", "kk", "ko", "lo", "lv", "lt", "mk", "ms", "mr", "nb", "fa", "pl", "pt_BR", "pt_PT", "pa", "ro", "ru", "sr", "sk", "sl", "es", "es_AR", "es_ES", "es_MX", "sw", "sv", "ta", "te", "th", "tr", "uk", "ur", "uz", "vi" };
	return codeArray[code];
}

one_msg_waba_sdk_send_template_request_all_of_language__e codesend_template_request_all_of_language_FromString(char* code){
    int stringToReturn = 0;
    char *codeArray[] =  { "NULL", "af", "sq", "ar", "az", "bn", "bg", "ca", "zh_CN", "zh_HK", "zh_TW", "hr", "cs", "da", "nl", "en", "en_GB", "en_US", "et", "fil", "fi", "fr", "de", "el", "gu", "he", "hi", "hu", "id", "ga", "it", "ja", "kn", "kk", "ko", "lo", "lv", "lt", "mk", "ms", "mr", "nb", "fa", "pl", "pt_BR", "pt_PT", "pa", "ro", "ru", "sr", "sk", "sl", "es", "es_AR", "es_ES", "es_MX", "sw", "sv", "ta", "te", "th", "tr", "uk", "ur", "uz", "vi" };
    size_t sizeofArray = sizeof(codeArray) / sizeof(codeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(code, codeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

send_template_request_all_of_language_t *send_template_request_all_of_language_create(
    one_msg_waba_sdk_send_template_request_all_of_language_POLICY_e policy,
    template_language_prop_t *code
    ) {
    send_template_request_all_of_language_t *send_template_request_all_of_language_local_var = malloc(sizeof(send_template_request_all_of_language_t));
    if (!send_template_request_all_of_language_local_var) {
        return NULL;
    }
    send_template_request_all_of_language_local_var->policy = policy;
    send_template_request_all_of_language_local_var->code = code;

    return send_template_request_all_of_language_local_var;
}


void send_template_request_all_of_language_free(send_template_request_all_of_language_t *send_template_request_all_of_language) {
    if(NULL == send_template_request_all_of_language){
        return ;
    }
    listEntry_t *listEntry;
    if (send_template_request_all_of_language->code) {
        template_language_prop_free(send_template_request_all_of_language->code);
        send_template_request_all_of_language->code = NULL;
    }
    free(send_template_request_all_of_language);
}

cJSON *send_template_request_all_of_language_convertToJSON(send_template_request_all_of_language_t *send_template_request_all_of_language) {
    cJSON *item = cJSON_CreateObject();

    // send_template_request_all_of_language->policy
    if(send_template_request_all_of_language->policy != one_msg_waba_sdk_send_template_request_all_of_language_POLICY_NULL) {
    if(cJSON_AddStringToObject(item, "policy", policysend_template_request_all_of_language_ToString(send_template_request_all_of_language->policy)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // send_template_request_all_of_language->code
    if(send_template_request_all_of_language->code != one_msg_waba_sdk_send_template_request_all_of_language__NULL) {
    cJSON *code_local_JSON = template_language_prop_convertToJSON(send_template_request_all_of_language->code);
    if(code_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "code", code_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

send_template_request_all_of_language_t *send_template_request_all_of_language_parseFromJSON(cJSON *send_template_request_all_of_languageJSON){

    send_template_request_all_of_language_t *send_template_request_all_of_language_local_var = NULL;

    // define the local variable for send_template_request_all_of_language->code
    template_language_prop_t *code_local_nonprim = NULL;

    // send_template_request_all_of_language->policy
    cJSON *policy = cJSON_GetObjectItemCaseSensitive(send_template_request_all_of_languageJSON, "policy");
    one_msg_waba_sdk_send_template_request_all_of_language_POLICY_e policyVariable;
    if (policy) { 
    if(!cJSON_IsString(policy))
    {
    goto end; //Enum
    }
    policyVariable = policysend_template_request_all_of_language_FromString(policy->valuestring);
    }

    // send_template_request_all_of_language->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(send_template_request_all_of_languageJSON, "code");
    if (code) { 
    code_local_nonprim = template_language_prop_parseFromJSON(code); //custom
    }


    send_template_request_all_of_language_local_var = send_template_request_all_of_language_create (
        policy ? policyVariable : -1,
        code ? code_local_nonprim : NULL
        );

    return send_template_request_all_of_language_local_var;
end:
    if (code_local_nonprim) {
        template_language_prop_free(code_local_nonprim);
        code_local_nonprim = NULL;
    }
    return NULL;

}
