# ContactsRequest


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**blocking** | **str** | Operating mode:  *wait* - synchronous  *no_wait* - asynchronous (default) | [optional] 
**force_check** | **bool** | Using cache:  *true* - ignore cache  *false* - use cache (default) | [optional] 
**contacts** | **List[str]** | Array of contact numbers for checking. Recommended format is +16315551001  Example:  [\&quot;16315551000\&quot;,\&quot;+1 631 555 1001\&quot;,\&quot;6315551002\&quot;,\&quot;+1 (631) 555-1004\&quot;,\&quot;1-631-555-1005\&quot;] | 

## Example

```python
from openapi_client.models.contacts_request import ContactsRequest

# TODO update the JSON string below
json = "{}"
# create an instance of ContactsRequest from a JSON string
contacts_request_instance = ContactsRequest.from_json(json)
# print the JSON string representation of the object
print ContactsRequest.to_json()

# convert the object into a dict
contacts_request_dict = contacts_request_instance.to_dict()
# create an instance of ContactsRequest from a dict
contacts_request_form_dict = contacts_request.from_dict(contacts_request_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


