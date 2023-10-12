# SendProductRequestAllOfActionSections


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**title** | **str** | Title of the section. Example: the-section-title | [optional] 
**product_items** | [**List[SendProductRequestAllOfActionProductItems]**](SendProductRequestAllOfActionProductItems.md) |  | [optional] 

## Example

```python
from openapi_client.models.send_product_request_all_of_action_sections import SendProductRequestAllOfActionSections

# TODO update the JSON string below
json = "{}"
# create an instance of SendProductRequestAllOfActionSections from a JSON string
send_product_request_all_of_action_sections_instance = SendProductRequestAllOfActionSections.from_json(json)
# print the JSON string representation of the object
print SendProductRequestAllOfActionSections.to_json()

# convert the object into a dict
send_product_request_all_of_action_sections_dict = send_product_request_all_of_action_sections_instance.to_dict()
# create an instance of SendProductRequestAllOfActionSections from a dict
send_product_request_all_of_action_sections_form_dict = send_product_request_all_of_action_sections.from_dict(send_product_request_all_of_action_sections_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


