# SendProductRequest


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**chat_id** | **str** | **Required if phone is not set**  Chat ID from the message list. Examples: 12020721369@c.us . Used instead of the phone parameter. | [optional] 
**phone** | **int** | **Required if chatId is not set**  A phone number starting with the country code. You do not need to add your number.   USA example: 12020721369. | [optional] 
**action** | [**SendProductRequestAllOfAction**](SendProductRequestAllOfAction.md) |  | 
**body** | **str** | Text of message. Example: Some text. | [optional] 
**footer** | **str** | Located under the message text. Example: Footer. | [optional] 
**header** | **str** | Header of catalog. Example: Header.  **Required when sending the catalog.** | [optional] 

## Example

```python
from openapi_client.models.send_product_request import SendProductRequest

# TODO update the JSON string below
json = "{}"
# create an instance of SendProductRequest from a JSON string
send_product_request_instance = SendProductRequest.from_json(json)
# print the JSON string representation of the object
print SendProductRequest.to_json()

# convert the object into a dict
send_product_request_dict = send_product_request_instance.to_dict()
# create an instance of SendProductRequest from a dict
send_product_request_form_dict = send_product_request.from_dict(send_product_request_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


