# one_msg_waba_sdk.MessagingApi

All URIs are relative to *https://api.1msg.io/YOUR_INSTANCE_NUMBER*

Method | HTTP request | Description
------------- | ------------- | -------------
[**messages_list**](MessagingApi.md#messages_list) | **GET** /messages | Get messages list
[**read_message**](MessagingApi.md#read_message) | **POST** /readMessage | Mark message as read
[**send_contact**](MessagingApi.md#send_contact) | **POST** /sendContact | Send a Contact
[**send_file**](MessagingApi.md#send_file) | **POST** /sendFile | Send a File
[**send_list**](MessagingApi.md#send_list) | **POST** /sendList | Send List Message
[**send_location**](MessagingApi.md#send_location) | **POST** /sendLocation | Send a Location
[**send_message**](MessagingApi.md#send_message) | **POST** /sendMessage | Send a Message


# **messages_list**
> GetMessages messages_list(last=last, last_message_number=last_message_number, first_message_number=first_message_number, limit=limit, chat_id=chat_id, min_time=min_time, max_time=max_time, msg_id=msg_id)

Get messages list



### Example

* Api Key Authentication (token):
```python
import time
import os
import one_msg_waba_sdk
from one_msg_waba_sdk.models.get_messages import GetMessages
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
    api_instance = one_msg_waba_sdk.MessagingApi(api_client)
    last = true # bool | Displays the last messages. If this parameter is passed, then lastMessageNumber is ignored. (optional)
    last_message_number = 100 # int | The lastMessageNumber parameter from the last response. Example: 100 (optional)
    first_message_number = 1 # int | The firstMessageNumber parameter from the last response. Example: 1 (optional)
    limit = 200 # int | Sets length of the message list. Default 100. With value 0 returns all messages. (optional)
    chat_id = '556123122026@c.us' # str | Filter messages by chatId  Chat ID from the message list. Example: 556123122026@c.us (optional)
    min_time = 1665396610 # int | Filter messages received after specified time. Example: 1665396610 (optional)
    max_time = 1665396610 # int | Filter messages received before specified time. Example: 1665396610 (optional)
    msg_id = '0XzkmGNn4prUAQlzsHApGNRXQ0U' # str | Message ID. Example: 0XzkmGNn4prUAQlzsHApGNRXQ0U (optional)

    try:
        # Get messages list
        api_response = api_instance.messages_list(last=last, last_message_number=last_message_number, first_message_number=first_message_number, limit=limit, chat_id=chat_id, min_time=min_time, max_time=max_time, msg_id=msg_id)
        print("The response of MessagingApi->messages_list:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling MessagingApi->messages_list: %s\n" % e)
```



### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **last** | **bool**| Displays the last messages. If this parameter is passed, then lastMessageNumber is ignored. | [optional] 
 **last_message_number** | **int**| The lastMessageNumber parameter from the last response. Example: 100 | [optional] 
 **first_message_number** | **int**| The firstMessageNumber parameter from the last response. Example: 1 | [optional] 
 **limit** | **int**| Sets length of the message list. Default 100. With value 0 returns all messages. | [optional] 
 **chat_id** | **str**| Filter messages by chatId  Chat ID from the message list. Example: 556123122026@c.us | [optional] 
 **min_time** | **int**| Filter messages received after specified time. Example: 1665396610 | [optional] 
 **max_time** | **int**| Filter messages received before specified time. Example: 1665396610 | [optional] 
 **msg_id** | **str**| Message ID. Example: 0XzkmGNn4prUAQlzsHApGNRXQ0U | [optional] 

### Return type

[**GetMessages**](GetMessages.md)

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

# **read_message**
> SetMe read_message(read_message_request=read_message_request)

Mark message as read



### Example

* Api Key Authentication (token):
```python
import time
import os
import one_msg_waba_sdk
from one_msg_waba_sdk.models.read_message_request import ReadMessageRequest
from one_msg_waba_sdk.models.set_me import SetMe
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
    api_instance = one_msg_waba_sdk.MessagingApi(api_client)
    read_message_request = one_msg_waba_sdk.ReadMessageRequest() # ReadMessageRequest |  (optional)

    try:
        # Mark message as read
        api_response = api_instance.read_message(read_message_request=read_message_request)
        print("The response of MessagingApi->read_message:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling MessagingApi->read_message: %s\n" % e)
```



### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **read_message_request** | [**ReadMessageRequest**](ReadMessageRequest.md)|  | [optional] 

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

# **send_contact**
> SendMessageStatus send_contact(send_contact_request)

Send a Contact

Send a contact to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.

### Example

* Api Key Authentication (token):
```python
import time
import os
import one_msg_waba_sdk
from one_msg_waba_sdk.models.send_contact_request import SendContactRequest
from one_msg_waba_sdk.models.send_message_status import SendMessageStatus
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
    api_instance = one_msg_waba_sdk.MessagingApi(api_client)
    send_contact_request = one_msg_waba_sdk.SendContactRequest() # SendContactRequest | 

    try:
        # Send a Contact
        api_response = api_instance.send_contact(send_contact_request)
        print("The response of MessagingApi->send_contact:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling MessagingApi->send_contact: %s\n" % e)
```



### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **send_contact_request** | [**SendContactRequest**](SendContactRequest.md)|  | 

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

# **send_file**
> SendMessageStatus send_file(send_file_request)

Send a File

Send a file to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.

### Example

* Api Key Authentication (token):
```python
import time
import os
import one_msg_waba_sdk
from one_msg_waba_sdk.models.send_file_request import SendFileRequest
from one_msg_waba_sdk.models.send_message_status import SendMessageStatus
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
    api_instance = one_msg_waba_sdk.MessagingApi(api_client)
    send_file_request = one_msg_waba_sdk.SendFileRequest() # SendFileRequest | 

    try:
        # Send a File
        api_response = api_instance.send_file(send_file_request)
        print("The response of MessagingApi->send_file:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling MessagingApi->send_file: %s\n" % e)
```



### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **send_file_request** | [**SendFileRequest**](SendFileRequest.md)|  | 

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

# **send_list**
> SendMessageStatus send_list(send_list_request)

Send List Message

Send Interactive List Message to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.

### Example

* Api Key Authentication (token):
```python
import time
import os
import one_msg_waba_sdk
from one_msg_waba_sdk.models.send_list_request import SendListRequest
from one_msg_waba_sdk.models.send_message_status import SendMessageStatus
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
    api_instance = one_msg_waba_sdk.MessagingApi(api_client)
    send_list_request = one_msg_waba_sdk.SendListRequest() # SendListRequest | 

    try:
        # Send List Message
        api_response = api_instance.send_list(send_list_request)
        print("The response of MessagingApi->send_list:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling MessagingApi->send_list: %s\n" % e)
```



### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **send_list_request** | [**SendListRequest**](SendListRequest.md)|  | 

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

# **send_location**
> SendMessageStatus send_location(send_location_request)

Send a Location

Send a location to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.

### Example

* Api Key Authentication (token):
```python
import time
import os
import one_msg_waba_sdk
from one_msg_waba_sdk.models.send_location_request import SendLocationRequest
from one_msg_waba_sdk.models.send_message_status import SendMessageStatus
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
    api_instance = one_msg_waba_sdk.MessagingApi(api_client)
    send_location_request = one_msg_waba_sdk.SendLocationRequest() # SendLocationRequest | 

    try:
        # Send a Location
        api_response = api_instance.send_location(send_location_request)
        print("The response of MessagingApi->send_location:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling MessagingApi->send_location: %s\n" % e)
```



### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **send_location_request** | [**SendLocationRequest**](SendLocationRequest.md)|  | 

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

# **send_message**
> SendMessageStatus send_message(send_message_request)

Send a Message

Send a message to an existing chat. (Only if the dialogue has an Open Session). The message will be added to the queue for sending and delivered even if the phone is disconnected from the Internet or authorization is not passed.  Only one of two parameters is needed to determine the destination - chatId or phone.

### Example

* Api Key Authentication (token):
```python
import time
import os
import one_msg_waba_sdk
from one_msg_waba_sdk.models.send_message_request import SendMessageRequest
from one_msg_waba_sdk.models.send_message_status import SendMessageStatus
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
    api_instance = one_msg_waba_sdk.MessagingApi(api_client)
    send_message_request = one_msg_waba_sdk.SendMessageRequest() # SendMessageRequest | 

    try:
        # Send a Message
        api_response = api_instance.send_message(send_message_request)
        print("The response of MessagingApi->send_message:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling MessagingApi->send_message: %s\n" % e)
```



### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **send_message_request** | [**SendMessageRequest**](SendMessageRequest.md)|  | 

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

