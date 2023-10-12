# SendFileRequest


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**chat_id** | **str** | **Required if phone is not set**  Chat ID from the message list. Examples: 12020721369@c.us . Used instead of the phone parameter. | [optional] 
**phone** | **int** | **Required if chatId is not set**  A phone number starting with the country code. You do not need to add your number.   USA example: 12020721369. | [optional] 
**body** | **str** | HTTP link *https://...*  Or base64-encoded file with mime data, for example *data:image/jpeg;base64,/9j/4AAQSkZJRgABAQ...*   File in form-data input field | 
**filename** | **str** | File name, for *example 1.jpg* or *hello.xlsx* | 
**caption** | **str** | Text under the file. When sending an image сan be used with mentionedPhones, example: this image for @556123122026 | [optional] 

## Example

```python
from openapi_client.models.send_file_request import SendFileRequest

# TODO update the JSON string below
json = "{}"
# create an instance of SendFileRequest from a JSON string
send_file_request_instance = SendFileRequest.from_json(json)
# print the JSON string representation of the object
print SendFileRequest.to_json()

# convert the object into a dict
send_file_request_dict = send_file_request_instance.to_dict()
# create an instance of SendFileRequest from a dict
send_file_request_form_dict = send_file_request.from_dict(send_file_request_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


