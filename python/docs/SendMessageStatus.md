# SendMessageStatus


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**sent** | **bool** |  | [optional] 
**id** | **str** | unique message id | [optional] 
**message** | **str** | Posting status message | [optional] 
**description** | **str** | Result description | [optional] 

## Example

```python
from openapi_client.models.send_message_status import SendMessageStatus

# TODO update the JSON string below
json = "{}"
# create an instance of SendMessageStatus from a JSON string
send_message_status_instance = SendMessageStatus.from_json(json)
# print the JSON string representation of the object
print SendMessageStatus.to_json()

# convert the object into a dict
send_message_status_dict = send_message_status_instance.to_dict()
# create an instance of SendMessageStatus from a dict
send_message_status_form_dict = send_message_status.from_dict(send_message_status_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


