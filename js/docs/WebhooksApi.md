# OneMsgWabaSdk.WebhooksApi

All URIs are relative to *https://api.1msg.io/123*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ackHookInfo**](WebhooksApi.md#ackHookInfo) | **GET** /hookInfo | Check ACKs
[**setWebhook**](WebhooksApi.md#setWebhook) | **POST** /webhook | Set webhook



## ackHookInfo

> GetAckInfo ackHookInfo(messageId)

Check ACKs



### Example

```javascript
import OneMsgWabaSdk from 'one_msg_waba_sdk';
let defaultClient = OneMsgWabaSdk.ApiClient.instance;
// Configure API key authorization: token
let token = defaultClient.authentications['token'];
token.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//token.apiKeyPrefix = 'Token';

let apiInstance = new OneMsgWabaSdk.WebhooksApi();
let messageId = 0XzkmGNn4prUAQlzsHApGNRXQ0U; // String | Message ID. Example: 0XzkmGNn4prUAQlzsHApGNRXQ0U
apiInstance.ackHookInfo(messageId).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **messageId** | **String**| Message ID. Example: 0XzkmGNn4prUAQlzsHApGNRXQ0U | 

### Return type

[**GetAckInfo**](GetAckInfo.md)

### Authorization

[token](../README.md#token)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## setWebhook

> SetWebhookStatus setWebhook(webhookUrl)

Set webhook

Sets the URL for receiving webhook notifications of new messages and message delivery events (ack).  **API responses in \&quot;Callbacks\&quot; tab**

### Example

```javascript
import OneMsgWabaSdk from 'one_msg_waba_sdk';
let defaultClient = OneMsgWabaSdk.ApiClient.instance;
// Configure API key authorization: token
let token = defaultClient.authentications['token'];
token.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//token.apiKeyPrefix = 'Token';

let apiInstance = new OneMsgWabaSdk.WebhooksApi();
let webhookUrl = new OneMsgWabaSdk.WebhookUrl(); // WebhookUrl | 
apiInstance.setWebhook(webhookUrl).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **webhookUrl** | [**WebhookUrl**](WebhookUrl.md)|  | 

### Return type

[**SetWebhookStatus**](SetWebhookStatus.md)

### Authorization

[token](../README.md#token)

### HTTP request headers

- **Content-Type**: application/x-www-form-urlencoded, application/json
- **Accept**: application/json

