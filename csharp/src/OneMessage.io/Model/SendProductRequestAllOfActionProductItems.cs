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
    /// SendProductRequestAllOfActionProductItems
    /// </summary>
    [DataContract(Name = "SendProductRequest_allOf_action_product_items")]
    public partial class SendProductRequestAllOfActionProductItems : IEquatable<SendProductRequestAllOfActionProductItems>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="SendProductRequestAllOfActionProductItems" /> class.
        /// </summary>
        /// <param name="productRetailerId">id of the product.</param>
        public SendProductRequestAllOfActionProductItems(string productRetailerId = default(string))
        {
            this.ProductRetailerId = productRetailerId;
        }

        /// <summary>
        /// id of the product
        /// </summary>
        /// <value>id of the product</value>
        /// <example>product-1</example>
        [DataMember(Name = "product_retailer_id", EmitDefaultValue = false)]
        public string ProductRetailerId { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class SendProductRequestAllOfActionProductItems {\n");
            sb.Append("  ProductRetailerId: ").Append(ProductRetailerId).Append("\n");
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
            return this.Equals(input as SendProductRequestAllOfActionProductItems);
        }

        /// <summary>
        /// Returns true if SendProductRequestAllOfActionProductItems instances are equal
        /// </summary>
        /// <param name="input">Instance of SendProductRequestAllOfActionProductItems to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(SendProductRequestAllOfActionProductItems input)
        {
            if (input == null)
            {
                return false;
            }
            return 
                (
                    this.ProductRetailerId == input.ProductRetailerId ||
                    (this.ProductRetailerId != null &&
                    this.ProductRetailerId.Equals(input.ProductRetailerId))
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
                if (this.ProductRetailerId != null)
                {
                    hashCode = (hashCode * 59) + this.ProductRetailerId.GetHashCode();
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
