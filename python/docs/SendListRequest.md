# SendListRequest


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**chat_id** | **str** | **Required if phone is not set**  Chat ID from the message list. Examples: 12020721369@c.us . Used instead of the phone parameter. | [optional] 
**phone** | **int** | **Required if chatId is not set**  A phone number starting with the country code. You do not need to add your number.   USA example: 12020721369. | [optional] 
**body** | **str** | Main message text | 
**header** | **str** | Header will be located above message text | [optional] 
**footer** | **str** | Footer will be placed under message text | [optional] 
**action** | **str** | Action for open list | 
**sections** | [**List[SendListRequestAllOfSections]**](SendListRequestAllOfSections.md) | Up to 10 sections from which the client can choose.  Each section is object with fields:  *title* - Title of section, up to 24 symbols. Required if there are more then 1 section  *rows* - available options. Required    Each option is object with fields:  *id* - Unique id for option, up to 200 symbols. Required  *title* - Title of option, up to 24 symbols. Required  *description* - Description of option, up to 72 symbols    Example:  [{\&quot;title\&quot;:\&quot;Section 1\&quot;,\&quot;rows\&quot;:[{\&quot;id\&quot;:\&quot;1\&quot;,\&quot;title\&quot;:\&quot;Option 1\&quot;,\&quot;description\&quot;:\&quot;Description 1\&quot;}]},{\&quot;title\&quot;:\&quot;Section 2\&quot;,\&quot;rows\&quot;:[{\&quot;id\&quot;:\&quot;2\&quot;,\&quot;title\&quot;:\&quot;Option 2\&quot;,\&quot;description\&quot;:\&quot;Description 2\&quot;}]}] | 

## Example

```python
from openapi_client.models.send_list_request import SendListRequest

# TODO update the JSON string below
json = "{}"
# create an instance of SendListRequest from a JSON string
send_list_request_instance = SendListRequest.from_json(json)
# print the JSON string representation of the object
print SendListRequest.to_json()

# convert the object into a dict
send_list_request_dict = send_list_request_instance.to_dict()
# create an instance of SendListRequest from a dict
send_list_request_form_dict = send_list_request.from_dict(send_list_request_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


