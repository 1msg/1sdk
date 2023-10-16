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
    ///  Class for testing MessagingApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    public class MessagingApiTests : IDisposable
    {
        private MessagingApi instance;

        public MessagingApiTests()
        {
            instance = new MessagingApi();
        }

        public void Dispose()
        {
            // Cleanup when everything is done.
        }

        /// <summary>
        /// Test an instance of MessagingApi
        /// </summary>
        [Fact]
        public void InstanceTest()
        {
            // TODO uncomment below to test 'IsType' MessagingApi
            //Assert.IsType<MessagingApi>(instance);
        }

        /// <summary>
        /// Test MessagesList
        /// </summary>
        [Fact]
        public void MessagesListTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //bool? last = null;
            //int? lastMessageNumber = null;
            //int? firstMessageNumber = null;
            //int? limit = null;
            //string? chatId = null;
            //int? minTime = null;
            //int? maxTime = null;
            //string? msgId = null;
            //var response = instance.MessagesList(last, lastMessageNumber, firstMessageNumber, limit, chatId, minTime, maxTime, msgId);
            //Assert.IsType<GetMessages>(response);
        }

        /// <summary>
        /// Test ReadMessage
        /// </summary>
        [Fact]
        public void ReadMessageTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //ReadMessageRequest? readMessageRequest = null;
            //var response = instance.ReadMessage(readMessageRequest);
            //Assert.IsType<SetMe>(response);
        }

        /// <summary>
        /// Test SendContact
        /// </summary>
        [Fact]
        public void SendContactTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //SendContactRequest sendContactRequest = null;
            //var response = instance.SendContact(sendContactRequest);
            //Assert.IsType<SendMessageStatus>(response);
        }

        /// <summary>
        /// Test SendFile
        /// </summary>
        [Fact]
        public void SendFileTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //SendFileRequest sendFileRequest = null;
            //var response = instance.SendFile(sendFileRequest);
            //Assert.IsType<SendMessageStatus>(response);
        }

        /// <summary>
        /// Test SendList
        /// </summary>
        [Fact]
        public void SendListTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //SendListRequest sendListRequest = null;
            //var response = instance.SendList(sendListRequest);
            //Assert.IsType<SendMessageStatus>(response);
        }

        /// <summary>
        /// Test SendLocation
        /// </summary>
        [Fact]
        public void SendLocationTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //SendLocationRequest sendLocationRequest = null;
            //var response = instance.SendLocation(sendLocationRequest);
            //Assert.IsType<SendMessageStatus>(response);
        }

        /// <summary>
        /// Test SendMessage
        /// </summary>
        [Fact]
        public void SendMessageTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //SendMessageRequest sendMessageRequest = null;
            //var response = instance.SendMessage(sendMessageRequest);
            //Assert.IsType<SendMessageStatus>(response);
        }
    }
}