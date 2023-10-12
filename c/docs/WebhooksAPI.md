# WebhooksAPI

All URIs are relative to *https://api.1msg.io/YOUR_INSTANCE_NUMBER*

Method | HTTP request | Description
------------- | ------------- | -------------
[**WebhooksAPI_ackHookInfo**](WebhooksAPI.md#WebhooksAPI_ackHookInfo) | **GET** /hookInfo | Check ACKs
[**WebhooksAPI_setWebhook**](WebhooksAPI.md#WebhooksAPI_setWebhook) | **POST** /webhook | Set webhook


# **WebhooksAPI_ackHookInfo**
```c
// Check ACKs
//
// 
//
get_ack_info_t* WebhooksAPI_ackHookInfo(apiClient_t *apiClient, char * messageId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**messageId** | **char \*** | Message ID. Example: 0XzkmGNn4prUAQlzsHApGNRXQ0U | 

### Return type

[get_ack_info_t](get_ack_info.md) *


### Authorization

[token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebhooksAPI_setWebhook**
```c
// Set webhook
//
// Sets the URL for receiving webhook notifications of new messages and message delivery events (ack).  **API responses in \"Callbacks\" tab**
//
set_webhook_status_t* WebhooksAPI_setWebhook(apiClient_t *apiClient, webhook_url_t * webhook_url);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**webhook_url** | **[webhook_url_t](webhook_url.md) \*** |  | 

### Return type

[set_webhook_status_t](set_webhook_status.md) *


### Authorization

[token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/x-www-form-urlencoded, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

