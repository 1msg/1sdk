# GetMessagesMessagesInner


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**message_number** | **int** |  | [optional] 
**id** | **str** |  | [optional] 
**body** | **str** |  | [optional] 
**from_me** | **bool** |  | [optional] 
**var_self** | **int** |  | [optional] 
**is_forwarded** | **int** |  | [optional] 
**author** | **str** |  | [optional] 
**time** | **int** |  | [optional] 
**chat_id** | **str** |  | [optional] 
**type** | **str** |  | [optional] 
**sender_name** | **str** |  | [optional] 
**caption** | **str** |  | [optional] 
**quoted_msg_id** | **str** |  | [optional] 
**metadata** | **object** |  | [optional] 
**chat_name** | **str** |  | [optional] 

## Example

```python
from openapi_client.models.get_messages_messages_inner import GetMessagesMessagesInner

# TODO update the JSON string below
json = "{}"
# create an instance of GetMessagesMessagesInner from a JSON string
get_messages_messages_inner_instance = GetMessagesMessagesInner.from_json(json)
# print the JSON string representation of the object
print GetMessagesMessagesInner.to_json()

# convert the object into a dict
get_messages_messages_inner_dict = get_messages_messages_inner_instance.to_dict()
# create an instance of GetMessagesMessagesInner from a dict
get_messages_messages_inner_form_dict = get_messages_messages_inner.from_dict(get_messages_messages_inner_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


