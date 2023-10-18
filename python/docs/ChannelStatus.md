# ChannelStatus


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**status** | **str** | channel Status | [optional] 

## Example

```python
from one_msg_waba_sdk.models.channel_status import ChannelStatus

# TODO update the JSON string below
json = "{}"
# create an instance of ChannelStatus from a JSON string
channel_status_instance = ChannelStatus.from_json(json)
# print the JSON string representation of the object
print ChannelStatus.to_json()

# convert the object into a dict
channel_status_dict = channel_status_instance.to_dict()
# create an instance of ChannelStatus from a dict
channel_status_form_dict = channel_status.from_dict(channel_status_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


