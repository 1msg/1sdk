# SendContactRequest


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**chat_id** | **str** | **Required if phone is not set**  Chat ID from the message list. Examples: 12020721369@c.us . Used instead of the phone parameter. | [optional] 
**phone** | **int** | **Required if chatId is not set**  A phone number starting with the country code. You do not need to add your number.   USA example: 12020721369. | [optional] 
**contacts** | **List[object]** | Array containing contact objects.  Contact object parameters:  **name** - full contact name. Required. Object with properties:  * formatted_name - Full name, as it normally appears. Example: Lord Adam John Smith Junior. You have to use at least one additional parameter (first_name, last_name, middle_name, suffix, prefix)  * first_name - First name. Example: Adam  * last_name - Last name. Example: Smith  * middle_name - Middle name. Example: John  * suffix - Name suffix. Example: Junior  * prefix - Name prefix. Example: Lord  **birthday** - YYYY-MM-DD formatted string. Example: 2012-08-18  **addresses** - array containing address objects with parameters:  * street - Street number and name. Example: 1 Hacker Way  * city - City name. Example: Menlo Park  * state - State abbreviation. Example: CA  * zip - ZIP code. Example: 94025  * country - Full country name. Example: United States  * country_code - Two-letter country abbreviation. Example: us  * type - Standard Values: HOME, WORK. Example: HOME  **emails** - array containing email objects with parameters:  * email - Email address. Example: test@fb.com  * type - Standard Values: HOME, WORK. Example: WORK  **org** - object containing parameters:  * company - Name of the contact&#39;s company. Example: WhatsApp  * department - Name of the contact&#39;s department. Example: Design  * title - Contact&#39;s business title. Example: Manager  **phones** - array containing phone objects with parameters:  * phone - Automatically populated with the wa_id value as a formatted phone number. Example: +1 (940) 555-1234  * type - Standard Values: CELL, MAIN, IPHONE, HOME, WORK. Example: HOME  * wa_id - WhatsApp ID. Example: 19405551234  **urls** - array containing url objects with parameters:  * url - URL. Example: https://www.facebook.com  * type - Standard Values: HOME, WORK. Example: WORK  Example: [{\&quot;addresses\&quot;:[{\&quot;city\&quot;:\&quot;Menlo Park\&quot;,\&quot;country\&quot;:\&quot;United States\&quot;,\&quot;country_code\&quot;:\&quot;us\&quot;,\&quot;state\&quot;:\&quot;CA\&quot;,\&quot;street\&quot;:\&quot;1 Hacker Way\&quot;,\&quot;type\&quot;:\&quot;HOME\&quot;,\&quot;zip\&quot;:\&quot;94025\&quot;},{\&quot;city\&quot;:\&quot;Menlo Park\&quot;,\&quot;country\&quot;:\&quot;United States\&quot;,\&quot;country_code\&quot;:\&quot;us\&quot;,\&quot;state\&quot;:\&quot;CA\&quot;,\&quot;street\&quot;:\&quot;200 Jefferson Dr\&quot;,\&quot;type\&quot;:\&quot;WORK\&quot;,\&quot;zip\&quot;:\&quot;94025\&quot;}],\&quot;birthday\&quot;:\&quot;2012-08-18\&quot;,\&quot;emails\&quot;:[{\&quot;email\&quot;:\&quot;test@fb.com\&quot;,\&quot;type\&quot;:\&quot;WORK\&quot;},{\&quot;email\&quot;:\&quot;test@whatsapp.com\&quot;,\&quot;type\&quot;:\&quot;WORK\&quot;}],\&quot;name\&quot;:{\&quot;first_name\&quot;:\&quot;John\&quot;,\&quot;formatted_name\&quot;:\&quot;John Smith\&quot;,\&quot;last_name\&quot;:\&quot;Smith\&quot;},\&quot;org\&quot;:{\&quot;company\&quot;:\&quot;WhatsApp\&quot;,\&quot;department\&quot;:\&quot;Design\&quot;,\&quot;title\&quot;:\&quot;Manager\&quot;},\&quot;phones\&quot;:[{\&quot;phone\&quot;:\&quot;+1 (940) 555-1234\&quot;,\&quot;type\&quot;:\&quot;HOME\&quot;},{\&quot;phone\&quot;:\&quot;+1 (650) 555-1234\&quot;,\&quot;type\&quot;:\&quot;WORK\&quot;,\&quot;wa_id\&quot;:\&quot;16505551234\&quot;}],\&quot;urls\&quot;:[{\&quot;url\&quot;:\&quot;https://www.facebook.com\&quot;,\&quot;type\&quot;:\&quot;WORK\&quot;}]}] | [optional] 

## Example

```python
from one_msg_waba_sdk.models.send_contact_request import SendContactRequest

# TODO update the JSON string below
json = "{}"
# create an instance of SendContactRequest from a JSON string
send_contact_request_instance = SendContactRequest.from_json(json)
# print the JSON string representation of the object
print SendContactRequest.to_json()

# convert the object into a dict
send_contact_request_dict = send_contact_request_instance.to_dict()
# create an instance of SendContactRequest from a dict
send_contact_request_form_dict = send_contact_request.from_dict(send_contact_request_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


