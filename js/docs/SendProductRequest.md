# OneMsgWabaSdk.SendProductRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**chatId** | **String** | **Required if phone is not set**  Chat ID from the message list. Examples: 12020721369@c.us . Used instead of the phone parameter. | [optional] 
**phone** | **Number** | **Required if chatId is not set**  A phone number starting with the country code. You do not need to add your number.   USA example: 12020721369. | [optional] 
**action** | [**SendProductRequestAllOfAction**](SendProductRequestAllOfAction.md) |  | 
**body** | **String** | Text of message. Example: Some text. | [optional] 
**footer** | **String** | Located under the message text. Example: Footer. | [optional] 
**header** | **String** | Header of catalog. Example: Header.  **Required when sending the catalog.** | [optional] 


