# GetMe


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**about** | **str** | Profile&#x60;s About section. | [optional] 
**address** | **str** | Address of the business | [optional] 
**description** | **str** | Description of the business. Max 256 characters | [optional] 
**email** | **str** | Business email | [optional] 
**phone** | **str** | Linked phone number | [optional] 
**vertical** | **str** | Industry of the business | [optional] 
**photo** | **str** |  | [optional] 

## Example

```python
from openapi_client.models.get_me import GetMe

# TODO update the JSON string below
json = "{}"
# create an instance of GetMe from a JSON string
get_me_instance = GetMe.from_json(json)
# print the JSON string representation of the object
print GetMe.to_json()

# convert the object into a dict
get_me_dict = get_me_instance.to_dict()
# create an instance of GetMe from a dict
get_me_form_dict = get_me.from_dict(get_me_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


