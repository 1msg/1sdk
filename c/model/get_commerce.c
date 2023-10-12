#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "get_commerce.h"



get_commerce_t *get_commerce_create(
    ) {
    get_commerce_t *get_commerce_local_var = malloc(sizeof(get_commerce_t));
    if (!get_commerce_local_var) {
        return NULL;
    }

    return get_commerce_local_var;
}


void get_commerce_free(get_commerce_t *get_commerce) {
    if(NULL == get_commerce){
        return ;
    }
    listEntry_t *listEntry;
    free(get_commerce);
}

cJSON *get_commerce_convertToJSON(get_commerce_t *get_commerce) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

get_commerce_t *get_commerce_parseFromJSON(cJSON *get_commerceJSON){

    get_commerce_t *get_commerce_local_var = NULL;


    get_commerce_local_var = get_commerce_create (
        );

    return get_commerce_local_var;
end:
    return NULL;

}
