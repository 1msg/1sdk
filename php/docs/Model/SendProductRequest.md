# # SendProductRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**chat_id** | **string** | **Required if phone is not set**  Chat ID from the message list. Examples: 12020721369@c.us . Used instead of the phone parameter. | [optional]
**phone** | **int** | **Required if chatId is not set**  A phone number starting with the country code. You do not need to add your number.   USA example: 12020721369. | [optional]
**action** | [**\OpenAPI\Client\Model\SendProductRequestAllOfAction**](SendProductRequestAllOfAction.md) |  |
**body** | **string** | Text of message. Example: Some text. | [optional]
**footer** | **string** | Located under the message text. Example: Footer. | [optional]
**header** | **string** | Header of catalog. Example: Header.  **Required when sending the catalog.** | [optional]

[[Back to Model list]](../../README.md#models) [[Back to API list]](../../README.md#endpoints) [[Back to README]](../../README.md)
