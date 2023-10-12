/*
 * send_product_request_all_of_action_product_items.h
 *
 * 
 */

#ifndef _send_product_request_all_of_action_product_items_H_
#define _send_product_request_all_of_action_product_items_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct send_product_request_all_of_action_product_items_t send_product_request_all_of_action_product_items_t;




typedef struct send_product_request_all_of_action_product_items_t {
    char *product_retailer_id; // string

} send_product_request_all_of_action_product_items_t;

send_product_request_all_of_action_product_items_t *send_product_request_all_of_action_product_items_create(
    char *product_retailer_id
);

void send_product_request_all_of_action_product_items_free(send_product_request_all_of_action_product_items_t *send_product_request_all_of_action_product_items);

send_product_request_all_of_action_product_items_t *send_product_request_all_of_action_product_items_parseFromJSON(cJSON *send_product_request_all_of_action_product_itemsJSON);

cJSON *send_product_request_all_of_action_product_items_convertToJSON(send_product_request_all_of_action_product_items_t *send_product_request_all_of_action_product_items);

#endif /* _send_product_request_all_of_action_product_items_H_ */

