# one_msg_waba_sdk.ProductsCatalogsApi

All URIs are relative to *https://api.1msg.io/YOUR_INSTANCE_NUMBER*

Method | HTTP request | Description
------------- | ------------- | -------------
[**send_product**](ProductsCatalogsApi.md#send_product) | **POST** /sendProduct | Send a Product
[**set_commerce**](ProductsCatalogsApi.md#set_commerce) | **POST** /commerce | Set Commerce Settings


# **send_product**
> SendMessageStatus send_product(send_product_request)

Send a Product

Send a single product or product list to a new or existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.  First, you need to upload your inventory to Facebook. You can use the API or Facebook’s Commerce Manager to do that. If you already have a Facebook catalog set up, we suggest that you leverage that catalog for WhatsApp commerce use cases.  **You can not send products to Business WhatsApp clients.**

### Example

* Api Key Authentication (token):
```python
import time
import os
import one_msg_waba_sdk
from one_msg_waba_sdk.models.send_message_status import SendMessageStatus
from one_msg_waba_sdk.models.send_product_request import SendProductRequest
from one_msg_waba_sdk.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://api.1msg.io/YOUR_INSTANCE_NUMBER
# See configuration.py for a list of all supported configuration parameters.
configuration = one_msg_waba_sdk.Configuration(
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
with one_msg_waba_sdk.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = one_msg_waba_sdk.ProductsCatalogsApi(api_client)
    send_product_request = one_msg_waba_sdk.SendProductRequest() # SendProductRequest | 

    try:
        # Send a Product
        api_response = api_instance.send_product(send_product_request)
        print("The response of ProductsCatalogsApi->send_product:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling ProductsCatalogsApi->send_product: %s\n" % e)
```



### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **send_product_request** | [**SendProductRequest**](SendProductRequest.md)|  | 

### Return type

[**SendMessageStatus**](SendMessageStatus.md)

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

# **set_commerce**
> SetCommerce set_commerce(commerce)

Set Commerce Settings

**is_catalog_visible** - Set to true to show catalog storefront icon or false to hide it. **is_cart_enabled** - Set to true to enable cart or false to disable it.

### Example

* Api Key Authentication (token):
```python
import time
import os
import one_msg_waba_sdk
from one_msg_waba_sdk.models.commerce import Commerce
from one_msg_waba_sdk.models.set_commerce import SetCommerce
from one_msg_waba_sdk.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://api.1msg.io/YOUR_INSTANCE_NUMBER
# See configuration.py for a list of all supported configuration parameters.
configuration = one_msg_waba_sdk.Configuration(
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
with one_msg_waba_sdk.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = one_msg_waba_sdk.ProductsCatalogsApi(api_client)
    commerce = one_msg_waba_sdk.Commerce() # Commerce | 

    try:
        # Set Commerce Settings
        api_response = api_instance.set_commerce(commerce)
        print("The response of ProductsCatalogsApi->set_commerce:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling ProductsCatalogsApi->set_commerce: %s\n" % e)
```



### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **commerce** | [**Commerce**](Commerce.md)|  | 

### Return type

[**SetCommerce**](SetCommerce.md)

### Authorization

[token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Server response example |  -  |
**401** | Invalid token |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

