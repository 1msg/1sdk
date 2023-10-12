/*
 * send_product_request_all_of_action.h
 *
 * Object containing info about product or catalog. Can contain the following fields:  **catalog_id** - id of catalog  **product_retailer_id** - id of product. Only for sending single product.  **sections** - used for sending multiply products. It&#x60;s array containing objects with catalog info. See example below.  Example: {\&quot;catalog_id\&quot;:\&quot;{{catalog_id}}\&quot;,\&quot;sections\&quot;:[{\&quot;title\&quot;:\&quot;the-section-title\&quot;,\&quot;product_items\&quot;:[{\&quot;product_retailer_id\&quot;:\&quot;{{SKU-1}}\&quot;},{\&quot;product_retailer_id\&quot;:\&quot;{{SKU-2}}\&quot;}]},{\&quot;title\&quot;:\&quot;the-section-title2\&quot;,\&quot;product_items\&quot;:[{\&quot;product_retailer_id\&quot;:\&quot;{{SKU-1}}\&quot;}]}]}
 */

#ifndef _send_product_request_all_of_action_H_
#define _send_product_request_all_of_action_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct send_product_request_all_of_action_t send_product_request_all_of_action_t;

#include "send_product_request_all_of_action_sections.h"



typedef struct send_product_request_all_of_action_t {
    char *catalog_id; // string
    char *product_retailer_id; // string
    list_t *sections; //nonprimitive container

} send_product_request_all_of_action_t;

send_product_request_all_of_action_t *send_product_request_all_of_action_create(
    char *catalog_id,
    char *product_retailer_id,
    list_t *sections
);

void send_product_request_all_of_action_free(send_product_request_all_of_action_t *send_product_request_all_of_action);

send_product_request_all_of_action_t *send_product_request_all_of_action_parseFromJSON(cJSON *send_product_request_all_of_actionJSON);

cJSON *send_product_request_all_of_action_convertToJSON(send_product_request_all_of_action_t *send_product_request_all_of_action);

#endif /* _send_product_request_all_of_action_H_ */

