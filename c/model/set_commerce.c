#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "set_commerce.h"



set_commerce_t *set_commerce_create(
    int success
    ) {
    set_commerce_t *set_commerce_local_var = malloc(sizeof(set_commerce_t));
    if (!set_commerce_local_var) {
        return NULL;
    }
    set_commerce_local_var->success = success;

    return set_commerce_local_var;
}


void set_commerce_free(set_commerce_t *set_commerce) {
    if(NULL == set_commerce){
        return ;
    }
    listEntry_t *listEntry;
    free(set_commerce);
}

cJSON *set_commerce_convertToJSON(set_commerce_t *set_commerce) {
    cJSON *item = cJSON_CreateObject();

    // set_commerce->success
    if(set_commerce->success) {
    if(cJSON_AddBoolToObject(item, "success", set_commerce->success) == NULL) {
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

set_commerce_t *set_commerce_parseFromJSON(cJSON *set_commerceJSON){

    set_commerce_t *set_commerce_local_var = NULL;

    // set_commerce->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(set_commerceJSON, "success");
    if (success) { 
    if(!cJSON_IsBool(success))
    {
    goto end; //Bool
    }
    }


    set_commerce_local_var = set_commerce_create (
        success ? success->valueint : 0
        );

    return set_commerce_local_var;
end:
    return NULL;

}
