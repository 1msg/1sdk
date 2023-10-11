# OpenAPI\Client\MessagingApi

All URIs are relative to https://api.1msg.io/YOUR_INSTANCE_NUMBER, except if the operation defines another base path.

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**messagesList()**](MessagingApi.md#messagesList) | **GET** /messages | Get messages list |
| [**readMessage()**](MessagingApi.md#readMessage) | **POST** /readMessage | Mark message as read |
| [**sendContact()**](MessagingApi.md#sendContact) | **POST** /sendContact | Send a Contact |
| [**sendFile()**](MessagingApi.md#sendFile) | **POST** /sendFile | Send a File |
| [**sendList()**](MessagingApi.md#sendList) | **POST** /sendList | Send List Message |
| [**sendLocation()**](MessagingApi.md#sendLocation) | **POST** /sendLocation | Send a Location |
| [**sendMessage()**](MessagingApi.md#sendMessage) | **POST** /sendMessage | Send a Message |


## `messagesList()`

```php
messagesList($last, $last_message_number, $first_message_number, $limit, $chat_id, $min_time, $max_time, $msg_id): \OpenAPI\Client\Model\GetMessages
```

Get messages list



### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: token
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('token', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('token', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\MessagingApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$last = true; // bool | Displays the last messages. If this parameter is passed, then lastMessageNumber is ignored.
$last_message_number = 100; // int | The lastMessageNumber parameter from the last response. Example: 100
$first_message_number = 1; // int | The firstMessageNumber parameter from the last response. Example: 1
$limit = 200; // int | Sets length of the message list. Default 100. With value 0 returns all messages.
$chat_id = 556123122026@c.us; // string | Filter messages by chatId  Chat ID from the message list. Example: 556123122026@c.us
$min_time = 1665396610; // int | Filter messages received after specified time. Example: 1665396610
$max_time = 1665396610; // int | Filter messages received before specified time. Example: 1665396610
$msg_id = 0XzkmGNn4prUAQlzsHApGNRXQ0U; // string | Message ID. Example: 0XzkmGNn4prUAQlzsHApGNRXQ0U

try {
    $result = $apiInstance->messagesList($last, $last_message_number, $first_message_number, $limit, $chat_id, $min_time, $max_time, $msg_id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling MessagingApi->messagesList: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **last** | **bool**| Displays the last messages. If this parameter is passed, then lastMessageNumber is ignored. | [optional] |
| **last_message_number** | **int**| The lastMessageNumber parameter from the last response. Example: 100 | [optional] |
| **first_message_number** | **int**| The firstMessageNumber parameter from the last response. Example: 1 | [optional] |
| **limit** | **int**| Sets length of the message list. Default 100. With value 0 returns all messages. | [optional] |
| **chat_id** | **string**| Filter messages by chatId  Chat ID from the message list. Example: 556123122026@c.us | [optional] |
| **min_time** | **int**| Filter messages received after specified time. Example: 1665396610 | [optional] |
| **max_time** | **int**| Filter messages received before specified time. Example: 1665396610 | [optional] |
| **msg_id** | **string**| Message ID. Example: 0XzkmGNn4prUAQlzsHApGNRXQ0U | [optional] |

### Return type

[**\OpenAPI\Client\Model\GetMessages**](../Model/GetMessages.md)

### Authorization

[token](../../README.md#token)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `readMessage()`

```php
readMessage($read_message_request): \OpenAPI\Client\Model\SetMe
```

Mark message as read



### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: token
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('token', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('token', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\MessagingApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$read_message_request = new \OpenAPI\Client\Model\ReadMessageRequest(); // \OpenAPI\Client\Model\ReadMessageRequest

try {
    $result = $apiInstance->readMessage($read_message_request);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling MessagingApi->readMessage: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **read_message_request** | [**\OpenAPI\Client\Model\ReadMessageRequest**](../Model/ReadMessageRequest.md)|  | [optional] |

### Return type

[**\OpenAPI\Client\Model\SetMe**](../Model/SetMe.md)

### Authorization

[token](../../README.md#token)

### HTTP request headers

- **Content-Type**: `application/x-www-form-urlencoded`, `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `sendContact()`

```php
sendContact($send_contact_request): \OpenAPI\Client\Model\SendMessageStatus
```

Send a Contact

Send a contact to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: token
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('token', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('token', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\MessagingApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$send_contact_request = new \OpenAPI\Client\Model\SendContactRequest(); // \OpenAPI\Client\Model\SendContactRequest

try {
    $result = $apiInstance->sendContact($send_contact_request);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling MessagingApi->sendContact: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **send_contact_request** | [**\OpenAPI\Client\Model\SendContactRequest**](../Model/SendContactRequest.md)|  | |

### Return type

[**\OpenAPI\Client\Model\SendMessageStatus**](../Model/SendMessageStatus.md)

### Authorization

[token](../../README.md#token)

### HTTP request headers

- **Content-Type**: `application/x-www-form-urlencoded`, `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `sendFile()`

```php
sendFile($send_file_request): \OpenAPI\Client\Model\SendMessageStatus
```

Send a File

Send a file to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: token
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('token', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('token', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\MessagingApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$send_file_request = new \OpenAPI\Client\Model\SendFileRequest(); // \OpenAPI\Client\Model\SendFileRequest

try {
    $result = $apiInstance->sendFile($send_file_request);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling MessagingApi->sendFile: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **send_file_request** | [**\OpenAPI\Client\Model\SendFileRequest**](../Model/SendFileRequest.md)|  | |

### Return type

[**\OpenAPI\Client\Model\SendMessageStatus**](../Model/SendMessageStatus.md)

### Authorization

[token](../../README.md#token)

### HTTP request headers

- **Content-Type**: `application/x-www-form-urlencoded`, `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `sendList()`

```php
sendList($send_list_request): \OpenAPI\Client\Model\SendMessageStatus
```

Send List Message

Send Interactive List Message to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: token
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('token', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('token', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\MessagingApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$send_list_request = new \OpenAPI\Client\Model\SendListRequest(); // \OpenAPI\Client\Model\SendListRequest

try {
    $result = $apiInstance->sendList($send_list_request);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling MessagingApi->sendList: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **send_list_request** | [**\OpenAPI\Client\Model\SendListRequest**](../Model/SendListRequest.md)|  | |

### Return type

[**\OpenAPI\Client\Model\SendMessageStatus**](../Model/SendMessageStatus.md)

### Authorization

[token](../../README.md#token)

### HTTP request headers

- **Content-Type**: `application/x-www-form-urlencoded`, `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `sendLocation()`

```php
sendLocation($send_location_request): \OpenAPI\Client\Model\SendMessageStatus
```

Send a Location

Send a location to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: token
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('token', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('token', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\MessagingApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$send_location_request = new \OpenAPI\Client\Model\SendLocationRequest(); // \OpenAPI\Client\Model\SendLocationRequest

try {
    $result = $apiInstance->sendLocation($send_location_request);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling MessagingApi->sendLocation: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **send_location_request** | [**\OpenAPI\Client\Model\SendLocationRequest**](../Model/SendLocationRequest.md)|  | |

### Return type

[**\OpenAPI\Client\Model\SendMessageStatus**](../Model/SendMessageStatus.md)

### Authorization

[token](../../README.md#token)

### HTTP request headers

- **Content-Type**: `application/x-www-form-urlencoded`, `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `sendMessage()`

```php
sendMessage($send_message_request): \OpenAPI\Client\Model\SendMessageStatus
```

Send a Message

Send a message to an existing chat. (Only if the dialogue has an Open Session). The message will be added to the queue for sending and delivered even if the phone is disconnected from the Internet or authorization is not passed.  Only one of two parameters is needed to determine the destination - chatId or phone.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: token
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('token', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('token', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\MessagingApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$send_message_request = new \OpenAPI\Client\Model\SendMessageRequest(); // \OpenAPI\Client\Model\SendMessageRequest

try {
    $result = $apiInstance->sendMessage($send_message_request);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling MessagingApi->sendMessage: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **send_message_request** | [**\OpenAPI\Client\Model\SendMessageRequest**](../Model/SendMessageRequest.md)|  | |

### Return type

[**\OpenAPI\Client\Model\SendMessageStatus**](../Model/SendMessageStatus.md)

### Authorization

[token](../../README.md#token)

### HTTP request headers

- **Content-Type**: `application/x-www-form-urlencoded`, `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
