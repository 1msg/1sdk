#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "template_components_prop.h"



template_components_prop_t *template_components_prop_create(
    ) {
    template_components_prop_t *template_components_prop_local_var = malloc(sizeof(template_components_prop_t));
    if (!template_components_prop_local_var) {
        return NULL;
    }

    return template_components_prop_local_var;
}


void template_components_prop_free(template_components_prop_t *template_components_prop) {
    if(NULL == template_components_prop){
        return ;
    }
    listEntry_t *listEntry;
    free(template_components_prop);
}

cJSON *template_components_prop_convertToJSON(template_components_prop_t *template_components_prop) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

template_components_prop_t *template_components_prop_parseFromJSON(cJSON *template_components_propJSON){

    template_components_prop_t *template_components_prop_local_var = NULL;


    template_components_prop_local_var = template_components_prop_create (
        );

    return template_components_prop_local_var;
end:
    return NULL;

}
