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

from one_msg_waba_sdk.models.channel_extended_statistics_inner import ChannelExtendedStatisticsInner  # noqa: E501


class TestChannelExtendedStatisticsInner(unittest.TestCase):
    """ChannelExtendedStatisticsInner unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional) -> ChannelExtendedStatisticsInner:
        """Test ChannelExtendedStatisticsInner
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # uncomment below to create an instance of `ChannelExtendedStatisticsInner`
        """
        model = ChannelExtendedStatisticsInner()  # noqa: E501
        if include_optional:
            return ChannelExtendedStatisticsInner(
                business_initiated_paid_quantity = 1,
                business_initiated_price = 0.0691,
                business_initiated_quantity = 2,
                free_entry_point = 0,
                free_quantity = 1,
                free_tier = 1,
                paid_quantity = 1,
                period_date = '2022-11-01T00:00:00Z',
                quantity = 2,
                total_price = 0.0691,
                user_initiated_paid_quantity = 1,
                user_initiated_price = 0.0691,
                user_initiated_quantity = 2
            )
        else:
            return ChannelExtendedStatisticsInner(
        )
        """

    def testChannelExtendedStatisticsInner(self):
        """Test ChannelExtendedStatisticsInner"""
        # inst_req_only = self.make_instance(include_optional=False)
        # inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
