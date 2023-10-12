#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "read_message_request.h"



read_message_request_t *read_message_request_create(
    char *message_id
    ) {
    read_message_request_t *read_message_request_local_var = malloc(sizeof(read_message_request_t));
    if (!read_message_request_local_var) {
        return NULL;
    }
    read_message_request_local_var->message_id = message_id;

    return read_message_request_local_var;
}


void read_message_request_free(read_message_request_t *read_message_request) {
    if(NULL == read_message_request){
        return ;
    }
    listEntry_t *listEntry;
    if (read_message_request->message_id) {
        free(read_message_request->message_id);
        read_message_request->message_id = NULL;
    }
    free(read_message_request);
}

cJSON *read_message_request_convertToJSON(read_message_request_t *read_message_request) {
    cJSON *item = cJSON_CreateObject();

    // read_message_request->message_id
    if(read_message_request->message_id) {
    if(cJSON_AddStringToObject(item, "messageId", read_message_request->message_id) == NULL) {
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

read_message_request_t *read_message_request_parseFromJSON(cJSON *read_message_requestJSON){

    read_message_request_t *read_message_request_local_var = NULL;

    // read_message_request->message_id
    cJSON *message_id = cJSON_GetObjectItemCaseSensitive(read_message_requestJSON, "messageId");
    if (message_id) { 
    if(!cJSON_IsString(message_id) && !cJSON_IsNull(message_id))
    {
    goto end; //String
    }
    }


    read_message_request_local_var = read_message_request_create (
        message_id && !cJSON_IsNull(message_id) ? strdup(message_id->valuestring) : NULL
        );

    return read_message_request_local_var;
end:
    return NULL;

}
