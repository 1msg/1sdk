# OneMessage.io.Api.ChannelApi

All URIs are relative to *https://api.1msg.io/YOUR_INSTANCE_NUMBER*

| Method | HTTP request | Description |
|--------|--------------|-------------|
| [**GetCommerce**](ChannelApi.md#getcommerce) | **GET** /commerce | Get Commerce Settings |
| [**GetExtendedStatistics**](ChannelApi.md#getextendedstatistics) | **GET** /extendedStatistics | Get Extended Channel statistics |
| [**GetMe**](ChannelApi.md#getme) | **GET** /me | Get Profile Info |
| [**GetSettings**](ChannelApi.md#getsettings) | **GET** /settings | Get Settings |
| [**GetStatistics**](ChannelApi.md#getstatistics) | **GET** /statistics | Get Channel statistics |
| [**GetStatus**](ChannelApi.md#getstatus) | **GET** /status |  Get Status |
| [**OutputIP**](ChannelApi.md#outputip) | **GET** /outputIP | Get channel server IP |
| [**SetMe**](ChannelApi.md#setme) | **POST** /me | Change user info |
| [**SetSettings**](ChannelApi.md#setsettings) | **POST** /settings | Set settings |

<a id="getcommerce"></a>
# **GetCommerce**
> GetCommerce GetCommerce ()

Get Commerce Settings

**is_catalog_visible** - Set to true to show catalog storefront icon or false to hide it. **is_cart_enabled** - Set to true to enable cart or false to disable it.

### Example
```csharp
using System.Collections.Generic;
using System.Diagnostics;
using OneMessage.io.Api;
using OneMessage.io.Client;
using OneMessage.io.Model;

namespace Example
{
    public class GetCommerceExample
    {
        public static void Main()
        {
            Configuration config = new Configuration();
            config.BasePath = "https://api.1msg.io/YOUR_INSTANCE_NUMBER";
            // Configure API key authorization: token
            config.AddApiKey("token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // config.AddApiKeyPrefix("token", "Bearer");

            var apiInstance = new ChannelApi(config);

            try
            {
                // Get Commerce Settings
                GetCommerce result = apiInstance.GetCommerce();
                Debug.WriteLine(result);
            }
            catch (ApiException  e)
            {
                Debug.Print("Exception when calling ChannelApi.GetCommerce: " + e.Message);
                Debug.Print("Status Code: " + e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

#### Using the GetCommerceWithHttpInfo variant
This returns an ApiResponse object which contains the response data, status code and headers.

```csharp
try
{
    // Get Commerce Settings
    ApiResponse<GetCommerce> response = apiInstance.GetCommerceWithHttpInfo();
    Debug.Write("Status Code: " + response.StatusCode);
    Debug.Write("Response Headers: " + response.Headers);
    Debug.Write("Response Body: " + response.Data);
}
catch (ApiException e)
{
    Debug.Print("Exception when calling ChannelApi.GetCommerceWithHttpInfo: " + e.Message);
    Debug.Print("Status Code: " + e.ErrorCode);
    Debug.Print(e.StackTrace);
}
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
| **200** | Server response example |  -  |
| **401** | Invalid token |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="getextendedstatistics"></a>
# **GetExtendedStatistics**
> ChannelExtendedStatistics GetExtendedStatistics ()

Get Extended Channel statistics

Get channel usage extended statistics

### Example
```csharp
using System.Collections.Generic;
using System.Diagnostics;
using OneMessage.io.Api;
using OneMessage.io.Client;
using OneMessage.io.Model;

namespace Example
{
    public class GetExtendedStatisticsExample
    {
        public static void Main()
        {
            Configuration config = new Configuration();
            config.BasePath = "https://api.1msg.io/YOUR_INSTANCE_NUMBER";
            // Configure API key authorization: token
            config.AddApiKey("token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // config.AddApiKeyPrefix("token", "Bearer");

            var apiInstance = new ChannelApi(config);

            try
            {
                // Get Extended Channel statistics
                ChannelExtendedStatistics result = apiInstance.GetExtendedStatistics();
                Debug.WriteLine(result);
            }
            catch (ApiException  e)
            {
                Debug.Print("Exception when calling ChannelApi.GetExtendedStatistics: " + e.Message);
                Debug.Print("Status Code: " + e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

#### Using the GetExtendedStatisticsWithHttpInfo variant
This returns an ApiResponse object which contains the response data, status code and headers.

```csharp
try
{
    // Get Extended Channel statistics
    ApiResponse<ChannelExtendedStatistics> response = apiInstance.GetExtendedStatisticsWithHttpInfo();
    Debug.Write("Status Code: " + response.StatusCode);
    Debug.Write("Response Headers: " + response.Headers);
    Debug.Write("Response Body: " + response.Data);
}
catch (ApiException e)
{
    Debug.Print("Exception when calling ChannelApi.GetExtendedStatisticsWithHttpInfo: " + e.Message);
    Debug.Print("Status Code: " + e.ErrorCode);
    Debug.Print(e.StackTrace);
}
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
| **200** | Server response example |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="getme"></a>
# **GetMe**
> GetMe GetMe ()

Get Profile Info

Use this edge to retrieve your profile's About info

### Example
```csharp
using System.Collections.Generic;
using System.Diagnostics;
using OneMessage.io.Api;
using OneMessage.io.Client;
using OneMessage.io.Model;

namespace Example
{
    public class GetMeExample
    {
        public static void Main()
        {
            Configuration config = new Configuration();
            config.BasePath = "https://api.1msg.io/YOUR_INSTANCE_NUMBER";
            // Configure API key authorization: token
            config.AddApiKey("token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // config.AddApiKeyPrefix("token", "Bearer");

            var apiInstance = new ChannelApi(config);

            try
            {
                // Get Profile Info
                GetMe result = apiInstance.GetMe();
                Debug.WriteLine(result);
            }
            catch (ApiException  e)
            {
                Debug.Print("Exception when calling ChannelApi.GetMe: " + e.Message);
                Debug.Print("Status Code: " + e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

#### Using the GetMeWithHttpInfo variant
This returns an ApiResponse object which contains the response data, status code and headers.

```csharp
try
{
    // Get Profile Info
    ApiResponse<GetMe> response = apiInstance.GetMeWithHttpInfo();
    Debug.Write("Status Code: " + response.StatusCode);
    Debug.Write("Response Headers: " + response.Headers);
    Debug.Write("Response Body: " + response.Data);
}
catch (ApiException e)
{
    Debug.Print("Exception when calling ChannelApi.GetMeWithHttpInfo: " + e.Message);
    Debug.Print("Status Code: " + e.ErrorCode);
    Debug.Print(e.StackTrace);
}
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
| **200** | Server response example |  -  |
| **401** | Invalid token |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="getsettings"></a>
# **GetSettings**
> Settings GetSettings ()

Get Settings

**webhookUrl** - Http or https URL for receiving notifications.

### Example
```csharp
using System.Collections.Generic;
using System.Diagnostics;
using OneMessage.io.Api;
using OneMessage.io.Client;
using OneMessage.io.Model;

namespace Example
{
    public class GetSettingsExample
    {
        public static void Main()
        {
            Configuration config = new Configuration();
            config.BasePath = "https://api.1msg.io/YOUR_INSTANCE_NUMBER";
            // Configure API key authorization: token
            config.AddApiKey("token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // config.AddApiKeyPrefix("token", "Bearer");

            var apiInstance = new ChannelApi(config);

            try
            {
                // Get Settings
                Settings result = apiInstance.GetSettings();
                Debug.WriteLine(result);
            }
            catch (ApiException  e)
            {
                Debug.Print("Exception when calling ChannelApi.GetSettings: " + e.Message);
                Debug.Print("Status Code: " + e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

#### Using the GetSettingsWithHttpInfo variant
This returns an ApiResponse object which contains the response data, status code and headers.

```csharp
try
{
    // Get Settings
    ApiResponse<Settings> response = apiInstance.GetSettingsWithHttpInfo();
    Debug.Write("Status Code: " + response.StatusCode);
    Debug.Write("Response Headers: " + response.Headers);
    Debug.Write("Response Body: " + response.Data);
}
catch (ApiException e)
{
    Debug.Print("Exception when calling ChannelApi.GetSettingsWithHttpInfo: " + e.Message);
    Debug.Print("Status Code: " + e.ErrorCode);
    Debug.Print(e.StackTrace);
}
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
| **200** | Server response example |  -  |
| **401** | Invalid token |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="getstatistics"></a>
# **GetStatistics**
> ChannelStatistics GetStatistics (string date = null)

Get Channel statistics

Get channel usage statistics

### Example
```csharp
using System.Collections.Generic;
using System.Diagnostics;
using OneMessage.io.Api;
using OneMessage.io.Client;
using OneMessage.io.Model;

namespace Example
{
    public class GetStatisticsExample
    {
        public static void Main()
        {
            Configuration config = new Configuration();
            config.BasePath = "https://api.1msg.io/YOUR_INSTANCE_NUMBER";
            // Configure API key authorization: token
            config.AddApiKey("token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // config.AddApiKeyPrefix("token", "Bearer");

            var apiInstance = new ChannelApi(config);
            var date = 03.2022;  // string | Month and year in format mm.YYYY. (optional) 

            try
            {
                // Get Channel statistics
                ChannelStatistics result = apiInstance.GetStatistics(date);
                Debug.WriteLine(result);
            }
            catch (ApiException  e)
            {
                Debug.Print("Exception when calling ChannelApi.GetStatistics: " + e.Message);
                Debug.Print("Status Code: " + e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

#### Using the GetStatisticsWithHttpInfo variant
This returns an ApiResponse object which contains the response data, status code and headers.

```csharp
try
{
    // Get Channel statistics
    ApiResponse<ChannelStatistics> response = apiInstance.GetStatisticsWithHttpInfo(date);
    Debug.Write("Status Code: " + response.StatusCode);
    Debug.Write("Response Headers: " + response.Headers);
    Debug.Write("Response Body: " + response.Data);
}
catch (ApiException e)
{
    Debug.Print("Exception when calling ChannelApi.GetStatisticsWithHttpInfo: " + e.Message);
    Debug.Print("Status Code: " + e.ErrorCode);
    Debug.Print(e.StackTrace);
}
```

### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **date** | **string** | Month and year in format mm.YYYY. | [optional]  |

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
| **200** | Server response example |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="getstatus"></a>
# **GetStatus**
> ChannelStatus GetStatus ()

 Get Status

Returns the status of your WhatsApp Business API client. Channel statuses:  **connected**_/_**connecting** - everything is ok.  **disconnected** - The Coreapp is not connected to the WhatsApp servers.  **uninitialized** - The application could be in the process of upgrading or initializing the database schema. Try again in a few minutes and contact Support if you continue to see this status.  **unregistered** - You need to register your WhatsApp Business API client. Either you have been blocked and need to take some action (contact Support)

### Example
```csharp
using System.Collections.Generic;
using System.Diagnostics;
using OneMessage.io.Api;
using OneMessage.io.Client;
using OneMessage.io.Model;

namespace Example
{
    public class GetStatusExample
    {
        public static void Main()
        {
            Configuration config = new Configuration();
            config.BasePath = "https://api.1msg.io/YOUR_INSTANCE_NUMBER";
            // Configure API key authorization: token
            config.AddApiKey("token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // config.AddApiKeyPrefix("token", "Bearer");

            var apiInstance = new ChannelApi(config);

            try
            {
                //  Get Status
                ChannelStatus result = apiInstance.GetStatus();
                Debug.WriteLine(result);
            }
            catch (ApiException  e)
            {
                Debug.Print("Exception when calling ChannelApi.GetStatus: " + e.Message);
                Debug.Print("Status Code: " + e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

#### Using the GetStatusWithHttpInfo variant
This returns an ApiResponse object which contains the response data, status code and headers.

```csharp
try
{
    //  Get Status
    ApiResponse<ChannelStatus> response = apiInstance.GetStatusWithHttpInfo();
    Debug.Write("Status Code: " + response.StatusCode);
    Debug.Write("Response Headers: " + response.Headers);
    Debug.Write("Response Body: " + response.Data);
}
catch (ApiException e)
{
    Debug.Print("Exception when calling ChannelApi.GetStatusWithHttpInfo: " + e.Message);
    Debug.Print("Status Code: " + e.ErrorCode);
    Debug.Print(e.StackTrace);
}
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
| **200** | Server response example |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="outputip"></a>
# **OutputIP**
> GetIP OutputIP ()

Get channel server IP

### Example
```csharp
using System.Collections.Generic;
using System.Diagnostics;
using OneMessage.io.Api;
using OneMessage.io.Client;
using OneMessage.io.Model;

namespace Example
{
    public class OutputIPExample
    {
        public static void Main()
        {
            Configuration config = new Configuration();
            config.BasePath = "https://api.1msg.io/YOUR_INSTANCE_NUMBER";
            // Configure API key authorization: token
            config.AddApiKey("token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // config.AddApiKeyPrefix("token", "Bearer");

            var apiInstance = new ChannelApi(config);

            try
            {
                // Get channel server IP
                GetIP result = apiInstance.OutputIP();
                Debug.WriteLine(result);
            }
            catch (ApiException  e)
            {
                Debug.Print("Exception when calling ChannelApi.OutputIP: " + e.Message);
                Debug.Print("Status Code: " + e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

#### Using the OutputIPWithHttpInfo variant
This returns an ApiResponse object which contains the response data, status code and headers.

```csharp
try
{
    // Get channel server IP
    ApiResponse<GetIP> response = apiInstance.OutputIPWithHttpInfo();
    Debug.Write("Status Code: " + response.StatusCode);
    Debug.Write("Response Headers: " + response.Headers);
    Debug.Write("Response Body: " + response.Data);
}
catch (ApiException e)
{
    Debug.Print("Exception when calling ChannelApi.OutputIPWithHttpInfo: " + e.Message);
    Debug.Print("Status Code: " + e.ErrorCode);
    Debug.Print(e.StackTrace);
}
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
| **200** | Server response example |  -  |
| **401** | Invalid token |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="setme"></a>
# **SetMe**
> SetMe SetMe (SetMeRequest setMeRequest)

Change user info

Change user info

### Example
```csharp
using System.Collections.Generic;
using System.Diagnostics;
using OneMessage.io.Api;
using OneMessage.io.Client;
using OneMessage.io.Model;

namespace Example
{
    public class SetMeExample
    {
        public static void Main()
        {
            Configuration config = new Configuration();
            config.BasePath = "https://api.1msg.io/YOUR_INSTANCE_NUMBER";
            // Configure API key authorization: token
            config.AddApiKey("token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // config.AddApiKeyPrefix("token", "Bearer");

            var apiInstance = new ChannelApi(config);
            var setMeRequest = new SetMeRequest(); // SetMeRequest | 

            try
            {
                // Change user info
                SetMe result = apiInstance.SetMe(setMeRequest);
                Debug.WriteLine(result);
            }
            catch (ApiException  e)
            {
                Debug.Print("Exception when calling ChannelApi.SetMe: " + e.Message);
                Debug.Print("Status Code: " + e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

#### Using the SetMeWithHttpInfo variant
This returns an ApiResponse object which contains the response data, status code and headers.

```csharp
try
{
    // Change user info
    ApiResponse<SetMe> response = apiInstance.SetMeWithHttpInfo(setMeRequest);
    Debug.Write("Status Code: " + response.StatusCode);
    Debug.Write("Response Headers: " + response.Headers);
    Debug.Write("Response Body: " + response.Data);
}
catch (ApiException e)
{
    Debug.Print("Exception when calling ChannelApi.SetMeWithHttpInfo: " + e.Message);
    Debug.Print("Status Code: " + e.ErrorCode);
    Debug.Print(e.StackTrace);
}
```

### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **setMeRequest** | [**SetMeRequest**](SetMeRequest.md) |  |  |

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

<a id="setsettings"></a>
# **SetSettings**
> SetSettings200Response SetSettings (Settings settings)

Set settings

**webhookUrl** - Http or https URL for receiving notifications.

### Example
```csharp
using System.Collections.Generic;
using System.Diagnostics;
using OneMessage.io.Api;
using OneMessage.io.Client;
using OneMessage.io.Model;

namespace Example
{
    public class SetSettingsExample
    {
        public static void Main()
        {
            Configuration config = new Configuration();
            config.BasePath = "https://api.1msg.io/YOUR_INSTANCE_NUMBER";
            // Configure API key authorization: token
            config.AddApiKey("token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // config.AddApiKeyPrefix("token", "Bearer");

            var apiInstance = new ChannelApi(config);
            var settings = new Settings(); // Settings | 

            try
            {
                // Set settings
                SetSettings200Response result = apiInstance.SetSettings(settings);
                Debug.WriteLine(result);
            }
            catch (ApiException  e)
            {
                Debug.Print("Exception when calling ChannelApi.SetSettings: " + e.Message);
                Debug.Print("Status Code: " + e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

#### Using the SetSettingsWithHttpInfo variant
This returns an ApiResponse object which contains the response data, status code and headers.

```csharp
try
{
    // Set settings
    ApiResponse<SetSettings200Response> response = apiInstance.SetSettingsWithHttpInfo(settings);
    Debug.Write("Status Code: " + response.StatusCode);
    Debug.Write("Response Headers: " + response.Headers);
    Debug.Write("Response Body: " + response.Data);
}
catch (ApiException e)
{
    Debug.Print("Exception when calling ChannelApi.SetSettingsWithHttpInfo: " + e.Message);
    Debug.Print("Status Code: " + e.ErrorCode);
    Debug.Print(e.StackTrace);
}
```

### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **settings** | [**Settings**](Settings.md) |  |  |

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
| **200** | Server response example |  -  |
| **401** | Invalid token |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

