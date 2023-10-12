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
    /// GetMessagesMessagesInner
    /// </summary>
    [DataContract(Name = "GetMessages_messages_inner")]
    public partial class GetMessagesMessagesInner : IEquatable<GetMessagesMessagesInner>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="GetMessagesMessagesInner" /> class.
        /// </summary>
        /// <param name="messageNumber">messageNumber.</param>
        /// <param name="id">id.</param>
        /// <param name="body">body.</param>
        /// <param name="fromMe">fromMe.</param>
        /// <param name="self">self.</param>
        /// <param name="isForwarded">isForwarded.</param>
        /// <param name="author">author.</param>
        /// <param name="time">time.</param>
        /// <param name="chatId">chatId.</param>
        /// <param name="type">type.</param>
        /// <param name="senderName">senderName.</param>
        /// <param name="caption">caption.</param>
        /// <param name="quotedMsgId">quotedMsgId.</param>
        /// <param name="metadata">metadata.</param>
        /// <param name="chatName">chatName.</param>
        public GetMessagesMessagesInner(int messageNumber = default(int), string id = default(string), string body = default(string), bool fromMe = default(bool), int self = default(int), int isForwarded = default(int), string author = default(string), int time = default(int), string chatId = default(string), string type = default(string), string senderName = default(string), string caption = default(string), string quotedMsgId = default(string), Object metadata = default(Object), string chatName = default(string))
        {
            this.MessageNumber = messageNumber;
            this.Id = id;
            this.Body = body;
            this.FromMe = fromMe;
            this.Self = self;
            this.IsForwarded = isForwarded;
            this.Author = author;
            this.Time = time;
            this.ChatId = chatId;
            this.Type = type;
            this.SenderName = senderName;
            this.Caption = caption;
            this.QuotedMsgId = quotedMsgId;
            this.Metadata = metadata;
            this.ChatName = chatName;
        }

        /// <summary>
        /// Gets or Sets MessageNumber
        /// </summary>
        /// <example>1</example>
        [DataMember(Name = "messageNumber", EmitDefaultValue = false)]
        public int MessageNumber { get; set; }

        /// <summary>
        /// Gets or Sets Id
        /// </summary>
        /// <example>0XzkmGNn4prUAQlzsHApGNRXQ0U</example>
        [DataMember(Name = "id", EmitDefaultValue = false)]
        public string Id { get; set; }

        /// <summary>
        /// Gets or Sets Body
        /// </summary>
        /// <example>Test message</example>
        [DataMember(Name = "body", EmitDefaultValue = false)]
        public string Body { get; set; }

        /// <summary>
        /// Gets or Sets FromMe
        /// </summary>
        /// <example>true</example>
        [DataMember(Name = "fromMe", EmitDefaultValue = true)]
        public bool FromMe { get; set; }

        /// <summary>
        /// Gets or Sets Self
        /// </summary>
        /// <example>1</example>
        [DataMember(Name = "self", EmitDefaultValue = false)]
        public int Self { get; set; }

        /// <summary>
        /// Gets or Sets IsForwarded
        /// </summary>
        /// <example>0</example>
        [DataMember(Name = "isForwarded", EmitDefaultValue = false)]
        public int IsForwarded { get; set; }

        /// <summary>
        /// Gets or Sets Author
        /// </summary>
        /// <example>556123122026@c.us</example>
        [DataMember(Name = "author", EmitDefaultValue = false)]
        public string Author { get; set; }

        /// <summary>
        /// Gets or Sets Time
        /// </summary>
        /// <example>1665396610</example>
        [DataMember(Name = "time", EmitDefaultValue = false)]
        public int Time { get; set; }

        /// <summary>
        /// Gets or Sets ChatId
        /// </summary>
        /// <example>556123122026@c.us</example>
        [DataMember(Name = "chatId", EmitDefaultValue = false)]
        public string ChatId { get; set; }

        /// <summary>
        /// Gets or Sets Type
        /// </summary>
        /// <example>chat</example>
        [DataMember(Name = "type", EmitDefaultValue = false)]
        public string Type { get; set; }

        /// <summary>
        /// Gets or Sets SenderName
        /// </summary>
        /// <example>780005553535@c.us</example>
        [DataMember(Name = "senderName", EmitDefaultValue = false)]
        public string SenderName { get; set; }

        /// <summary>
        /// Gets or Sets Caption
        /// </summary>
        [DataMember(Name = "caption", EmitDefaultValue = false)]
        public string Caption { get; set; }

        /// <summary>
        /// Gets or Sets QuotedMsgId
        /// </summary>
        [DataMember(Name = "quotedMsgId", EmitDefaultValue = false)]
        public string QuotedMsgId { get; set; }

        /// <summary>
        /// Gets or Sets Metadata
        /// </summary>
        /// <example>{}</example>
        [DataMember(Name = "metadata", EmitDefaultValue = false)]
        public Object Metadata { get; set; }

        /// <summary>
        /// Gets or Sets ChatName
        /// </summary>
        /// <example>556123122026</example>
        [DataMember(Name = "chatName", EmitDefaultValue = false)]
        public string ChatName { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class GetMessagesMessagesInner {\n");
            sb.Append("  MessageNumber: ").Append(MessageNumber).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Body: ").Append(Body).Append("\n");
            sb.Append("  FromMe: ").Append(FromMe).Append("\n");
            sb.Append("  Self: ").Append(Self).Append("\n");
            sb.Append("  IsForwarded: ").Append(IsForwarded).Append("\n");
            sb.Append("  Author: ").Append(Author).Append("\n");
            sb.Append("  Time: ").Append(Time).Append("\n");
            sb.Append("  ChatId: ").Append(ChatId).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  SenderName: ").Append(SenderName).Append("\n");
            sb.Append("  Caption: ").Append(Caption).Append("\n");
            sb.Append("  QuotedMsgId: ").Append(QuotedMsgId).Append("\n");
            sb.Append("  Metadata: ").Append(Metadata).Append("\n");
            sb.Append("  ChatName: ").Append(ChatName).Append("\n");
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
            return this.Equals(input as GetMessagesMessagesInner);
        }

        /// <summary>
        /// Returns true if GetMessagesMessagesInner instances are equal
        /// </summary>
        /// <param name="input">Instance of GetMessagesMessagesInner to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(GetMessagesMessagesInner input)
        {
            if (input == null)
            {
                return false;
            }
            return 
                (
                    this.MessageNumber == input.MessageNumber ||
                    this.MessageNumber.Equals(input.MessageNumber)
                ) && 
                (
                    this.Id == input.Id ||
                    (this.Id != null &&
                    this.Id.Equals(input.Id))
                ) && 
                (
                    this.Body == input.Body ||
                    (this.Body != null &&
                    this.Body.Equals(input.Body))
                ) && 
                (
                    this.FromMe == input.FromMe ||
                    this.FromMe.Equals(input.FromMe)
                ) && 
                (
                    this.Self == input.Self ||
                    this.Self.Equals(input.Self)
                ) && 
                (
                    this.IsForwarded == input.IsForwarded ||
                    this.IsForwarded.Equals(input.IsForwarded)
                ) && 
                (
                    this.Author == input.Author ||
                    (this.Author != null &&
                    this.Author.Equals(input.Author))
                ) && 
                (
                    this.Time == input.Time ||
                    this.Time.Equals(input.Time)
                ) && 
                (
                    this.ChatId == input.ChatId ||
                    (this.ChatId != null &&
                    this.ChatId.Equals(input.ChatId))
                ) && 
                (
                    this.Type == input.Type ||
                    (this.Type != null &&
                    this.Type.Equals(input.Type))
                ) && 
                (
                    this.SenderName == input.SenderName ||
                    (this.SenderName != null &&
                    this.SenderName.Equals(input.SenderName))
                ) && 
                (
                    this.Caption == input.Caption ||
                    (this.Caption != null &&
                    this.Caption.Equals(input.Caption))
                ) && 
                (
                    this.QuotedMsgId == input.QuotedMsgId ||
                    (this.QuotedMsgId != null &&
                    this.QuotedMsgId.Equals(input.QuotedMsgId))
                ) && 
                (
                    this.Metadata == input.Metadata ||
                    (this.Metadata != null &&
                    this.Metadata.Equals(input.Metadata))
                ) && 
                (
                    this.ChatName == input.ChatName ||
                    (this.ChatName != null &&
                    this.ChatName.Equals(input.ChatName))
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
                hashCode = (hashCode * 59) + this.MessageNumber.GetHashCode();
                if (this.Id != null)
                {
                    hashCode = (hashCode * 59) + this.Id.GetHashCode();
                }
                if (this.Body != null)
                {
                    hashCode = (hashCode * 59) + this.Body.GetHashCode();
                }
                hashCode = (hashCode * 59) + this.FromMe.GetHashCode();
                hashCode = (hashCode * 59) + this.Self.GetHashCode();
                hashCode = (hashCode * 59) + this.IsForwarded.GetHashCode();
                if (this.Author != null)
                {
                    hashCode = (hashCode * 59) + this.Author.GetHashCode();
                }
                hashCode = (hashCode * 59) + this.Time.GetHashCode();
                if (this.ChatId != null)
                {
                    hashCode = (hashCode * 59) + this.ChatId.GetHashCode();
                }
                if (this.Type != null)
                {
                    hashCode = (hashCode * 59) + this.Type.GetHashCode();
                }
                if (this.SenderName != null)
                {
                    hashCode = (hashCode * 59) + this.SenderName.GetHashCode();
                }
                if (this.Caption != null)
                {
                    hashCode = (hashCode * 59) + this.Caption.GetHashCode();
                }
                if (this.QuotedMsgId != null)
                {
                    hashCode = (hashCode * 59) + this.QuotedMsgId.GetHashCode();
                }
                if (this.Metadata != null)
                {
                    hashCode = (hashCode * 59) + this.Metadata.GetHashCode();
                }
                if (this.ChatName != null)
                {
                    hashCode = (hashCode * 59) + this.ChatName.GetHashCode();
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
