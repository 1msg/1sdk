# ContactsContactsInner


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**input** | **str** | Sent value | [optional] 
**status** | **str** | Contacts status:   *failed* - got error on processing  *processing* - still not detected  *invalid* - unavailable for sending  *valid* - available for sending | [optional] 
**wa_id** | **str** | Formatted contact phone | [optional] 

## Example

```python
from openapi_client.models.contacts_contacts_inner import ContactsContactsInner

# TODO update the JSON string below
json = "{}"
# create an instance of ContactsContactsInner from a JSON string
contacts_contacts_inner_instance = ContactsContactsInner.from_json(json)
# print the JSON string representation of the object
print ContactsContactsInner.to_json()

# convert the object into a dict
contacts_contacts_inner_dict = contacts_contacts_inner_instance.to_dict()
# create an instance of ContactsContactsInner from a dict
contacts_contacts_inner_form_dict = contacts_contacts_inner.from_dict(contacts_contacts_inner_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


