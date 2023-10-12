#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "get_templates_templates_inner.h"


char* categoryget_templates_templates_inner_ToString(one_msg_waba_sdk_get_templates_templates_inner__e category) {
    char* categoryArray[] =  { "NULL", "MARKETING", "TRANSACTIONAL", "OTP" };
	return categoryArray[category];
}

one_msg_waba_sdk_get_templates_templates_inner__e categoryget_templates_templates_inner_FromString(char* category){
    int stringToReturn = 0;
    char *categoryArray[] =  { "NULL", "MARKETING", "TRANSACTIONAL", "OTP" };
    size_t sizeofArray = sizeof(categoryArray) / sizeof(categoryArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(category, categoryArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* languageget_templates_templates_inner_ToString(one_msg_waba_sdk_get_templates_templates_inner__e language) {
    char* languageArray[] =  { "NULL", "af", "sq", "ar", "az", "bn", "bg", "ca", "zh_CN", "zh_HK", "zh_TW", "hr", "cs", "da", "nl", "en", "en_GB", "en_US", "et", "fil", "fi", "fr", "de", "el", "gu", "he", "hi", "hu", "id", "ga", "it", "ja", "kn", "kk", "ko", "lo", "lv", "lt", "mk", "ms", "mr", "nb", "fa", "pl", "pt_BR", "pt_PT", "pa", "ro", "ru", "sr", "sk", "sl", "es", "es_AR", "es_ES", "es_MX", "sw", "sv", "ta", "te", "th", "tr", "uk", "ur", "uz", "vi" };
	return languageArray[language];
}

one_msg_waba_sdk_get_templates_templates_inner__e languageget_templates_templates_inner_FromString(char* language){
    int stringToReturn = 0;
    char *languageArray[] =  { "NULL", "af", "sq", "ar", "az", "bn", "bg", "ca", "zh_CN", "zh_HK", "zh_TW", "hr", "cs", "da", "nl", "en", "en_GB", "en_US", "et", "fil", "fi", "fr", "de", "el", "gu", "he", "hi", "hu", "id", "ga", "it", "ja", "kn", "kk", "ko", "lo", "lv", "lt", "mk", "ms", "mr", "nb", "fa", "pl", "pt_BR", "pt_PT", "pa", "ro", "ru", "sr", "sk", "sl", "es", "es_AR", "es_ES", "es_MX", "sw", "sv", "ta", "te", "th", "tr", "uk", "ur", "uz", "vi" };
    size_t sizeofArray = sizeof(languageArray) / sizeof(languageArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(language, languageArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

get_templates_templates_inner_t *get_templates_templates_inner_create(
    template_category_prop_t *category,
    template_components_prop_t *components,
    template_language_prop_t *language,
    char *name,
    char *_namespace,
    char *rejected_reason,
    char *status
    ) {
    get_templates_templates_inner_t *get_templates_templates_inner_local_var = malloc(sizeof(get_templates_templates_inner_t));
    if (!get_templates_templates_inner_local_var) {
        return NULL;
    }
    get_templates_templates_inner_local_var->category = category;
    get_templates_templates_inner_local_var->components = components;
    get_templates_templates_inner_local_var->language = language;
    get_templates_templates_inner_local_var->name = name;
    get_templates_templates_inner_local_var->_namespace = _namespace;
    get_templates_templates_inner_local_var->rejected_reason = rejected_reason;
    get_templates_templates_inner_local_var->status = status;

    return get_templates_templates_inner_local_var;
}


void get_templates_templates_inner_free(get_templates_templates_inner_t *get_templates_templates_inner) {
    if(NULL == get_templates_templates_inner){
        return ;
    }
    listEntry_t *listEntry;
    if (get_templates_templates_inner->category) {
        template_category_prop_free(get_templates_templates_inner->category);
        get_templates_templates_inner->category = NULL;
    }
    if (get_templates_templates_inner->components) {
        template_components_prop_free(get_templates_templates_inner->components);
        get_templates_templates_inner->components = NULL;
    }
    if (get_templates_templates_inner->language) {
        template_language_prop_free(get_templates_templates_inner->language);
        get_templates_templates_inner->language = NULL;
    }
    if (get_templates_templates_inner->name) {
        free(get_templates_templates_inner->name);
        get_templates_templates_inner->name = NULL;
    }
    if (get_templates_templates_inner->_namespace) {
        free(get_templates_templates_inner->_namespace);
        get_templates_templates_inner->_namespace = NULL;
    }
    if (get_templates_templates_inner->rejected_reason) {
        free(get_templates_templates_inner->rejected_reason);
        get_templates_templates_inner->rejected_reason = NULL;
    }
    if (get_templates_templates_inner->status) {
        free(get_templates_templates_inner->status);
        get_templates_templates_inner->status = NULL;
    }
    free(get_templates_templates_inner);
}

cJSON *get_templates_templates_inner_convertToJSON(get_templates_templates_inner_t *get_templates_templates_inner) {
    cJSON *item = cJSON_CreateObject();

    // get_templates_templates_inner->category
    if(get_templates_templates_inner->category != one_msg_waba_sdk_get_templates_templates_inner__NULL) {
    cJSON *category_local_JSON = template_category_prop_convertToJSON(get_templates_templates_inner->category);
    if(category_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "category", category_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // get_templates_templates_inner->components
    if(get_templates_templates_inner->components) {
    cJSON *components_local_JSON = template_components_prop_convertToJSON(get_templates_templates_inner->components);
    if(components_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "components", components_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // get_templates_templates_inner->language
    if(get_templates_templates_inner->language != one_msg_waba_sdk_get_templates_templates_inner__NULL) {
    cJSON *language_local_JSON = template_language_prop_convertToJSON(get_templates_templates_inner->language);
    if(language_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "language", language_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // get_templates_templates_inner->name
    if(get_templates_templates_inner->name) {
    if(cJSON_AddStringToObject(item, "name", get_templates_templates_inner->name) == NULL) {
    goto fail; //String
    }
    }


    // get_templates_templates_inner->_namespace
    if(get_templates_templates_inner->_namespace) {
    if(cJSON_AddStringToObject(item, "namespace", get_templates_templates_inner->_namespace) == NULL) {
    goto fail; //String
    }
    }


    // get_templates_templates_inner->rejected_reason
    if(get_templates_templates_inner->rejected_reason) {
    if(cJSON_AddStringToObject(item, "rejected_reason", get_templates_templates_inner->rejected_reason) == NULL) {
    goto fail; //String
    }
    }


    // get_templates_templates_inner->status
    if(get_templates_templates_inner->status) {
    if(cJSON_AddStringToObject(item, "status", get_templates_templates_inner->status) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

get_templates_templates_inner_t *get_templates_templates_inner_parseFromJSON(cJSON *get_templates_templates_innerJSON){

    get_templates_templates_inner_t *get_templates_templates_inner_local_var = NULL;

    // define the local variable for get_templates_templates_inner->category
    template_category_prop_t *category_local_nonprim = NULL;

    // define the local variable for get_templates_templates_inner->components
    template_components_prop_t *components_local_nonprim = NULL;

    // define the local variable for get_templates_templates_inner->language
    template_language_prop_t *language_local_nonprim = NULL;

    // get_templates_templates_inner->category
    cJSON *category = cJSON_GetObjectItemCaseSensitive(get_templates_templates_innerJSON, "category");
    if (category) { 
    category_local_nonprim = template_category_prop_parseFromJSON(category); //custom
    }

    // get_templates_templates_inner->components
    cJSON *components = cJSON_GetObjectItemCaseSensitive(get_templates_templates_innerJSON, "components");
    if (components) { 
    components_local_nonprim = template_components_prop_parseFromJSON(components); //custom
    }

    // get_templates_templates_inner->language
    cJSON *language = cJSON_GetObjectItemCaseSensitive(get_templates_templates_innerJSON, "language");
    if (language) { 
    language_local_nonprim = template_language_prop_parseFromJSON(language); //custom
    }

    // get_templates_templates_inner->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(get_templates_templates_innerJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // get_templates_templates_inner->_namespace
    cJSON *_namespace = cJSON_GetObjectItemCaseSensitive(get_templates_templates_innerJSON, "namespace");
    if (_namespace) { 
    if(!cJSON_IsString(_namespace) && !cJSON_IsNull(_namespace))
    {
    goto end; //String
    }
    }

    // get_templates_templates_inner->rejected_reason
    cJSON *rejected_reason = cJSON_GetObjectItemCaseSensitive(get_templates_templates_innerJSON, "rejected_reason");
    if (rejected_reason) { 
    if(!cJSON_IsString(rejected_reason) && !cJSON_IsNull(rejected_reason))
    {
    goto end; //String
    }
    }

    // get_templates_templates_inner->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(get_templates_templates_innerJSON, "status");
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }


    get_templates_templates_inner_local_var = get_templates_templates_inner_create (
        category ? category_local_nonprim : NULL,
        components ? components_local_nonprim : NULL,
        language ? language_local_nonprim : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        _namespace && !cJSON_IsNull(_namespace) ? strdup(_namespace->valuestring) : NULL,
        rejected_reason && !cJSON_IsNull(rejected_reason) ? strdup(rejected_reason->valuestring) : NULL,
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL
        );

    return get_templates_templates_inner_local_var;
end:
    if (category_local_nonprim) {
        template_category_prop_free(category_local_nonprim);
        category_local_nonprim = NULL;
    }
    if (components_local_nonprim) {
        template_components_prop_free(components_local_nonprim);
        components_local_nonprim = NULL;
    }
    if (language_local_nonprim) {
        template_language_prop_free(language_local_nonprim);
        language_local_nonprim = NULL;
    }
    return NULL;

}
