# GetTemplatesTemplatesInner


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**category** | [**TemplateCategoryProp**](TemplateCategoryProp.md) |  | [optional] 
**components** | [**TemplateComponentsProp**](TemplateComponentsProp.md) |  | [optional] 
**language** | [**TemplateLanguageProp**](TemplateLanguageProp.md) |  | [optional] 
**name** | **str** |  | [optional] 
**namespace** | **str** | Can be found by method /templates | [optional] 
**rejected_reason** | **str** |  | [optional] 
**status** | **str** |  | [optional] 

## Example

```python
from openapi_client.models.get_templates_templates_inner import GetTemplatesTemplatesInner

# TODO update the JSON string below
json = "{}"
# create an instance of GetTemplatesTemplatesInner from a JSON string
get_templates_templates_inner_instance = GetTemplatesTemplatesInner.from_json(json)
# print the JSON string representation of the object
print GetTemplatesTemplatesInner.to_json()

# convert the object into a dict
get_templates_templates_inner_dict = get_templates_templates_inner_instance.to_dict()
# create an instance of GetTemplatesTemplatesInner from a dict
get_templates_templates_inner_form_dict = get_templates_templates_inner.from_dict(get_templates_templates_inner_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


