# OneMsgWabaSdk.MediaApi

All URIs are relative to *https://api.1msg.io/123*

Method | HTTP request | Description
------------- | ------------- | -------------
[**uploadMedia**](MediaApi.md#uploadMedia) | **POST** /uploadMedia | Upload media &amp; get mediaId



## uploadMedia

> MediaId uploadMedia(uploadMedia)

Upload media &amp; get mediaId

Upload media and get mediaId. Uploaded media can be sent in template

### Example

```javascript
import OneMsgWabaSdk from 'one_msg_waba_sdk';
let defaultClient = OneMsgWabaSdk.ApiClient.instance;
// Configure API key authorization: token
let token = defaultClient.authentications['token'];
token.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//token.apiKeyPrefix = 'Token';

let apiInstance = new OneMsgWabaSdk.MediaApi();
let uploadMedia = new OneMsgWabaSdk.UploadMedia(); // UploadMedia | 
apiInstance.uploadMedia(uploadMedia).then((data) => {
  console.log('API called successfully. Returned data: ' + data);
}, (error) => {
  console.error(error);
});

```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uploadMedia** | [**UploadMedia**](UploadMedia.md)|  | 

### Return type

[**MediaId**](MediaId.md)

### Authorization

[token](../README.md#token)

### HTTP request headers

- **Content-Type**: application/x-www-form-urlencoded, application/json
- **Accept**: application/json

