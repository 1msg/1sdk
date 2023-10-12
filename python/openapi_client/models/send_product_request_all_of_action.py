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
from pydantic import BaseModel, Field, StrictStr, conlist
from openapi_client.models.send_product_request_all_of_action_sections import SendProductRequestAllOfActionSections

class SendProductRequestAllOfAction(BaseModel):
    """
    Object containing info about product or catalog. Can contain the following fields:  **catalog_id** - id of catalog  **product_retailer_id** - id of product. Only for sending single product.  **sections** - used for sending multiply products. It`s array containing objects with catalog info. See example below.  Example: {\"catalog_id\":\"{{catalog_id}}\",\"sections\":[{\"title\":\"the-section-title\",\"product_items\":[{\"product_retailer_id\":\"{{SKU-1}}\"},{\"product_retailer_id\":\"{{SKU-2}}\"}]},{\"title\":\"the-section-title2\",\"product_items\":[{\"product_retailer_id\":\"{{SKU-1}}\"}]}]}  # noqa: E501
    """
    catalog_id: Optional[StrictStr] = Field(None, description="id of the catalog")
    product_retailer_id: Optional[StrictStr] = Field(None, description="id of the product")
    sections: Optional[conlist(SendProductRequestAllOfActionSections)] = None
    __properties = ["catalog_id", "product_retailer_id", "sections"]

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
    def from_json(cls, json_str: str) -> SendProductRequestAllOfAction:
        """Create an instance of SendProductRequestAllOfAction from a JSON string"""
        return cls.from_dict(json.loads(json_str))

    def to_dict(self):
        """Returns the dictionary representation of the model using alias"""
        _dict = self.dict(by_alias=True,
                          exclude={
                          },
                          exclude_none=True)
        # override the default output from pydantic by calling `to_dict()` of each item in sections (list)
        _items = []
        if self.sections:
            for _item in self.sections:
                if _item:
                    _items.append(_item.to_dict())
            _dict['sections'] = _items
        return _dict

    @classmethod
    def from_dict(cls, obj: dict) -> SendProductRequestAllOfAction:
        """Create an instance of SendProductRequestAllOfAction from a dict"""
        if obj is None:
            return None

        if not isinstance(obj, dict):
            return SendProductRequestAllOfAction.parse_obj(obj)

        _obj = SendProductRequestAllOfAction.parse_obj({
            "catalog_id": obj.get("catalog_id"),
            "product_retailer_id": obj.get("product_retailer_id"),
            "sections": [SendProductRequestAllOfActionSections.from_dict(_item) for _item in obj.get("sections")] if obj.get("sections") is not None else None
        })
        return _obj


