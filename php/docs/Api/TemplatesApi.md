# OpenAPI\Client\TemplatesApi

All URIs are relative to https://api.1msg.io/YOUR_INSTANCE_NUMBER, except if the operation defines another base path.

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**addTemplate()**](TemplatesApi.md#addTemplate) | **POST** /addTemplate | Create template |
| [**removeTemplate()**](TemplatesApi.md#removeTemplate) | **POST** /removeTemplate | Remove template |
| [**sendTemplate()**](TemplatesApi.md#sendTemplate) | **POST** /sendTemplate | Send Template Message |
| [**templatesList()**](TemplatesApi.md#templatesList) | **GET** /templates | Get templates list |


## `addTemplate()`

```php
addTemplate($add_template_request): object
```

Create template

Create new template for sending.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: token
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('token', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('token', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\TemplatesApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$add_template_request = new \OpenAPI\Client\Model\AddTemplateRequest(); // \OpenAPI\Client\Model\AddTemplateRequest

try {
    $result = $apiInstance->addTemplate($add_template_request);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling TemplatesApi->addTemplate: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **add_template_request** | [**\OpenAPI\Client\Model\AddTemplateRequest**](../Model/AddTemplateRequest.md)|  | |

### Return type

**object**

### Authorization

[token](../../README.md#token)

### HTTP request headers

- **Content-Type**: `application/x-www-form-urlencoded`, `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `removeTemplate()`

```php
removeTemplate($remove_template_request): \OpenAPI\Client\Model\SetMe
```

Remove template

Deleted template can not be restored.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: token
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('token', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('token', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\TemplatesApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$remove_template_request = new \OpenAPI\Client\Model\RemoveTemplateRequest(); // \OpenAPI\Client\Model\RemoveTemplateRequest

try {
    $result = $apiInstance->removeTemplate($remove_template_request);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling TemplatesApi->removeTemplate: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **remove_template_request** | [**\OpenAPI\Client\Model\RemoveTemplateRequest**](../Model/RemoveTemplateRequest.md)|  | |

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

## `sendTemplate()`

```php
sendTemplate($send_template_request): \OpenAPI\Client\Model\SendMessageStatus
```

Send Template Message

Send Template Message to a new or existing chat. Only one of two parameters is needed to determine the destination - chatId or phone.  Example:  {\"template\":\"template_name\",\"language\":{\"policy\":\"deterministic\",\"code\":\"en\"},\"namespace\":\"namespace_id\",\"params\":[{\"type\":\"header\",\"parameters\":[{\"type\":\"image\",\"image\": {\"link\":\"https://...\"}}]},{\"type\":\"body\",\"parameters\":[{\"type\":\"text\",\"text\":\"test\"}]}],\"phone\":\"556123122026\"}

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: token
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('token', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('token', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\TemplatesApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$send_template_request = new \OpenAPI\Client\Model\SendTemplateRequest(); // \OpenAPI\Client\Model\SendTemplateRequest

try {
    $result = $apiInstance->sendTemplate($send_template_request);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling TemplatesApi->sendTemplate: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **send_template_request** | [**\OpenAPI\Client\Model\SendTemplateRequest**](../Model/SendTemplateRequest.md)|  | |

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

## `templatesList()`

```php
templatesList(): \OpenAPI\Client\Model\GetTemplates
```

Get templates list



### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: token
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('token', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('token', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\TemplatesApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->templatesList();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling TemplatesApi->templatesList: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\OpenAPI\Client\Model\GetTemplates**](../Model/GetTemplates.md)

### Authorization

[token](../../README.md#token)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
