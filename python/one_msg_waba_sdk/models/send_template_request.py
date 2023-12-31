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
from pydantic import BaseModel, Field, StrictInt, StrictStr, conlist
from one_msg_waba_sdk.models.send_template_request_all_of_language import SendTemplateRequestAllOfLanguage
from one_msg_waba_sdk.models.send_template_request_all_of_params import SendTemplateRequestAllOfParams


class SendTemplateRequest(BaseModel):
    """
    SendTemplateRequest
    """
    namespace: StrictStr = Field(..., description="Can be found by method /templates")
    chat_id: Optional[StrictStr] = Field(
        None, alias="chatId", description="**Required if phone is not set**  Chat ID from the message list. Examples: 12020721369@c.us . Used instead of the phone parameter.")
    phone: Optional[StrictInt] = Field(
        None, description="**Required if chatId is not set**  A phone number starting with the country code. You do not need to add your number.   USA example: 12020721369.")
    template: StrictStr = Field(..., description="Name of template")
    language: SendTemplateRequestAllOfLanguage = Field(...)
    params: Optional[conlist(SendTemplateRequestAllOfParams)] = Field(None, description="Array of localizable parameters to be substituted into the template. Each parameter is object contains the following field:  **type** - section of parameters - header, body, footer, button  **parameters** - variables for section.  Each variable is an object that can contain the following fields:  **type** - can be text, currency, date_time, image, document or video  **video**- id (mediaId)  **document**   * id (mediaId)  * filename(optional)  **image** - object with field link (image url)  **currency** - object containing parameters currency_code and amount_1000.  * *currency_code* - Currency code as defined in ISO 4217.  * *amount_1000* - Amount multiplied by 1000.  * *fallback_value* - Default text if localization fails.  **date_time** - If the date_time object is used, further definition of the date and time is required.  * *component* - The time is assembled from components (i.e., day of the week, month, hour, etc.) The time specified will be the same, regardless of the time zone the client is in.  * *unix_epoch* - The time to be displayed is dependent on the time zone the client is in.  * *fallback_value* - Default text if localization fails.  **button** - if button has parameter   * sub_type (url/quick_reply)  * parameters (array to fill button variable)  * index - button position.  **The number of parameters passed must match the number of parameters in the template**")
    __properties = ["namespace", "chatId", "phone", "template", "language", "params"]

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
    def from_json(cls, json_str: str) -> SendTemplateRequest:
        """Create an instance of SendTemplateRequest from a JSON string"""
        return cls.from_dict(json.loads(json_str))

    def to_dict(self):
        """Returns the dictionary representation of the model using alias"""
        _dict = self.dict(by_alias=True,
                          exclude={
                          },
                          exclude_none=True)
        # override the default output from pydantic by calling `to_dict()` of language
        if self.language:
            _dict['language'] = self.language.to_dict()
        # override the default output from pydantic by calling `to_dict()` of each item in params (list)
        _items = []
        if self.params:
            for _item in self.params:
                if _item:
                    _items.append(_item.to_dict())
            _dict['params'] = _items
        return _dict

    @classmethod
    def from_dict(cls, obj: dict) -> SendTemplateRequest:
        """Create an instance of SendTemplateRequest from a dict"""
        if obj is None:
            return None

        if not isinstance(obj, dict):
            return SendTemplateRequest.parse_obj(obj)

        _obj = SendTemplateRequest.parse_obj({
            "namespace": obj.get("namespace"),
            "chat_id": obj.get("chatId"),
            "phone": obj.get("phone"),
            "template": obj.get("template"),
            "language": SendTemplateRequestAllOfLanguage.from_dict(obj.get("language")) if obj.get("language") is not None else None,
            "params": [SendTemplateRequestAllOfParams.from_dict(_item) for _item in obj.get("params")] if obj.get("params") is not None else None
        })
        return _obj
