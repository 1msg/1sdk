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
 * SendFileRequest
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2023-10-17T20:55:21.249421086+07:00[Asia/Bangkok]")
public class SendFileRequest {
  public static final String SERIALIZED_NAME_CHAT_ID = "chatId";
  @SerializedName(SERIALIZED_NAME_CHAT_ID)
  private String chatId;

  public static final String SERIALIZED_NAME_PHONE = "phone";
  @SerializedName(SERIALIZED_NAME_PHONE)
  private Integer phone;

  public static final String SERIALIZED_NAME_BODY = "body";
  @SerializedName(SERIALIZED_NAME_BODY)
  private String body;

  public static final String SERIALIZED_NAME_FILENAME = "filename";
  @SerializedName(SERIALIZED_NAME_FILENAME)
  private String filename;

  public static final String SERIALIZED_NAME_CAPTION = "caption";
  @SerializedName(SERIALIZED_NAME_CAPTION)
  private String caption;

  public SendFileRequest() {
  }

  public SendFileRequest chatId(String chatId) {
    
    this.chatId = chatId;
    return this;
  }

   /**
   * **Required if phone is not set**  Chat ID from the message list. Examples: 12020721369@c.us . Used instead of the phone parameter.
   * @return chatId
  **/
  @javax.annotation.Nullable
  public String getChatId() {
    return chatId;
  }


  public void setChatId(String chatId) {
    this.chatId = chatId;
  }


  public SendFileRequest phone(Integer phone) {
    
    this.phone = phone;
    return this;
  }

   /**
   * **Required if chatId is not set**  A phone number starting with the country code. You do not need to add your number.   USA example: 12020721369.
   * @return phone
  **/
  @javax.annotation.Nullable
  public Integer getPhone() {
    return phone;
  }


  public void setPhone(Integer phone) {
    this.phone = phone;
  }


  public SendFileRequest body(String body) {
    
    this.body = body;
    return this;
  }

   /**
   * HTTP link *https://...*  Or base64-encoded file with mime data, for example *data:image/jpeg;base64,/9j/4AAQSkZJRgABAQ...*   File in form-data input field
   * @return body
  **/
  @javax.annotation.Nonnull
  public String getBody() {
    return body;
  }


  public void setBody(String body) {
    this.body = body;
  }


  public SendFileRequest filename(String filename) {
    
    this.filename = filename;
    return this;
  }

   /**
   * File name, for *example 1.jpg* or *hello.xlsx*
   * @return filename
  **/
  @javax.annotation.Nonnull
  public String getFilename() {
    return filename;
  }


  public void setFilename(String filename) {
    this.filename = filename;
  }


  public SendFileRequest caption(String caption) {
    
    this.caption = caption;
    return this;
  }

   /**
   * Text under the file. When sending an image сan be used with mentionedPhones, example: this image for @556123122026
   * @return caption
  **/
  @javax.annotation.Nullable
  public String getCaption() {
    return caption;
  }


  public void setCaption(String caption) {
    this.caption = caption;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    SendFileRequest sendFileRequest = (SendFileRequest) o;
    return Objects.equals(this.chatId, sendFileRequest.chatId) &&
        Objects.equals(this.phone, sendFileRequest.phone) &&
        Objects.equals(this.body, sendFileRequest.body) &&
        Objects.equals(this.filename, sendFileRequest.filename) &&
        Objects.equals(this.caption, sendFileRequest.caption);
  }

  @Override
  public int hashCode() {
    return Objects.hash(chatId, phone, body, filename, caption);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class SendFileRequest {\n");
    sb.append("    chatId: ").append(toIndentedString(chatId)).append("\n");
    sb.append("    phone: ").append(toIndentedString(phone)).append("\n");
    sb.append("    body: ").append(toIndentedString(body)).append("\n");
    sb.append("    filename: ").append(toIndentedString(filename)).append("\n");
    sb.append("    caption: ").append(toIndentedString(caption)).append("\n");
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
    openapiFields.add("chatId");
    openapiFields.add("phone");
    openapiFields.add("body");
    openapiFields.add("filename");
    openapiFields.add("caption");

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>();
    openapiRequiredFields.add("body");
    openapiRequiredFields.add("filename");
  }

 /**
  * Validates the JSON Element and throws an exception if issues found
  *
  * @param jsonElement JSON Element
  * @throws IOException if the JSON Element is invalid with respect to SendFileRequest
  */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
      if (jsonElement == null) {
        if (!SendFileRequest.openapiRequiredFields.isEmpty()) { // has required fields but JSON element is null
          throw new IllegalArgumentException(String.format("The required field(s) %s in SendFileRequest is not found in the empty JSON string", SendFileRequest.openapiRequiredFields.toString()));
        }
      }

      Set<Map.Entry<String, JsonElement>> entries = jsonElement.getAsJsonObject().entrySet();
      // check to see if the JSON string contains additional fields
      for (Map.Entry<String, JsonElement> entry : entries) {
        if (!SendFileRequest.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `SendFileRequest` properties. JSON: %s", entry.getKey(), jsonElement.toString()));
        }
      }

      // check to make sure all required properties/fields are present in the JSON string
      for (String requiredField : SendFileRequest.openapiRequiredFields) {
        if (jsonElement.getAsJsonObject().get(requiredField) == null) {
          throw new IllegalArgumentException(String.format("The required field `%s` is not found in the JSON string: %s", requiredField, jsonElement.toString()));
        }
      }
        JsonObject jsonObj = jsonElement.getAsJsonObject();
      if ((jsonObj.get("chatId") != null && !jsonObj.get("chatId").isJsonNull()) && !jsonObj.get("chatId").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `chatId` to be a primitive type in the JSON string but got `%s`", jsonObj.get("chatId").toString()));
      }
      if (!jsonObj.get("body").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `body` to be a primitive type in the JSON string but got `%s`", jsonObj.get("body").toString()));
      }
      if (!jsonObj.get("filename").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `filename` to be a primitive type in the JSON string but got `%s`", jsonObj.get("filename").toString()));
      }
      if ((jsonObj.get("caption") != null && !jsonObj.get("caption").isJsonNull()) && !jsonObj.get("caption").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `caption` to be a primitive type in the JSON string but got `%s`", jsonObj.get("caption").toString()));
      }
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!SendFileRequest.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'SendFileRequest' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<SendFileRequest> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(SendFileRequest.class));

       return (TypeAdapter<T>) new TypeAdapter<SendFileRequest>() {
           @Override
           public void write(JsonWriter out, SendFileRequest value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public SendFileRequest read(JsonReader in) throws IOException {
             JsonElement jsonElement = elementAdapter.read(in);
             validateJsonElement(jsonElement);
             return thisAdapter.fromJsonTree(jsonElement);
           }

       }.nullSafe();
    }
  }

 /**
  * Create an instance of SendFileRequest given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of SendFileRequest
  * @throws IOException if the JSON string is invalid with respect to SendFileRequest
  */
  public static SendFileRequest fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, SendFileRequest.class);
  }

 /**
  * Convert an instance of SendFileRequest to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

