# coding: utf-8

"""
    one_msg_waba_sdk

    [1MSG.IO](https://1msg.io/) is the perfect WhatsApp management tool for your business. With us you get full access to the official Whatsapp API/webhooks.  Every API request must contain an Authorize HTTP header with a token.  This is your channel token, which can be found in your channel project on your profile page. Please do not give the token to anyone or post it publicly.  The authorization token must be added to each request in the GET parameter 'token' and always passed to query string (?token={your_token}). Parameters in GET queries pass query string. Parameters in POST requests — through the JSON-encoded request body.   All 'send' methods (except /sendTemplate) will only work when the dialog session with the user is open. Some of our solutions simplify and avoid such limitations, but we urge you to pay more attention to this detail

    The version of the OpenAPI document: 2.39.0
    Contact: hello@1msg.io
    Generated by OpenAPI Generator (https://openapi-generator.tech)

    Do not edit the class manually.
"""  # noqa: E501


from __future__ import annotations
import pprint
import re  # noqa: F401
import json


from typing import Any, Dict, List, Optional
from pydantic import BaseModel, Field, StrictInt, StrictStr, conlist

class SendContactRequest(BaseModel):
    """
    SendContactRequest
    """
    chat_id: Optional[StrictStr] = Field(None, alias="chatId", description="**Required if phone is not set**  Chat ID from the message list. Examples: 12020721369@c.us . Used instead of the phone parameter.")
    phone: Optional[StrictInt] = Field(None, description="**Required if chatId is not set**  A phone number starting with the country code. You do not need to add your number.   USA example: 12020721369.")
    contacts: Optional[conlist(Dict[str, Any])] = Field(None, description="Array containing contact objects.  Contact object parameters:  **name** - full contact name. Required. Object with properties:  * formatted_name - Full name, as it normally appears. Example: Lord Adam John Smith Junior. You have to use at least one additional parameter (first_name, last_name, middle_name, suffix, prefix)  * first_name - First name. Example: Adam  * last_name - Last name. Example: Smith  * middle_name - Middle name. Example: John  * suffix - Name suffix. Example: Junior  * prefix - Name prefix. Example: Lord  **birthday** - YYYY-MM-DD formatted string. Example: 2012-08-18  **addresses** - array containing address objects with parameters:  * street - Street number and name. Example: 1 Hacker Way  * city - City name. Example: Menlo Park  * state - State abbreviation. Example: CA  * zip - ZIP code. Example: 94025  * country - Full country name. Example: United States  * country_code - Two-letter country abbreviation. Example: us  * type - Standard Values: HOME, WORK. Example: HOME  **emails** - array containing email objects with parameters:  * email - Email address. Example: test@fb.com  * type - Standard Values: HOME, WORK. Example: WORK  **org** - object containing parameters:  * company - Name of the contact's company. Example: WhatsApp  * department - Name of the contact's department. Example: Design  * title - Contact's business title. Example: Manager  **phones** - array containing phone objects with parameters:  * phone - Automatically populated with the wa_id value as a formatted phone number. Example: +1 (940) 555-1234  * type - Standard Values: CELL, MAIN, IPHONE, HOME, WORK. Example: HOME  * wa_id - WhatsApp ID. Example: 19405551234  **urls** - array containing url objects with parameters:  * url - URL. Example: https://www.facebook.com  * type - Standard Values: HOME, WORK. Example: WORK  Example: [{\"addresses\":[{\"city\":\"Menlo Park\",\"country\":\"United States\",\"country_code\":\"us\",\"state\":\"CA\",\"street\":\"1 Hacker Way\",\"type\":\"HOME\",\"zip\":\"94025\"},{\"city\":\"Menlo Park\",\"country\":\"United States\",\"country_code\":\"us\",\"state\":\"CA\",\"street\":\"200 Jefferson Dr\",\"type\":\"WORK\",\"zip\":\"94025\"}],\"birthday\":\"2012-08-18\",\"emails\":[{\"email\":\"test@fb.com\",\"type\":\"WORK\"},{\"email\":\"test@whatsapp.com\",\"type\":\"WORK\"}],\"name\":{\"first_name\":\"John\",\"formatted_name\":\"John Smith\",\"last_name\":\"Smith\"},\"org\":{\"company\":\"WhatsApp\",\"department\":\"Design\",\"title\":\"Manager\"},\"phones\":[{\"phone\":\"+1 (940) 555-1234\",\"type\":\"HOME\"},{\"phone\":\"+1 (650) 555-1234\",\"type\":\"WORK\",\"wa_id\":\"16505551234\"}],\"urls\":[{\"url\":\"https://www.facebook.com\",\"type\":\"WORK\"}]}]")
    __properties = ["chatId", "phone", "contacts"]

    class Config:
        """Pydantic configuration"""
        allow_population_by_field_name = True
        validate_assignment = True

    def to_str(self) -> str:
        """Returns the string representation of the model using alias"""
        return pprint.pformat(self.dict(by_alias=True))

    def to_json(self) -> str:
        """Returns the JSON representation of the model using alias"""
        return json.dumps(self.to_dict())

    @classmethod
    def from_json(cls, json_str: str) -> SendContactRequest:
        """Create an instance of SendContactRequest from a JSON string"""
        return cls.from_dict(json.loads(json_str))

    def to_dict(self):
        """Returns the dictionary representation of the model using alias"""
        _dict = self.dict(by_alias=True,
                          exclude={
                          },
                          exclude_none=True)
        return _dict

    @classmethod
    def from_dict(cls, obj: dict) -> SendContactRequest:
        """Create an instance of SendContactRequest from a dict"""
        if obj is None:
            return None

        if not isinstance(obj, dict):
            return SendContactRequest.parse_obj(obj)

        _obj = SendContactRequest.parse_obj({
            "chat_id": obj.get("chatId"),
            "phone": obj.get("phone"),
            "contacts": obj.get("contacts")
        })
        return _obj


