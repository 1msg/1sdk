# openapi_client.MediaApi

All URIs are relative to *https://api.1msg.io/YOUR_INSTANCE_NUMBER*

Method | HTTP request | Description
------------- | ------------- | -------------
[**upload_media**](MediaApi.md#upload_media) | **POST** /uploadMedia | Upload media &amp; get mediaId


# **upload_media**
> MediaId upload_media(upload_media)

Upload media & get mediaId

Upload media and get mediaId. Uploaded media can be sent in template

### Example

* Api Key Authentication (token):
```python
import time
import os
import openapi_client
from openapi_client.models.media_id import MediaId
from openapi_client.models.upload_media import UploadMedia
from openapi_client.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://api.1msg.io/YOUR_INSTANCE_NUMBER
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "https://api.1msg.io/YOUR_INSTANCE_NUMBER"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: token
configuration.api_key['token'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['token'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.MediaApi(api_client)
    upload_media = openapi_client.UploadMedia() # UploadMedia | 

    try:
        # Upload media & get mediaId
        api_response = api_instance.upload_media(upload_media)
        print("The response of MediaApi->upload_media:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling MediaApi->upload_media: %s\n" % e)
```



### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **upload_media** | [**UploadMedia**](UploadMedia.md)|  | 

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
**200** | Server response example |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

