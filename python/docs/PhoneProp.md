# PhoneProp


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**phone** | **int** | **Required if chatId is not set**  A phone number starting with the country code. You do not need to add your number.   USA example: 12020721369. | [optional] 

## Example

```python
from one_msg_waba_sdk.models.phone_prop import PhoneProp

# TODO update the JSON string below
json = "{}"
# create an instance of PhoneProp from a JSON string
phone_prop_instance = PhoneProp.from_json(json)
# print the JSON string representation of the object
print PhoneProp.to_json()

# convert the object into a dict
phone_prop_dict = phone_prop_instance.to_dict()
# create an instance of PhoneProp from a dict
phone_prop_form_dict = phone_prop.from_dict(phone_prop_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


