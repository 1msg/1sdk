#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "remove_template_request.h"



remove_template_request_t *remove_template_request_create(
    char *name
    ) {
    remove_template_request_t *remove_template_request_local_var = malloc(sizeof(remove_template_request_t));
    if (!remove_template_request_local_var) {
        return NULL;
    }
    remove_template_request_local_var->name = name;

    return remove_template_request_local_var;
}


void remove_template_request_free(remove_template_request_t *remove_template_request) {
    if(NULL == remove_template_request){
        return ;
    }
    listEntry_t *listEntry;
    if (remove_template_request->name) {
        free(remove_template_request->name);
        remove_template_request->name = NULL;
    }
    free(remove_template_request);
}

cJSON *remove_template_request_convertToJSON(remove_template_request_t *remove_template_request) {
    cJSON *item = cJSON_CreateObject();

    // remove_template_request->name
    if(remove_template_request->name) {
    if(cJSON_AddStringToObject(item, "name", remove_template_request->name) == NULL) {
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

remove_template_request_t *remove_template_request_parseFromJSON(cJSON *remove_template_requestJSON){

    remove_template_request_t *remove_template_request_local_var = NULL;

    // remove_template_request->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(remove_template_requestJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }


    remove_template_request_local_var = remove_template_request_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL
        );

    return remove_template_request_local_var;
end:
    return NULL;

}
