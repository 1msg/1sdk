# ChannelExtendedStatisticsInner


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**business_initiated_paid_quantity** | **int** |  | [optional] 
**business_initiated_price** | **float** |  | [optional] 
**business_initiated_quantity** | **int** |  | [optional] 
**free_entry_point** | **int** |  | [optional] 
**free_quantity** | **int** |  | [optional] 
**free_tier** | **int** |  | [optional] 
**paid_quantity** | **int** |  | [optional] 
**period_date** | **str** |  | [optional] 
**quantity** | **float** |  | [optional] 
**total_price** | **float** |  | [optional] 
**user_initiated_paid_quantity** | **int** |  | [optional] 
**user_initiated_price** | **float** |  | [optional] 
**user_initiated_quantity** | **int** |  | [optional] 

## Example

```python
from one_msg_waba_sdk.models.channel_extended_statistics_inner import ChannelExtendedStatisticsInner

# TODO update the JSON string below
json = "{}"
# create an instance of ChannelExtendedStatisticsInner from a JSON string
channel_extended_statistics_inner_instance = ChannelExtendedStatisticsInner.from_json(json)
# print the JSON string representation of the object
print ChannelExtendedStatisticsInner.to_json()

# convert the object into a dict
channel_extended_statistics_inner_dict = channel_extended_statistics_inner_instance.to_dict()
# create an instance of ChannelExtendedStatisticsInner from a dict
channel_extended_statistics_inner_form_dict = channel_extended_statistics_inner.from_dict(channel_extended_statistics_inner_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


