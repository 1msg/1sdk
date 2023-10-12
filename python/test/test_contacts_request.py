# coding: utf-8

"""
    one_msg_waba_sdk

    [1MSG.IO](https://1msg.io/) is the perfect WhatsApp management tool for your business. With us you get full access to the official Whatsapp API/webhooks.  Every API request must contain an Authorize HTTP header with a token.  This is your channel token, which can be found in your channel project on your profile page. Please do not give the token to anyone or post it publicly.  The authorization token must be added to each request in the GET parameter 'token' and always passed to query string (?token={your_token}). Parameters in GET queries pass query string. Parameters in POST requests — through the JSON-encoded request body.   All 'send' methods (except /sendTemplate) will only work when the dialog session with the user is open. Some of our solutions simplify and avoid such limitations, but we urge you to pay more attention to this detail

    The version of the OpenAPI document: 2.39.0
    Contact: hello@1msg.io
    Generated by OpenAPI Generator (https://openapi-generator.tech)

    Do not edit the class manually.
"""  # noqa: E501


import unittest
import datetime

from openapi_client.models.contacts_request import ContactsRequest  # noqa: E501

class TestContactsRequest(unittest.TestCase):
    """ContactsRequest unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional) -> ContactsRequest:
        """Test ContactsRequest
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # uncomment below to create an instance of `ContactsRequest`
        """
        model = ContactsRequest()  # noqa: E501
        if include_optional:
            return ContactsRequest(
                blocking = 'wait',
                force_check = True,
                contacts = ["16315551000","+1 631 555 1001","6315551002","+1 (631) 555-1004","1-631-555-1005"]
            )
        else:
            return ContactsRequest(
                contacts = ["16315551000","+1 631 555 1001","6315551002","+1 (631) 555-1004","1-631-555-1005"],
        )
        """

    def testContactsRequest(self):
        """Test ContactsRequest"""
        # inst_req_only = self.make_instance(include_optional=False)
        # inst_req_and_optional = self.make_instance(include_optional=True)

if __name__ == '__main__':
    unittest.main()
