# ChatIdProp


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**chat_id** | **str** | **Required if phone is not set**  Chat ID from the message list. Examples: 12020721369@c.us . Used instead of the phone parameter. | [optional] 

## Example

```python
from openapi_client.models.chat_id_prop import ChatIdProp

# TODO update the JSON string below
json = "{}"
# create an instance of ChatIdProp from a JSON string
chat_id_prop_instance = ChatIdProp.from_json(json)
# print the JSON string representation of the object
print ChatIdProp.to_json()

# convert the object into a dict
chat_id_prop_dict = chat_id_prop_instance.to_dict()
# create an instance of ChatIdProp from a dict
chat_id_prop_form_dict = chat_id_prop.from_dict(chat_id_prop_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


