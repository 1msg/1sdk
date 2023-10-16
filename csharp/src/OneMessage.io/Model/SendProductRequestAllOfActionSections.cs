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
    /// SendProductRequestAllOfActionSections
    /// </summary>
    [DataContract(Name = "SendProductRequest_allOf_action_sections")]
    public partial class SendProductRequestAllOfActionSections : IEquatable<SendProductRequestAllOfActionSections>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="SendProductRequestAllOfActionSections" /> class.
        /// </summary>
        /// <param name="title">Title of the section. Example: the-section-title.</param>
        /// <param name="productItems">productItems.</param>
        public SendProductRequestAllOfActionSections(string title = default(string), List<SendProductRequestAllOfActionProductItems> productItems = default(List<SendProductRequestAllOfActionProductItems>))
        {
            this.Title = title;
            this.ProductItems = productItems;
        }

        /// <summary>
        /// Title of the section. Example: the-section-title
        /// </summary>
        /// <value>Title of the section. Example: the-section-title</value>
        /// <example>the-section-title</example>
        [DataMember(Name = "title", EmitDefaultValue = false)]
        public string Title { get; set; }

        /// <summary>
        /// Gets or Sets ProductItems
        /// </summary>
        [DataMember(Name = "product_items", EmitDefaultValue = false)]
        public List<SendProductRequestAllOfActionProductItems> ProductItems { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class SendProductRequestAllOfActionSections {\n");
            sb.Append("  Title: ").Append(Title).Append("\n");
            sb.Append("  ProductItems: ").Append(ProductItems).Append("\n");
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
            return this.Equals(input as SendProductRequestAllOfActionSections);
        }

        /// <summary>
        /// Returns true if SendProductRequestAllOfActionSections instances are equal
        /// </summary>
        /// <param name="input">Instance of SendProductRequestAllOfActionSections to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(SendProductRequestAllOfActionSections input)
        {
            if (input == null)
            {
                return false;
            }
            return 
                (
                    this.Title == input.Title ||
                    (this.Title != null &&
                    this.Title.Equals(input.Title))
                ) && 
                (
                    this.ProductItems == input.ProductItems ||
                    this.ProductItems != null &&
                    input.ProductItems != null &&
                    this.ProductItems.SequenceEqual(input.ProductItems)
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
                if (this.Title != null)
                {
                    hashCode = (hashCode * 59) + this.Title.GetHashCode();
                }
                if (this.ProductItems != null)
                {
                    hashCode = (hashCode * 59) + this.ProductItems.GetHashCode();
                }
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