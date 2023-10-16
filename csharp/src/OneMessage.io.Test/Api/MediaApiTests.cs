/*
 * one_msg_waba_sdk
 *
 * [1MSG.IO](https://1msg.io/) is the perfect WhatsApp management tool for your business. With us you get full access to the official Whatsapp API/webhooks.  Every API request must contain an Authorize HTTP header with a token.  This is your channel token, which can be found in your channel project on your profile page. Please do not give the token to anyone or post it publicly.  The authorization token must be added to each request in the GET parameter 'token' and always passed to query string (?token={your_token}). Parameters in GET queries pass query string. Parameters in POST requests — through the JSON-encoded request body.   All 'send' methods (except /sendTemplate) will only work when the dialog session with the user is open. Some of our solutions simplify and avoid such limitations, but we urge you to pay more attention to this detail
 *
 * The version of the OpenAPI document: 2.39.0
 * Contact: hello@1msg.io
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

using System;
using System.IO;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Reflection;
using RestSharp;
using Xunit;

using OneMessage.io.Client;
using OneMessage.io.Api;
// uncomment below to import models
//using OneMessage.io.Model;

namespace OneMessage.io.Test.Api
{
    /// <summary>
    ///  Class for testing MediaApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    public class MediaApiTests : IDisposable
    {
        private MediaApi instance;

        public MediaApiTests()
        {
            instance = new MediaApi();
        }

        public void Dispose()
        {
            // Cleanup when everything is done.
        }

        /// <summary>
        /// Test an instance of MediaApi
        /// </summary>
        [Fact]
        public void InstanceTest()
        {
            // TODO uncomment below to test 'IsType' MediaApi
            //Assert.IsType<MediaApi>(instance);
        }

        /// <summary>
        /// Test UploadMedia
        /// </summary>
        [Fact]
        public void UploadMediaTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //UploadMedia uploadMedia = null;
            //var response = instance.UploadMedia(uploadMedia);
            //Assert.IsType<MediaId>(response);
        }
    }
}
