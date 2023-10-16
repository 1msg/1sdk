# OneMessage.io.Api.WebhooksApi

All URIs are relative to *https://api.1msg.io/YOUR_INSTANCE_NUMBER*

| Method | HTTP request | Description |
|--------|--------------|-------------|
| [**AckHookInfo**](WebhooksApi.md#ackhookinfo) | **GET** /hookInfo | Check ACKs |
| [**SetWebhook**](WebhooksApi.md#setwebhook) | **POST** /webhook | Set webhook |

<a id="ackhookinfo"></a>
# **AckHookInfo**
> GetAckInfo AckHookInfo (string messageId)

Check ACKs

### Example
```csharp
using System.Collections.Generic;
using System.Diagnostics;
using OneMessage.io.Api;
using OneMessage.io.Client;
using OneMessage.io.Model;

namespace Example
{
    public class AckHookInfoExample
    {
        public static void Main()
        {
            Configuration config = new Configuration();
            config.BasePath = "https://api.1msg.io/YOUR_INSTANCE_NUMBER";
            // Configure API key authorization: token
            config.AddApiKey("token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // config.AddApiKeyPrefix("token", "Bearer");

            var apiInstance = new WebhooksApi(config);
            var messageId = 0XzkmGNn4prUAQlzsHApGNRXQ0U;  // string | Message ID. Example: 0XzkmGNn4prUAQlzsHApGNRXQ0U

            try
            {
                // Check ACKs
                GetAckInfo result = apiInstance.AckHookInfo(messageId);
                Debug.WriteLine(result);
            }
            catch (ApiException  e)
            {
                Debug.Print("Exception when calling WebhooksApi.AckHookInfo: " + e.Message);
                Debug.Print("Status Code: " + e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

#### Using the AckHookInfoWithHttpInfo variant
This returns an ApiResponse object which contains the response data, status code and headers.

```csharp
try
{
    // Check ACKs
    ApiResponse<GetAckInfo> response = apiInstance.AckHookInfoWithHttpInfo(messageId);
    Debug.Write("Status Code: " + response.StatusCode);
    Debug.Write("Response Headers: " + response.Headers);
    Debug.Write("Response Body: " + response.Data);
}
catch (ApiException e)
{
    Debug.Print("Exception when calling WebhooksApi.AckHookInfoWithHttpInfo: " + e.Message);
    Debug.Print("Status Code: " + e.ErrorCode);
    Debug.Print(e.StackTrace);
}
```

### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **messageId** | **string** | Message ID. Example: 0XzkmGNn4prUAQlzsHApGNRXQ0U |  |

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
| **200** | Server response example |  -  |
| **401** | Invalid token |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="setwebhook"></a>
# **SetWebhook**
> SetWebhookStatus SetWebhook (WebhookUrl webhookUrl)

Set webhook

Sets the URL for receiving webhook notifications of new messages and message delivery events (ack).  **API responses in \"Callbacks\" tab**

### Example
```csharp
using System.Collections.Generic;
using System.Diagnostics;
using OneMessage.io.Api;
using OneMessage.io.Client;
using OneMessage.io.Model;

namespace Example
{
    public class SetWebhookExample
    {
        public static void Main()
        {
            Configuration config = new Configuration();
            config.BasePath = "https://api.1msg.io/YOUR_INSTANCE_NUMBER";
            // Configure API key authorization: token
            config.AddApiKey("token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // config.AddApiKeyPrefix("token", "Bearer");

            var apiInstance = new WebhooksApi(config);
            var webhookUrl = new WebhookUrl(); // WebhookUrl | 

            try
            {
                // Set webhook
                SetWebhookStatus result = apiInstance.SetWebhook(webhookUrl);
                Debug.WriteLine(result);
            }
            catch (ApiException  e)
            {
                Debug.Print("Exception when calling WebhooksApi.SetWebhook: " + e.Message);
                Debug.Print("Status Code: " + e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

#### Using the SetWebhookWithHttpInfo variant
This returns an ApiResponse object which contains the response data, status code and headers.

```csharp
try
{
    // Set webhook
    ApiResponse<SetWebhookStatus> response = apiInstance.SetWebhookWithHttpInfo(webhookUrl);
    Debug.Write("Status Code: " + response.StatusCode);
    Debug.Write("Response Headers: " + response.Headers);
    Debug.Write("Response Body: " + response.Data);
}
catch (ApiException e)
{
    Debug.Print("Exception when calling WebhooksApi.SetWebhookWithHttpInfo: " + e.Message);
    Debug.Print("Status Code: " + e.ErrorCode);
    Debug.Print(e.StackTrace);
}
```

### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **webhookUrl** | [**WebhookUrl**](WebhookUrl.md) |  |  |

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
| **200** | Server response example |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

