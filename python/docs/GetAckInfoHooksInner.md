# GetAckInfoHooksInner


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **str** |  | [optional] 
**type** | **str** |  | [optional] 
**status** | **str** |  | [optional] 
**pricing** | **object** |  | [optional] 
**timestamp** | **str** |  | [optional] 
**conversation** | **object** |  | [optional] 
**recipient_id** | **str** |  | [optional] 

## Example

```python
from openapi_client.models.get_ack_info_hooks_inner import GetAckInfoHooksInner

# TODO update the JSON string below
json = "{}"
# create an instance of GetAckInfoHooksInner from a JSON string
get_ack_info_hooks_inner_instance = GetAckInfoHooksInner.from_json(json)
# print the JSON string representation of the object
print GetAckInfoHooksInner.to_json()

# convert the object into a dict
get_ack_info_hooks_inner_dict = get_ack_info_hooks_inner_instance.to_dict()
# create an instance of GetAckInfoHooksInner from a dict
get_ack_info_hooks_inner_form_dict = get_ack_info_hooks_inner.from_dict(get_ack_info_hooks_inner_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


