# OpenAPI\Client\MediaApi

All URIs are relative to https://api.1msg.io/YOUR_INSTANCE_NUMBER, except if the operation defines another base path.

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**uploadMedia()**](MediaApi.md#uploadMedia) | **POST** /uploadMedia | Upload media &amp; get mediaId |


## `uploadMedia()`

```php
uploadMedia($upload_media): \OpenAPI\Client\Model\MediaId
```

Upload media & get mediaId

Upload media and get mediaId. Uploaded media can be sent in template

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: token
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('token', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('token', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\MediaApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$upload_media = new \OpenAPI\Client\Model\UploadMedia(); // \OpenAPI\Client\Model\UploadMedia

try {
    $result = $apiInstance->uploadMedia($upload_media);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling MediaApi->uploadMedia: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **upload_media** | [**\OpenAPI\Client\Model\UploadMedia**](../Model/UploadMedia.md)|  | |

### Return type

[**\OpenAPI\Client\Model\MediaId**](../Model/MediaId.md)

### Authorization

[token](../../README.md#token)

### HTTP request headers

- **Content-Type**: `application/x-www-form-urlencoded`, `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
