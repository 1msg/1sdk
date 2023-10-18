# TemplateComponentsPropInner


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**type** | **str** |  | [optional] 
**format** | **str** | Only for HEADER type | [optional] 
**text** | **str** |  | [optional] 
**example** | **object** |  | [optional] 
**buttons** | [**List[TemplateComponentsPropInnerButtonsInner]**](TemplateComponentsPropInnerButtonsInner.md) |  | [optional] 

## Example

```python
from one_msg_waba_sdk.models.template_components_prop_inner import TemplateComponentsPropInner

# TODO update the JSON string below
json = "{}"
# create an instance of TemplateComponentsPropInner from a JSON string
template_components_prop_inner_instance = TemplateComponentsPropInner.from_json(json)
# print the JSON string representation of the object
print TemplateComponentsPropInner.to_json()

# convert the object into a dict
template_components_prop_inner_dict = template_components_prop_inner_instance.to_dict()
# create an instance of TemplateComponentsPropInner from a dict
template_components_prop_inner_form_dict = template_components_prop_inner.from_dict(template_components_prop_inner_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


