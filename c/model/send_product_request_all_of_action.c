#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "send_product_request_all_of_action.h"



send_product_request_all_of_action_t *send_product_request_all_of_action_create(
    char *catalog_id,
    char *product_retailer_id,
    list_t *sections
    ) {
    send_product_request_all_of_action_t *send_product_request_all_of_action_local_var = malloc(sizeof(send_product_request_all_of_action_t));
    if (!send_product_request_all_of_action_local_var) {
        return NULL;
    }
    send_product_request_all_of_action_local_var->catalog_id = catalog_id;
    send_product_request_all_of_action_local_var->product_retailer_id = product_retailer_id;
    send_product_request_all_of_action_local_var->sections = sections;

    return send_product_request_all_of_action_local_var;
}


void send_product_request_all_of_action_free(send_product_request_all_of_action_t *send_product_request_all_of_action) {
    if(NULL == send_product_request_all_of_action){
        return ;
    }
    listEntry_t *listEntry;
    if (send_product_request_all_of_action->catalog_id) {
        free(send_product_request_all_of_action->catalog_id);
        send_product_request_all_of_action->catalog_id = NULL;
    }
    if (send_product_request_all_of_action->product_retailer_id) {
        free(send_product_request_all_of_action->product_retailer_id);
        send_product_request_all_of_action->product_retailer_id = NULL;
    }
    if (send_product_request_all_of_action->sections) {
        list_ForEach(listEntry, send_product_request_all_of_action->sections) {
            send_product_request_all_of_action_sections_free(listEntry->data);
        }
        list_freeList(send_product_request_all_of_action->sections);
        send_product_request_all_of_action->sections = NULL;
    }
    free(send_product_request_all_of_action);
}

cJSON *send_product_request_all_of_action_convertToJSON(send_product_request_all_of_action_t *send_product_request_all_of_action) {
    cJSON *item = cJSON_CreateObject();

    // send_product_request_all_of_action->catalog_id
    if(send_product_request_all_of_action->catalog_id) {
    if(cJSON_AddStringToObject(item, "catalog_id", send_product_request_all_of_action->catalog_id) == NULL) {
    goto fail; //String
    }
    }


    // send_product_request_all_of_action->product_retailer_id
    if(send_product_request_all_of_action->product_retailer_id) {
    if(cJSON_AddStringToObject(item, "product_retailer_id", send_product_request_all_of_action->product_retailer_id) == NULL) {
    goto fail; //String
    }
    }


    // send_product_request_all_of_action->sections
    if(send_product_request_all_of_action->sections) {
    cJSON *sections = cJSON_AddArrayToObject(item, "sections");
    if(sections == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *sectionsListEntry;
    if (send_product_request_all_of_action->sections) {
    list_ForEach(sectionsListEntry, send_product_request_all_of_action->sections) {
    cJSON *itemLocal = send_product_request_all_of_action_sections_convertToJSON(sectionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(sections, itemLocal);
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

send_product_request_all_of_action_t *send_product_request_all_of_action_parseFromJSON(cJSON *send_product_request_all_of_actionJSON){

    send_product_request_all_of_action_t *send_product_request_all_of_action_local_var = NULL;

    // define the local list for send_product_request_all_of_action->sections
    list_t *sectionsList = NULL;

    // send_product_request_all_of_action->catalog_id
    cJSON *catalog_id = cJSON_GetObjectItemCaseSensitive(send_product_request_all_of_actionJSON, "catalog_id");
    if (catalog_id) { 
    if(!cJSON_IsString(catalog_id) && !cJSON_IsNull(catalog_id))
    {
    goto end; //String
    }
    }

    // send_product_request_all_of_action->product_retailer_id
    cJSON *product_retailer_id = cJSON_GetObjectItemCaseSensitive(send_product_request_all_of_actionJSON, "product_retailer_id");
    if (product_retailer_id) { 
    if(!cJSON_IsString(product_retailer_id) && !cJSON_IsNull(product_retailer_id))
    {
    goto end; //String
    }
    }

    // send_product_request_all_of_action->sections
    cJSON *sections = cJSON_GetObjectItemCaseSensitive(send_product_request_all_of_actionJSON, "sections");
    if (sections) { 
    cJSON *sections_local_nonprimitive = NULL;
    if(!cJSON_IsArray(sections)){
        goto end; //nonprimitive container
    }

    sectionsList = list_createList();

    cJSON_ArrayForEach(sections_local_nonprimitive,sections )
    {
        if(!cJSON_IsObject(sections_local_nonprimitive)){
            goto end;
        }
        send_product_request_all_of_action_sections_t *sectionsItem = send_product_request_all_of_action_sections_parseFromJSON(sections_local_nonprimitive);

        list_addElement(sectionsList, sectionsItem);
    }
    }


    send_product_request_all_of_action_local_var = send_product_request_all_of_action_create (
        catalog_id && !cJSON_IsNull(catalog_id) ? strdup(catalog_id->valuestring) : NULL,
        product_retailer_id && !cJSON_IsNull(product_retailer_id) ? strdup(product_retailer_id->valuestring) : NULL,
        sections ? sectionsList : NULL
        );

    return send_product_request_all_of_action_local_var;
end:
    if (sectionsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, sectionsList) {
            send_product_request_all_of_action_sections_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(sectionsList);
        sectionsList = NULL;
    }
    return NULL;

}
