# ProductsCatalogsAPI

All URIs are relative to *https://api.1msg.io/YOUR_INSTANCE_NUMBER*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ProductsCatalogsAPI_sendProduct**](ProductsCatalogsAPI.md#ProductsCatalogsAPI_sendProduct) | **POST** /sendProduct | Send a Product
[**ProductsCatalogsAPI_setCommerce**](ProductsCatalogsAPI.md#ProductsCatalogsAPI_setCommerce) | **POST** /commerce | Set Commerce Settings


# **ProductsCatalogsAPI_sendProduct**
```c
// Send a Product
//
// Send a single product or product list to a new or existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.  First, you need to upload your inventory to Facebook. You can use the API or Facebook’s Commerce Manager to do that. If you already have a Facebook catalog set up, we suggest that you leverage that catalog for WhatsApp commerce use cases.  **You can not send products to Business WhatsApp clients.**
//
send_message_status_t* ProductsCatalogsAPI_sendProduct(apiClient_t *apiClient, send_product_request_t * send_product_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**send_product_request** | **[send_product_request_t](send_product_request.md) \*** |  | 

### Return type

[send_message_status_t](send_message_status.md) *


### Authorization

[token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/x-www-form-urlencoded, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProductsCatalogsAPI_setCommerce**
```c
// Set Commerce Settings
//
// **is_catalog_visible** - Set to true to show catalog storefront icon or false to hide it. **is_cart_enabled** - Set to true to enable cart or false to disable it.
//
set_commerce_t* ProductsCatalogsAPI_setCommerce(apiClient_t *apiClient, commerce_t * commerce);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**commerce** | **[commerce_t](commerce.md) \*** |  | 

### Return type

[set_commerce_t](set_commerce.md) *


### Authorization

[token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

