# MediaAPI

All URIs are relative to *https://api.1msg.io/YOUR_INSTANCE_NUMBER*

Method | HTTP request | Description
------------- | ------------- | -------------
[**MediaAPI_uploadMedia**](MediaAPI.md#MediaAPI_uploadMedia) | **POST** /uploadMedia | Upload media &amp; get mediaId


# **MediaAPI_uploadMedia**
```c
// Upload media & get mediaId
//
// Upload media and get mediaId. Uploaded media can be sent in template
//
media_id_t* MediaAPI_uploadMedia(apiClient_t *apiClient, upload_media_t * upload_media);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**upload_media** | **[upload_media_t](upload_media.md) \*** |  | 

### Return type

[media_id_t](media_id.md) *


### Authorization

[token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/x-www-form-urlencoded, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

