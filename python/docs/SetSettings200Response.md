# SetSettings200Response


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**webhook_url** | **str** |  | [optional] 
**update** | [**SetSettings200ResponseAllOfUpdate**](SetSettings200ResponseAllOfUpdate.md) |  | 

## Example

```python
from openapi_client.models.set_settings200_response import SetSettings200Response

# TODO update the JSON string below
json = "{}"
# create an instance of SetSettings200Response from a JSON string
set_settings200_response_instance = SetSettings200Response.from_json(json)
# print the JSON string representation of the object
print SetSettings200Response.to_json()

# convert the object into a dict
set_settings200_response_dict = set_settings200_response_instance.to_dict()
# create an instance of SetSettings200Response from a dict
set_settings200_response_form_dict = set_settings200_response.from_dict(set_settings200_response_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


