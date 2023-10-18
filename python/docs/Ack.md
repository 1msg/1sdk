# Ack


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **str** | unique id of message | [optional] 
**chat_id** | **str** | chat ID | [optional] 
**status** | **str** | type of the message status | [optional] 

## Example

```python
from one_msg_waba_sdk.models.ack import Ack

# TODO update the JSON string below
json = "{}"
# create an instance of Ack from a JSON string
ack_instance = Ack.from_json(json)
# print the JSON string representation of the object
print Ack.to_json()

# convert the object into a dict
ack_dict = ack_instance.to_dict()
# create an instance of Ack from a dict
ack_form_dict = ack.from_dict(ack_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


