/*
 * one_msg_waba_sdk
 * [1MSG.IO](https://1msg.io/) is the perfect WhatsApp management tool for your business. With us you get full access to the official Whatsapp API/webhooks.  Every API request must contain an Authorize HTTP header with a token.  This is your channel token, which can be found in your channel project on your profile page. Please do not give the token to anyone or post it publicly.  The authorization token must be added to each request in the GET parameter 'token' and always passed to query string (?token={your_token}). Parameters in GET queries pass query string. Parameters in POST requests — through the JSON-encoded request body.   All 'send' methods (except /sendTemplate) will only work when the dialog session with the user is open. Some of our solutions simplify and avoid such limitations, but we urge you to pay more attention to this detail
 *
 * The version of the OpenAPI document: 2.39.0
 * Contact: hello@1msg.io
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package org.openapitools.client.model;

import java.util.Objects;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import java.io.IOException;
import java.util.Arrays;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import com.google.gson.JsonArray;
import com.google.gson.JsonDeserializationContext;
import com.google.gson.JsonDeserializer;
import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import com.google.gson.JsonParseException;
import com.google.gson.TypeAdapterFactory;
import com.google.gson.reflect.TypeToken;
import com.google.gson.TypeAdapter;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import java.io.IOException;

import java.lang.reflect.Type;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;

import io.onemessage.JSON;

/**
 * GetMessagesMessagesInner
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2023-10-17T20:55:21.249421086+07:00[Asia/Bangkok]")
public class GetMessagesMessagesInner {
  public static final String SERIALIZED_NAME_MESSAGE_NUMBER = "messageNumber";
  @SerializedName(SERIALIZED_NAME_MESSAGE_NUMBER)
  private Integer messageNumber;

  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private String id;

  public static final String SERIALIZED_NAME_BODY = "body";
  @SerializedName(SERIALIZED_NAME_BODY)
  private String body;

  public static final String SERIALIZED_NAME_FROM_ME = "fromMe";
  @SerializedName(SERIALIZED_NAME_FROM_ME)
  private Boolean fromMe;

  public static final String SERIALIZED_NAME_SELF = "self";
  @SerializedName(SERIALIZED_NAME_SELF)
  private Integer self;

  public static final String SERIALIZED_NAME_IS_FORWARDED = "isForwarded";
  @SerializedName(SERIALIZED_NAME_IS_FORWARDED)
  private Integer isForwarded;

  public static final String SERIALIZED_NAME_AUTHOR = "author";
  @SerializedName(SERIALIZED_NAME_AUTHOR)
  private String author;

  public static final String SERIALIZED_NAME_TIME = "time";
  @SerializedName(SERIALIZED_NAME_TIME)
  private Integer time;

  public static final String SERIALIZED_NAME_CHAT_ID = "chatId";
  @SerializedName(SERIALIZED_NAME_CHAT_ID)
  private String chatId;

  public static final String SERIALIZED_NAME_TYPE = "type";
  @SerializedName(SERIALIZED_NAME_TYPE)
  private String type;

  public static final String SERIALIZED_NAME_SENDER_NAME = "senderName";
  @SerializedName(SERIALIZED_NAME_SENDER_NAME)
  private String senderName;

  public static final String SERIALIZED_NAME_CAPTION = "caption";
  @SerializedName(SERIALIZED_NAME_CAPTION)
  private String caption;

  public static final String SERIALIZED_NAME_QUOTED_MSG_ID = "quotedMsgId";
  @SerializedName(SERIALIZED_NAME_QUOTED_MSG_ID)
  private String quotedMsgId;

  public static final String SERIALIZED_NAME_METADATA = "metadata";
  @SerializedName(SERIALIZED_NAME_METADATA)
  private Object metadata;

  public static final String SERIALIZED_NAME_CHAT_NAME = "chatName";
  @SerializedName(SERIALIZED_NAME_CHAT_NAME)
  private String chatName;

  public GetMessagesMessagesInner() {
  }

  public GetMessagesMessagesInner messageNumber(Integer messageNumber) {
    
    this.messageNumber = messageNumber;
    return this;
  }

   /**
   * Get messageNumber
   * @return messageNumber
  **/
  @javax.annotation.Nullable
  public Integer getMessageNumber() {
    return messageNumber;
  }


  public void setMessageNumber(Integer messageNumber) {
    this.messageNumber = messageNumber;
  }


  public GetMessagesMessagesInner id(String id) {
    
    this.id = id;
    return this;
  }

   /**
   * Get id
   * @return id
  **/
  @javax.annotation.Nullable
  public String getId() {
    return id;
  }


  public void setId(String id) {
    this.id = id;
  }


  public GetMessagesMessagesInner body(String body) {
    
    this.body = body;
    return this;
  }

   /**
   * Get body
   * @return body
  **/
  @javax.annotation.Nullable
  public String getBody() {
    return body;
  }


  public void setBody(String body) {
    this.body = body;
  }


  public GetMessagesMessagesInner fromMe(Boolean fromMe) {
    
    this.fromMe = fromMe;
    return this;
  }

   /**
   * Get fromMe
   * @return fromMe
  **/
  @javax.annotation.Nullable
  public Boolean getFromMe() {
    return fromMe;
  }


  public void setFromMe(Boolean fromMe) {
    this.fromMe = fromMe;
  }


  public GetMessagesMessagesInner self(Integer self) {
    
    this.self = self;
    return this;
  }

   /**
   * Get self
   * @return self
  **/
  @javax.annotation.Nullable
  public Integer getSelf() {
    return self;
  }


  public void setSelf(Integer self) {
    this.self = self;
  }


  public GetMessagesMessagesInner isForwarded(Integer isForwarded) {
    
    this.isForwarded = isForwarded;
    return this;
  }

   /**
   * Get isForwarded
   * @return isForwarded
  **/
  @javax.annotation.Nullable
  public Integer getIsForwarded() {
    return isForwarded;
  }


  public void setIsForwarded(Integer isForwarded) {
    this.isForwarded = isForwarded;
  }


  public GetMessagesMessagesInner author(String author) {
    
    this.author = author;
    return this;
  }

   /**
   * Get author
   * @return author
  **/
  @javax.annotation.Nullable
  public String getAuthor() {
    return author;
  }


  public void setAuthor(String author) {
    this.author = author;
  }


  public GetMessagesMessagesInner time(Integer time) {
    
    this.time = time;
    return this;
  }

   /**
   * Get time
   * @return time
  **/
  @javax.annotation.Nullable
  public Integer getTime() {
    return time;
  }


  public void setTime(Integer time) {
    this.time = time;
  }


  public GetMessagesMessagesInner chatId(String chatId) {
    
    this.chatId = chatId;
    return this;
  }

   /**
   * Get chatId
   * @return chatId
  **/
  @javax.annotation.Nullable
  public String getChatId() {
    return chatId;
  }


  public void setChatId(String chatId) {
    this.chatId = chatId;
  }


  public GetMessagesMessagesInner type(String type) {
    
    this.type = type;
    return this;
  }

   /**
   * Get type
   * @return type
  **/
  @javax.annotation.Nullable
  public String getType() {
    return type;
  }


  public void setType(String type) {
    this.type = type;
  }


  public GetMessagesMessagesInner senderName(String senderName) {
    
    this.senderName = senderName;
    return this;
  }

   /**
   * Get senderName
   * @return senderName
  **/
  @javax.annotation.Nullable
  public String getSenderName() {
    return senderName;
  }


  public void setSenderName(String senderName) {
    this.senderName = senderName;
  }


  public GetMessagesMessagesInner caption(String caption) {
    
    this.caption = caption;
    return this;
  }

   /**
   * Get caption
   * @return caption
  **/
  @javax.annotation.Nullable
  public String getCaption() {
    return caption;
  }


  public void setCaption(String caption) {
    this.caption = caption;
  }


  public GetMessagesMessagesInner quotedMsgId(String quotedMsgId) {
    
    this.quotedMsgId = quotedMsgId;
    return this;
  }

   /**
   * Get quotedMsgId
   * @return quotedMsgId
  **/
  @javax.annotation.Nullable
  public String getQuotedMsgId() {
    return quotedMsgId;
  }


  public void setQuotedMsgId(String quotedMsgId) {
    this.quotedMsgId = quotedMsgId;
  }


  public GetMessagesMessagesInner metadata(Object metadata) {
    
    this.metadata = metadata;
    return this;
  }

   /**
   * Get metadata
   * @return metadata
  **/
  @javax.annotation.Nullable
  public Object getMetadata() {
    return metadata;
  }


  public void setMetadata(Object metadata) {
    this.metadata = metadata;
  }


  public GetMessagesMessagesInner chatName(String chatName) {
    
    this.chatName = chatName;
    return this;
  }

   /**
   * Get chatName
   * @return chatName
  **/
  @javax.annotation.Nullable
  public String getChatName() {
    return chatName;
  }


  public void setChatName(String chatName) {
    this.chatName = chatName;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    GetMessagesMessagesInner getMessagesMessagesInner = (GetMessagesMessagesInner) o;
    return Objects.equals(this.messageNumber, getMessagesMessagesInner.messageNumber) &&
        Objects.equals(this.id, getMessagesMessagesInner.id) &&
        Objects.equals(this.body, getMessagesMessagesInner.body) &&
        Objects.equals(this.fromMe, getMessagesMessagesInner.fromMe) &&
        Objects.equals(this.self, getMessagesMessagesInner.self) &&
        Objects.equals(this.isForwarded, getMessagesMessagesInner.isForwarded) &&
        Objects.equals(this.author, getMessagesMessagesInner.author) &&
        Objects.equals(this.time, getMessagesMessagesInner.time) &&
        Objects.equals(this.chatId, getMessagesMessagesInner.chatId) &&
        Objects.equals(this.type, getMessagesMessagesInner.type) &&
        Objects.equals(this.senderName, getMessagesMessagesInner.senderName) &&
        Objects.equals(this.caption, getMessagesMessagesInner.caption) &&
        Objects.equals(this.quotedMsgId, getMessagesMessagesInner.quotedMsgId) &&
        Objects.equals(this.metadata, getMessagesMessagesInner.metadata) &&
        Objects.equals(this.chatName, getMessagesMessagesInner.chatName);
  }

  @Override
  public int hashCode() {
    return Objects.hash(messageNumber, id, body, fromMe, self, isForwarded, author, time, chatId, type, senderName, caption, quotedMsgId, metadata, chatName);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class GetMessagesMessagesInner {\n");
    sb.append("    messageNumber: ").append(toIndentedString(messageNumber)).append("\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    body: ").append(toIndentedString(body)).append("\n");
    sb.append("    fromMe: ").append(toIndentedString(fromMe)).append("\n");
    sb.append("    self: ").append(toIndentedString(self)).append("\n");
    sb.append("    isForwarded: ").append(toIndentedString(isForwarded)).append("\n");
    sb.append("    author: ").append(toIndentedString(author)).append("\n");
    sb.append("    time: ").append(toIndentedString(time)).append("\n");
    sb.append("    chatId: ").append(toIndentedString(chatId)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    senderName: ").append(toIndentedString(senderName)).append("\n");
    sb.append("    caption: ").append(toIndentedString(caption)).append("\n");
    sb.append("    quotedMsgId: ").append(toIndentedString(quotedMsgId)).append("\n");
    sb.append("    metadata: ").append(toIndentedString(metadata)).append("\n");
    sb.append("    chatName: ").append(toIndentedString(chatName)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }


  public static HashSet<String> openapiFields;
  public static HashSet<String> openapiRequiredFields;

  static {
    // a set of all properties/fields (JSON key names)
    openapiFields = new HashSet<String>();
    openapiFields.add("messageNumber");
    openapiFields.add("id");
    openapiFields.add("body");
    openapiFields.add("fromMe");
    openapiFields.add("self");
    openapiFields.add("isForwarded");
    openapiFields.add("author");
    openapiFields.add("time");
    openapiFields.add("chatId");
    openapiFields.add("type");
    openapiFields.add("senderName");
    openapiFields.add("caption");
    openapiFields.add("quotedMsgId");
    openapiFields.add("metadata");
    openapiFields.add("chatName");

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>();
  }

 /**
  * Validates the JSON Element and throws an exception if issues found
  *
  * @param jsonElement JSON Element
  * @throws IOException if the JSON Element is invalid with respect to GetMessagesMessagesInner
  */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
      if (jsonElement == null) {
        if (!GetMessagesMessagesInner.openapiRequiredFields.isEmpty()) { // has required fields but JSON element is null
          throw new IllegalArgumentException(String.format("The required field(s) %s in GetMessagesMessagesInner is not found in the empty JSON string", GetMessagesMessagesInner.openapiRequiredFields.toString()));
        }
      }

      Set<Map.Entry<String, JsonElement>> entries = jsonElement.getAsJsonObject().entrySet();
      // check to see if the JSON string contains additional fields
      for (Map.Entry<String, JsonElement> entry : entries) {
        if (!GetMessagesMessagesInner.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `GetMessagesMessagesInner` properties. JSON: %s", entry.getKey(), jsonElement.toString()));
        }
      }
        JsonObject jsonObj = jsonElement.getAsJsonObject();
      if ((jsonObj.get("id") != null && !jsonObj.get("id").isJsonNull()) && !jsonObj.get("id").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `id` to be a primitive type in the JSON string but got `%s`", jsonObj.get("id").toString()));
      }
      if ((jsonObj.get("body") != null && !jsonObj.get("body").isJsonNull()) && !jsonObj.get("body").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `body` to be a primitive type in the JSON string but got `%s`", jsonObj.get("body").toString()));
      }
      if ((jsonObj.get("author") != null && !jsonObj.get("author").isJsonNull()) && !jsonObj.get("author").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `author` to be a primitive type in the JSON string but got `%s`", jsonObj.get("author").toString()));
      }
      if ((jsonObj.get("chatId") != null && !jsonObj.get("chatId").isJsonNull()) && !jsonObj.get("chatId").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `chatId` to be a primitive type in the JSON string but got `%s`", jsonObj.get("chatId").toString()));
      }
      if ((jsonObj.get("type") != null && !jsonObj.get("type").isJsonNull()) && !jsonObj.get("type").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `type` to be a primitive type in the JSON string but got `%s`", jsonObj.get("type").toString()));
      }
      if ((jsonObj.get("senderName") != null && !jsonObj.get("senderName").isJsonNull()) && !jsonObj.get("senderName").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `senderName` to be a primitive type in the JSON string but got `%s`", jsonObj.get("senderName").toString()));
      }
      if ((jsonObj.get("caption") != null && !jsonObj.get("caption").isJsonNull()) && !jsonObj.get("caption").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `caption` to be a primitive type in the JSON string but got `%s`", jsonObj.get("caption").toString()));
      }
      if ((jsonObj.get("quotedMsgId") != null && !jsonObj.get("quotedMsgId").isJsonNull()) && !jsonObj.get("quotedMsgId").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `quotedMsgId` to be a primitive type in the JSON string but got `%s`", jsonObj.get("quotedMsgId").toString()));
      }
      if ((jsonObj.get("chatName") != null && !jsonObj.get("chatName").isJsonNull()) && !jsonObj.get("chatName").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `chatName` to be a primitive type in the JSON string but got `%s`", jsonObj.get("chatName").toString()));
      }
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!GetMessagesMessagesInner.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'GetMessagesMessagesInner' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<GetMessagesMessagesInner> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(GetMessagesMessagesInner.class));

       return (TypeAdapter<T>) new TypeAdapter<GetMessagesMessagesInner>() {
           @Override
           public void write(JsonWriter out, GetMessagesMessagesInner value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public GetMessagesMessagesInner read(JsonReader in) throws IOException {
             JsonElement jsonElement = elementAdapter.read(in);
             validateJsonElement(jsonElement);
             return thisAdapter.fromJsonTree(jsonElement);
           }

       }.nullSafe();
    }
  }

 /**
  * Create an instance of GetMessagesMessagesInner given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of GetMessagesMessagesInner
  * @throws IOException if the JSON string is invalid with respect to GetMessagesMessagesInner
  */
  public static GetMessagesMessagesInner fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, GetMessagesMessagesInner.class);
  }

 /**
  * Convert an instance of GetMessagesMessagesInner to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

