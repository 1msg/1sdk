# SendTemplateRequestAllOfLanguage

Object, containing fields \"policy\" and \"code\".  **policy** - now \"deterministic\" is only available option;  **code** - one of supported language codes

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**policy** | **str** |  | [optional] 
**code** | [**TemplateLanguageProp**](TemplateLanguageProp.md) |  | [optional] 

## Example

```python
from one_msg_waba_sdk.models.send_template_request_all_of_language import SendTemplateRequestAllOfLanguage

# TODO update the JSON string below
json = "{}"
# create an instance of SendTemplateRequestAllOfLanguage from a JSON string
send_template_request_all_of_language_instance = SendTemplateRequestAllOfLanguage.from_json(json)
# print the JSON string representation of the object
print SendTemplateRequestAllOfLanguage.to_json()

# convert the object into a dict
send_template_request_all_of_language_dict = send_template_request_all_of_language_instance.to_dict()
# create an instance of SendTemplateRequestAllOfLanguage from a dict
send_template_request_all_of_language_form_dict = send_template_request_all_of_language.from_dict(send_template_request_all_of_language_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


