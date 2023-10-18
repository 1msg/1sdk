# MediaApi

All URIs are relative to *https://api.1msg.io/YOUR_INSTANCE_NUMBER*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**uploadMedia**](MediaApi.md#uploadMedia) | **POST** /uploadMedia | Upload media &amp; get mediaId |


<a id="uploadMedia"></a>
# **uploadMedia**
> MediaId uploadMedia(uploadMedia)

Upload media &amp; get mediaId

Upload media and get mediaId. Uploaded media can be sent in template

### Example
```java
// Import classes:
import io.onemessage.ApiClient;
import io.onemessage.ApiException;
import io.onemessage.Configuration;
import io.onemessage.auth.*;
import io.onemessage.models.*;
import io.onemessage.client.MediaApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.1msg.io/YOUR_INSTANCE_NUMBER");
    
    // Configure API key authorization: token
    ApiKeyAuth token = (ApiKeyAuth) defaultClient.getAuthentication("token");
    token.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //token.setApiKeyPrefix("Token");

    MediaApi apiInstance = new MediaApi(defaultClient);
    UploadMedia uploadMedia = new UploadMedia(); // UploadMedia | 
    try {
      MediaId result = apiInstance.uploadMedia(uploadMedia);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MediaApi#uploadMedia");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **uploadMedia** | [**UploadMedia**](UploadMedia.md)|  | |

### Return type

[**MediaId**](MediaId.md)

### Authorization

[token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/x-www-form-urlencoded, application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Server response example |  -  |

