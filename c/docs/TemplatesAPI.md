# TemplatesAPI

All URIs are relative to *https://api.1msg.io/YOUR_INSTANCE_NUMBER*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TemplatesAPI_addTemplate**](TemplatesAPI.md#TemplatesAPI_addTemplate) | **POST** /addTemplate | Create template
[**TemplatesAPI_removeTemplate**](TemplatesAPI.md#TemplatesAPI_removeTemplate) | **POST** /removeTemplate | Remove template
[**TemplatesAPI_sendTemplate**](TemplatesAPI.md#TemplatesAPI_sendTemplate) | **POST** /sendTemplate | Send Template Message
[**TemplatesAPI_templatesList**](TemplatesAPI.md#TemplatesAPI_templatesList) | **GET** /templates | Get templates list


# **TemplatesAPI_addTemplate**
```c
// Create template
//
// Create new template for sending.
//
object_t* TemplatesAPI_addTemplate(apiClient_t *apiClient, add_template_request_t * add_template_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**add_template_request** | **[add_template_request_t](add_template_request.md) \*** |  | 

### Return type

[object_t](object.md) *


### Authorization

[token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/x-www-form-urlencoded, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TemplatesAPI_removeTemplate**
```c
// Remove template
//
// Deleted template can not be restored.
//
set_me_t* TemplatesAPI_removeTemplate(apiClient_t *apiClient, remove_template_request_t * remove_template_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**remove_template_request** | **[remove_template_request_t](remove_template_request.md) \*** |  | 

### Return type

[set_me_t](set_me.md) *


### Authorization

[token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/x-www-form-urlencoded, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TemplatesAPI_sendTemplate**
```c
// Send Template Message
//
// Send Template Message to a new or existing chat. Only one of two parameters is needed to determine the destination - chatId or phone.  Example:  {\"template\":\"template_name\",\"language\":{\"policy\":\"deterministic\",\"code\":\"en\"},\"namespace\":\"namespace_id\",\"params\":[{\"type\":\"header\",\"parameters\":[{\"type\":\"image\",\"image\": {\"link\":\"https://...\"}}]},{\"type\":\"body\",\"parameters\":[{\"type\":\"text\",\"text\":\"test\"}]}],\"phone\":\"556123122026\"}
//
send_message_status_t* TemplatesAPI_sendTemplate(apiClient_t *apiClient, send_template_request_t * send_template_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**send_template_request** | **[send_template_request_t](send_template_request.md) \*** |  | 

### Return type

[send_message_status_t](send_message_status.md) *


### Authorization

[token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/x-www-form-urlencoded, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TemplatesAPI_templatesList**
```c
// Get templates list
//
// 
//
get_templates_t* TemplatesAPI_templatesList(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[get_templates_t](get_templates.md) *


### Authorization

[token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

