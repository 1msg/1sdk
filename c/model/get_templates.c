#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "get_templates.h"



get_templates_t *get_templates_create(
    int total,
    list_t *templates
    ) {
    get_templates_t *get_templates_local_var = malloc(sizeof(get_templates_t));
    if (!get_templates_local_var) {
        return NULL;
    }
    get_templates_local_var->total = total;
    get_templates_local_var->templates = templates;

    return get_templates_local_var;
}


void get_templates_free(get_templates_t *get_templates) {
    if(NULL == get_templates){
        return ;
    }
    listEntry_t *listEntry;
    if (get_templates->templates) {
        list_ForEach(listEntry, get_templates->templates) {
            get_templates_templates_inner_free(listEntry->data);
        }
        list_freeList(get_templates->templates);
        get_templates->templates = NULL;
    }
    free(get_templates);
}

cJSON *get_templates_convertToJSON(get_templates_t *get_templates) {
    cJSON *item = cJSON_CreateObject();

    // get_templates->total
    if(get_templates->total) {
    if(cJSON_AddNumberToObject(item, "total", get_templates->total) == NULL) {
    goto fail; //Numeric
    }
    }


    // get_templates->templates
    if(get_templates->templates) {
    cJSON *templates = cJSON_AddArrayToObject(item, "templates");
    if(templates == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *templatesListEntry;
    if (get_templates->templates) {
    list_ForEach(templatesListEntry, get_templates->templates) {
    cJSON *itemLocal = get_templates_templates_inner_convertToJSON(templatesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(templates, itemLocal);
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

get_templates_t *get_templates_parseFromJSON(cJSON *get_templatesJSON){

    get_templates_t *get_templates_local_var = NULL;

    // define the local list for get_templates->templates
    list_t *templatesList = NULL;

    // get_templates->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(get_templatesJSON, "total");
    if (total) { 
    if(!cJSON_IsNumber(total))
    {
    goto end; //Numeric
    }
    }

    // get_templates->templates
    cJSON *templates = cJSON_GetObjectItemCaseSensitive(get_templatesJSON, "templates");
    if (templates) { 
    cJSON *templates_local_nonprimitive = NULL;
    if(!cJSON_IsArray(templates)){
        goto end; //nonprimitive container
    }

    templatesList = list_createList();

    cJSON_ArrayForEach(templates_local_nonprimitive,templates )
    {
        if(!cJSON_IsObject(templates_local_nonprimitive)){
            goto end;
        }
        get_templates_templates_inner_t *templatesItem = get_templates_templates_inner_parseFromJSON(templates_local_nonprimitive);

        list_addElement(templatesList, templatesItem);
    }
    }


    get_templates_local_var = get_templates_create (
        total ? total->valuedouble : 0,
        templates ? templatesList : NULL
        );

    return get_templates_local_var;
end:
    if (templatesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, templatesList) {
            get_templates_templates_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(templatesList);
        templatesList = NULL;
    }
    return NULL;

}
