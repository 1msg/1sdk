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
from pydantic import BaseModel, Field, StrictInt, StrictStr

class SendFileRequest(BaseModel):
    """
    SendFileRequest
    """
    chat_id: Optional[StrictStr] = Field(None, alias="chatId", description="**Required if phone is not set**  Chat ID from the message list. Examples: 12020721369@c.us . Used instead of the phone parameter.")
    phone: Optional[StrictInt] = Field(None, description="**Required if chatId is not set**  A phone number starting with the country code. You do not need to add your number.   USA example: 12020721369.")
    body: StrictStr = Field(..., description="HTTP link *https://...*  Or base64-encoded file with mime data, for example *data:image/jpeg;base64,/9j/4AAQSkZJRgABAQ...*   File in form-data input field")
    filename: StrictStr = Field(..., description="File name, for *example 1.jpg* or *hello.xlsx*")
    caption: Optional[StrictStr] = Field(None, description="Text under the file. When sending an image сan be used with mentionedPhones, example: this image for @556123122026")
    __properties = ["chatId", "phone", "body", "filename", "caption"]

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
    def from_json(cls, json_str: str) -> SendFileRequest:
        """Create an instance of SendFileRequest from a JSON string"""
        return cls.from_dict(json.loads(json_str))

    def to_dict(self):
        """Returns the dictionary representation of the model using alias"""
        _dict = self.dict(by_alias=True,
                          exclude={
                          },
                          exclude_none=True)
        return _dict

    @classmethod
    def from_dict(cls, obj: dict) -> SendFileRequest:
        """Create an instance of SendFileRequest from a dict"""
        if obj is None:
            return None

        if not isinstance(obj, dict):
            return SendFileRequest.parse_obj(obj)

        _obj = SendFileRequest.parse_obj({
            "chat_id": obj.get("chatId"),
            "phone": obj.get("phone"),
            "body": obj.get("body"),
            "filename": obj.get("filename"),
            "caption": obj.get("caption")
        })
        return _obj


