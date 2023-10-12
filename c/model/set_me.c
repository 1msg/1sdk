#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "set_me.h"



set_me_t *set_me_create(
    char *result
    ) {
    set_me_t *set_me_local_var = malloc(sizeof(set_me_t));
    if (!set_me_local_var) {
        return NULL;
    }
    set_me_local_var->result = result;

    return set_me_local_var;
}


void set_me_free(set_me_t *set_me) {
    if(NULL == set_me){
        return ;
    }
    listEntry_t *listEntry;
    if (set_me->result) {
        free(set_me->result);
        set_me->result = NULL;
    }
    free(set_me);
}

cJSON *set_me_convertToJSON(set_me_t *set_me) {
    cJSON *item = cJSON_CreateObject();

    // set_me->result
    if(set_me->result) {
    if(cJSON_AddStringToObject(item, "result", set_me->result) == NULL) {
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

set_me_t *set_me_parseFromJSON(cJSON *set_meJSON){

    set_me_t *set_me_local_var = NULL;

    // set_me->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(set_meJSON, "result");
    if (result) { 
    if(!cJSON_IsString(result) && !cJSON_IsNull(result))
    {
    goto end; //String
    }
    }


    set_me_local_var = set_me_create (
        result && !cJSON_IsNull(result) ? strdup(result->valuestring) : NULL
        );

    return set_me_local_var;
end:
    return NULL;

}
