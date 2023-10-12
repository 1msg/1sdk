#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "commerce.h"



commerce_t *commerce_create(
    commerce_params_t *params
    ) {
    commerce_t *commerce_local_var = malloc(sizeof(commerce_t));
    if (!commerce_local_var) {
        return NULL;
    }
    commerce_local_var->params = params;

    return commerce_local_var;
}


void commerce_free(commerce_t *commerce) {
    if(NULL == commerce){
        return ;
    }
    listEntry_t *listEntry;
    if (commerce->params) {
        commerce_params_free(commerce->params);
        commerce->params = NULL;
    }
    free(commerce);
}

cJSON *commerce_convertToJSON(commerce_t *commerce) {
    cJSON *item = cJSON_CreateObject();

    // commerce->params
    if(commerce->params) {
    cJSON *params_local_JSON = commerce_params_convertToJSON(commerce->params);
    if(params_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "params", params_local_JSON);
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

commerce_t *commerce_parseFromJSON(cJSON *commerceJSON){

    commerce_t *commerce_local_var = NULL;

    // define the local variable for commerce->params
    commerce_params_t *params_local_nonprim = NULL;

    // commerce->params
    cJSON *params = cJSON_GetObjectItemCaseSensitive(commerceJSON, "params");
    if (params) { 
    params_local_nonprim = commerce_params_parseFromJSON(params); //nonprimitive
    }


    commerce_local_var = commerce_create (
        params ? params_local_nonprim : NULL
        );

    return commerce_local_var;
end:
    if (params_local_nonprim) {
        commerce_params_free(params_local_nonprim);
        params_local_nonprim = NULL;
    }
    return NULL;

}
