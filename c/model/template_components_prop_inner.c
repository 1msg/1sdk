#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "template_components_prop_inner.h"


char* typetemplate_components_prop_inner_ToString(one_msg_waba_sdk_template_components_prop_inner_TYPE_e type) {
    char* typeArray[] =  { "NULL", "BODY", "HEADER", "FOOTER", "BUTTONS" };
	return typeArray[type];
}

one_msg_waba_sdk_template_components_prop_inner_TYPE_e typetemplate_components_prop_inner_FromString(char* type){
    int stringToReturn = 0;
    char *typeArray[] =  { "NULL", "BODY", "HEADER", "FOOTER", "BUTTONS" };
    size_t sizeofArray = sizeof(typeArray) / sizeof(typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(type, typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* formattemplate_components_prop_inner_ToString(one_msg_waba_sdk_template_components_prop_inner_FORMAT_e format) {
    char* formatArray[] =  { "NULL", "TEXT", "IMAGE", "DOCUMENT", "VIDEO" };
	return formatArray[format];
}

one_msg_waba_sdk_template_components_prop_inner_FORMAT_e formattemplate_components_prop_inner_FromString(char* format){
    int stringToReturn = 0;
    char *formatArray[] =  { "NULL", "TEXT", "IMAGE", "DOCUMENT", "VIDEO" };
    size_t sizeofArray = sizeof(formatArray) / sizeof(formatArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(format, formatArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

template_components_prop_inner_t *template_components_prop_inner_create(
    one_msg_waba_sdk_template_components_prop_inner_TYPE_e type,
    one_msg_waba_sdk_template_components_prop_inner_FORMAT_e format,
    char *text,
    object_t *example,
    list_t *buttons
    ) {
    template_components_prop_inner_t *template_components_prop_inner_local_var = malloc(sizeof(template_components_prop_inner_t));
    if (!template_components_prop_inner_local_var) {
        return NULL;
    }
    template_components_prop_inner_local_var->type = type;
    template_components_prop_inner_local_var->format = format;
    template_components_prop_inner_local_var->text = text;
    template_components_prop_inner_local_var->example = example;
    template_components_prop_inner_local_var->buttons = buttons;

    return template_components_prop_inner_local_var;
}


void template_components_prop_inner_free(template_components_prop_inner_t *template_components_prop_inner) {
    if(NULL == template_components_prop_inner){
        return ;
    }
    listEntry_t *listEntry;
    if (template_components_prop_inner->text) {
        free(template_components_prop_inner->text);
        template_components_prop_inner->text = NULL;
    }
    if (template_components_prop_inner->example) {
        object_free(template_components_prop_inner->example);
        template_components_prop_inner->example = NULL;
    }
    if (template_components_prop_inner->buttons) {
        list_ForEach(listEntry, template_components_prop_inner->buttons) {
            template_components_prop_inner_buttons_inner_free(listEntry->data);
        }
        list_freeList(template_components_prop_inner->buttons);
        template_components_prop_inner->buttons = NULL;
    }
    free(template_components_prop_inner);
}

cJSON *template_components_prop_inner_convertToJSON(template_components_prop_inner_t *template_components_prop_inner) {
    cJSON *item = cJSON_CreateObject();

    // template_components_prop_inner->type
    if(template_components_prop_inner->type != one_msg_waba_sdk_template_components_prop_inner_TYPE_NULL) {
    if(cJSON_AddStringToObject(item, "type", typetemplate_components_prop_inner_ToString(template_components_prop_inner->type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // template_components_prop_inner->format
    if(template_components_prop_inner->format != one_msg_waba_sdk_template_components_prop_inner_FORMAT_NULL) {
    if(cJSON_AddStringToObject(item, "format", formattemplate_components_prop_inner_ToString(template_components_prop_inner->format)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // template_components_prop_inner->text
    if(template_components_prop_inner->text) {
    if(cJSON_AddStringToObject(item, "text", template_components_prop_inner->text) == NULL) {
    goto fail; //String
    }
    }


    // template_components_prop_inner->example
    if(template_components_prop_inner->example) {
    cJSON *example_object = object_convertToJSON(template_components_prop_inner->example);
    if(example_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "example", example_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // template_components_prop_inner->buttons
    if(template_components_prop_inner->buttons) {
    cJSON *buttons = cJSON_AddArrayToObject(item, "buttons");
    if(buttons == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *buttonsListEntry;
    if (template_components_prop_inner->buttons) {
    list_ForEach(buttonsListEntry, template_components_prop_inner->buttons) {
    cJSON *itemLocal = template_components_prop_inner_buttons_inner_convertToJSON(buttonsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(buttons, itemLocal);
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

template_components_prop_inner_t *template_components_prop_inner_parseFromJSON(cJSON *template_components_prop_innerJSON){

    template_components_prop_inner_t *template_components_prop_inner_local_var = NULL;

    // define the local list for template_components_prop_inner->buttons
    list_t *buttonsList = NULL;

    // template_components_prop_inner->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(template_components_prop_innerJSON, "type");
    one_msg_waba_sdk_template_components_prop_inner_TYPE_e typeVariable;
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //Enum
    }
    typeVariable = typetemplate_components_prop_inner_FromString(type->valuestring);
    }

    // template_components_prop_inner->format
    cJSON *format = cJSON_GetObjectItemCaseSensitive(template_components_prop_innerJSON, "format");
    one_msg_waba_sdk_template_components_prop_inner_FORMAT_e formatVariable;
    if (format) { 
    if(!cJSON_IsString(format))
    {
    goto end; //Enum
    }
    formatVariable = formattemplate_components_prop_inner_FromString(format->valuestring);
    }

    // template_components_prop_inner->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(template_components_prop_innerJSON, "text");
    if (text) { 
    if(!cJSON_IsString(text) && !cJSON_IsNull(text))
    {
    goto end; //String
    }
    }

    // template_components_prop_inner->example
    cJSON *example = cJSON_GetObjectItemCaseSensitive(template_components_prop_innerJSON, "example");
    object_t *example_local_object = NULL;
    if (example) { 
    example_local_object = object_parseFromJSON(example); //object
    }

    // template_components_prop_inner->buttons
    cJSON *buttons = cJSON_GetObjectItemCaseSensitive(template_components_prop_innerJSON, "buttons");
    if (buttons) { 
    cJSON *buttons_local_nonprimitive = NULL;
    if(!cJSON_IsArray(buttons)){
        goto end; //nonprimitive container
    }

    buttonsList = list_createList();

    cJSON_ArrayForEach(buttons_local_nonprimitive,buttons )
    {
        if(!cJSON_IsObject(buttons_local_nonprimitive)){
            goto end;
        }
        template_components_prop_inner_buttons_inner_t *buttonsItem = template_components_prop_inner_buttons_inner_parseFromJSON(buttons_local_nonprimitive);

        list_addElement(buttonsList, buttonsItem);
    }
    }


    template_components_prop_inner_local_var = template_components_prop_inner_create (
        type ? typeVariable : -1,
        format ? formatVariable : -1,
        text && !cJSON_IsNull(text) ? strdup(text->valuestring) : NULL,
        example ? example_local_object : NULL,
        buttons ? buttonsList : NULL
        );

    return template_components_prop_inner_local_var;
end:
    if (buttonsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, buttonsList) {
            template_components_prop_inner_buttons_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(buttonsList);
        buttonsList = NULL;
    }
    return NULL;

}
