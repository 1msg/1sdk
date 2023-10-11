# OpenAPI\Client\WebhooksApi

All URIs are relative to https://api.1msg.io/YOUR_INSTANCE_NUMBER, except if the operation defines another base path.

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**ackHookInfo()**](WebhooksApi.md#ackHookInfo) | **GET** /hookInfo | Check ACKs |
| [**setWebhook()**](WebhooksApi.md#setWebhook) | **POST** /webhook | Set webhook |


## `ackHookInfo()`

```php
ackHookInfo($message_id): \OpenAPI\Client\Model\GetAckInfo
```

Check ACKs



### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: token
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('token', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('token', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\WebhooksApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$message_id = 0XzkmGNn4prUAQlzsHApGNRXQ0U; // string | Message ID. Example: 0XzkmGNn4prUAQlzsHApGNRXQ0U

try {
    $result = $apiInstance->ackHookInfo($message_id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling WebhooksApi->ackHookInfo: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **message_id** | **string**| Message ID. Example: 0XzkmGNn4prUAQlzsHApGNRXQ0U | |

### Return type

[**\OpenAPI\Client\Model\GetAckInfo**](../Model/GetAckInfo.md)

### Authorization

[token](../../README.md#token)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `setWebhook()`

```php
setWebhook($webhook_url): \OpenAPI\Client\Model\SetWebhookStatus
```

Set webhook

Sets the URL for receiving webhook notifications of new messages and message delivery events (ack).  **API responses in \"Callbacks\" tab**

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: token
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('token', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('token', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\WebhooksApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$webhook_url = new \OpenAPI\Client\Model\WebhookUrl(); // \OpenAPI\Client\Model\WebhookUrl

try {
    $result = $apiInstance->setWebhook($webhook_url);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling WebhooksApi->setWebhook: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **webhook_url** | [**\OpenAPI\Client\Model\WebhookUrl**](../Model/WebhookUrl.md)|  | |

### Return type

[**\OpenAPI\Client\Model\SetWebhookStatus**](../Model/SetWebhookStatus.md)

### Authorization

[token](../../README.md#token)

### HTTP request headers

- **Content-Type**: `application/x-www-form-urlencoded`, `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
