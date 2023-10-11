# OneMsgWabaSdk.MessagingApi

All URIs are relative to *https://api.1msg.io/123*

Method | HTTP request | Description
------------- | ------------- | -------------
[**messagesList**](MessagingApi.md#messagesList) | **GET** /messages | Get messages list
[**readMessage**](MessagingApi.md#readMessage) | **POST** /readMessage | Mark message as read
[**sendContact**](MessagingApi.md#sendContact) | **POST** /sendContact | Send a Contact
[**sendFile**](MessagingApi.md#sendFile) | **POST** /sendFile | Send a File
[**sendList**](MessagingApi.md#sendList) | **POST** /sendList | Send List Message
[**sendLocation**](MessagingApi.md#sendLocation) | **POST** /sendLocation | Send a Location
[**sendMessage**](MessagingApi.md#sendMessage) | **POST** /sendMessage | Send a Message



## messagesList

> GetMessages messagesList(opts)

Get messages list



### Example

```javascript
import OneMsgWabaSdk from 'one_msg_waba_sdk';
let defaultClient = OneMsgWabaSdk.ApiClient.instance;
// Configure API key authorization: token
let token = defaultClient.authentications['token'];
token.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//token.apiKeyPrefix = 'Token';

let apiInstance = new OneMsgWabaSdk.MessagingApi();
let opts = {
  'last': true, // Boolean | Displays the last messages. If this parameter is passed, then lastMessageNumber is ignored.
  'lastMessageNumber': 100, // Number | The lastMessageNumber parameter from the last response. Example: 100
  'firstMessageNumber': 1, // Number | The firstMessageNumber parameter from the last response. Example: 1
  'limit': 200, // Number | Sets length of the message list. Default 100. With value 0 returns all messages.
  'chatId': 556123122026@c.us, // String | Filter messages by chatId  Chat ID from the message list. Example: 556123122026@c.us
  'minTime': 1665396610, // Number | Filter messages received after specified time. Example: 1665396610
  'maxTime': 1665396610, // Number | Filter messages received before specified time. Example: 1665396610
  'msgId': 0XzkmGNn4prUAQlzsHApGNRXQ0U // String | Message ID. Example: 0XzkmGNn4prUAQlzsHApGNRXQ0U
};
apiInstance.messagesList(opts).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **last** | **Boolean**| Displays the last messages. If this parameter is passed, then lastMessageNumber is ignored. | [optional] 
 **lastMessageNumber** | **Number**| The lastMessageNumber parameter from the last response. Example: 100 | [optional] 
 **firstMessageNumber** | **Number**| The firstMessageNumber parameter from the last response. Example: 1 | [optional] 
 **limit** | **Number**| Sets length of the message list. Default 100. With value 0 returns all messages. | [optional] 
 **chatId** | **String**| Filter messages by chatId  Chat ID from the message list. Example: 556123122026@c.us | [optional] 
 **minTime** | **Number**| Filter messages received after specified time. Example: 1665396610 | [optional] 
 **maxTime** | **Number**| Filter messages received before specified time. Example: 1665396610 | [optional] 
 **msgId** | **String**| Message ID. Example: 0XzkmGNn4prUAQlzsHApGNRXQ0U | [optional] 

### Return type

[**GetMessages**](GetMessages.md)

### Authorization

[token](../README.md#token)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## readMessage

> SetMe readMessage(opts)

Mark message as read



### Example

```javascript
import OneMsgWabaSdk from 'one_msg_waba_sdk';
let defaultClient = OneMsgWabaSdk.ApiClient.instance;
// Configure API key authorization: token
let token = defaultClient.authentications['token'];
token.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//token.apiKeyPrefix = 'Token';

let apiInstance = new OneMsgWabaSdk.MessagingApi();
let opts = {
  'readMessageRequest': new OneMsgWabaSdk.ReadMessageRequest() // ReadMessageRequest | 
};
apiInstance.readMessage(opts).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **readMessageRequest** | [**ReadMessageRequest**](ReadMessageRequest.md)|  | [optional] 

### Return type

[**SetMe**](SetMe.md)

### Authorization

[token](../README.md#token)

### HTTP request headers

- **Content-Type**: application/x-www-form-urlencoded, application/json
- **Accept**: application/json


## sendContact

> SendMessageStatus sendContact(sendContactRequest)

Send a Contact

Send a contact to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.

### Example

```javascript
import OneMsgWabaSdk from 'one_msg_waba_sdk';
let defaultClient = OneMsgWabaSdk.ApiClient.instance;
// Configure API key authorization: token
let token = defaultClient.authentications['token'];
token.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//token.apiKeyPrefix = 'Token';

let apiInstance = new OneMsgWabaSdk.MessagingApi();
let sendContactRequest = new OneMsgWabaSdk.SendContactRequest(); // SendContactRequest | 
apiInstance.sendContact(sendContactRequest).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **sendContactRequest** | [**SendContactRequest**](SendContactRequest.md)|  | 

### Return type

[**SendMessageStatus**](SendMessageStatus.md)

### Authorization

[token](../README.md#token)

### HTTP request headers

- **Content-Type**: application/x-www-form-urlencoded, application/json
- **Accept**: application/json


## sendFile

> SendMessageStatus sendFile(sendFileRequest)

Send a File

Send a file to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.

### Example

```javascript
import OneMsgWabaSdk from 'one_msg_waba_sdk';
let defaultClient = OneMsgWabaSdk.ApiClient.instance;
// Configure API key authorization: token
let token = defaultClient.authentications['token'];
token.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//token.apiKeyPrefix = 'Token';

let apiInstance = new OneMsgWabaSdk.MessagingApi();
let sendFileRequest = new OneMsgWabaSdk.SendFileRequest(); // SendFileRequest | 
apiInstance.sendFile(sendFileRequest).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **sendFileRequest** | [**SendFileRequest**](SendFileRequest.md)|  | 

### Return type

[**SendMessageStatus**](SendMessageStatus.md)

### Authorization

[token](../README.md#token)

### HTTP request headers

- **Content-Type**: application/x-www-form-urlencoded, application/json
- **Accept**: application/json


## sendList

> SendMessageStatus sendList(sendListRequest)

Send List Message

Send Interactive List Message to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.

### Example

```javascript
import OneMsgWabaSdk from 'one_msg_waba_sdk';
let defaultClient = OneMsgWabaSdk.ApiClient.instance;
// Configure API key authorization: token
let token = defaultClient.authentications['token'];
token.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//token.apiKeyPrefix = 'Token';

let apiInstance = new OneMsgWabaSdk.MessagingApi();
let sendListRequest = new OneMsgWabaSdk.SendListRequest(); // SendListRequest | 
apiInstance.sendList(sendListRequest).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **sendListRequest** | [**SendListRequest**](SendListRequest.md)|  | 

### Return type

[**SendMessageStatus**](SendMessageStatus.md)

### Authorization

[token](../README.md#token)

### HTTP request headers

- **Content-Type**: application/x-www-form-urlencoded, application/json
- **Accept**: application/json


## sendLocation

> SendMessageStatus sendLocation(sendLocationRequest)

Send a Location

Send a location to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.

### Example

```javascript
import OneMsgWabaSdk from 'one_msg_waba_sdk';
let defaultClient = OneMsgWabaSdk.ApiClient.instance;
// Configure API key authorization: token
let token = defaultClient.authentications['token'];
token.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//token.apiKeyPrefix = 'Token';

let apiInstance = new OneMsgWabaSdk.MessagingApi();
let sendLocationRequest = new OneMsgWabaSdk.SendLocationRequest(); // SendLocationRequest | 
apiInstance.sendLocation(sendLocationRequest).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **sendLocationRequest** | [**SendLocationRequest**](SendLocationRequest.md)|  | 

### Return type

[**SendMessageStatus**](SendMessageStatus.md)

### Authorization

[token](../README.md#token)

### HTTP request headers

- **Content-Type**: application/x-www-form-urlencoded, application/json
- **Accept**: application/json


## sendMessage

> SendMessageStatus sendMessage(sendMessageRequest)

Send a Message

Send a message to an existing chat. (Only if the dialogue has an Open Session). The message will be added to the queue for sending and delivered even if the phone is disconnected from the Internet or authorization is not passed.  Only one of two parameters is needed to determine the destination - chatId or phone.

### Example

```javascript
import OneMsgWabaSdk from 'one_msg_waba_sdk';
let defaultClient = OneMsgWabaSdk.ApiClient.instance;
// Configure API key authorization: token
let token = defaultClient.authentications['token'];
token.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//token.apiKeyPrefix = 'Token';

let apiInstance = new OneMsgWabaSdk.MessagingApi();
let sendMessageRequest = new OneMsgWabaSdk.SendMessageRequest(); // SendMessageRequest | 
apiInstance.sendMessage(sendMessageRequest).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **sendMessageRequest** | [**SendMessageRequest**](SendMessageRequest.md)|  | 

### Return type

[**SendMessageStatus**](SendMessageStatus.md)

### Authorization

[token](../README.md#token)

### HTTP request headers

- **Content-Type**: application/x-www-form-urlencoded, application/json
- **Accept**: application/json

