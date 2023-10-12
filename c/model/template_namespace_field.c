#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "template_namespace_field.h"



template_namespace_field_t *template_namespace_field_create(
    char *_namespace
    ) {
    template_namespace_field_t *template_namespace_field_local_var = malloc(sizeof(template_namespace_field_t));
    if (!template_namespace_field_local_var) {
        return NULL;
    }
    template_namespace_field_local_var->_namespace = _namespace;

    return template_namespace_field_local_var;
}


void template_namespace_field_free(template_namespace_field_t *template_namespace_field) {
    if(NULL == template_namespace_field){
        return ;
    }
    listEntry_t *listEntry;
    if (template_namespace_field->_namespace) {
        free(template_namespace_field->_namespace);
        template_namespace_field->_namespace = NULL;
    }
    free(template_namespace_field);
}

cJSON *template_namespace_field_convertToJSON(template_namespace_field_t *template_namespace_field) {
    cJSON *item = cJSON_CreateObject();

    // template_namespace_field->_namespace
    if(template_namespace_field->_namespace) {
    if(cJSON_AddStringToObject(item, "namespace", template_namespace_field->_namespace) == NULL) {
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

template_namespace_field_t *template_namespace_field_parseFromJSON(cJSON *template_namespace_fieldJSON){

    template_namespace_field_t *template_namespace_field_local_var = NULL;

    // template_namespace_field->_namespace
    cJSON *_namespace = cJSON_GetObjectItemCaseSensitive(template_namespace_fieldJSON, "namespace");
    if (_namespace) { 
    if(!cJSON_IsString(_namespace) && !cJSON_IsNull(_namespace))
    {
    goto end; //String
    }
    }


    template_namespace_field_local_var = template_namespace_field_create (
        _namespace && !cJSON_IsNull(_namespace) ? strdup(_namespace->valuestring) : NULL
        );

    return template_namespace_field_local_var;
end:
    return NULL;

}
