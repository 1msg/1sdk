# RemoveTemplateRequest


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**name** | **str** | Template name | [optional] 

## Example

```python
from one_msg_waba_sdk.models.remove_template_request import RemoveTemplateRequest

# TODO update the JSON string below
json = "{}"
# create an instance of RemoveTemplateRequest from a JSON string
remove_template_request_instance = RemoveTemplateRequest.from_json(json)
# print the JSON string representation of the object
print RemoveTemplateRequest.to_json()

# convert the object into a dict
remove_template_request_dict = remove_template_request_instance.to_dict()
# create an instance of RemoveTemplateRequest from a dict
remove_template_request_form_dict = remove_template_request.from_dict(remove_template_request_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


