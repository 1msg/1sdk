# one_msg_waba_sdk.WebhooksApi

All URIs are relative to *https://api.1msg.io/YOUR_INSTANCE_NUMBER*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ack_hook_info**](WebhooksApi.md#ack_hook_info) | **GET** /hookInfo | Check ACKs
[**set_webhook**](WebhooksApi.md#set_webhook) | **POST** /webhook | Set webhook


# **ack_hook_info**
> GetAckInfo ack_hook_info(message_id)

Check ACKs



### Example

* Api Key Authentication (token):
```python
import time
import os
import one_msg_waba_sdk
from one_msg_waba_sdk.models.get_ack_info import GetAckInfo
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
    api_instance = one_msg_waba_sdk.WebhooksApi(api_client)
    message_id = '0XzkmGNn4prUAQlzsHApGNRXQ0U' # str | Message ID. Example: 0XzkmGNn4prUAQlzsHApGNRXQ0U

    try:
        # Check ACKs
        api_response = api_instance.ack_hook_info(message_id)
        print("The response of WebhooksApi->ack_hook_info:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling WebhooksApi->ack_hook_info: %s\n" % e)
```



### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **message_id** | **str**| Message ID. Example: 0XzkmGNn4prUAQlzsHApGNRXQ0U | 

### Return type

[**GetAckInfo**](GetAckInfo.md)

### Authorization

[token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Server response example |  -  |
**401** | Invalid token |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **set_webhook**
> SetWebhookStatus set_webhook(webhook_url)

Set webhook

Sets the URL for receiving webhook notifications of new messages and message delivery events (ack).  **API responses in \"Callbacks\" tab**

### Example

* Api Key Authentication (token):
```python
import time
import os
import one_msg_waba_sdk
from one_msg_waba_sdk.models.set_webhook_status import SetWebhookStatus
from one_msg_waba_sdk.models.webhook_url import WebhookUrl
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
    api_instance = one_msg_waba_sdk.WebhooksApi(api_client)
    webhook_url = one_msg_waba_sdk.WebhookUrl() # WebhookUrl | 

    try:
        # Set webhook
        api_response = api_instance.set_webhook(webhook_url)
        print("The response of WebhooksApi->set_webhook:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling WebhooksApi->set_webhook: %s\n" % e)
```



### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **webhook_url** | [**WebhookUrl**](WebhookUrl.md)|  | 

### Return type

[**SetWebhookStatus**](SetWebhookStatus.md)

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

