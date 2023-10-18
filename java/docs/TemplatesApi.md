# TemplatesApi

All URIs are relative to *https://api.1msg.io/YOUR_INSTANCE_NUMBER*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**addTemplate**](TemplatesApi.md#addTemplate) | **POST** /addTemplate | Create template |
| [**removeTemplate**](TemplatesApi.md#removeTemplate) | **POST** /removeTemplate | Remove template |
| [**sendTemplate**](TemplatesApi.md#sendTemplate) | **POST** /sendTemplate | Send Template Message |
| [**templatesList**](TemplatesApi.md#templatesList) | **GET** /templates | Get templates list |


<a id="addTemplate"></a>
# **addTemplate**
> Object addTemplate(addTemplateRequest)

Create template

Create new template for sending.

### Example
```java
// Import classes:
import io.onemessage.ApiClient;
import io.onemessage.ApiException;
import io.onemessage.Configuration;
import io.onemessage.auth.*;
import io.onemessage.models.*;
import io.onemessage.client.TemplatesApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.1msg.io/YOUR_INSTANCE_NUMBER");
    
    // Configure API key authorization: token
    ApiKeyAuth token = (ApiKeyAuth) defaultClient.getAuthentication("token");
    token.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //token.setApiKeyPrefix("Token");

    TemplatesApi apiInstance = new TemplatesApi(defaultClient);
    AddTemplateRequest addTemplateRequest = new AddTemplateRequest(); // AddTemplateRequest | 
    try {
      Object result = apiInstance.addTemplate(addTemplateRequest);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling TemplatesApi#addTemplate");
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
| **addTemplateRequest** | [**AddTemplateRequest**](AddTemplateRequest.md)|  | |

### Return type

**Object**

### Authorization

[token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/x-www-form-urlencoded, application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Server response example |  -  |

<a id="removeTemplate"></a>
# **removeTemplate**
> SetMe removeTemplate(removeTemplateRequest)

Remove template

Deleted template can not be restored.

### Example
```java
// Import classes:
import io.onemessage.ApiClient;
import io.onemessage.ApiException;
import io.onemessage.Configuration;
import io.onemessage.auth.*;
import io.onemessage.models.*;
import io.onemessage.client.TemplatesApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.1msg.io/YOUR_INSTANCE_NUMBER");
    
    // Configure API key authorization: token
    ApiKeyAuth token = (ApiKeyAuth) defaultClient.getAuthentication("token");
    token.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //token.setApiKeyPrefix("Token");

    TemplatesApi apiInstance = new TemplatesApi(defaultClient);
    RemoveTemplateRequest removeTemplateRequest = new RemoveTemplateRequest(); // RemoveTemplateRequest | 
    try {
      SetMe result = apiInstance.removeTemplate(removeTemplateRequest);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling TemplatesApi#removeTemplate");
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
| **removeTemplateRequest** | [**RemoveTemplateRequest**](RemoveTemplateRequest.md)|  | |

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

<a id="sendTemplate"></a>
# **sendTemplate**
> SendMessageStatus sendTemplate(sendTemplateRequest)

Send Template Message

Send Template Message to a new or existing chat. Only one of two parameters is needed to determine the destination - chatId or phone.  Example:  {\&quot;template\&quot;:\&quot;template_name\&quot;,\&quot;language\&quot;:{\&quot;policy\&quot;:\&quot;deterministic\&quot;,\&quot;code\&quot;:\&quot;en\&quot;},\&quot;namespace\&quot;:\&quot;namespace_id\&quot;,\&quot;params\&quot;:[{\&quot;type\&quot;:\&quot;header\&quot;,\&quot;parameters\&quot;:[{\&quot;type\&quot;:\&quot;image\&quot;,\&quot;image\&quot;: {\&quot;link\&quot;:\&quot;https://...\&quot;}}]},{\&quot;type\&quot;:\&quot;body\&quot;,\&quot;parameters\&quot;:[{\&quot;type\&quot;:\&quot;text\&quot;,\&quot;text\&quot;:\&quot;test\&quot;}]}],\&quot;phone\&quot;:\&quot;556123122026\&quot;}

### Example
```java
// Import classes:
import io.onemessage.ApiClient;
import io.onemessage.ApiException;
import io.onemessage.Configuration;
import io.onemessage.auth.*;
import io.onemessage.models.*;
import io.onemessage.client.TemplatesApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.1msg.io/YOUR_INSTANCE_NUMBER");
    
    // Configure API key authorization: token
    ApiKeyAuth token = (ApiKeyAuth) defaultClient.getAuthentication("token");
    token.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //token.setApiKeyPrefix("Token");

    TemplatesApi apiInstance = new TemplatesApi(defaultClient);
    SendTemplateRequest sendTemplateRequest = new SendTemplateRequest(); // SendTemplateRequest | 
    try {
      SendMessageStatus result = apiInstance.sendTemplate(sendTemplateRequest);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling TemplatesApi#sendTemplate");
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
| **sendTemplateRequest** | [**SendTemplateRequest**](SendTemplateRequest.md)|  | |

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

<a id="templatesList"></a>
# **templatesList**
> GetTemplates templatesList()

Get templates list



### Example
```java
// Import classes:
import io.onemessage.ApiClient;
import io.onemessage.ApiException;
import io.onemessage.Configuration;
import io.onemessage.auth.*;
import io.onemessage.models.*;
import io.onemessage.client.TemplatesApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api.1msg.io/YOUR_INSTANCE_NUMBER");
    
    // Configure API key authorization: token
    ApiKeyAuth token = (ApiKeyAuth) defaultClient.getAuthentication("token");
    token.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //token.setApiKeyPrefix("Token");

    TemplatesApi apiInstance = new TemplatesApi(defaultClient);
    try {
      GetTemplates result = apiInstance.templatesList();
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling TemplatesApi#templatesList");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**GetTemplates**](GetTemplates.md)

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

