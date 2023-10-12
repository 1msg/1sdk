# MeComponents


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**about** | **str** | Profile&#x60;s About section. | [optional] 
**address** | **str** | Address of the business | [optional] 
**description** | **str** | Description of the business. Max 256 characters | [optional] 
**email** | **str** | Business email | [optional] 
**phone** | **str** | Linked phone number | [optional] 
**vertical** | **str** | Industry of the business | [optional] 
**photo** | **str** | HTTP link *https://...*  Or base64-encoded file with mime data, for example *data:image/jpeg;base64,/9j/4AAQSkZJRgABAQ...*   File in form-data input field | [optional] 

## Example

```python
from openapi_client.models.me_components import MeComponents

# TODO update the JSON string below
json = "{}"
# create an instance of MeComponents from a JSON string
me_components_instance = MeComponents.from_json(json)
# print the JSON string representation of the object
print MeComponents.to_json()

# convert the object into a dict
me_components_dict = me_components_instance.to_dict()
# create an instance of MeComponents from a dict
me_components_form_dict = me_components.from_dict(me_components_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


