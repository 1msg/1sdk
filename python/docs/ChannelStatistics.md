# ChannelStatistics


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**var_date** | **str** |  | [optional] 
**templates_cost** | **float** |  | [optional] 

## Example

```python
from one_msg_waba_sdk.models.channel_statistics import ChannelStatistics

# TODO update the JSON string below
json = "{}"
# create an instance of ChannelStatistics from a JSON string
channel_statistics_instance = ChannelStatistics.from_json(json)
# print the JSON string representation of the object
print ChannelStatistics.to_json()

# convert the object into a dict
channel_statistics_dict = channel_statistics_instance.to_dict()
# create an instance of ChannelStatistics from a dict
channel_statistics_form_dict = channel_statistics.from_dict(channel_statistics_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


