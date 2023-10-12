#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "get_ack_info.h"



get_ack_info_t *get_ack_info_create(
    list_t *hooks
    ) {
    get_ack_info_t *get_ack_info_local_var = malloc(sizeof(get_ack_info_t));
    if (!get_ack_info_local_var) {
        return NULL;
    }
    get_ack_info_local_var->hooks = hooks;

    return get_ack_info_local_var;
}


void get_ack_info_free(get_ack_info_t *get_ack_info) {
    if(NULL == get_ack_info){
        return ;
    }
    listEntry_t *listEntry;
    if (get_ack_info->hooks) {
        list_ForEach(listEntry, get_ack_info->hooks) {
            get_ack_info_hooks_inner_free(listEntry->data);
        }
        list_freeList(get_ack_info->hooks);
        get_ack_info->hooks = NULL;
    }
    free(get_ack_info);
}

cJSON *get_ack_info_convertToJSON(get_ack_info_t *get_ack_info) {
    cJSON *item = cJSON_CreateObject();

    // get_ack_info->hooks
    if(get_ack_info->hooks) {
    cJSON *hooks = cJSON_AddArrayToObject(item, "hooks");
    if(hooks == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *hooksListEntry;
    if (get_ack_info->hooks) {
    list_ForEach(hooksListEntry, get_ack_info->hooks) {
    cJSON *itemLocal = get_ack_info_hooks_inner_convertToJSON(hooksListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(hooks, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

get_ack_info_t *get_ack_info_parseFromJSON(cJSON *get_ack_infoJSON){

    get_ack_info_t *get_ack_info_local_var = NULL;

    // define the local list for get_ack_info->hooks
    list_t *hooksList = NULL;

    // get_ack_info->hooks
    cJSON *hooks = cJSON_GetObjectItemCaseSensitive(get_ack_infoJSON, "hooks");
    if (hooks) { 
    cJSON *hooks_local_nonprimitive = NULL;
    if(!cJSON_IsArray(hooks)){
        goto end; //nonprimitive container
    }

    hooksList = list_createList();

    cJSON_ArrayForEach(hooks_local_nonprimitive,hooks )
    {
        if(!cJSON_IsObject(hooks_local_nonprimitive)){
            goto end;
        }
        get_ack_info_hooks_inner_t *hooksItem = get_ack_info_hooks_inner_parseFromJSON(hooks_local_nonprimitive);

        list_addElement(hooksList, hooksItem);
    }
    }


    get_ack_info_local_var = get_ack_info_create (
        hooks ? hooksList : NULL
        );

    return get_ack_info_local_var;
end:
    if (hooksList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, hooksList) {
            get_ack_info_hooks_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(hooksList);
        hooksList = NULL;
    }
    return NULL;

}
