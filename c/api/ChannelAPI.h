#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/channel_extended_statistics.h"
#include "../model/channel_statistics.h"
#include "../model/channel_status.h"
#include "../model/get_commerce.h"
#include "../model/get_ip.h"
#include "../model/get_me.h"
#include "../model/get_me_401_response.h"
#include "../model/set_me.h"
#include "../model/set_me_request.h"
#include "../model/set_settings_200_response.h"
#include "../model/settings.h"


// Get Commerce Settings
//
// **is_catalog_visible** - Set to true to show catalog storefront icon or false to hide it. **is_cart_enabled** - Set to true to enable cart or false to disable it.
//
get_commerce_t*
ChannelAPI_getCommerce(apiClient_t *apiClient);


// Get Extended Channel statistics
//
// Get channel usage extended statistics
//
channel_extended_statistics_t*
ChannelAPI_getExtendedStatistics(apiClient_t *apiClient);


// Get Profile Info
//
// Use this edge to retrieve your profile's About info
//
get_me_t*
ChannelAPI_getMe(apiClient_t *apiClient);


// Get Settings
//
// **webhookUrl** - Http or https URL for receiving notifications.
//
settings_t*
ChannelAPI_getSettings(apiClient_t *apiClient);


// Get Channel statistics
//
// Get channel usage statistics
//
channel_statistics_t*
ChannelAPI_getStatistics(apiClient_t *apiClient, char * date );


//  Get Status
//
// Returns the status of your WhatsApp Business API client. Channel statuses:  **connected**/**connecting** - everything is ok.  **disconnected** - The Coreapp is not connected to the WhatsApp servers.  **uninitialized** - The application could be in the process of upgrading or initializing the database schema. Try again in a few minutes and contact Support if you continue to see this status.  **unregistered** - You need to register your WhatsApp Business API client. Either you have been blocked and need to take some action (contact Support)
//
channel_status_t*
ChannelAPI_getStatus(apiClient_t *apiClient);


// Get channel server IP
//
// 
//
get_ip_t*
ChannelAPI_outputIP(apiClient_t *apiClient);


// Change user info
//
// Change user info
//
set_me_t*
ChannelAPI_setMe(apiClient_t *apiClient, set_me_request_t * set_me_request );


// Set settings
//
// **webhookUrl** - Http or https URL for receiving notifications.
//
set_settings_200_response_t*
ChannelAPI_setSettings(apiClient_t *apiClient, settings_t * settings );


