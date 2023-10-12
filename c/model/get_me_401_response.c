#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "get_me_401_response.h"



get_me_401_response_t *get_me_401_response_create(
    char *error
    ) {
    get_me_401_response_t *get_me_401_response_local_var = malloc(sizeof(get_me_401_response_t));
    if (!get_me_401_response_local_var) {
        return NULL;
    }
    get_me_401_response_local_var->error = error;

    return get_me_401_response_local_var;
}


void get_me_401_response_free(get_me_401_response_t *get_me_401_response) {
    if(NULL == get_me_401_response){
        return ;
    }
    listEntry_t *listEntry;
    if (get_me_401_response->error) {
        free(get_me_401_response->error);
        get_me_401_response->error = NULL;
    }
    free(get_me_401_response);
}

cJSON *get_me_401_response_convertToJSON(get_me_401_response_t *get_me_401_response) {
    cJSON *item = cJSON_CreateObject();

    // get_me_401_response->error
    if(get_me_401_response->error) {
    if(cJSON_AddStringToObject(item, "error", get_me_401_response->error) == NULL) {
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

get_me_401_response_t *get_me_401_response_parseFromJSON(cJSON *get_me_401_responseJSON){

    get_me_401_response_t *get_me_401_response_local_var = NULL;

    // get_me_401_response->error
    cJSON *error = cJSON_GetObjectItemCaseSensitive(get_me_401_responseJSON, "error");
    if (error) { 
    if(!cJSON_IsString(error) && !cJSON_IsNull(error))
    {
    goto end; //String
    }
    }


    get_me_401_response_local_var = get_me_401_response_create (
        error && !cJSON_IsNull(error) ? strdup(error->valuestring) : NULL
        );

    return get_me_401_response_local_var;
end:
    return NULL;

}
