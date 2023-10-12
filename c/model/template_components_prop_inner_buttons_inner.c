#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "template_components_prop_inner_buttons_inner.h"


char* typetemplate_components_prop_inner_buttons_inner_ToString(one_msg_waba_sdk_template_components_prop_inner_buttons_inner_TYPE_e type) {
    char* typeArray[] =  { "NULL", "PHONE_NUMBER", "URL", "QUICK_REPLY" };
	return typeArray[type];
}

one_msg_waba_sdk_template_components_prop_inner_buttons_inner_TYPE_e typetemplate_components_prop_inner_buttons_inner_FromString(char* type){
    int stringToReturn = 0;
    char *typeArray[] =  { "NULL", "PHONE_NUMBER", "URL", "QUICK_REPLY" };
    size_t sizeofArray = sizeof(typeArray) / sizeof(typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(type, typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

template_components_prop_inner_buttons_inner_t *template_components_prop_inner_buttons_inner_create(
    one_msg_waba_sdk_template_components_prop_inner_buttons_inner_TYPE_e type,
    char *text,
    char *url,
    char *phone_number,
    list_t *example
    ) {
    template_components_prop_inner_buttons_inner_t *template_components_prop_inner_buttons_inner_local_var = malloc(sizeof(template_components_prop_inner_buttons_inner_t));
    if (!template_components_prop_inner_buttons_inner_local_var) {
        return NULL;
    }
    template_components_prop_inner_buttons_inner_local_var->type = type;
    template_components_prop_inner_buttons_inner_local_var->text = text;
    template_components_prop_inner_buttons_inner_local_var->url = url;
    template_components_prop_inner_buttons_inner_local_var->phone_number = phone_number;
    template_components_prop_inner_buttons_inner_local_var->example = example;

    return template_components_prop_inner_buttons_inner_local_var;
}


void template_components_prop_inner_buttons_inner_free(template_components_prop_inner_buttons_inner_t *template_components_prop_inner_buttons_inner) {
    if(NULL == template_components_prop_inner_buttons_inner){
        return ;
    }
    listEntry_t *listEntry;
    if (template_components_prop_inner_buttons_inner->text) {
        free(template_components_prop_inner_buttons_inner->text);
        template_components_prop_inner_buttons_inner->text = NULL;
    }
    if (template_components_prop_inner_buttons_inner->url) {
        free(template_components_prop_inner_buttons_inner->url);
        template_components_prop_inner_buttons_inner->url = NULL;
    }
    if (template_components_prop_inner_buttons_inner->phone_number) {
        free(template_components_prop_inner_buttons_inner->phone_number);
        template_components_prop_inner_buttons_inner->phone_number = NULL;
    }
    if (template_components_prop_inner_buttons_inner->example) {
        list_ForEach(listEntry, template_components_prop_inner_buttons_inner->example) {
            any_type_free(listEntry->data);
        }
        list_freeList(template_components_prop_inner_buttons_inner->example);
        template_components_prop_inner_buttons_inner->example = NULL;
    }
    free(template_components_prop_inner_buttons_inner);
}

cJSON *template_components_prop_inner_buttons_inner_convertToJSON(template_components_prop_inner_buttons_inner_t *template_components_prop_inner_buttons_inner) {
    cJSON *item = cJSON_CreateObject();

    // template_components_prop_inner_buttons_inner->type
    if(template_components_prop_inner_buttons_inner->type != one_msg_waba_sdk_template_components_prop_inner_buttons_inner_TYPE_NULL) {
    if(cJSON_AddStringToObject(item, "type", typetemplate_components_prop_inner_buttons_inner_ToString(template_components_prop_inner_buttons_inner->type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // template_components_prop_inner_buttons_inner->text
    if(template_components_prop_inner_buttons_inner->text) {
    if(cJSON_AddStringToObject(item, "text", template_components_prop_inner_buttons_inner->text) == NULL) {
    goto fail; //String
    }
    }


    // template_components_prop_inner_buttons_inner->url
    if(template_components_prop_inner_buttons_inner->url) {
    if(cJSON_AddStringToObject(item, "url", template_components_prop_inner_buttons_inner->url) == NULL) {
    goto fail; //String
    }
    }


    // template_components_prop_inner_buttons_inner->phone_number
    if(template_components_prop_inner_buttons_inner->phone_number) {
    if(cJSON_AddStringToObject(item, "phone_number", template_components_prop_inner_buttons_inner->phone_number) == NULL) {
    goto fail; //String
    }
    }


    // template_components_prop_inner_buttons_inner->example
    if(template_components_prop_inner_buttons_inner->example) {
    cJSON *example = cJSON_AddArrayToObject(item, "example");
    if(example == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *exampleListEntry;
    if (template_components_prop_inner_buttons_inner->example) {
    list_ForEach(exampleListEntry, template_components_prop_inner_buttons_inner->example) {
    cJSON *itemLocal = any_type_convertToJSON(exampleListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(example, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

template_components_prop_inner_buttons_inner_t *template_components_prop_inner_buttons_inner_parseFromJSON(cJSON *template_components_prop_inner_buttons_innerJSON){

    template_components_prop_inner_buttons_inner_t *template_components_prop_inner_buttons_inner_local_var = NULL;

    // define the local list for template_components_prop_inner_buttons_inner->example
    list_t *exampleList = NULL;

    // template_components_prop_inner_buttons_inner->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(template_components_prop_inner_buttons_innerJSON, "type");
    one_msg_waba_sdk_template_components_prop_inner_buttons_inner_TYPE_e typeVariable;
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //Enum
    }
    typeVariable = typetemplate_components_prop_inner_buttons_inner_FromString(type->valuestring);
    }

    // template_components_prop_inner_buttons_inner->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(template_components_prop_inner_buttons_innerJSON, "text");
    if (text) { 
    if(!cJSON_IsString(text) && !cJSON_IsNull(text))
    {
    goto end; //String
    }
    }

    // template_components_prop_inner_buttons_inner->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(template_components_prop_inner_buttons_innerJSON, "url");
    if (url) { 
    if(!cJSON_IsString(url) && !cJSON_IsNull(url))
    {
    goto end; //String
    }
    }

    // template_components_prop_inner_buttons_inner->phone_number
    cJSON *phone_number = cJSON_GetObjectItemCaseSensitive(template_components_prop_inner_buttons_innerJSON, "phone_number");
    if (phone_number) { 
    if(!cJSON_IsString(phone_number) && !cJSON_IsNull(phone_number))
    {
    goto end; //String
    }
    }

    // template_components_prop_inner_buttons_inner->example
    cJSON *example = cJSON_GetObjectItemCaseSensitive(template_components_prop_inner_buttons_innerJSON, "example");
    if (example) { 
    cJSON *example_local_nonprimitive = NULL;
    if(!cJSON_IsArray(example)){
        goto end; //nonprimitive container
    }

    exampleList = list_createList();

    cJSON_ArrayForEach(example_local_nonprimitive,example )
    {
        if(!cJSON_IsObject(example_local_nonprimitive)){
            goto end;
        }
        any_type_t *exampleItem = any_type_parseFromJSON(example_local_nonprimitive);

        list_addElement(exampleList, exampleItem);
    }
    }


    template_components_prop_inner_buttons_inner_local_var = template_components_prop_inner_buttons_inner_create (
        type ? typeVariable : -1,
        text && !cJSON_IsNull(text) ? strdup(text->valuestring) : NULL,
        url && !cJSON_IsNull(url) ? strdup(url->valuestring) : NULL,
        phone_number && !cJSON_IsNull(phone_number) ? strdup(phone_number->valuestring) : NULL,
        example ? exampleList : NULL
        );

    return template_components_prop_inner_buttons_inner_local_var;
end:
    if (exampleList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, exampleList) {
            any_type_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(exampleList);
        exampleList = NULL;
    }
    return NULL;

}
