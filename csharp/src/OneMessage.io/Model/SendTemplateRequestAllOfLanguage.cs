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
using OpenAPIDateConverter = OneMessage.io.Client.OpenAPIDateConverter;

namespace OneMessage.io.Model
{
    /// <summary>
    /// Object, containing fields \&quot;policy\&quot; and \&quot;code\&quot;.  **policy** - now \&quot;deterministic\&quot; is only available option;  **code** - one of supported language codes
    /// </summary>
    [DataContract(Name = "SendTemplateRequest_allOf_language")]
    public partial class SendTemplateRequestAllOfLanguage : IEquatable<SendTemplateRequestAllOfLanguage>, IValidatableObject
    {
        /// <summary>
        /// Defines Policy
        /// </summary>
        [JsonConverter(typeof(StringEnumConverter))]
        public enum PolicyEnum
        {
            /// <summary>
            /// Enum Deterministic for value: deterministic
            /// </summary>
            [EnumMember(Value = "deterministic")]
            Deterministic = 1
        }


        /// <summary>
        /// Gets or Sets Policy
        /// </summary>
        /// <example>deterministic</example>
        [DataMember(Name = "policy", EmitDefaultValue = false)]
        public PolicyEnum? Policy { get; set; }

        /// <summary>
        /// Gets or Sets Code
        /// </summary>
        [DataMember(Name = "code", EmitDefaultValue = false)]
        public TemplateLanguageProp? Code { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="SendTemplateRequestAllOfLanguage" /> class.
        /// </summary>
        /// <param name="policy">policy.</param>
        /// <param name="code">code.</param>
        public SendTemplateRequestAllOfLanguage(PolicyEnum? policy = default(PolicyEnum?), TemplateLanguageProp? code = default(TemplateLanguageProp?))
        {
            this.Policy = policy;
            this.Code = code;
        }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class SendTemplateRequestAllOfLanguage {\n");
            sb.Append("  Policy: ").Append(Policy).Append("\n");
            sb.Append("  Code: ").Append(Code).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }

        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public virtual string ToJson()
        {
            return Newtonsoft.Json.JsonConvert.SerializeObject(this, Newtonsoft.Json.Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as SendTemplateRequestAllOfLanguage);
        }

        /// <summary>
        /// Returns true if SendTemplateRequestAllOfLanguage instances are equal
        /// </summary>
        /// <param name="input">Instance of SendTemplateRequestAllOfLanguage to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(SendTemplateRequestAllOfLanguage input)
        {
            if (input == null)
            {
                return false;
            }
            return 
                (
                    this.Policy == input.Policy ||
                    this.Policy.Equals(input.Policy)
                ) && 
                (
                    this.Code == input.Code ||
                    this.Code.Equals(input.Code)
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                int hashCode = 41;
                hashCode = (hashCode * 59) + this.Policy.GetHashCode();
                hashCode = (hashCode * 59) + this.Code.GetHashCode();
                return hashCode;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            yield break;
        }
    }

}
