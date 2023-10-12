# SendListRequestAllOfSections


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**title** | **str** | Title of section, up to 24 symbols. Required if there are more then 1 section | [optional] 
**rows** | [**List[SendListRequestAllOfRows]**](SendListRequestAllOfRows.md) |  | 

## Example

```python
from openapi_client.models.send_list_request_all_of_sections import SendListRequestAllOfSections

# TODO update the JSON string below
json = "{}"
# create an instance of SendListRequestAllOfSections from a JSON string
send_list_request_all_of_sections_instance = SendListRequestAllOfSections.from_json(json)
# print the JSON string representation of the object
print SendListRequestAllOfSections.to_json()

# convert the object into a dict
send_list_request_all_of_sections_dict = send_list_request_all_of_sections_instance.to_dict()
# create an instance of SendListRequestAllOfSections from a dict
send_list_request_all_of_sections_form_dict = send_list_request_all_of_sections.from_dict(send_list_request_all_of_sections_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


