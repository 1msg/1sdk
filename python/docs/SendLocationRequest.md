# SendLocationRequest


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**chat_id** | **str** | **Required if phone is not set**  Chat ID from the message list. Examples: 12020721369@c.us . Used instead of the phone parameter. | [optional] 
**phone** | **int** | **Required if chatId is not set**  A phone number starting with the country code. You do not need to add your number.   USA example: 12020721369. | [optional] 
**lat** | **str** | Latitude of the location. Example: 45.018337 | 
**lng** | **str** | Longitude of the location. Example: -73.968285 | 
**address** | **str** | Address of the location. Only displayed if name is present. Example: 9766 Valley View St., New York, NY 10024 | [optional] 
**name** | **str** | Name of the location. Example: Facebook HQ | [optional] 

## Example

```python
from openapi_client.models.send_location_request import SendLocationRequest

# TODO update the JSON string below
json = "{}"
# create an instance of SendLocationRequest from a JSON string
send_location_request_instance = SendLocationRequest.from_json(json)
# print the JSON string representation of the object
print SendLocationRequest.to_json()

# convert the object into a dict
send_location_request_dict = send_location_request_instance.to_dict()
# create an instance of SendLocationRequest from a dict
send_location_request_form_dict = send_location_request.from_dict(send_location_request_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


