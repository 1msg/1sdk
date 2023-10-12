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
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.IO;
using System.Runtime.Serialization;
using System.Text;
using System.Text.RegularExpressions;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using Newtonsoft.Json.Linq;
using System.ComponentModel.DataAnnotations;
using OpenAPIDateConverter = Org.OpenAPITools.Client.OpenAPIDateConverter;

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// Template category
    /// </summary>
    /// <value>Template category</value>
    [JsonConverter(typeof(StringEnumConverter))]
    public enum TemplateCategoryProp
    {
        /// <summary>
        /// Enum MARKETING for value: MARKETING
        /// </summary>
        [EnumMember(Value = "MARKETING")]
        MARKETING = 1,

        /// <summary>
        /// Enum TRANSACTIONAL for value: TRANSACTIONAL
        /// </summary>
        [EnumMember(Value = "TRANSACTIONAL")]
        TRANSACTIONAL = 2,

        /// <summary>
        /// Enum OTP for value: OTP
        /// </summary>
        [EnumMember(Value = "OTP")]
        OTP = 3
    }

}
