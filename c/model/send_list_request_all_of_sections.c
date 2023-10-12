#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "send_list_request_all_of_sections.h"



send_list_request_all_of_sections_t *send_list_request_all_of_sections_create(
    char *title,
    list_t *rows
    ) {
    send_list_request_all_of_sections_t *send_list_request_all_of_sections_local_var = malloc(sizeof(send_list_request_all_of_sections_t));
    if (!send_list_request_all_of_sections_local_var) {
        return NULL;
    }
    send_list_request_all_of_sections_local_var->title = title;
    send_list_request_all_of_sections_local_var->rows = rows;

    return send_list_request_all_of_sections_local_var;
}


void send_list_request_all_of_sections_free(send_list_request_all_of_sections_t *send_list_request_all_of_sections) {
    if(NULL == send_list_request_all_of_sections){
        return ;
    }
    listEntry_t *listEntry;
    if (send_list_request_all_of_sections->title) {
        free(send_list_request_all_of_sections->title);
        send_list_request_all_of_sections->title = NULL;
    }
    if (send_list_request_all_of_sections->rows) {
        list_ForEach(listEntry, send_list_request_all_of_sections->rows) {
            send_list_request_all_of_rows_free(listEntry->data);
        }
        list_freeList(send_list_request_all_of_sections->rows);
        send_list_request_all_of_sections->rows = NULL;
    }
    free(send_list_request_all_of_sections);
}

cJSON *send_list_request_all_of_sections_convertToJSON(send_list_request_all_of_sections_t *send_list_request_all_of_sections) {
    cJSON *item = cJSON_CreateObject();

    // send_list_request_all_of_sections->title
    if(send_list_request_all_of_sections->title) {
    if(cJSON_AddStringToObject(item, "title", send_list_request_all_of_sections->title) == NULL) {
    goto fail; //String
    }
    }


    // send_list_request_all_of_sections->rows
    if (!send_list_request_all_of_sections->rows) {
        goto fail;
    }
    cJSON *rows = cJSON_AddArrayToObject(item, "rows");
    if(rows == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *rowsListEntry;
    if (send_list_request_all_of_sections->rows) {
    list_ForEach(rowsListEntry, send_list_request_all_of_sections->rows) {
    cJSON *itemLocal = send_list_request_all_of_rows_convertToJSON(rowsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(rows, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

send_list_request_all_of_sections_t *send_list_request_all_of_sections_parseFromJSON(cJSON *send_list_request_all_of_sectionsJSON){

    send_list_request_all_of_sections_t *send_list_request_all_of_sections_local_var = NULL;

    // define the local list for send_list_request_all_of_sections->rows
    list_t *rowsList = NULL;

    // send_list_request_all_of_sections->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(send_list_request_all_of_sectionsJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // send_list_request_all_of_sections->rows
    cJSON *rows = cJSON_GetObjectItemCaseSensitive(send_list_request_all_of_sectionsJSON, "rows");
    if (!rows) {
        goto end;
    }

    
    cJSON *rows_local_nonprimitive = NULL;
    if(!cJSON_IsArray(rows)){
        goto end; //nonprimitive container
    }

    rowsList = list_createList();

    cJSON_ArrayForEach(rows_local_nonprimitive,rows )
    {
        if(!cJSON_IsObject(rows_local_nonprimitive)){
            goto end;
        }
        send_list_request_all_of_rows_t *rowsItem = send_list_request_all_of_rows_parseFromJSON(rows_local_nonprimitive);

        list_addElement(rowsList, rowsItem);
    }


    send_list_request_all_of_sections_local_var = send_list_request_all_of_sections_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        rowsList
        );

    return send_list_request_all_of_sections_local_var;
end:
    if (rowsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, rowsList) {
            send_list_request_all_of_rows_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(rowsList);
        rowsList = NULL;
    }
    return NULL;

}
