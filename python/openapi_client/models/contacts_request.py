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


from typing import List, Optional
from pydantic import BaseModel, Field, StrictBool, StrictStr, conlist

class ContactsRequest(BaseModel):
    """
    ContactsRequest
    """
    blocking: Optional[StrictStr] = Field(None, description="Operating mode:  *wait* - synchronous  *no_wait* - asynchronous (default)")
    force_check: Optional[StrictBool] = Field(None, description="Using cache:  *true* - ignore cache  *false* - use cache (default)")
    contacts: conlist(StrictStr) = Field(..., description="Array of contact numbers for checking. Recommended format is +16315551001  Example:  [\"16315551000\",\"+1 631 555 1001\",\"6315551002\",\"+1 (631) 555-1004\",\"1-631-555-1005\"]")
    __properties = ["blocking", "force_check", "contacts"]

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
    def from_json(cls, json_str: str) -> ContactsRequest:
        """Create an instance of ContactsRequest from a JSON string"""
        return cls.from_dict(json.loads(json_str))

    def to_dict(self):
        """Returns the dictionary representation of the model using alias"""
        _dict = self.dict(by_alias=True,
                          exclude={
                          },
                          exclude_none=True)
        return _dict

    @classmethod
    def from_dict(cls, obj: dict) -> ContactsRequest:
        """Create an instance of ContactsRequest from a dict"""
        if obj is None:
            return None

        if not isinstance(obj, dict):
            return ContactsRequest.parse_obj(obj)

        _obj = ContactsRequest.parse_obj({
            "blocking": obj.get("blocking"),
            "force_check": obj.get("force_check"),
            "contacts": obj.get("contacts")
        })
        return _obj


