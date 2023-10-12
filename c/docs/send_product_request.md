# send_product_request_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**chat_id** | **char \*** | **Required if phone is not set**  Chat ID from the message list. Examples: 12020721369@c.us . Used instead of the phone parameter. | [optional] 
**phone** | **int** | **Required if chatId is not set**  A phone number starting with the country code. You do not need to add your number.   USA example: 12020721369. | [optional] 
**action** | [**send_product_request_all_of_action_t**](send_product_request_all_of_action.md) \* |  | 
**body** | **char \*** | Text of message. Example: Some text. | [optional] 
**footer** | **char \*** | Located under the message text. Example: Footer. | [optional] 
**header** | **char \*** | Header of catalog. Example: Header.  **Required when sending the catalog.** | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


