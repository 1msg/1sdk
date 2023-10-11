# OpenAPI\Client\ChannelApi

All URIs are relative to https://api.1msg.io/YOUR_INSTANCE_NUMBER, except if the operation defines another base path.

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**getCommerce()**](ChannelApi.md#getCommerce) | **GET** /commerce | Get Commerce Settings |
| [**getExtendedStatistics()**](ChannelApi.md#getExtendedStatistics) | **GET** /extendedStatistics | Get Extended Channel statistics |
| [**getMe()**](ChannelApi.md#getMe) | **GET** /me | Get Profile Info |
| [**getSettings()**](ChannelApi.md#getSettings) | **GET** /settings | Get Settings |
| [**getStatistics()**](ChannelApi.md#getStatistics) | **GET** /statistics | Get Channel statistics |
| [**getStatus()**](ChannelApi.md#getStatus) | **GET** /status | Get Status |
| [**outputIP()**](ChannelApi.md#outputIP) | **GET** /outputIP | Get channel server IP |
| [**setMe()**](ChannelApi.md#setMe) | **POST** /me | Change user info |
| [**setSettings()**](ChannelApi.md#setSettings) | **POST** /settings | Set settings |


## `getCommerce()`

```php
getCommerce(): \OpenAPI\Client\Model\GetCommerce
```

Get Commerce Settings

**is_catalog_visible** - Set to true to show catalog storefront icon or false to hide it. **is_cart_enabled** - Set to true to enable cart or false to disable it.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: token
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('token', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('token', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\ChannelApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->getCommerce();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ChannelApi->getCommerce: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\OpenAPI\Client\Model\GetCommerce**](../Model/GetCommerce.md)

### Authorization

[token](../../README.md#token)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getExtendedStatistics()`

```php
getExtendedStatistics(): \OpenAPI\Client\Model\ChannelExtendedStatistics
```

Get Extended Channel statistics

Get channel usage extended statistics

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: token
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('token', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('token', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\ChannelApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->getExtendedStatistics();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ChannelApi->getExtendedStatistics: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\OpenAPI\Client\Model\ChannelExtendedStatistics**](../Model/ChannelExtendedStatistics.md)

### Authorization

[token](../../README.md#token)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getMe()`

```php
getMe(): \OpenAPI\Client\Model\GetMe
```

Get Profile Info

Use this edge to retrieve your profile's About info

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: token
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('token', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('token', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\ChannelApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->getMe();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ChannelApi->getMe: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\OpenAPI\Client\Model\GetMe**](../Model/GetMe.md)

### Authorization

[token](../../README.md#token)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getSettings()`

```php
getSettings(): \OpenAPI\Client\Model\Settings
```

Get Settings

**webhookUrl** - Http or https URL for receiving notifications.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: token
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('token', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('token', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\ChannelApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->getSettings();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ChannelApi->getSettings: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\OpenAPI\Client\Model\Settings**](../Model/Settings.md)

### Authorization

[token](../../README.md#token)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getStatistics()`

```php
getStatistics($date): \OpenAPI\Client\Model\ChannelStatistics
```

Get Channel statistics

Get channel usage statistics

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: token
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('token', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('token', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\ChannelApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$date = 03.2022; // string | Month and year in format mm.YYYY.

try {
    $result = $apiInstance->getStatistics($date);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ChannelApi->getStatistics: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **date** | **string**| Month and year in format mm.YYYY. | [optional] |

### Return type

[**\OpenAPI\Client\Model\ChannelStatistics**](../Model/ChannelStatistics.md)

### Authorization

[token](../../README.md#token)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getStatus()`

```php
getStatus(): \OpenAPI\Client\Model\ChannelStatus
```

Get Status

Returns the status of your WhatsApp Business API client. Channel statuses:  **connected**_/_**connecting** - everything is ok.  **disconnected** - The Coreapp is not connected to the WhatsApp servers.  **uninitialized** - The application could be in the process of upgrading or initializing the database schema. Try again in a few minutes and contact Support if you continue to see this status.  **unregistered** - You need to register your WhatsApp Business API client. Either you have been blocked and need to take some action (contact Support)

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: token
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('token', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('token', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\ChannelApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->getStatus();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ChannelApi->getStatus: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\OpenAPI\Client\Model\ChannelStatus**](../Model/ChannelStatus.md)

### Authorization

[token](../../README.md#token)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `outputIP()`

```php
outputIP(): \OpenAPI\Client\Model\GetIP
```

Get channel server IP



### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: token
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('token', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('token', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\ChannelApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->outputIP();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ChannelApi->outputIP: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\OpenAPI\Client\Model\GetIP**](../Model/GetIP.md)

### Authorization

[token](../../README.md#token)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `setMe()`

```php
setMe($set_me_request): \OpenAPI\Client\Model\SetMe
```

Change user info

Change user info

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: token
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('token', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('token', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\ChannelApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$set_me_request = new \OpenAPI\Client\Model\SetMeRequest(); // \OpenAPI\Client\Model\SetMeRequest

try {
    $result = $apiInstance->setMe($set_me_request);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ChannelApi->setMe: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **set_me_request** | [**\OpenAPI\Client\Model\SetMeRequest**](../Model/SetMeRequest.md)|  | |

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

## `setSettings()`

```php
setSettings($settings): \OpenAPI\Client\Model\SetSettings200Response
```

Set settings

**webhookUrl** - Http or https URL for receiving notifications.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: token
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('token', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('token', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\ChannelApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$settings = new \OpenAPI\Client\Model\Settings(); // \OpenAPI\Client\Model\Settings

try {
    $result = $apiInstance->setSettings($settings);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ChannelApi->setSettings: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **settings** | [**\OpenAPI\Client\Model\Settings**](../Model/Settings.md)|  | |

### Return type

[**\OpenAPI\Client\Model\SetSettings200Response**](../Model/SetSettings200Response.md)

### Authorization

[token](../../README.md#token)

### HTTP request headers

- **Content-Type**: `application/json`, `application/x-www-form-urlencoded`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
