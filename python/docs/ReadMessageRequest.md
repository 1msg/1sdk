# ReadMessageRequest


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**message_id** | **str** | Message ID. Example: 0XzkmGNn4prUAQlzsHApGNRXQ0U | [optional] 

## Example

```python
from openapi_client.models.read_message_request import ReadMessageRequest

# TODO update the JSON string below
json = "{}"
# create an instance of ReadMessageRequest from a JSON string
read_message_request_instance = ReadMessageRequest.from_json(json)
# print the JSON string representation of the object
print ReadMessageRequest.to_json()

# convert the object into a dict
read_message_request_dict = read_message_request_instance.to_dict()
# create an instance of ReadMessageRequest from a dict
read_message_request_form_dict = read_message_request.from_dict(read_message_request_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


