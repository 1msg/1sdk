# GetMessages


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**messages** | [**List[GetMessagesMessagesInner]**](GetMessagesMessagesInner.md) |  | [optional] 

## Example

```python
from one_msg_waba_sdk.models.get_messages import GetMessages

# TODO update the JSON string below
json = "{}"
# create an instance of GetMessages from a JSON string
get_messages_instance = GetMessages.from_json(json)
# print the JSON string representation of the object
print GetMessages.to_json()

# convert the object into a dict
get_messages_dict = get_messages_instance.to_dict()
# create an instance of GetMessages from a dict
get_messages_form_dict = get_messages.from_dict(get_messages_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


