# OneMsgWabaSdk.ProductsCatalogsApi

All URIs are relative to *https://api.1msg.io/123*

Method | HTTP request | Description
------------- | ------------- | -------------
[**sendProduct**](ProductsCatalogsApi.md#sendProduct) | **POST** /sendProduct | Send a Product
[**setCommerce**](ProductsCatalogsApi.md#setCommerce) | **POST** /commerce | Set Commerce Settings



## sendProduct

> SendMessageStatus sendProduct(sendProductRequest)

Send a Product

Send a single product or product list to a new or existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.  First, you need to upload your inventory to Facebook. You can use the API or Facebook’s Commerce Manager to do that. If you already have a Facebook catalog set up, we suggest that you leverage that catalog for WhatsApp commerce use cases.  **You can not send products to Business WhatsApp clients.**

### Example

```javascript
import OneMsgWabaSdk from 'one_msg_waba_sdk';
let defaultClient = OneMsgWabaSdk.ApiClient.instance;
// Configure API key authorization: token
let token = defaultClient.authentications['token'];
token.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//token.apiKeyPrefix = 'Token';

let apiInstance = new OneMsgWabaSdk.ProductsCatalogsApi();
let sendProductRequest = new OneMsgWabaSdk.SendProductRequest(); // SendProductRequest | 
apiInstance.sendProduct(sendProductRequest).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **sendProductRequest** | [**SendProductRequest**](SendProductRequest.md)|  | 

### Return type

[**SendMessageStatus**](SendMessageStatus.md)

### Authorization

[token](../README.md#token)

### HTTP request headers

- **Content-Type**: application/x-www-form-urlencoded, application/json
- **Accept**: application/json


## setCommerce

> SetCommerce setCommerce(commerce)

Set Commerce Settings

**is_catalog_visible** - Set to true to show catalog storefront icon or false to hide it. **is_cart_enabled** - Set to true to enable cart or false to disable it.

### Example

```javascript
import OneMsgWabaSdk from 'one_msg_waba_sdk';
let defaultClient = OneMsgWabaSdk.ApiClient.instance;
// Configure API key authorization: token
let token = defaultClient.authentications['token'];
token.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//token.apiKeyPrefix = 'Token';

let apiInstance = new OneMsgWabaSdk.ProductsCatalogsApi();
let commerce = new OneMsgWabaSdk.Commerce(); // Commerce | 
apiInstance.setCommerce(commerce).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **commerce** | [**Commerce**](Commerce.md)|  | 

### Return type

[**SetCommerce**](SetCommerce.md)

### Authorization

[token](../README.md#token)

### HTTP request headers

- **Content-Type**: application/json, application/x-www-form-urlencoded
- **Accept**: application/json

