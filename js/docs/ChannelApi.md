# OneMsgWabaSdk.ChannelApi

All URIs are relative to *https://api.1msg.io/123*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getCommerce**](ChannelApi.md#getCommerce) | **GET** /commerce | Get Commerce Settings
[**getExtendedStatistics**](ChannelApi.md#getExtendedStatistics) | **GET** /extendedStatistics | Get Extended Channel statistics
[**getMe**](ChannelApi.md#getMe) | **GET** /me | Get Profile Info
[**getSettings**](ChannelApi.md#getSettings) | **GET** /settings | Get Settings
[**getStatistics**](ChannelApi.md#getStatistics) | **GET** /statistics | Get Channel statistics
[**getStatus**](ChannelApi.md#getStatus) | **GET** /status |  Get Status
[**outputIP**](ChannelApi.md#outputIP) | **GET** /outputIP | Get channel server IP
[**setMe**](ChannelApi.md#setMe) | **POST** /me | Change user info
[**setSettings**](ChannelApi.md#setSettings) | **POST** /settings | Set settings



## getCommerce

> GetCommerce getCommerce()

Get Commerce Settings

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

let apiInstance = new OneMsgWabaSdk.ChannelApi();
apiInstance.getCommerce().then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters

This endpoint does not need any parameter.

### Return type

[**GetCommerce**](GetCommerce.md)

### Authorization

[token](../README.md#token)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getExtendedStatistics

> ChannelExtendedStatistics getExtendedStatistics()

Get Extended Channel statistics

Get channel usage extended statistics

### Example

```javascript
import OneMsgWabaSdk from 'one_msg_waba_sdk';
let defaultClient = OneMsgWabaSdk.ApiClient.instance;
// Configure API key authorization: token
let token = defaultClient.authentications['token'];
token.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//token.apiKeyPrefix = 'Token';

let apiInstance = new OneMsgWabaSdk.ChannelApi();
apiInstance.getExtendedStatistics().then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters

This endpoint does not need any parameter.

### Return type

[**ChannelExtendedStatistics**](ChannelExtendedStatistics.md)

### Authorization

[token](../README.md#token)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getMe

> GetMe getMe()

Get Profile Info

Use this edge to retrieve your profile&#39;s About info

### Example

```javascript
import OneMsgWabaSdk from 'one_msg_waba_sdk';
let defaultClient = OneMsgWabaSdk.ApiClient.instance;
// Configure API key authorization: token
let token = defaultClient.authentications['token'];
token.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//token.apiKeyPrefix = 'Token';

let apiInstance = new OneMsgWabaSdk.ChannelApi();
apiInstance.getMe().then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters

This endpoint does not need any parameter.

### Return type

[**GetMe**](GetMe.md)

### Authorization

[token](../README.md#token)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getSettings

> Settings getSettings()

Get Settings

**webhookUrl** - Http or https URL for receiving notifications.

### Example

```javascript
import OneMsgWabaSdk from 'one_msg_waba_sdk';
let defaultClient = OneMsgWabaSdk.ApiClient.instance;
// Configure API key authorization: token
let token = defaultClient.authentications['token'];
token.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//token.apiKeyPrefix = 'Token';

let apiInstance = new OneMsgWabaSdk.ChannelApi();
apiInstance.getSettings().then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters

This endpoint does not need any parameter.

### Return type

[**Settings**](Settings.md)

### Authorization

[token](../README.md#token)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getStatistics

> ChannelStatistics getStatistics(opts)

Get Channel statistics

Get channel usage statistics

### Example

```javascript
import OneMsgWabaSdk from 'one_msg_waba_sdk';
let defaultClient = OneMsgWabaSdk.ApiClient.instance;
// Configure API key authorization: token
let token = defaultClient.authentications['token'];
token.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//token.apiKeyPrefix = 'Token';

let apiInstance = new OneMsgWabaSdk.ChannelApi();
let opts = {
  'date': 03.2022 // String | Month and year in format mm.YYYY.
};
apiInstance.getStatistics(opts).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **date** | **String**| Month and year in format mm.YYYY. | [optional] 

### Return type

[**ChannelStatistics**](ChannelStatistics.md)

### Authorization

[token](../README.md#token)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getStatus

> ChannelStatus getStatus()

 Get Status

Returns the status of your WhatsApp Business API client. Channel statuses:  **connected**_/_**connecting** - everything is ok.  **disconnected** - The Coreapp is not connected to the WhatsApp servers.  **uninitialized** - The application could be in the process of upgrading or initializing the database schema. Try again in a few minutes and contact Support if you continue to see this status.  **unregistered** - You need to register your WhatsApp Business API client. Either you have been blocked and need to take some action (contact Support)

### Example

```javascript
import OneMsgWabaSdk from 'one_msg_waba_sdk';
let defaultClient = OneMsgWabaSdk.ApiClient.instance;
// Configure API key authorization: token
let token = defaultClient.authentications['token'];
token.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//token.apiKeyPrefix = 'Token';

let apiInstance = new OneMsgWabaSdk.ChannelApi();
apiInstance.getStatus().then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters

This endpoint does not need any parameter.

### Return type

[**ChannelStatus**](ChannelStatus.md)

### Authorization

[token](../README.md#token)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## outputIP

> GetIP outputIP()

Get channel server IP



### Example

```javascript
import OneMsgWabaSdk from 'one_msg_waba_sdk';
let defaultClient = OneMsgWabaSdk.ApiClient.instance;
// Configure API key authorization: token
let token = defaultClient.authentications['token'];
token.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//token.apiKeyPrefix = 'Token';

let apiInstance = new OneMsgWabaSdk.ChannelApi();
apiInstance.outputIP().then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters

This endpoint does not need any parameter.

### Return type

[**GetIP**](GetIP.md)

### Authorization

[token](../README.md#token)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## setMe

> SetMe setMe(setMeRequest)

Change user info

Change user info

### Example

```javascript
import OneMsgWabaSdk from 'one_msg_waba_sdk';
let defaultClient = OneMsgWabaSdk.ApiClient.instance;
// Configure API key authorization: token
let token = defaultClient.authentications['token'];
token.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//token.apiKeyPrefix = 'Token';

let apiInstance = new OneMsgWabaSdk.ChannelApi();
let setMeRequest = new OneMsgWabaSdk.SetMeRequest(); // SetMeRequest | 
apiInstance.setMe(setMeRequest).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **setMeRequest** | [**SetMeRequest**](SetMeRequest.md)|  | 

### Return type

[**SetMe**](SetMe.md)

### Authorization

[token](../README.md#token)

### HTTP request headers

- **Content-Type**: application/x-www-form-urlencoded, application/json
- **Accept**: application/json


## setSettings

> SetSettings200Response setSettings(settings)

Set settings

**webhookUrl** - Http or https URL for receiving notifications.

### Example

```javascript
import OneMsgWabaSdk from 'one_msg_waba_sdk';
let defaultClient = OneMsgWabaSdk.ApiClient.instance;
// Configure API key authorization: token
let token = defaultClient.authentications['token'];
token.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//token.apiKeyPrefix = 'Token';

let apiInstance = new OneMsgWabaSdk.ChannelApi();
let settings = new OneMsgWabaSdk.Settings(); // Settings | 
apiInstance.setSettings(settings).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **settings** | [**Settings**](Settings.md)|  | 

### Return type

[**SetSettings200Response**](SetSettings200Response.md)

### Authorization

[token](../README.md#token)

### HTTP request headers

- **Content-Type**: application/json, application/x-www-form-urlencoded
- **Accept**: application/json

