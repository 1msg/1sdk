# ChannelAPI

All URIs are relative to *https://api.1msg.io/YOUR_INSTANCE_NUMBER*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ChannelAPI_getCommerce**](ChannelAPI.md#ChannelAPI_getCommerce) | **GET** /commerce | Get Commerce Settings
[**ChannelAPI_getExtendedStatistics**](ChannelAPI.md#ChannelAPI_getExtendedStatistics) | **GET** /extendedStatistics | Get Extended Channel statistics
[**ChannelAPI_getMe**](ChannelAPI.md#ChannelAPI_getMe) | **GET** /me | Get Profile Info
[**ChannelAPI_getSettings**](ChannelAPI.md#ChannelAPI_getSettings) | **GET** /settings | Get Settings
[**ChannelAPI_getStatistics**](ChannelAPI.md#ChannelAPI_getStatistics) | **GET** /statistics | Get Channel statistics
[**ChannelAPI_getStatus**](ChannelAPI.md#ChannelAPI_getStatus) | **GET** /status |  Get Status
[**ChannelAPI_outputIP**](ChannelAPI.md#ChannelAPI_outputIP) | **GET** /outputIP | Get channel server IP
[**ChannelAPI_setMe**](ChannelAPI.md#ChannelAPI_setMe) | **POST** /me | Change user info
[**ChannelAPI_setSettings**](ChannelAPI.md#ChannelAPI_setSettings) | **POST** /settings | Set settings


# **ChannelAPI_getCommerce**
```c
// Get Commerce Settings
//
// **is_catalog_visible** - Set to true to show catalog storefront icon or false to hide it. **is_cart_enabled** - Set to true to enable cart or false to disable it.
//
get_commerce_t* ChannelAPI_getCommerce(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[get_commerce_t](get_commerce.md) *


### Authorization

[token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ChannelAPI_getExtendedStatistics**
```c
// Get Extended Channel statistics
//
// Get channel usage extended statistics
//
channel_extended_statistics_t* ChannelAPI_getExtendedStatistics(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[channel_extended_statistics_t](channel_extended_statistics.md) *


### Authorization

[token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ChannelAPI_getMe**
```c
// Get Profile Info
//
// Use this edge to retrieve your profile's About info
//
get_me_t* ChannelAPI_getMe(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[get_me_t](get_me.md) *


### Authorization

[token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ChannelAPI_getSettings**
```c
// Get Settings
//
// **webhookUrl** - Http or https URL for receiving notifications.
//
settings_t* ChannelAPI_getSettings(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[settings_t](settings.md) *


### Authorization

[token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ChannelAPI_getStatistics**
```c
// Get Channel statistics
//
// Get channel usage statistics
//
channel_statistics_t* ChannelAPI_getStatistics(apiClient_t *apiClient, char * date);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**date** | **char \*** | Month and year in format mm.YYYY. | [optional] 

### Return type

[channel_statistics_t](channel_statistics.md) *


### Authorization

[token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ChannelAPI_getStatus**
```c
//  Get Status
//
// Returns the status of your WhatsApp Business API client. Channel statuses:  **connected**/**connecting** - everything is ok.  **disconnected** - The Coreapp is not connected to the WhatsApp servers.  **uninitialized** - The application could be in the process of upgrading or initializing the database schema. Try again in a few minutes and contact Support if you continue to see this status.  **unregistered** - You need to register your WhatsApp Business API client. Either you have been blocked and need to take some action (contact Support)
//
channel_status_t* ChannelAPI_getStatus(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[channel_status_t](channel_status.md) *


### Authorization

[token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ChannelAPI_outputIP**
```c
// Get channel server IP
//
// 
//
get_ip_t* ChannelAPI_outputIP(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[get_ip_t](get_ip.md) *


### Authorization

[token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ChannelAPI_setMe**
```c
// Change user info
//
// Change user info
//
set_me_t* ChannelAPI_setMe(apiClient_t *apiClient, set_me_request_t * set_me_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**set_me_request** | **[set_me_request_t](set_me_request.md) \*** |  | 

### Return type

[set_me_t](set_me.md) *


### Authorization

[token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/x-www-form-urlencoded, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ChannelAPI_setSettings**
```c
// Set settings
//
// **webhookUrl** - Http or https URL for receiving notifications.
//
set_settings_200_response_t* ChannelAPI_setSettings(apiClient_t *apiClient, settings_t * settings);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**settings** | **[settings_t](settings.md) \*** |  | 

### Return type

[set_settings_200_response_t](set_settings_200_response.md) *


### Authorization

[token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

