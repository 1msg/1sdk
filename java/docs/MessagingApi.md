# MessagingApi

All URIs are relative to *https://api.1msg.io/YOUR_INSTANCE_NUMBER*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**messagesList**](MessagingApi.md#messagesList) | **GET** /messages | Get messages list |
| [**readMessage**](MessagingApi.md#readMessage) | **POST** /readMessage | Mark message as read |
| [**sendContact**](MessagingApi.md#sendContact) | **POST** /sendContact | Send a Contact |
| [**sendFile**](MessagingApi.md#sendFile) | **POST** /sendFile | Send a File |
| [**sendList**](MessagingApi.md#sendList) | **POST** /sendList | Send List Message |
| [**sendLocation**](MessagingApi.md#sendLocation) | **POST** /sendLocation | Send a Location |
| [**sendMessage**](MessagingApi.md#sendMessage) | **POST** /sendMessage | Send a Message |


<a id="messagesList"></a>
# **messagesList**
> GetMessages messagesList(last, lastMessageNumber, firstMessageNumber, limit, chatId, minTime, maxTime, msgId)

Get messages list



### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MessagingApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.1msg.io/YOUR_INSTANCE_NUMBER");
    
    // Configure API key authorization: token
    ApiKeyAuth token = (ApiKeyAuth) defaultClient.getAuthentication("token");
    token.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //token.setApiKeyPrefix("Token");

    MessagingApi apiInstance = new MessagingApi(defaultClient);
    Boolean last = true; // Boolean | Displays the last messages. If this parameter is passed, then lastMessageNumber is ignored.
    Integer lastMessageNumber = 100; // Integer | The lastMessageNumber parameter from the last response. Example: 100
    Integer firstMessageNumber = 1; // Integer | The firstMessageNumber parameter from the last response. Example: 1
    Integer limit = 200; // Integer | Sets length of the message list. Default 100. With value 0 returns all messages.
    String chatId = "556123122026@c.us"; // String | Filter messages by chatId  Chat ID from the message list. Example: 556123122026@c.us
    Integer minTime = 1665396610; // Integer | Filter messages received after specified time. Example: 1665396610
    Integer maxTime = 1665396610; // Integer | Filter messages received before specified time. Example: 1665396610
    String msgId = "0XzkmGNn4prUAQlzsHApGNRXQ0U"; // String | Message ID. Example: 0XzkmGNn4prUAQlzsHApGNRXQ0U
    try {
      GetMessages result = apiInstance.messagesList(last, lastMessageNumber, firstMessageNumber, limit, chatId, minTime, maxTime, msgId);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MessagingApi#messagesList");
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
| **last** | **Boolean**| Displays the last messages. If this parameter is passed, then lastMessageNumber is ignored. | [optional] |
| **lastMessageNumber** | **Integer**| The lastMessageNumber parameter from the last response. Example: 100 | [optional] |
| **firstMessageNumber** | **Integer**| The firstMessageNumber parameter from the last response. Example: 1 | [optional] |
| **limit** | **Integer**| Sets length of the message list. Default 100. With value 0 returns all messages. | [optional] |
| **chatId** | **String**| Filter messages by chatId  Chat ID from the message list. Example: 556123122026@c.us | [optional] |
| **minTime** | **Integer**| Filter messages received after specified time. Example: 1665396610 | [optional] |
| **maxTime** | **Integer**| Filter messages received before specified time. Example: 1665396610 | [optional] |
| **msgId** | **String**| Message ID. Example: 0XzkmGNn4prUAQlzsHApGNRXQ0U | [optional] |

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

<a id="readMessage"></a>
# **readMessage**
> SetMe readMessage(readMessageRequest)

Mark message as read



### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MessagingApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.1msg.io/YOUR_INSTANCE_NUMBER");
    
    // Configure API key authorization: token
    ApiKeyAuth token = (ApiKeyAuth) defaultClient.getAuthentication("token");
    token.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //token.setApiKeyPrefix("Token");

    MessagingApi apiInstance = new MessagingApi(defaultClient);
    ReadMessageRequest readMessageRequest = new ReadMessageRequest(); // ReadMessageRequest | 
    try {
      SetMe result = apiInstance.readMessage(readMessageRequest);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MessagingApi#readMessage");
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
| **readMessageRequest** | [**ReadMessageRequest**](ReadMessageRequest.md)|  | [optional] |

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

<a id="sendContact"></a>
# **sendContact**
> SendMessageStatus sendContact(sendContactRequest)

Send a Contact

Send a contact to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MessagingApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.1msg.io/YOUR_INSTANCE_NUMBER");
    
    // Configure API key authorization: token
    ApiKeyAuth token = (ApiKeyAuth) defaultClient.getAuthentication("token");
    token.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //token.setApiKeyPrefix("Token");

    MessagingApi apiInstance = new MessagingApi(defaultClient);
    SendContactRequest sendContactRequest = new SendContactRequest(); // SendContactRequest | 
    try {
      SendMessageStatus result = apiInstance.sendContact(sendContactRequest);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MessagingApi#sendContact");
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
| **sendContactRequest** | [**SendContactRequest**](SendContactRequest.md)|  | |

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

<a id="sendFile"></a>
# **sendFile**
> SendMessageStatus sendFile(sendFileRequest)

Send a File

Send a file to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MessagingApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.1msg.io/YOUR_INSTANCE_NUMBER");
    
    // Configure API key authorization: token
    ApiKeyAuth token = (ApiKeyAuth) defaultClient.getAuthentication("token");
    token.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //token.setApiKeyPrefix("Token");

    MessagingApi apiInstance = new MessagingApi(defaultClient);
    SendFileRequest sendFileRequest = new SendFileRequest(); // SendFileRequest | 
    try {
      SendMessageStatus result = apiInstance.sendFile(sendFileRequest);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MessagingApi#sendFile");
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
| **sendFileRequest** | [**SendFileRequest**](SendFileRequest.md)|  | |

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

<a id="sendList"></a>
# **sendList**
> SendMessageStatus sendList(sendListRequest)

Send List Message

Send Interactive List Message to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MessagingApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.1msg.io/YOUR_INSTANCE_NUMBER");
    
    // Configure API key authorization: token
    ApiKeyAuth token = (ApiKeyAuth) defaultClient.getAuthentication("token");
    token.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //token.setApiKeyPrefix("Token");

    MessagingApi apiInstance = new MessagingApi(defaultClient);
    SendListRequest sendListRequest = new SendListRequest(); // SendListRequest | 
    try {
      SendMessageStatus result = apiInstance.sendList(sendListRequest);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MessagingApi#sendList");
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
| **sendListRequest** | [**SendListRequest**](SendListRequest.md)|  | |

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

<a id="sendLocation"></a>
# **sendLocation**
> SendMessageStatus sendLocation(sendLocationRequest)

Send a Location

Send a location to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MessagingApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.1msg.io/YOUR_INSTANCE_NUMBER");
    
    // Configure API key authorization: token
    ApiKeyAuth token = (ApiKeyAuth) defaultClient.getAuthentication("token");
    token.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //token.setApiKeyPrefix("Token");

    MessagingApi apiInstance = new MessagingApi(defaultClient);
    SendLocationRequest sendLocationRequest = new SendLocationRequest(); // SendLocationRequest | 
    try {
      SendMessageStatus result = apiInstance.sendLocation(sendLocationRequest);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MessagingApi#sendLocation");
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
| **sendLocationRequest** | [**SendLocationRequest**](SendLocationRequest.md)|  | |

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

<a id="sendMessage"></a>
# **sendMessage**
> SendMessageStatus sendMessage(sendMessageRequest)

Send a Message

Send a message to an existing chat. (Only if the dialogue has an Open Session). The message will be added to the queue for sending and delivered even if the phone is disconnected from the Internet or authorization is not passed.  Only one of two parameters is needed to determine the destination - chatId or phone.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MessagingApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.1msg.io/YOUR_INSTANCE_NUMBER");
    
    // Configure API key authorization: token
    ApiKeyAuth token = (ApiKeyAuth) defaultClient.getAuthentication("token");
    token.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //token.setApiKeyPrefix("Token");

    MessagingApi apiInstance = new MessagingApi(defaultClient);
    SendMessageRequest sendMessageRequest = new SendMessageRequest(); // SendMessageRequest | 
    try {
      SendMessageStatus result = apiInstance.sendMessage(sendMessageRequest);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MessagingApi#sendMessage");
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
| **sendMessageRequest** | [**SendMessageRequest**](SendMessageRequest.md)|  | |

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

