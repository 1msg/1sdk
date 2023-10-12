#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/get_ack_info.h"
#include "../model/get_me_401_response.h"
#include "../model/set_webhook_status.h"
#include "../model/webhook_url.h"


// Check ACKs
//
// 
//
get_ack_info_t*
WebhooksAPI_ackHookInfo(apiClient_t *apiClient, char * messageId );


// Set webhook
//
// Sets the URL for receiving webhook notifications of new messages and message delivery events (ack).  **API responses in \"Callbacks\" tab**
//
set_webhook_status_t*
WebhooksAPI_setWebhook(apiClient_t *apiClient, webhook_url_t * webhook_url );


