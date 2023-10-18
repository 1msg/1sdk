# UploadMedia


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**body** | **str** | HTTP link *https://...*  Or base64-encoded file with mime data, for example *data:image/jpeg;base64,/9j/4AAQSkZJRgABAQ...*   File in form-data input field | 

## Example

```python
from one_msg_waba_sdk.models.upload_media import UploadMedia

# TODO update the JSON string below
json = "{}"
# create an instance of UploadMedia from a JSON string
upload_media_instance = UploadMedia.from_json(json)
# print the JSON string representation of the object
print UploadMedia.to_json()

# convert the object into a dict
upload_media_dict = upload_media_instance.to_dict()
# create an instance of UploadMedia from a dict
upload_media_form_dict = upload_media.from_dict(upload_media_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


