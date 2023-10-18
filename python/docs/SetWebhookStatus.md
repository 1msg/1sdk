# SetWebhookStatus


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**set** | **bool** | Flag indicating that the current request has changed webhook | [optional] 
**message** | **str** |  | [optional] 

## Example

```python
from one_msg_waba_sdk.models.set_webhook_status import SetWebhookStatus

# TODO update the JSON string below
json = "{}"
# create an instance of SetWebhookStatus from a JSON string
set_webhook_status_instance = SetWebhookStatus.from_json(json)
# print the JSON string representation of the object
print SetWebhookStatus.to_json()

# convert the object into a dict
set_webhook_status_dict = set_webhook_status_instance.to_dict()
# create an instance of SetWebhookStatus from a dict
set_webhook_status_form_dict = set_webhook_status.from_dict(set_webhook_status_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


