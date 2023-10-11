# # SendMessageRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**chat_id** | **string** | **Required if phone is not set**  Chat ID from the message list. Examples: 12020721369@c.us . Used instead of the phone parameter. | [optional]
**phone** | **int** | **Required if chatId is not set**  A phone number starting with the country code. You do not need to add your number.   USA example: 12020721369. | [optional]
**body** | **string** | Message text, UTF-8 or UTF-16 string with emoji 🍏. Can be used with mentionedPhones, example: this text for @556123122026 |

[[Back to Model list]](../../README.md#models) [[Back to API list]](../../README.md#endpoints) [[Back to README]](../../README.md)
