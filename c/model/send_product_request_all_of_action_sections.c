#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "send_product_request_all_of_action_sections.h"



send_product_request_all_of_action_sections_t *send_product_request_all_of_action_sections_create(
    char *title,
    list_t *product_items
    ) {
    send_product_request_all_of_action_sections_t *send_product_request_all_of_action_sections_local_var = malloc(sizeof(send_product_request_all_of_action_sections_t));
    if (!send_product_request_all_of_action_sections_local_var) {
        return NULL;
    }
    send_product_request_all_of_action_sections_local_var->title = title;
    send_product_request_all_of_action_sections_local_var->product_items = product_items;

    return send_product_request_all_of_action_sections_local_var;
}


void send_product_request_all_of_action_sections_free(send_product_request_all_of_action_sections_t *send_product_request_all_of_action_sections) {
    if(NULL == send_product_request_all_of_action_sections){
        return ;
    }
    listEntry_t *listEntry;
    if (send_product_request_all_of_action_sections->title) {
        free(send_product_request_all_of_action_sections->title);
        send_product_request_all_of_action_sections->title = NULL;
    }
    if (send_product_request_all_of_action_sections->product_items) {
        list_ForEach(listEntry, send_product_request_all_of_action_sections->product_items) {
            send_product_request_all_of_action_product_items_free(listEntry->data);
        }
        list_freeList(send_product_request_all_of_action_sections->product_items);
        send_product_request_all_of_action_sections->product_items = NULL;
    }
    free(send_product_request_all_of_action_sections);
}

cJSON *send_product_request_all_of_action_sections_convertToJSON(send_product_request_all_of_action_sections_t *send_product_request_all_of_action_sections) {
    cJSON *item = cJSON_CreateObject();

    // send_product_request_all_of_action_sections->title
    if(send_product_request_all_of_action_sections->title) {
    if(cJSON_AddStringToObject(item, "title", send_product_request_all_of_action_sections->title) == NULL) {
    goto fail; //String
    }
    }


    // send_product_request_all_of_action_sections->product_items
    if(send_product_request_all_of_action_sections->product_items) {
    cJSON *product_items = cJSON_AddArrayToObject(item, "product_items");
    if(product_items == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *product_itemsListEntry;
    if (send_product_request_all_of_action_sections->product_items) {
    list_ForEach(product_itemsListEntry, send_product_request_all_of_action_sections->product_items) {
    cJSON *itemLocal = send_product_request_all_of_action_product_items_convertToJSON(product_itemsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(product_items, itemLocal);
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

send_product_request_all_of_action_sections_t *send_product_request_all_of_action_sections_parseFromJSON(cJSON *send_product_request_all_of_action_sectionsJSON){

    send_product_request_all_of_action_sections_t *send_product_request_all_of_action_sections_local_var = NULL;

    // define the local list for send_product_request_all_of_action_sections->product_items
    list_t *product_itemsList = NULL;

    // send_product_request_all_of_action_sections->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(send_product_request_all_of_action_sectionsJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // send_product_request_all_of_action_sections->product_items
    cJSON *product_items = cJSON_GetObjectItemCaseSensitive(send_product_request_all_of_action_sectionsJSON, "product_items");
    if (product_items) { 
    cJSON *product_items_local_nonprimitive = NULL;
    if(!cJSON_IsArray(product_items)){
        goto end; //nonprimitive container
    }

    product_itemsList = list_createList();

    cJSON_ArrayForEach(product_items_local_nonprimitive,product_items )
    {
        if(!cJSON_IsObject(product_items_local_nonprimitive)){
            goto end;
        }
        send_product_request_all_of_action_product_items_t *product_itemsItem = send_product_request_all_of_action_product_items_parseFromJSON(product_items_local_nonprimitive);

        list_addElement(product_itemsList, product_itemsItem);
    }
    }


    send_product_request_all_of_action_sections_local_var = send_product_request_all_of_action_sections_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        product_items ? product_itemsList : NULL
        );

    return send_product_request_all_of_action_sections_local_var;
end:
    if (product_itemsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, product_itemsList) {
            send_product_request_all_of_action_product_items_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(product_itemsList);
        product_itemsList = NULL;
    }
    return NULL;

}
