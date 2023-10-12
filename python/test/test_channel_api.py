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

from openapi_client.api.channel_api import ChannelApi  # noqa: E501


class TestChannelApi(unittest.TestCase):
    """ChannelApi unit test stubs"""

    def setUp(self) -> None:
        self.api = ChannelApi()  # noqa: E501

    def tearDown(self) -> None:
        pass

    def test_get_commerce(self) -> None:
        """Test case for get_commerce

        Get Commerce Settings  # noqa: E501
        """
        pass

    def test_get_extended_statistics(self) -> None:
        """Test case for get_extended_statistics

        Get Extended Channel statistics  # noqa: E501
        """
        pass

    def test_get_me(self) -> None:
        """Test case for get_me

        Get Profile Info  # noqa: E501
        """
        pass

    def test_get_settings(self) -> None:
        """Test case for get_settings

        Get Settings  # noqa: E501
        """
        pass

    def test_get_statistics(self) -> None:
        """Test case for get_statistics

        Get Channel statistics  # noqa: E501
        """
        pass

    def test_get_status(self) -> None:
        """Test case for get_status

         Get Status  # noqa: E501
        """
        pass

    def test_output_ip(self) -> None:
        """Test case for output_ip

        Get channel server IP  # noqa: E501
        """
        pass

    def test_set_me(self) -> None:
        """Test case for set_me

        Change user info  # noqa: E501
        """
        pass

    def test_set_settings(self) -> None:
        """Test case for set_settings

        Set settings  # noqa: E501
        """
        pass


if __name__ == '__main__':
    unittest.main()
