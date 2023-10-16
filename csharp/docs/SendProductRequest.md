# OneMessage.io.Model.SendProductRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ChatId** | **string** | **Required if phone is not set**  Chat ID from the message list. Examples: 12020721369@c.us . Used instead of the phone parameter. | [optional] 
**Phone** | **int** | **Required if chatId is not set**  A phone number starting with the country code. You do not need to add your number.   USA example: 12020721369. | [optional] 
**Action** | [**SendProductRequestAllOfAction**](SendProductRequestAllOfAction.md) |  | 
**Body** | **string** | Text of message. Example: Some text. | [optional] 
**Footer** | **string** | Located under the message text. Example: Footer. | [optional] 
**Header** | **string** | Header of catalog. Example: Header.  **Required when sending the catalog.** | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

