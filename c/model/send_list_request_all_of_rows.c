#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "send_list_request_all_of_rows.h"



send_list_request_all_of_rows_t *send_list_request_all_of_rows_create(
    char *id,
    char *title,
    char *description
    ) {
    send_list_request_all_of_rows_t *send_list_request_all_of_rows_local_var = malloc(sizeof(send_list_request_all_of_rows_t));
    if (!send_list_request_all_of_rows_local_var) {
        return NULL;
    }
    send_list_request_all_of_rows_local_var->id = id;
    send_list_request_all_of_rows_local_var->title = title;
    send_list_request_all_of_rows_local_var->description = description;

    return send_list_request_all_of_rows_local_var;
}


void send_list_request_all_of_rows_free(send_list_request_all_of_rows_t *send_list_request_all_of_rows) {
    if(NULL == send_list_request_all_of_rows){
        return ;
    }
    listEntry_t *listEntry;
    if (send_list_request_all_of_rows->id) {
        free(send_list_request_all_of_rows->id);
        send_list_request_all_of_rows->id = NULL;
    }
    if (send_list_request_all_of_rows->title) {
        free(send_list_request_all_of_rows->title);
        send_list_request_all_of_rows->title = NULL;
    }
    if (send_list_request_all_of_rows->description) {
        free(send_list_request_all_of_rows->description);
        send_list_request_all_of_rows->description = NULL;
    }
    free(send_list_request_all_of_rows);
}

cJSON *send_list_request_all_of_rows_convertToJSON(send_list_request_all_of_rows_t *send_list_request_all_of_rows) {
    cJSON *item = cJSON_CreateObject();

    // send_list_request_all_of_rows->id
    if (!send_list_request_all_of_rows->id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "id", send_list_request_all_of_rows->id) == NULL) {
    goto fail; //String
    }


    // send_list_request_all_of_rows->title
    if (!send_list_request_all_of_rows->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", send_list_request_all_of_rows->title) == NULL) {
    goto fail; //String
    }


    // send_list_request_all_of_rows->description
    if(send_list_request_all_of_rows->description) {
    if(cJSON_AddStringToObject(item, "description", send_list_request_all_of_rows->description) == NULL) {
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

send_list_request_all_of_rows_t *send_list_request_all_of_rows_parseFromJSON(cJSON *send_list_request_all_of_rowsJSON){

    send_list_request_all_of_rows_t *send_list_request_all_of_rows_local_var = NULL;

    // send_list_request_all_of_rows->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(send_list_request_all_of_rowsJSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }

    // send_list_request_all_of_rows->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(send_list_request_all_of_rowsJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // send_list_request_all_of_rows->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(send_list_request_all_of_rowsJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    send_list_request_all_of_rows_local_var = send_list_request_all_of_rows_create (
        strdup(id->valuestring),
        strdup(title->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return send_list_request_all_of_rows_local_var;
end:
    return NULL;

}
