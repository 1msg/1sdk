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
    /// GetMe
    /// </summary>
    [DataContract(Name = "GetMe")]
    public partial class GetMe : IEquatable<GetMe>, IValidatableObject
    {
        /// <summary>
        /// Industry of the business
        /// </summary>
        /// <value>Industry of the business</value>
        [JsonConverter(typeof(StringEnumConverter))]
        public enum VerticalEnum
        {
            /// <summary>
            /// Enum Automotive for value: Automotive
            /// </summary>
            [EnumMember(Value = "Automotive")]
            Automotive = 1,

            /// <summary>
            /// Enum BeautySpaAndSalon for value: Beauty, Spa and Salon
            /// </summary>
            [EnumMember(Value = "Beauty, Spa and Salon")]
            BeautySpaAndSalon = 2,

            /// <summary>
            /// Enum ClothingAndApparel for value: Clothing and Apparel
            /// </summary>
            [EnumMember(Value = "Clothing and Apparel")]
            ClothingAndApparel = 3,

            /// <summary>
            /// Enum Education for value: Education
            /// </summary>
            [EnumMember(Value = "Education")]
            Education = 4,

            /// <summary>
            /// Enum Entertainment for value: Entertainment
            /// </summary>
            [EnumMember(Value = "Entertainment")]
            Entertainment = 5,

            /// <summary>
            /// Enum EventPlanningAndService for value: Event Planning and Service
            /// </summary>
            [EnumMember(Value = "Event Planning and Service")]
            EventPlanningAndService = 6,

            /// <summary>
            /// Enum FinanceAndBanking for value: Finance and Banking
            /// </summary>
            [EnumMember(Value = "Finance and Banking")]
            FinanceAndBanking = 7,

            /// <summary>
            /// Enum FoodAndGrocery for value: Food and Grocery
            /// </summary>
            [EnumMember(Value = "Food and Grocery")]
            FoodAndGrocery = 8,

            /// <summary>
            /// Enum PublicService for value: Public Service
            /// </summary>
            [EnumMember(Value = "Public Service")]
            PublicService = 9,

            /// <summary>
            /// Enum HotelAndLodging for value: Hotel and Lodging
            /// </summary>
            [EnumMember(Value = "Hotel and Lodging")]
            HotelAndLodging = 10,

            /// <summary>
            /// Enum MedicalAndHealth for value: Medical and Health
            /// </summary>
            [EnumMember(Value = "Medical and Health")]
            MedicalAndHealth = 11,

            /// <summary>
            /// Enum NonProfit for value: Non-profit
            /// </summary>
            [EnumMember(Value = "Non-profit")]
            NonProfit = 12,

            /// <summary>
            /// Enum ProfessionalServices for value: Professional Services
            /// </summary>
            [EnumMember(Value = "Professional Services")]
            ProfessionalServices = 13,

            /// <summary>
            /// Enum ShoppingAndRetail for value: Shopping and Retail
            /// </summary>
            [EnumMember(Value = "Shopping and Retail")]
            ShoppingAndRetail = 14,

            /// <summary>
            /// Enum TravelAndTransportation for value: Travel and Transportation
            /// </summary>
            [EnumMember(Value = "Travel and Transportation")]
            TravelAndTransportation = 15,

            /// <summary>
            /// Enum Restaurant for value: Restaurant
            /// </summary>
            [EnumMember(Value = "Restaurant")]
            Restaurant = 16,

            /// <summary>
            /// Enum Other for value: Other
            /// </summary>
            [EnumMember(Value = "Other")]
            Other = 17,

            /// <summary>
            /// Enum Empty for value: 
            /// </summary>
            [EnumMember(Value = "")]
            Empty = 18
        }


        /// <summary>
        /// Industry of the business
        /// </summary>
        /// <value>Industry of the business</value>
        /// <example>Other</example>
        [DataMember(Name = "vertical", EmitDefaultValue = false)]
        public VerticalEnum? Vertical { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="GetMe" /> class.
        /// </summary>
        /// <param name="about">Profile&#x60;s About section..</param>
        /// <param name="address">Address of the business.</param>
        /// <param name="description">Description of the business. Max 256 characters.</param>
        /// <param name="email">Business email.</param>
        /// <param name="phone">Linked phone number.</param>
        /// <param name="vertical">Industry of the business.</param>
        /// <param name="photo">photo.</param>
        public GetMe(string about = default(string), string address = default(string), string description = default(string), string email = default(string), string phone = default(string), VerticalEnum? vertical = default(VerticalEnum?), string photo = default(string))
        {
            this.About = about;
            this.Address = address;
            this.Description = description;
            this.Email = email;
            this.Phone = phone;
            this.Vertical = vertical;
            this.Photo = photo;
        }

        /// <summary>
        /// Profile&#x60;s About section.
        /// </summary>
        /// <value>Profile&#x60;s About section.</value>
        /// <example>Some about info</example>
        [DataMember(Name = "about", EmitDefaultValue = false)]
        public string About { get; set; }

        /// <summary>
        /// Address of the business
        /// </summary>
        /// <value>Address of the business</value>
        /// <example>Neverland, Unexpected st.</example>
        [DataMember(Name = "address", EmitDefaultValue = false)]
        public string Address { get; set; }

        /// <summary>
        /// Description of the business. Max 256 characters
        /// </summary>
        /// <value>Description of the business. Max 256 characters</value>
        /// <example>Some company description</example>
        [DataMember(Name = "description", EmitDefaultValue = false)]
        public string Description { get; set; }

        /// <summary>
        /// Business email
        /// </summary>
        /// <value>Business email</value>
        /// <example>john@neverland.play</example>
        [DataMember(Name = "email", EmitDefaultValue = false)]
        public string Email { get; set; }

        /// <summary>
        /// Linked phone number
        /// </summary>
        /// <value>Linked phone number</value>
        /// <example>12020721369</example>
        [DataMember(Name = "phone", EmitDefaultValue = false)]
        public string Phone { get; set; }

        /// <summary>
        /// Gets or Sets Photo
        /// </summary>
        /// <example>https://pps.whatsapp.net/sample.jpg</example>
        [DataMember(Name = "photo", EmitDefaultValue = false)]
        public string Photo { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class GetMe {\n");
            sb.Append("  About: ").Append(About).Append("\n");
            sb.Append("  Address: ").Append(Address).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  Email: ").Append(Email).Append("\n");
            sb.Append("  Phone: ").Append(Phone).Append("\n");
            sb.Append("  Vertical: ").Append(Vertical).Append("\n");
            sb.Append("  Photo: ").Append(Photo).Append("\n");
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
            return this.Equals(input as GetMe);
        }

        /// <summary>
        /// Returns true if GetMe instances are equal
        /// </summary>
        /// <param name="input">Instance of GetMe to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(GetMe input)
        {
            if (input == null)
            {
                return false;
            }
            return 
                (
                    this.About == input.About ||
                    (this.About != null &&
                    this.About.Equals(input.About))
                ) && 
                (
                    this.Address == input.Address ||
                    (this.Address != null &&
                    this.Address.Equals(input.Address))
                ) && 
                (
                    this.Description == input.Description ||
                    (this.Description != null &&
                    this.Description.Equals(input.Description))
                ) && 
                (
                    this.Email == input.Email ||
                    (this.Email != null &&
                    this.Email.Equals(input.Email))
                ) && 
                (
                    this.Phone == input.Phone ||
                    (this.Phone != null &&
                    this.Phone.Equals(input.Phone))
                ) && 
                (
                    this.Vertical == input.Vertical ||
                    this.Vertical.Equals(input.Vertical)
                ) && 
                (
                    this.Photo == input.Photo ||
                    (this.Photo != null &&
                    this.Photo.Equals(input.Photo))
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
                if (this.About != null)
                {
                    hashCode = (hashCode * 59) + this.About.GetHashCode();
                }
                if (this.Address != null)
                {
                    hashCode = (hashCode * 59) + this.Address.GetHashCode();
                }
                if (this.Description != null)
                {
                    hashCode = (hashCode * 59) + this.Description.GetHashCode();
                }
                if (this.Email != null)
                {
                    hashCode = (hashCode * 59) + this.Email.GetHashCode();
                }
                if (this.Phone != null)
                {
                    hashCode = (hashCode * 59) + this.Phone.GetHashCode();
                }
                hashCode = (hashCode * 59) + this.Vertical.GetHashCode();
                if (this.Photo != null)
                {
                    hashCode = (hashCode * 59) + this.Photo.GetHashCode();
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
