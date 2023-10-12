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


from typing import Optional
from pydantic import BaseModel, Field, StrictStr, validator

class MeComponents(BaseModel):
    """
    MeComponents
    """
    about: Optional[StrictStr] = Field(None, description="Profile`s About section.")
    address: Optional[StrictStr] = Field(None, description="Address of the business")
    description: Optional[StrictStr] = Field(None, description="Description of the business. Max 256 characters")
    email: Optional[StrictStr] = Field(None, description="Business email")
    phone: Optional[StrictStr] = Field(None, description="Linked phone number")
    vertical: Optional[StrictStr] = Field(None, description="Industry of the business")
    photo: Optional[StrictStr] = Field(None, description="HTTP link *https://...*  Or base64-encoded file with mime data, for example *data:image/jpeg;base64,/9j/4AAQSkZJRgABAQ...*   File in form-data input field")
    __properties = ["about", "address", "description", "email", "phone", "vertical", "photo"]

    @validator('vertical')
    def vertical_validate_enum(cls, value):
        """Validates the enum"""
        if value is None:
            return value

        if value not in ('Automotive', 'Beauty, Spa and Salon', 'Clothing and Apparel', 'Education', 'Entertainment', 'Event Planning and Service', 'Finance and Banking', 'Food and Grocery', 'Public Service', 'Hotel and Lodging', 'Medical and Health', 'Non-profit', 'Professional Services', 'Shopping and Retail', 'Travel and Transportation', 'Restaurant', 'Other', ''):
            raise ValueError("must be one of enum values ('Automotive', 'Beauty, Spa and Salon', 'Clothing and Apparel', 'Education', 'Entertainment', 'Event Planning and Service', 'Finance and Banking', 'Food and Grocery', 'Public Service', 'Hotel and Lodging', 'Medical and Health', 'Non-profit', 'Professional Services', 'Shopping and Retail', 'Travel and Transportation', 'Restaurant', 'Other', '')")
        return value

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
    def from_json(cls, json_str: str) -> MeComponents:
        """Create an instance of MeComponents from a JSON string"""
        return cls.from_dict(json.loads(json_str))

    def to_dict(self):
        """Returns the dictionary representation of the model using alias"""
        _dict = self.dict(by_alias=True,
                          exclude={
                          },
                          exclude_none=True)
        return _dict

    @classmethod
    def from_dict(cls, obj: dict) -> MeComponents:
        """Create an instance of MeComponents from a dict"""
        if obj is None:
            return None

        if not isinstance(obj, dict):
            return MeComponents.parse_obj(obj)

        _obj = MeComponents.parse_obj({
            "about": obj.get("about"),
            "address": obj.get("address"),
            "description": obj.get("description"),
            "email": obj.get("email"),
            "phone": obj.get("phone"),
            "vertical": obj.get("vertical"),
            "photo": obj.get("photo")
        })
        return _obj


