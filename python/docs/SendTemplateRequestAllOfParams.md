# SendTemplateRequestAllOfParams


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**default** | **str** |  | [optional] 
**currency** | [**SendTemplateRequestAllOfCurrency**](SendTemplateRequestAllOfCurrency.md) |  | [optional] 
**date_time** | [**SendTemplateRequestAllOfDateTime**](SendTemplateRequestAllOfDateTime.md) |  | [optional] 

## Example

```python
from openapi_client.models.send_template_request_all_of_params import SendTemplateRequestAllOfParams

# TODO update the JSON string below
json = "{}"
# create an instance of SendTemplateRequestAllOfParams from a JSON string
send_template_request_all_of_params_instance = SendTemplateRequestAllOfParams.from_json(json)
# print the JSON string representation of the object
print SendTemplateRequestAllOfParams.to_json()

# convert the object into a dict
send_template_request_all_of_params_dict = send_template_request_all_of_params_instance.to_dict()
# create an instance of SendTemplateRequestAllOfParams from a dict
send_template_request_all_of_params_form_dict = send_template_request_all_of_params.from_dict(send_template_request_all_of_params_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


