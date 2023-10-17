# OneMessage.io.Api.MessagingApi

All URIs are relative to *https://api.1msg.io/YOUR_INSTANCE_NUMBER*

| Method | HTTP request | Description |
|--------|--------------|-------------|
| [**MessagesList**](MessagingApi.md#messageslist) | **GET** /messages | Get messages list |
| [**ReadMessage**](MessagingApi.md#readmessage) | **POST** /readMessage | Mark message as read |
| [**SendContact**](MessagingApi.md#sendcontact) | **POST** /sendContact | Send a Contact |
| [**SendFile**](MessagingApi.md#sendfile) | **POST** /sendFile | Send a File |
| [**SendList**](MessagingApi.md#sendlist) | **POST** /sendList | Send List Message |
| [**SendLocation**](MessagingApi.md#sendlocation) | **POST** /sendLocation | Send a Location |
| [**SendMessage**](MessagingApi.md#sendmessage) | **POST** /sendMessage | Send a Message |

<a id="messageslist"></a>
# **MessagesList**
> GetMessages MessagesList (bool? last = null, int? lastMessageNumber = null, int? firstMessageNumber = null, int? limit = null, string chatId = null, int? minTime = null, int? maxTime = null, string msgId = null)

Get messages list

### Example
```csharp
using System.Collections.Generic;
using System.Diagnostics;
using OneMessage.io.Api;
using OneMessage.io.Client;
using OneMessage.io.Model;

namespace Example
{
    public class MessagesListExample
    {
        public static void Main()
        {
            Configuration config = new Configuration();
            config.BasePath = "https://api.1msg.io/YOUR_INSTANCE_NUMBER";
            // Configure API key authorization: token
            config.AddApiKey("token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // config.AddApiKeyPrefix("token", "Bearer");

            var apiInstance = new MessagingApi(config);
            var last = true;  // bool? | Displays the last messages. If this parameter is passed, then lastMessageNumber is ignored. (optional) 
            var lastMessageNumber = 100;  // int? | The lastMessageNumber parameter from the last response. Example: 100 (optional) 
            var firstMessageNumber = 1;  // int? | The firstMessageNumber parameter from the last response. Example: 1 (optional) 
            var limit = 200;  // int? | Sets length of the message list. Default 100. With value 0 returns all messages. (optional) 
            var chatId = 556123122026@c.us;  // string | Filter messages by chatId  Chat ID from the message list. Example: 556123122026@c.us (optional) 
            var minTime = 1665396610;  // int? | Filter messages received after specified time. Example: 1665396610 (optional) 
            var maxTime = 1665396610;  // int? | Filter messages received before specified time. Example: 1665396610 (optional) 
            var msgId = 0XzkmGNn4prUAQlzsHApGNRXQ0U;  // string | Message ID. Example: 0XzkmGNn4prUAQlzsHApGNRXQ0U (optional) 

            try
            {
                // Get messages list
                GetMessages result = apiInstance.MessagesList(last, lastMessageNumber, firstMessageNumber, limit, chatId, minTime, maxTime, msgId);
                Debug.WriteLine(result);
            }
            catch (ApiException  e)
            {
                Debug.Print("Exception when calling MessagingApi.MessagesList: " + e.Message);
                Debug.Print("Status Code: " + e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

#### Using the MessagesListWithHttpInfo variant
This returns an ApiResponse object which contains the response data, status code and headers.

```csharp
try
{
    // Get messages list
    ApiResponse<GetMessages> response = apiInstance.MessagesListWithHttpInfo(last, lastMessageNumber, firstMessageNumber, limit, chatId, minTime, maxTime, msgId);
    Debug.Write("Status Code: " + response.StatusCode);
    Debug.Write("Response Headers: " + response.Headers);
    Debug.Write("Response Body: " + response.Data);
}
catch (ApiException e)
{
    Debug.Print("Exception when calling MessagingApi.MessagesListWithHttpInfo: " + e.Message);
    Debug.Print("Status Code: " + e.ErrorCode);
    Debug.Print(e.StackTrace);
}
```

### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **last** | **bool?** | Displays the last messages. If this parameter is passed, then lastMessageNumber is ignored. | [optional]  |
| **lastMessageNumber** | **int?** | The lastMessageNumber parameter from the last response. Example: 100 | [optional]  |
| **firstMessageNumber** | **int?** | The firstMessageNumber parameter from the last response. Example: 1 | [optional]  |
| **limit** | **int?** | Sets length of the message list. Default 100. With value 0 returns all messages. | [optional]  |
| **chatId** | **string** | Filter messages by chatId  Chat ID from the message list. Example: 556123122026@c.us | [optional]  |
| **minTime** | **int?** | Filter messages received after specified time. Example: 1665396610 | [optional]  |
| **maxTime** | **int?** | Filter messages received before specified time. Example: 1665396610 | [optional]  |
| **msgId** | **string** | Message ID. Example: 0XzkmGNn4prUAQlzsHApGNRXQ0U | [optional]  |

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
| **200** | Server response example |  -  |
| **401** | Invalid token |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="readmessage"></a>
# **ReadMessage**
> SetMe ReadMessage (ReadMessageRequest readMessageRequest = null)

Mark message as read

### Example
```csharp
using System.Collections.Generic;
using System.Diagnostics;
using OneMessage.io.Api;
using OneMessage.io.Client;
using OneMessage.io.Model;

namespace Example
{
    public class ReadMessageExample
    {
        public static void Main()
        {
            Configuration config = new Configuration();
            config.BasePath = "https://api.1msg.io/YOUR_INSTANCE_NUMBER";
            // Configure API key authorization: token
            config.AddApiKey("token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // config.AddApiKeyPrefix("token", "Bearer");

            var apiInstance = new MessagingApi(config);
            var readMessageRequest = new ReadMessageRequest(); // ReadMessageRequest |  (optional) 

            try
            {
                // Mark message as read
                SetMe result = apiInstance.ReadMessage(readMessageRequest);
                Debug.WriteLine(result);
            }
            catch (ApiException  e)
            {
                Debug.Print("Exception when calling MessagingApi.ReadMessage: " + e.Message);
                Debug.Print("Status Code: " + e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

#### Using the ReadMessageWithHttpInfo variant
This returns an ApiResponse object which contains the response data, status code and headers.

```csharp
try
{
    // Mark message as read
    ApiResponse<SetMe> response = apiInstance.ReadMessageWithHttpInfo(readMessageRequest);
    Debug.Write("Status Code: " + response.StatusCode);
    Debug.Write("Response Headers: " + response.Headers);
    Debug.Write("Response Body: " + response.Data);
}
catch (ApiException e)
{
    Debug.Print("Exception when calling MessagingApi.ReadMessageWithHttpInfo: " + e.Message);
    Debug.Print("Status Code: " + e.ErrorCode);
    Debug.Print(e.StackTrace);
}
```

### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **readMessageRequest** | [**ReadMessageRequest**](ReadMessageRequest.md) |  | [optional]  |

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
| **200** | Server response example |  -  |
| **401** | Invalid token |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="sendcontact"></a>
# **SendContact**
> SendMessageStatus SendContact (SendContactRequest sendContactRequest)

Send a Contact

Send a contact to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.

### Example
```csharp
using System.Collections.Generic;
using System.Diagnostics;
using OneMessage.io.Api;
using OneMessage.io.Client;
using OneMessage.io.Model;

namespace Example
{
    public class SendContactExample
    {
        public static void Main()
        {
            Configuration config = new Configuration();
            config.BasePath = "https://api.1msg.io/YOUR_INSTANCE_NUMBER";
            // Configure API key authorization: token
            config.AddApiKey("token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // config.AddApiKeyPrefix("token", "Bearer");

            var apiInstance = new MessagingApi(config);
            var sendContactRequest = new SendContactRequest(); // SendContactRequest | 

            try
            {
                // Send a Contact
                SendMessageStatus result = apiInstance.SendContact(sendContactRequest);
                Debug.WriteLine(result);
            }
            catch (ApiException  e)
            {
                Debug.Print("Exception when calling MessagingApi.SendContact: " + e.Message);
                Debug.Print("Status Code: " + e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

#### Using the SendContactWithHttpInfo variant
This returns an ApiResponse object which contains the response data, status code and headers.

```csharp
try
{
    // Send a Contact
    ApiResponse<SendMessageStatus> response = apiInstance.SendContactWithHttpInfo(sendContactRequest);
    Debug.Write("Status Code: " + response.StatusCode);
    Debug.Write("Response Headers: " + response.Headers);
    Debug.Write("Response Body: " + response.Data);
}
catch (ApiException e)
{
    Debug.Print("Exception when calling MessagingApi.SendContactWithHttpInfo: " + e.Message);
    Debug.Print("Status Code: " + e.ErrorCode);
    Debug.Print(e.StackTrace);
}
```

### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **sendContactRequest** | [**SendContactRequest**](SendContactRequest.md) |  |  |

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
| **200** | Server response example |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="sendfile"></a>
# **SendFile**
> SendMessageStatus SendFile (SendFileRequest sendFileRequest)

Send a File

Send a file to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.

### Example
```csharp
using System.Collections.Generic;
using System.Diagnostics;
using OneMessage.io.Api;
using OneMessage.io.Client;
using OneMessage.io.Model;

namespace Example
{
    public class SendFileExample
    {
        public static void Main()
        {
            Configuration config = new Configuration();
            config.BasePath = "https://api.1msg.io/YOUR_INSTANCE_NUMBER";
            // Configure API key authorization: token
            config.AddApiKey("token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // config.AddApiKeyPrefix("token", "Bearer");

            var apiInstance = new MessagingApi(config);
            var sendFileRequest = new SendFileRequest(); // SendFileRequest | 

            try
            {
                // Send a File
                SendMessageStatus result = apiInstance.SendFile(sendFileRequest);
                Debug.WriteLine(result);
            }
            catch (ApiException  e)
            {
                Debug.Print("Exception when calling MessagingApi.SendFile: " + e.Message);
                Debug.Print("Status Code: " + e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

#### Using the SendFileWithHttpInfo variant
This returns an ApiResponse object which contains the response data, status code and headers.

```csharp
try
{
    // Send a File
    ApiResponse<SendMessageStatus> response = apiInstance.SendFileWithHttpInfo(sendFileRequest);
    Debug.Write("Status Code: " + response.StatusCode);
    Debug.Write("Response Headers: " + response.Headers);
    Debug.Write("Response Body: " + response.Data);
}
catch (ApiException e)
{
    Debug.Print("Exception when calling MessagingApi.SendFileWithHttpInfo: " + e.Message);
    Debug.Print("Status Code: " + e.ErrorCode);
    Debug.Print(e.StackTrace);
}
```

### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **sendFileRequest** | [**SendFileRequest**](SendFileRequest.md) |  |  |

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
| **200** | Server response example |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="sendlist"></a>
# **SendList**
> SendMessageStatus SendList (SendListRequest sendListRequest)

Send List Message

Send Interactive List Message to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.

### Example
```csharp
using System.Collections.Generic;
using System.Diagnostics;
using OneMessage.io.Api;
using OneMessage.io.Client;
using OneMessage.io.Model;

namespace Example
{
    public class SendListExample
    {
        public static void Main()
        {
            Configuration config = new Configuration();
            config.BasePath = "https://api.1msg.io/YOUR_INSTANCE_NUMBER";
            // Configure API key authorization: token
            config.AddApiKey("token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // config.AddApiKeyPrefix("token", "Bearer");

            var apiInstance = new MessagingApi(config);
            var sendListRequest = new SendListRequest(); // SendListRequest | 

            try
            {
                // Send List Message
                SendMessageStatus result = apiInstance.SendList(sendListRequest);
                Debug.WriteLine(result);
            }
            catch (ApiException  e)
            {
                Debug.Print("Exception when calling MessagingApi.SendList: " + e.Message);
                Debug.Print("Status Code: " + e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

#### Using the SendListWithHttpInfo variant
This returns an ApiResponse object which contains the response data, status code and headers.

```csharp
try
{
    // Send List Message
    ApiResponse<SendMessageStatus> response = apiInstance.SendListWithHttpInfo(sendListRequest);
    Debug.Write("Status Code: " + response.StatusCode);
    Debug.Write("Response Headers: " + response.Headers);
    Debug.Write("Response Body: " + response.Data);
}
catch (ApiException e)
{
    Debug.Print("Exception when calling MessagingApi.SendListWithHttpInfo: " + e.Message);
    Debug.Print("Status Code: " + e.ErrorCode);
    Debug.Print(e.StackTrace);
}
```

### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **sendListRequest** | [**SendListRequest**](SendListRequest.md) |  |  |

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
| **200** | Server response example |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="sendlocation"></a>
# **SendLocation**
> SendMessageStatus SendLocation (SendLocationRequest sendLocationRequest)

Send a Location

Send a location to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.

### Example
```csharp
using System.Collections.Generic;
using System.Diagnostics;
using OneMessage.io.Api;
using OneMessage.io.Client;
using OneMessage.io.Model;

namespace Example
{
    public class SendLocationExample
    {
        public static void Main()
        {
            Configuration config = new Configuration();
            config.BasePath = "https://api.1msg.io/YOUR_INSTANCE_NUMBER";
            // Configure API key authorization: token
            config.AddApiKey("token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // config.AddApiKeyPrefix("token", "Bearer");

            var apiInstance = new MessagingApi(config);
            var sendLocationRequest = new SendLocationRequest(); // SendLocationRequest | 

            try
            {
                // Send a Location
                SendMessageStatus result = apiInstance.SendLocation(sendLocationRequest);
                Debug.WriteLine(result);
            }
            catch (ApiException  e)
            {
                Debug.Print("Exception when calling MessagingApi.SendLocation: " + e.Message);
                Debug.Print("Status Code: " + e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

#### Using the SendLocationWithHttpInfo variant
This returns an ApiResponse object which contains the response data, status code and headers.

```csharp
try
{
    // Send a Location
    ApiResponse<SendMessageStatus> response = apiInstance.SendLocationWithHttpInfo(sendLocationRequest);
    Debug.Write("Status Code: " + response.StatusCode);
    Debug.Write("Response Headers: " + response.Headers);
    Debug.Write("Response Body: " + response.Data);
}
catch (ApiException e)
{
    Debug.Print("Exception when calling MessagingApi.SendLocationWithHttpInfo: " + e.Message);
    Debug.Print("Status Code: " + e.ErrorCode);
    Debug.Print(e.StackTrace);
}
```

### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **sendLocationRequest** | [**SendLocationRequest**](SendLocationRequest.md) |  |  |

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
| **200** | Server response example |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="sendmessage"></a>
# **SendMessage**
> SendMessageStatus SendMessage (SendMessageRequest sendMessageRequest)

Send a Message

Send a message to an existing chat. (Only if the dialogue has an Open Session). The message will be added to the queue for sending and delivered even if the phone is disconnected from the Internet or authorization is not passed.  Only one of two parameters is needed to determine the destination - chatId or phone.

### Example
```csharp
using System.Collections.Generic;
using System.Diagnostics;
using OneMessage.io.Api;
using OneMessage.io.Client;
using OneMessage.io.Model;

namespace Example
{
    public class SendMessageExample
    {
        public static void Main()
        {
            Configuration config = new Configuration();
            config.BasePath = "https://api.1msg.io/YOUR_INSTANCE_NUMBER";
            // Configure API key authorization: token
            config.AddApiKey("token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // config.AddApiKeyPrefix("token", "Bearer");

            var apiInstance = new MessagingApi(config);
            var sendMessageRequest = new SendMessageRequest(); // SendMessageRequest | 

            try
            {
                // Send a Message
                SendMessageStatus result = apiInstance.SendMessage(sendMessageRequest);
                Debug.WriteLine(result);
            }
            catch (ApiException  e)
            {
                Debug.Print("Exception when calling MessagingApi.SendMessage: " + e.Message);
                Debug.Print("Status Code: " + e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

#### Using the SendMessageWithHttpInfo variant
This returns an ApiResponse object which contains the response data, status code and headers.

```csharp
try
{
    // Send a Message
    ApiResponse<SendMessageStatus> response = apiInstance.SendMessageWithHttpInfo(sendMessageRequest);
    Debug.Write("Status Code: " + response.StatusCode);
    Debug.Write("Response Headers: " + response.Headers);
    Debug.Write("Response Body: " + response.Data);
}
catch (ApiException e)
{
    Debug.Print("Exception when calling MessagingApi.SendMessageWithHttpInfo: " + e.Message);
    Debug.Print("Status Code: " + e.ErrorCode);
    Debug.Print(e.StackTrace);
}
```

### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **sendMessageRequest** | [**SendMessageRequest**](SendMessageRequest.md) |  |  |

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
| **200** | Server response example |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

