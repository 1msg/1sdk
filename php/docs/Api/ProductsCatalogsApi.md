# OpenAPI\Client\ProductsCatalogsApi

All URIs are relative to https://api.1msg.io/YOUR_INSTANCE_NUMBER, except if the operation defines another base path.

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**sendProduct()**](ProductsCatalogsApi.md#sendProduct) | **POST** /sendProduct | Send a Product |
| [**setCommerce()**](ProductsCatalogsApi.md#setCommerce) | **POST** /commerce | Set Commerce Settings |


## `sendProduct()`

```php
sendProduct($send_product_request): \OpenAPI\Client\Model\SendMessageStatus
```

Send a Product

Send a single product or product list to a new or existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.  First, you need to upload your inventory to Facebook. You can use the API or Facebook’s Commerce Manager to do that. If you already have a Facebook catalog set up, we suggest that you leverage that catalog for WhatsApp commerce use cases.  **You can not send products to Business WhatsApp clients.**

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: token
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('token', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('token', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\ProductsCatalogsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$send_product_request = new \OpenAPI\Client\Model\SendProductRequest(); // \OpenAPI\Client\Model\SendProductRequest

try {
    $result = $apiInstance->sendProduct($send_product_request);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ProductsCatalogsApi->sendProduct: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **send_product_request** | [**\OpenAPI\Client\Model\SendProductRequest**](../Model/SendProductRequest.md)|  | |

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

## `setCommerce()`

```php
setCommerce($commerce): \OpenAPI\Client\Model\SetCommerce
```

Set Commerce Settings

**is_catalog_visible** - Set to true to show catalog storefront icon or false to hide it. **is_cart_enabled** - Set to true to enable cart or false to disable it.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: token
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('token', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('token', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\ProductsCatalogsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$commerce = new \OpenAPI\Client\Model\Commerce(); // \OpenAPI\Client\Model\Commerce

try {
    $result = $apiInstance->setCommerce($commerce);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ProductsCatalogsApi->setCommerce: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **commerce** | [**\OpenAPI\Client\Model\Commerce**](../Model/Commerce.md)|  | |

### Return type

[**\OpenAPI\Client\Model\SetCommerce**](../Model/SetCommerce.md)

### Authorization

[token](../../README.md#token)

### HTTP request headers

- **Content-Type**: `application/json`, `application/x-www-form-urlencoded`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
