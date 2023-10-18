# one_msg_waba_sdk.ChannelApi

All URIs are relative to *https://api.1msg.io/YOUR_INSTANCE_NUMBER*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_commerce**](ChannelApi.md#get_commerce) | **GET** /commerce | Get Commerce Settings
[**get_extended_statistics**](ChannelApi.md#get_extended_statistics) | **GET** /extendedStatistics | Get Extended Channel statistics
[**get_me**](ChannelApi.md#get_me) | **GET** /me | Get Profile Info
[**get_settings**](ChannelApi.md#get_settings) | **GET** /settings | Get Settings
[**get_statistics**](ChannelApi.md#get_statistics) | **GET** /statistics | Get Channel statistics
[**get_status**](ChannelApi.md#get_status) | **GET** /status |  Get Status
[**output_ip**](ChannelApi.md#output_ip) | **GET** /outputIP | Get channel server IP
[**set_me**](ChannelApi.md#set_me) | **POST** /me | Change user info
[**set_settings**](ChannelApi.md#set_settings) | **POST** /settings | Set settings


# **get_commerce**
> GetCommerce get_commerce()

Get Commerce Settings

**is_catalog_visible** - Set to true to show catalog storefront icon or false to hide it. **is_cart_enabled** - Set to true to enable cart or false to disable it.

### Example

* Api Key Authentication (token):
```python
import time
import os
import one_msg_waba_sdk
from one_msg_waba_sdk.models.get_commerce import GetCommerce
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
    api_instance = one_msg_waba_sdk.ChannelApi(api_client)

    try:
        # Get Commerce Settings
        api_response = api_instance.get_commerce()
        print("The response of ChannelApi->get_commerce:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling ChannelApi->get_commerce: %s\n" % e)
```



### Parameters
This endpoint does not need any parameter.

### Return type

[**GetCommerce**](GetCommerce.md)

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

# **get_extended_statistics**
> ChannelExtendedStatistics get_extended_statistics()

Get Extended Channel statistics

Get channel usage extended statistics

### Example

* Api Key Authentication (token):
```python
import time
import os
import one_msg_waba_sdk
from one_msg_waba_sdk.models.channel_extended_statistics import ChannelExtendedStatistics
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
    api_instance = one_msg_waba_sdk.ChannelApi(api_client)

    try:
        # Get Extended Channel statistics
        api_response = api_instance.get_extended_statistics()
        print("The response of ChannelApi->get_extended_statistics:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling ChannelApi->get_extended_statistics: %s\n" % e)
```



### Parameters
This endpoint does not need any parameter.

### Return type

[**ChannelExtendedStatistics**](ChannelExtendedStatistics.md)

### Authorization

[token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Server response example |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_me**
> GetMe get_me()

Get Profile Info

Use this edge to retrieve your profile's About info

### Example

* Api Key Authentication (token):
```python
import time
import os
import one_msg_waba_sdk
from one_msg_waba_sdk.models.get_me import GetMe
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
    api_instance = one_msg_waba_sdk.ChannelApi(api_client)

    try:
        # Get Profile Info
        api_response = api_instance.get_me()
        print("The response of ChannelApi->get_me:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling ChannelApi->get_me: %s\n" % e)
```



### Parameters
This endpoint does not need any parameter.

### Return type

[**GetMe**](GetMe.md)

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

# **get_settings**
> Settings get_settings()

Get Settings

**webhookUrl** - Http or https URL for receiving notifications.

### Example

* Api Key Authentication (token):
```python
import time
import os
import one_msg_waba_sdk
from one_msg_waba_sdk.models.settings import Settings
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
    api_instance = one_msg_waba_sdk.ChannelApi(api_client)

    try:
        # Get Settings
        api_response = api_instance.get_settings()
        print("The response of ChannelApi->get_settings:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling ChannelApi->get_settings: %s\n" % e)
```



### Parameters
This endpoint does not need any parameter.

### Return type

[**Settings**](Settings.md)

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

# **get_statistics**
> ChannelStatistics get_statistics(var_date=var_date)

Get Channel statistics

Get channel usage statistics

### Example

* Api Key Authentication (token):
```python
import time
import os
import one_msg_waba_sdk
from one_msg_waba_sdk.models.channel_statistics import ChannelStatistics
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
    api_instance = one_msg_waba_sdk.ChannelApi(api_client)
    var_date = '03.2022' # str | Month and year in format mm.YYYY. (optional)

    try:
        # Get Channel statistics
        api_response = api_instance.get_statistics(var_date=var_date)
        print("The response of ChannelApi->get_statistics:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling ChannelApi->get_statistics: %s\n" % e)
```



### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **var_date** | **str**| Month and year in format mm.YYYY. | [optional] 

### Return type

[**ChannelStatistics**](ChannelStatistics.md)

### Authorization

[token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Server response example |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_status**
> ChannelStatus get_status()

 Get Status

Returns the status of your WhatsApp Business API client. Channel statuses:  **connected**/**connecting** - everything is ok.  **disconnected** - The Coreapp is not connected to the WhatsApp servers.  **uninitialized** - The application could be in the process of upgrading or initializing the database schema. Try again in a few minutes and contact Support if you continue to see this status.  **unregistered** - You need to register your WhatsApp Business API client. Either you have been blocked and need to take some action (contact Support)

### Example

* Api Key Authentication (token):
```python
import time
import os
import one_msg_waba_sdk
from one_msg_waba_sdk.models.channel_status import ChannelStatus
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
    api_instance = one_msg_waba_sdk.ChannelApi(api_client)

    try:
        #  Get Status
        api_response = api_instance.get_status()
        print("The response of ChannelApi->get_status:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling ChannelApi->get_status: %s\n" % e)
```



### Parameters
This endpoint does not need any parameter.

### Return type

[**ChannelStatus**](ChannelStatus.md)

### Authorization

[token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Server response example |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **output_ip**
> GetIP output_ip()

Get channel server IP



### Example

* Api Key Authentication (token):
```python
import time
import os
import one_msg_waba_sdk
from one_msg_waba_sdk.models.get_ip import GetIP
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
    api_instance = one_msg_waba_sdk.ChannelApi(api_client)

    try:
        # Get channel server IP
        api_response = api_instance.output_ip()
        print("The response of ChannelApi->output_ip:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling ChannelApi->output_ip: %s\n" % e)
```



### Parameters
This endpoint does not need any parameter.

### Return type

[**GetIP**](GetIP.md)

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

# **set_me**
> SetMe set_me(set_me_request)

Change user info

Change user info

### Example

* Api Key Authentication (token):
```python
import time
import os
import one_msg_waba_sdk
from one_msg_waba_sdk.models.set_me import SetMe
from one_msg_waba_sdk.models.set_me_request import SetMeRequest
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
    api_instance = one_msg_waba_sdk.ChannelApi(api_client)
    set_me_request = one_msg_waba_sdk.SetMeRequest() # SetMeRequest | 

    try:
        # Change user info
        api_response = api_instance.set_me(set_me_request)
        print("The response of ChannelApi->set_me:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling ChannelApi->set_me: %s\n" % e)
```



### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **set_me_request** | [**SetMeRequest**](SetMeRequest.md)|  | 

### Return type

[**SetMe**](SetMe.md)

### Authorization

[token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/x-www-form-urlencoded, application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Server response example |  -  |
**401** | Invalid token |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **set_settings**
> SetSettings200Response set_settings(settings)

Set settings

**webhookUrl** - Http or https URL for receiving notifications.

### Example

* Api Key Authentication (token):
```python
import time
import os
import one_msg_waba_sdk
from one_msg_waba_sdk.models.set_settings200_response import SetSettings200Response
from one_msg_waba_sdk.models.settings import Settings
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
    api_instance = one_msg_waba_sdk.ChannelApi(api_client)
    settings = one_msg_waba_sdk.Settings() # Settings | 

    try:
        # Set settings
        api_response = api_instance.set_settings(settings)
        print("The response of ChannelApi->set_settings:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling ChannelApi->set_settings: %s\n" % e)
```



### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **settings** | [**Settings**](Settings.md)|  | 

### Return type

[**SetSettings200Response**](SetSettings200Response.md)

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

