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
using Org.OpenAPITools.Model;
using Org.OpenAPITools.Client;
using System.Reflection;
using Newtonsoft.Json;

namespace Org.OpenAPITools.Test.Model
{
    /// <summary>
    ///  Class for testing GetTemplatesTemplatesInner
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the model.
    /// </remarks>
    public class GetTemplatesTemplatesInnerTests : IDisposable
    {
        // TODO uncomment below to declare an instance variable for GetTemplatesTemplatesInner
        //private GetTemplatesTemplatesInner instance;

        public GetTemplatesTemplatesInnerTests()
        {
            // TODO uncomment below to create an instance of GetTemplatesTemplatesInner
            //instance = new GetTemplatesTemplatesInner();
        }

        public void Dispose()
        {
            // Cleanup when everything is done.
        }

        /// <summary>
        /// Test an instance of GetTemplatesTemplatesInner
        /// </summary>
        [Fact]
        public void GetTemplatesTemplatesInnerInstanceTest()
        {
            // TODO uncomment below to test "IsType" GetTemplatesTemplatesInner
            //Assert.IsType<GetTemplatesTemplatesInner>(instance);
        }

        /// <summary>
        /// Test the property 'Category'
        /// </summary>
        [Fact]
        public void CategoryTest()
        {
            // TODO unit test for the property 'Category'
        }

        /// <summary>
        /// Test the property 'Components'
        /// </summary>
        [Fact]
        public void ComponentsTest()
        {
            // TODO unit test for the property 'Components'
        }

        /// <summary>
        /// Test the property 'Language'
        /// </summary>
        [Fact]
        public void LanguageTest()
        {
            // TODO unit test for the property 'Language'
        }

        /// <summary>
        /// Test the property 'Name'
        /// </summary>
        [Fact]
        public void NameTest()
        {
            // TODO unit test for the property 'Name'
        }

        /// <summary>
        /// Test the property 'VarNamespace'
        /// </summary>
        [Fact]
        public void VarNamespaceTest()
        {
            // TODO unit test for the property 'VarNamespace'
        }

        /// <summary>
        /// Test the property 'RejectedReason'
        /// </summary>
        [Fact]
        public void RejectedReasonTest()
        {
            // TODO unit test for the property 'RejectedReason'
        }

        /// <summary>
        /// Test the property 'Status'
        /// </summary>
        [Fact]
        public void StatusTest()
        {
            // TODO unit test for the property 'Status'
        }
    }
}
