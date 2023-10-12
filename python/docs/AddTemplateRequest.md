# AddTemplateRequest


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**name** | **str** | Name of template | [optional] 
**category** | [**TemplateCategoryProp**](TemplateCategoryProp.md) |  | [optional] 
**components** | [**TemplateComponentsProp**](TemplateComponentsProp.md) |  | [optional] 
**language** | [**TemplateLanguageProp**](TemplateLanguageProp.md) |  | [optional] 

## Example

```python
from openapi_client.models.add_template_request import AddTemplateRequest

# TODO update the JSON string below
json = "{}"
# create an instance of AddTemplateRequest from a JSON string
add_template_request_instance = AddTemplateRequest.from_json(json)
# print the JSON string representation of the object
print AddTemplateRequest.to_json()

# convert the object into a dict
add_template_request_dict = add_template_request_instance.to_dict()
# create an instance of AddTemplateRequest from a dict
add_template_request_form_dict = add_template_request.from_dict(add_template_request_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


