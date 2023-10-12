#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/commerce.h"
#include "../model/get_me_401_response.h"
#include "../model/send_message_status.h"
#include "../model/send_product_request.h"
#include "../model/set_commerce.h"


// Send a Product
//
// Send a single product or product list to a new or existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.  First, you need to upload your inventory to Facebook. You can use the API or Facebook’s Commerce Manager to do that. If you already have a Facebook catalog set up, we suggest that you leverage that catalog for WhatsApp commerce use cases.  **You can not send products to Business WhatsApp clients.**
//
send_message_status_t*
ProductsCatalogsAPI_sendProduct(apiClient_t *apiClient, send_product_request_t * send_product_request );


// Set Commerce Settings
//
// **is_catalog_visible** - Set to true to show catalog storefront icon or false to hide it. **is_cart_enabled** - Set to true to enable cart or false to disable it.
//
set_commerce_t*
ProductsCatalogsAPI_setCommerce(apiClient_t *apiClient, commerce_t * commerce );


