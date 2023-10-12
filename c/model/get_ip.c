#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "get_ip.h"



get_ip_t *get_ip_create(
    char *result
    ) {
    get_ip_t *get_ip_local_var = malloc(sizeof(get_ip_t));
    if (!get_ip_local_var) {
        return NULL;
    }
    get_ip_local_var->result = result;

    return get_ip_local_var;
}


void get_ip_free(get_ip_t *get_ip) {
    if(NULL == get_ip){
        return ;
    }
    listEntry_t *listEntry;
    if (get_ip->result) {
        free(get_ip->result);
        get_ip->result = NULL;
    }
    free(get_ip);
}

cJSON *get_ip_convertToJSON(get_ip_t *get_ip) {
    cJSON *item = cJSON_CreateObject();

    // get_ip->result
    if(get_ip->result) {
    if(cJSON_AddStringToObject(item, "result", get_ip->result) == NULL) {
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

get_ip_t *get_ip_parseFromJSON(cJSON *get_ipJSON){

    get_ip_t *get_ip_local_var = NULL;

    // get_ip->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(get_ipJSON, "result");
    if (result) { 
    if(!cJSON_IsString(result) && !cJSON_IsNull(result))
    {
    goto end; //String
    }
    }


    get_ip_local_var = get_ip_create (
        result && !cJSON_IsNull(result) ? strdup(result->valuestring) : NULL
        );

    return get_ip_local_var;
end:
    return NULL;

}
