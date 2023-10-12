# GetCommerceInner


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **str** |  | [optional] 
**is_cart_enabled** | **bool** |  | [optional] 
**is_catalog_visible** | **bool** |  | [optional] 

## Example

```python
from openapi_client.models.get_commerce_inner import GetCommerceInner

# TODO update the JSON string below
json = "{}"
# create an instance of GetCommerceInner from a JSON string
get_commerce_inner_instance = GetCommerceInner.from_json(json)
# print the JSON string representation of the object
print GetCommerceInner.to_json()

# convert the object into a dict
get_commerce_inner_dict = get_commerce_inner_instance.to_dict()
# create an instance of GetCommerceInner from a dict
get_commerce_inner_form_dict = get_commerce_inner.from_dict(get_commerce_inner_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


