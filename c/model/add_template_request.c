#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "add_template_request.h"


char* categoryadd_template_request_ToString(one_msg_waba_sdk_add_template_request__e category) {
    char* categoryArray[] =  { "NULL", "MARKETING", "TRANSACTIONAL", "OTP" };
	return categoryArray[category];
}

one_msg_waba_sdk_add_template_request__e categoryadd_template_request_FromString(char* category){
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
char* languageadd_template_request_ToString(one_msg_waba_sdk_add_template_request__e language) {
    char* languageArray[] =  { "NULL", "af", "sq", "ar", "az", "bn", "bg", "ca", "zh_CN", "zh_HK", "zh_TW", "hr", "cs", "da", "nl", "en", "en_GB", "en_US", "et", "fil", "fi", "fr", "de", "el", "gu", "he", "hi", "hu", "id", "ga", "it", "ja", "kn", "kk", "ko", "lo", "lv", "lt", "mk", "ms", "mr", "nb", "fa", "pl", "pt_BR", "pt_PT", "pa", "ro", "ru", "sr", "sk", "sl", "es", "es_AR", "es_ES", "es_MX", "sw", "sv", "ta", "te", "th", "tr", "uk", "ur", "uz", "vi" };
	return languageArray[language];
}

one_msg_waba_sdk_add_template_request__e languageadd_template_request_FromString(char* language){
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

add_template_request_t *add_template_request_create(
    char *name,
    template_category_prop_t *category,
    template_components_prop_t *components,
    template_language_prop_t *language
    ) {
    add_template_request_t *add_template_request_local_var = malloc(sizeof(add_template_request_t));
    if (!add_template_request_local_var) {
        return NULL;
    }
    add_template_request_local_var->name = name;
    add_template_request_local_var->category = category;
    add_template_request_local_var->components = components;
    add_template_request_local_var->language = language;

    return add_template_request_local_var;
}


void add_template_request_free(add_template_request_t *add_template_request) {
    if(NULL == add_template_request){
        return ;
    }
    listEntry_t *listEntry;
    if (add_template_request->name) {
        free(add_template_request->name);
        add_template_request->name = NULL;
    }
    if (add_template_request->category) {
        template_category_prop_free(add_template_request->category);
        add_template_request->category = NULL;
    }
    if (add_template_request->components) {
        template_components_prop_free(add_template_request->components);
        add_template_request->components = NULL;
    }
    if (add_template_request->language) {
        template_language_prop_free(add_template_request->language);
        add_template_request->language = NULL;
    }
    free(add_template_request);
}

cJSON *add_template_request_convertToJSON(add_template_request_t *add_template_request) {
    cJSON *item = cJSON_CreateObject();

    // add_template_request->name
    if(add_template_request->name) {
    if(cJSON_AddStringToObject(item, "name", add_template_request->name) == NULL) {
    goto fail; //String
    }
    }


    // add_template_request->category
    if(add_template_request->category != one_msg_waba_sdk_add_template_request__NULL) {
    cJSON *category_local_JSON = template_category_prop_convertToJSON(add_template_request->category);
    if(category_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "category", category_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // add_template_request->components
    if(add_template_request->components) {
    cJSON *components_local_JSON = template_components_prop_convertToJSON(add_template_request->components);
    if(components_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "components", components_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // add_template_request->language
    if(add_template_request->language != one_msg_waba_sdk_add_template_request__NULL) {
    cJSON *language_local_JSON = template_language_prop_convertToJSON(add_template_request->language);
    if(language_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "language", language_local_JSON);
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

add_template_request_t *add_template_request_parseFromJSON(cJSON *add_template_requestJSON){

    add_template_request_t *add_template_request_local_var = NULL;

    // define the local variable for add_template_request->category
    template_category_prop_t *category_local_nonprim = NULL;

    // define the local variable for add_template_request->components
    template_components_prop_t *components_local_nonprim = NULL;

    // define the local variable for add_template_request->language
    template_language_prop_t *language_local_nonprim = NULL;

    // add_template_request->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(add_template_requestJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // add_template_request->category
    cJSON *category = cJSON_GetObjectItemCaseSensitive(add_template_requestJSON, "category");
    if (category) { 
    category_local_nonprim = template_category_prop_parseFromJSON(category); //custom
    }

    // add_template_request->components
    cJSON *components = cJSON_GetObjectItemCaseSensitive(add_template_requestJSON, "components");
    if (components) { 
    components_local_nonprim = template_components_prop_parseFromJSON(components); //custom
    }

    // add_template_request->language
    cJSON *language = cJSON_GetObjectItemCaseSensitive(add_template_requestJSON, "language");
    if (language) { 
    language_local_nonprim = template_language_prop_parseFromJSON(language); //custom
    }


    add_template_request_local_var = add_template_request_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        category ? category_local_nonprim : NULL,
        components ? components_local_nonprim : NULL,
        language ? language_local_nonprim : NULL
        );

    return add_template_request_local_var;
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
