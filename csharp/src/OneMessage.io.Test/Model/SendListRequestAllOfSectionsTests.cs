/*
 * one_msg_waba_sdk
 *
 * [1MSG.IO](https://1msg.io/) is the perfect WhatsApp management tool for your business. With us you get full access to the official Whatsapp API/webhooks.  Every API request must contain an Authorize HTTP header with a token.  This is your channel token, which can be found in your channel project on your profile page. Please do not give the token to anyone or post it publicly.  The authorization token must be added to each request in the GET parameter 'token' and always passed to query string (?token={your_token}). Parameters in GET queries pass query string. Parameters in POST requests — through the JSON-encoded request body.   All 'send' methods (except /sendTemplate) will only work when the dialog session with the user is open. Some of our solutions simplify and avoid such limitations, but we urge you to pay more attention to this detail
 *
 * The version of the OpenAPI document: 2.39.0
 * Contact: hello@1msg.io
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */


using Xunit;

using System;
using System.Linq;
using System.IO;
using System.Collections.Generic;
using OneMessage.io.Model;
using OneMessage.io.Client;
using System.Reflection;
using Newtonsoft.Json;

namespace OneMessage.io.Test.Model
{
    /// <summary>
    ///  Class for testing SendListRequestAllOfSections
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the model.
    /// </remarks>
    public class SendListRequestAllOfSectionsTests : IDisposable
    {
        // TODO uncomment below to declare an instance variable for SendListRequestAllOfSections
        //private SendListRequestAllOfSections instance;

        public SendListRequestAllOfSectionsTests()
        {
            // TODO uncomment below to create an instance of SendListRequestAllOfSections
            //instance = new SendListRequestAllOfSections();
        }

        public void Dispose()
        {
            // Cleanup when everything is done.
        }

        /// <summary>
        /// Test an instance of SendListRequestAllOfSections
        /// </summary>
        [Fact]
        public void SendListRequestAllOfSectionsInstanceTest()
        {
            // TODO uncomment below to test "IsType" SendListRequestAllOfSections
            //Assert.IsType<SendListRequestAllOfSections>(instance);
        }

        /// <summary>
        /// Test the property 'Title'
        /// </summary>
        [Fact]
        public void TitleTest()
        {
            // TODO unit test for the property 'Title'
        }

        /// <summary>
        /// Test the property 'Rows'
        /// </summary>
        [Fact]
        public void RowsTest()
        {
            // TODO unit test for the property 'Rows'
        }
    }
}
