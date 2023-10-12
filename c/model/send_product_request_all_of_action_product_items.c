#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "send_product_request_all_of_action_product_items.h"



send_product_request_all_of_action_product_items_t *send_product_request_all_of_action_product_items_create(
    char *product_retailer_id
    ) {
    send_product_request_all_of_action_product_items_t *send_product_request_all_of_action_product_items_local_var = malloc(sizeof(send_product_request_all_of_action_product_items_t));
    if (!send_product_request_all_of_action_product_items_local_var) {
        return NULL;
    }
    send_product_request_all_of_action_product_items_local_var->product_retailer_id = product_retailer_id;

    return send_product_request_all_of_action_product_items_local_var;
}


void send_product_request_all_of_action_product_items_free(send_product_request_all_of_action_product_items_t *send_product_request_all_of_action_product_items) {
    if(NULL == send_product_request_all_of_action_product_items){
        return ;
    }
    listEntry_t *listEntry;
    if (send_product_request_all_of_action_product_items->product_retailer_id) {
        free(send_product_request_all_of_action_product_items->product_retailer_id);
        send_product_request_all_of_action_product_items->product_retailer_id = NULL;
    }
    free(send_product_request_all_of_action_product_items);
}

cJSON *send_product_request_all_of_action_product_items_convertToJSON(send_product_request_all_of_action_product_items_t *send_product_request_all_of_action_product_items) {
    cJSON *item = cJSON_CreateObject();

    // send_product_request_all_of_action_product_items->product_retailer_id
    if(send_product_request_all_of_action_product_items->product_retailer_id) {
    if(cJSON_AddStringToObject(item, "product_retailer_id", send_product_request_all_of_action_product_items->product_retailer_id) == NULL) {
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

send_product_request_all_of_action_product_items_t *send_product_request_all_of_action_product_items_parseFromJSON(cJSON *send_product_request_all_of_action_product_itemsJSON){

    send_product_request_all_of_action_product_items_t *send_product_request_all_of_action_product_items_local_var = NULL;

    // send_product_request_all_of_action_product_items->product_retailer_id
    cJSON *product_retailer_id = cJSON_GetObjectItemCaseSensitive(send_product_request_all_of_action_product_itemsJSON, "product_retailer_id");
    if (product_retailer_id) { 
    if(!cJSON_IsString(product_retailer_id) && !cJSON_IsNull(product_retailer_id))
    {
    goto end; //String
    }
    }


    send_product_request_all_of_action_product_items_local_var = send_product_request_all_of_action_product_items_create (
        product_retailer_id && !cJSON_IsNull(product_retailer_id) ? strdup(product_retailer_id->valuestring) : NULL
        );

    return send_product_request_all_of_action_product_items_local_var;
end:
    return NULL;

}
