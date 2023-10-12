#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "get_commerce_inner.h"



get_commerce_inner_t *get_commerce_inner_create(
    char *id,
    int is_cart_enabled,
    int is_catalog_visible
    ) {
    get_commerce_inner_t *get_commerce_inner_local_var = malloc(sizeof(get_commerce_inner_t));
    if (!get_commerce_inner_local_var) {
        return NULL;
    }
    get_commerce_inner_local_var->id = id;
    get_commerce_inner_local_var->is_cart_enabled = is_cart_enabled;
    get_commerce_inner_local_var->is_catalog_visible = is_catalog_visible;

    return get_commerce_inner_local_var;
}


void get_commerce_inner_free(get_commerce_inner_t *get_commerce_inner) {
    if(NULL == get_commerce_inner){
        return ;
    }
    listEntry_t *listEntry;
    if (get_commerce_inner->id) {
        free(get_commerce_inner->id);
        get_commerce_inner->id = NULL;
    }
    free(get_commerce_inner);
}

cJSON *get_commerce_inner_convertToJSON(get_commerce_inner_t *get_commerce_inner) {
    cJSON *item = cJSON_CreateObject();

    // get_commerce_inner->id
    if(get_commerce_inner->id) {
    if(cJSON_AddStringToObject(item, "id", get_commerce_inner->id) == NULL) {
    goto fail; //String
    }
    }


    // get_commerce_inner->is_cart_enabled
    if(get_commerce_inner->is_cart_enabled) {
    if(cJSON_AddBoolToObject(item, "is_cart_enabled", get_commerce_inner->is_cart_enabled) == NULL) {
    goto fail; //Bool
    }
    }


    // get_commerce_inner->is_catalog_visible
    if(get_commerce_inner->is_catalog_visible) {
    if(cJSON_AddBoolToObject(item, "is_catalog_visible", get_commerce_inner->is_catalog_visible) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

get_commerce_inner_t *get_commerce_inner_parseFromJSON(cJSON *get_commerce_innerJSON){

    get_commerce_inner_t *get_commerce_inner_local_var = NULL;

    // get_commerce_inner->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(get_commerce_innerJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // get_commerce_inner->is_cart_enabled
    cJSON *is_cart_enabled = cJSON_GetObjectItemCaseSensitive(get_commerce_innerJSON, "is_cart_enabled");
    if (is_cart_enabled) { 
    if(!cJSON_IsBool(is_cart_enabled))
    {
    goto end; //Bool
    }
    }

    // get_commerce_inner->is_catalog_visible
    cJSON *is_catalog_visible = cJSON_GetObjectItemCaseSensitive(get_commerce_innerJSON, "is_catalog_visible");
    if (is_catalog_visible) { 
    if(!cJSON_IsBool(is_catalog_visible))
    {
    goto end; //Bool
    }
    }


    get_commerce_inner_local_var = get_commerce_inner_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        is_cart_enabled ? is_cart_enabled->valueint : 0,
        is_catalog_visible ? is_catalog_visible->valueint : 0
        );

    return get_commerce_inner_local_var;
end:
    return NULL;

}
