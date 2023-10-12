# MessagingAPI

All URIs are relative to *https://api.1msg.io/YOUR_INSTANCE_NUMBER*

Method | HTTP request | Description
------------- | ------------- | -------------
[**MessagingAPI_messagesList**](MessagingAPI.md#MessagingAPI_messagesList) | **GET** /messages | Get messages list
[**MessagingAPI_readMessage**](MessagingAPI.md#MessagingAPI_readMessage) | **POST** /readMessage | Mark message as read
[**MessagingAPI_sendContact**](MessagingAPI.md#MessagingAPI_sendContact) | **POST** /sendContact | Send a Contact
[**MessagingAPI_sendFile**](MessagingAPI.md#MessagingAPI_sendFile) | **POST** /sendFile | Send a File
[**MessagingAPI_sendList**](MessagingAPI.md#MessagingAPI_sendList) | **POST** /sendList | Send List Message
[**MessagingAPI_sendLocation**](MessagingAPI.md#MessagingAPI_sendLocation) | **POST** /sendLocation | Send a Location
[**MessagingAPI_sendMessage**](MessagingAPI.md#MessagingAPI_sendMessage) | **POST** /sendMessage | Send a Message


# **MessagingAPI_messagesList**
```c
// Get messages list
//
// 
//
get_messages_t* MessagingAPI_messagesList(apiClient_t *apiClient, int last, int lastMessageNumber, int firstMessageNumber, int limit, char * chatId, int min_time, int max_time, char * msgId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**last** | **int** | Displays the last messages. If this parameter is passed, then lastMessageNumber is ignored. | [optional] 
**lastMessageNumber** | **int** | The lastMessageNumber parameter from the last response. Example: 100 | [optional] 
**firstMessageNumber** | **int** | The firstMessageNumber parameter from the last response. Example: 1 | [optional] 
**limit** | **int** | Sets length of the message list. Default 100. With value 0 returns all messages. | [optional] 
**chatId** | **char \*** | Filter messages by chatId  Chat ID from the message list. Example: 556123122026@c.us | [optional] 
**min_time** | **int** | Filter messages received after specified time. Example: 1665396610 | [optional] 
**max_time** | **int** | Filter messages received before specified time. Example: 1665396610 | [optional] 
**msgId** | **char \*** | Message ID. Example: 0XzkmGNn4prUAQlzsHApGNRXQ0U | [optional] 

### Return type

[get_messages_t](get_messages.md) *


### Authorization

[token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MessagingAPI_readMessage**
```c
// Mark message as read
//
// 
//
set_me_t* MessagingAPI_readMessage(apiClient_t *apiClient, read_message_request_t * read_message_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**read_message_request** | **[read_message_request_t](read_message_request.md) \*** |  | [optional] 

### Return type

[set_me_t](set_me.md) *


### Authorization

[token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/x-www-form-urlencoded, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MessagingAPI_sendContact**
```c
// Send a Contact
//
// Send a contact to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.
//
send_message_status_t* MessagingAPI_sendContact(apiClient_t *apiClient, send_contact_request_t * send_contact_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**send_contact_request** | **[send_contact_request_t](send_contact_request.md) \*** |  | 

### Return type

[send_message_status_t](send_message_status.md) *


### Authorization

[token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/x-www-form-urlencoded, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MessagingAPI_sendFile**
```c
// Send a File
//
// Send a file to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.
//
send_message_status_t* MessagingAPI_sendFile(apiClient_t *apiClient, send_file_request_t * send_file_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**send_file_request** | **[send_file_request_t](send_file_request.md) \*** |  | 

### Return type

[send_message_status_t](send_message_status.md) *


### Authorization

[token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/x-www-form-urlencoded, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MessagingAPI_sendList**
```c
// Send List Message
//
// Send Interactive List Message to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.
//
send_message_status_t* MessagingAPI_sendList(apiClient_t *apiClient, send_list_request_t * send_list_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**send_list_request** | **[send_list_request_t](send_list_request.md) \*** |  | 

### Return type

[send_message_status_t](send_message_status.md) *


### Authorization

[token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/x-www-form-urlencoded, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MessagingAPI_sendLocation**
```c
// Send a Location
//
// Send a location to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.
//
send_message_status_t* MessagingAPI_sendLocation(apiClient_t *apiClient, send_location_request_t * send_location_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**send_location_request** | **[send_location_request_t](send_location_request.md) \*** |  | 

### Return type

[send_message_status_t](send_message_status.md) *


### Authorization

[token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/x-www-form-urlencoded, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MessagingAPI_sendMessage**
```c
// Send a Message
//
// Send a message to an existing chat. (Only if the dialogue has an Open Session). The message will be added to the queue for sending and delivered even if the phone is disconnected from the Internet or authorization is not passed.  Only one of two parameters is needed to determine the destination - chatId or phone.
//
send_message_status_t* MessagingAPI_sendMessage(apiClient_t *apiClient, send_message_request_t * send_message_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**send_message_request** | **[send_message_request_t](send_message_request.md) \*** |  | 

### Return type

[send_message_status_t](send_message_status.md) *


### Authorization

[token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/x-www-form-urlencoded, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

