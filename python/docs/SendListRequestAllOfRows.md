# SendListRequestAllOfRows


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **str** | Unique id for option, up to 200 symbols | 
**title** | **str** | Title of option, up to 24 symbols. | 
**description** | **str** | Description of option, up to 72 symbols | [optional] 

## Example

```python
from one_msg_waba_sdk.models.send_list_request_all_of_rows import SendListRequestAllOfRows

# TODO update the JSON string below
json = "{}"
# create an instance of SendListRequestAllOfRows from a JSON string
send_list_request_all_of_rows_instance = SendListRequestAllOfRows.from_json(json)
# print the JSON string representation of the object
print SendListRequestAllOfRows.to_json()

# convert the object into a dict
send_list_request_all_of_rows_dict = send_list_request_all_of_rows_instance.to_dict()
# create an instance of SendListRequestAllOfRows from a dict
send_list_request_all_of_rows_form_dict = send_list_request_all_of_rows.from_dict(send_list_request_all_of_rows_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


