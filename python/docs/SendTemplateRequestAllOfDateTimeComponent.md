# SendTemplateRequestAllOfDateTimeComponent


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**day_of_week** | **str** |  | [optional] 
**year** | **int** |  | [optional] 
**month** | **int** |  | [optional] 
**day_of_month** | **int** |  | [optional] 
**hour** | **int** |  | [optional] 
**minute** | **int** |  | [optional] 
**calendar** | **str** |  | [optional] 

## Example

```python
from openapi_client.models.send_template_request_all_of_date_time_component import SendTemplateRequestAllOfDateTimeComponent

# TODO update the JSON string below
json = "{}"
# create an instance of SendTemplateRequestAllOfDateTimeComponent from a JSON string
send_template_request_all_of_date_time_component_instance = SendTemplateRequestAllOfDateTimeComponent.from_json(json)
# print the JSON string representation of the object
print SendTemplateRequestAllOfDateTimeComponent.to_json()

# convert the object into a dict
send_template_request_all_of_date_time_component_dict = send_template_request_all_of_date_time_component_instance.to_dict()
# create an instance of SendTemplateRequestAllOfDateTimeComponent from a dict
send_template_request_all_of_date_time_component_form_dict = send_template_request_all_of_date_time_component.from_dict(send_template_request_all_of_date_time_component_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


