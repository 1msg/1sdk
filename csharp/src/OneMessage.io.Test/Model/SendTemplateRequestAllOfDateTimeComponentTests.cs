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
    ///  Class for testing SendTemplateRequestAllOfDateTimeComponent
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the model.
    /// </remarks>
    public class SendTemplateRequestAllOfDateTimeComponentTests : IDisposable
    {
        // TODO uncomment below to declare an instance variable for SendTemplateRequestAllOfDateTimeComponent
        //private SendTemplateRequestAllOfDateTimeComponent instance;

        public SendTemplateRequestAllOfDateTimeComponentTests()
        {
            // TODO uncomment below to create an instance of SendTemplateRequestAllOfDateTimeComponent
            //instance = new SendTemplateRequestAllOfDateTimeComponent();
        }

        public void Dispose()
        {
            // Cleanup when everything is done.
        }

        /// <summary>
        /// Test an instance of SendTemplateRequestAllOfDateTimeComponent
        /// </summary>
        [Fact]
        public void SendTemplateRequestAllOfDateTimeComponentInstanceTest()
        {
            // TODO uncomment below to test "IsType" SendTemplateRequestAllOfDateTimeComponent
            //Assert.IsType<SendTemplateRequestAllOfDateTimeComponent>(instance);
        }

        /// <summary>
        /// Test the property 'DayOfWeek'
        /// </summary>
        [Fact]
        public void DayOfWeekTest()
        {
            // TODO unit test for the property 'DayOfWeek'
        }

        /// <summary>
        /// Test the property 'Year'
        /// </summary>
        [Fact]
        public void YearTest()
        {
            // TODO unit test for the property 'Year'
        }

        /// <summary>
        /// Test the property 'Month'
        /// </summary>
        [Fact]
        public void MonthTest()
        {
            // TODO unit test for the property 'Month'
        }

        /// <summary>
        /// Test the property 'DayOfMonth'
        /// </summary>
        [Fact]
        public void DayOfMonthTest()
        {
            // TODO unit test for the property 'DayOfMonth'
        }

        /// <summary>
        /// Test the property 'Hour'
        /// </summary>
        [Fact]
        public void HourTest()
        {
            // TODO unit test for the property 'Hour'
        }

        /// <summary>
        /// Test the property 'Minute'
        /// </summary>
        [Fact]
        public void MinuteTest()
        {
            // TODO unit test for the property 'Minute'
        }

        /// <summary>
        /// Test the property 'Calendar'
        /// </summary>
        [Fact]
        public void CalendarTest()
        {
            // TODO unit test for the property 'Calendar'
        }
    }
}