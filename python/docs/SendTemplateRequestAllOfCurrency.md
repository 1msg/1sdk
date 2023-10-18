# SendTemplateRequestAllOfCurrency


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**currency_code** | **str** |  | [optional] 
**amount_1000** | **int** |  | [optional] 

## Example

```python
from one_msg_waba_sdk.models.send_template_request_all_of_currency import SendTemplateRequestAllOfCurrency

# TODO update the JSON string below
json = "{}"
# create an instance of SendTemplateRequestAllOfCurrency from a JSON string
send_template_request_all_of_currency_instance = SendTemplateRequestAllOfCurrency.from_json(json)
# print the JSON string representation of the object
print SendTemplateRequestAllOfCurrency.to_json()

# convert the object into a dict
send_template_request_all_of_currency_dict = send_template_request_all_of_currency_instance.to_dict()
# create an instance of SendTemplateRequestAllOfCurrency from a dict
send_template_request_all_of_currency_form_dict = send_template_request_all_of_currency.from_dict(send_template_request_all_of_currency_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


