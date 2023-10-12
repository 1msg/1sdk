#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "commerce_params.h"



commerce_params_t *commerce_params_create(
    int is_cart_enabled,
    int is_catalog_visible
    ) {
    commerce_params_t *commerce_params_local_var = malloc(sizeof(commerce_params_t));
    if (!commerce_params_local_var) {
        return NULL;
    }
    commerce_params_local_var->is_cart_enabled = is_cart_enabled;
    commerce_params_local_var->is_catalog_visible = is_catalog_visible;

    return commerce_params_local_var;
}


void commerce_params_free(commerce_params_t *commerce_params) {
    if(NULL == commerce_params){
        return ;
    }
    listEntry_t *listEntry;
    free(commerce_params);
}

cJSON *commerce_params_convertToJSON(commerce_params_t *commerce_params) {
    cJSON *item = cJSON_CreateObject();

    // commerce_params->is_cart_enabled
    if (!commerce_params->is_cart_enabled) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "is_cart_enabled", commerce_params->is_cart_enabled) == NULL) {
    goto fail; //Bool
    }


    // commerce_params->is_catalog_visible
    if (!commerce_params->is_catalog_visible) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "is_catalog_visible", commerce_params->is_catalog_visible) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

commerce_params_t *commerce_params_parseFromJSON(cJSON *commerce_paramsJSON){

    commerce_params_t *commerce_params_local_var = NULL;

    // commerce_params->is_cart_enabled
    cJSON *is_cart_enabled = cJSON_GetObjectItemCaseSensitive(commerce_paramsJSON, "is_cart_enabled");
    if (!is_cart_enabled) {
        goto end;
    }

    
    if(!cJSON_IsBool(is_cart_enabled))
    {
    goto end; //Bool
    }

    // commerce_params->is_catalog_visible
    cJSON *is_catalog_visible = cJSON_GetObjectItemCaseSensitive(commerce_paramsJSON, "is_catalog_visible");
    if (!is_catalog_visible) {
        goto end;
    }

    
    if(!cJSON_IsBool(is_catalog_visible))
    {
    goto end; //Bool
    }


    commerce_params_local_var = commerce_params_create (
        is_cart_enabled->valueint,
        is_catalog_visible->valueint
        );

    return commerce_params_local_var;
end:
    return NULL;

}
