# SetMeRequest


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
from one_msg_waba_sdk.models.set_me_request import SetMeRequest

# TODO update the JSON string below
json = "{}"
# create an instance of SetMeRequest from a JSON string
set_me_request_instance = SetMeRequest.from_json(json)
# print the JSON string representation of the object
print SetMeRequest.to_json()

# convert the object into a dict
set_me_request_dict = set_me_request_instance.to_dict()
# create an instance of SetMeRequest from a dict
set_me_request_form_dict = set_me_request.from_dict(set_me_request_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


