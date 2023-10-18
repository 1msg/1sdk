# GetTemplates


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**total** | **int** |  | [optional] 
**templates** | [**List[GetTemplatesTemplatesInner]**](GetTemplatesTemplatesInner.md) |  | [optional] 

## Example

```python
from one_msg_waba_sdk.models.get_templates import GetTemplates

# TODO update the JSON string below
json = "{}"
# create an instance of GetTemplates from a JSON string
get_templates_instance = GetTemplates.from_json(json)
# print the JSON string representation of the object
print GetTemplates.to_json()

# convert the object into a dict
get_templates_dict = get_templates_instance.to_dict()
# create an instance of GetTemplates from a dict
get_templates_form_dict = get_templates.from_dict(get_templates_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


