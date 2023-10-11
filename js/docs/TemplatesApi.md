# OneMsgWabaSdk.TemplatesApi

All URIs are relative to *https://api.1msg.io/123*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addTemplate**](TemplatesApi.md#addTemplate) | **POST** /addTemplate | Create template
[**removeTemplate**](TemplatesApi.md#removeTemplate) | **POST** /removeTemplate | Remove template
[**sendTemplate**](TemplatesApi.md#sendTemplate) | **POST** /sendTemplate | Send Template Message
[**templatesList**](TemplatesApi.md#templatesList) | **GET** /templates | Get templates list



## addTemplate

> Object addTemplate(addTemplateRequest)

Create template

Create new template for sending.

### Example

```javascript
import OneMsgWabaSdk from 'one_msg_waba_sdk';
let defaultClient = OneMsgWabaSdk.ApiClient.instance;
// Configure API key authorization: token
let token = defaultClient.authentications['token'];
token.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//token.apiKeyPrefix = 'Token';

let apiInstance = new OneMsgWabaSdk.TemplatesApi();
let addTemplateRequest = new OneMsgWabaSdk.AddTemplateRequest(); // AddTemplateRequest | 
apiInstance.addTemplate(addTemplateRequest).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **addTemplateRequest** | [**AddTemplateRequest**](AddTemplateRequest.md)|  | 

### Return type

**Object**

### Authorization

[token](../README.md#token)

### HTTP request headers

- **Content-Type**: application/x-www-form-urlencoded, application/json
- **Accept**: application/json


## removeTemplate

> SetMe removeTemplate(removeTemplateRequest)

Remove template

Deleted template can not be restored.

### Example

```javascript
import OneMsgWabaSdk from 'one_msg_waba_sdk';
let defaultClient = OneMsgWabaSdk.ApiClient.instance;
// Configure API key authorization: token
let token = defaultClient.authentications['token'];
token.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//token.apiKeyPrefix = 'Token';

let apiInstance = new OneMsgWabaSdk.TemplatesApi();
let removeTemplateRequest = new OneMsgWabaSdk.RemoveTemplateRequest(); // RemoveTemplateRequest | 
apiInstance.removeTemplate(removeTemplateRequest).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **removeTemplateRequest** | [**RemoveTemplateRequest**](RemoveTemplateRequest.md)|  | 

### Return type

[**SetMe**](SetMe.md)

### Authorization

[token](../README.md#token)

### HTTP request headers

- **Content-Type**: application/x-www-form-urlencoded, application/json
- **Accept**: application/json


## sendTemplate

> SendMessageStatus sendTemplate(sendTemplateRequest)

Send Template Message

Send Template Message to a new or existing chat. Only one of two parameters is needed to determine the destination - chatId or phone.  Example:  {\&quot;template\&quot;:\&quot;template_name\&quot;,\&quot;language\&quot;:{\&quot;policy\&quot;:\&quot;deterministic\&quot;,\&quot;code\&quot;:\&quot;en\&quot;},\&quot;namespace\&quot;:\&quot;namespace_id\&quot;,\&quot;params\&quot;:[{\&quot;type\&quot;:\&quot;header\&quot;,\&quot;parameters\&quot;:[{\&quot;type\&quot;:\&quot;image\&quot;,\&quot;image\&quot;: {\&quot;link\&quot;:\&quot;https://...\&quot;}}]},{\&quot;type\&quot;:\&quot;body\&quot;,\&quot;parameters\&quot;:[{\&quot;type\&quot;:\&quot;text\&quot;,\&quot;text\&quot;:\&quot;test\&quot;}]}],\&quot;phone\&quot;:\&quot;556123122026\&quot;}

### Example

```javascript
import OneMsgWabaSdk from 'one_msg_waba_sdk';
let defaultClient = OneMsgWabaSdk.ApiClient.instance;
// Configure API key authorization: token
let token = defaultClient.authentications['token'];
token.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//token.apiKeyPrefix = 'Token';

let apiInstance = new OneMsgWabaSdk.TemplatesApi();
let sendTemplateRequest = new OneMsgWabaSdk.SendTemplateRequest(); // SendTemplateRequest | 
apiInstance.sendTemplate(sendTemplateRequest).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **sendTemplateRequest** | [**SendTemplateRequest**](SendTemplateRequest.md)|  | 

### Return type

[**SendMessageStatus**](SendMessageStatus.md)

### Authorization

[token](../README.md#token)

### HTTP request headers

- **Content-Type**: application/x-www-form-urlencoded, application/json
- **Accept**: application/json


## templatesList

> GetTemplates templatesList()

Get templates list



### Example

```javascript
import OneMsgWabaSdk from 'one_msg_waba_sdk';
let defaultClient = OneMsgWabaSdk.ApiClient.instance;
// Configure API key authorization: token
let token = defaultClient.authentications['token'];
token.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//token.apiKeyPrefix = 'Token';

let apiInstance = new OneMsgWabaSdk.TemplatesApi();
apiInstance.templatesList().then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters

This endpoint does not need any parameter.

### Return type

[**GetTemplates**](GetTemplates.md)

### Authorization

[token](../README.md#token)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

