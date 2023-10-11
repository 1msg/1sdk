# # SendLocationRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**chat_id** | **string** | **Required if phone is not set**  Chat ID from the message list. Examples: 12020721369@c.us . Used instead of the phone parameter. | [optional]
**phone** | **int** | **Required if chatId is not set**  A phone number starting with the country code. You do not need to add your number.   USA example: 12020721369. | [optional]
**lat** | **string** | Latitude of the location. Example: 45.018337 |
**lng** | **string** | Longitude of the location. Example: -73.968285 |
**address** | **string** | Address of the location. Only displayed if name is present. Example: 9766 Valley View St., New York, NY 10024 | [optional]
**name** | **string** | Name of the location. Example: Facebook HQ | [optional]

[[Back to Model list]](../../README.md#models) [[Back to API list]](../../README.md#endpoints) [[Back to README]](../../README.md)
