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
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.client.model.SendTemplateRequestAllOfLanguage;
import org.openapitools.client.model.SendTemplateRequestAllOfParams;

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
 * SendTemplateRequest
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2023-10-17T20:55:21.249421086+07:00[Asia/Bangkok]")
public class SendTemplateRequest {
  public static final String SERIALIZED_NAME_NAMESPACE = "namespace";
  @SerializedName(SERIALIZED_NAME_NAMESPACE)
  private String namespace;

  public static final String SERIALIZED_NAME_CHAT_ID = "chatId";
  @SerializedName(SERIALIZED_NAME_CHAT_ID)
  private String chatId;

  public static final String SERIALIZED_NAME_PHONE = "phone";
  @SerializedName(SERIALIZED_NAME_PHONE)
  private Integer phone;

  public static final String SERIALIZED_NAME_TEMPLATE = "template";
  @SerializedName(SERIALIZED_NAME_TEMPLATE)
  private String template;

  public static final String SERIALIZED_NAME_LANGUAGE = "language";
  @SerializedName(SERIALIZED_NAME_LANGUAGE)
  private SendTemplateRequestAllOfLanguage language;

  public static final String SERIALIZED_NAME_PARAMS = "params";
  @SerializedName(SERIALIZED_NAME_PARAMS)
  private List<SendTemplateRequestAllOfParams> params;

  public SendTemplateRequest() {
  }

  public SendTemplateRequest namespace(String namespace) {
    
    this.namespace = namespace;
    return this;
  }

   /**
   * Can be found by method /templates
   * @return namespace
  **/
  @javax.annotation.Nonnull
  public String getNamespace() {
    return namespace;
  }


  public void setNamespace(String namespace) {
    this.namespace = namespace;
  }


  public SendTemplateRequest chatId(String chatId) {
    
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


  public SendTemplateRequest phone(Integer phone) {
    
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


  public SendTemplateRequest template(String template) {
    
    this.template = template;
    return this;
  }

   /**
   * Name of template
   * @return template
  **/
  @javax.annotation.Nonnull
  public String getTemplate() {
    return template;
  }


  public void setTemplate(String template) {
    this.template = template;
  }


  public SendTemplateRequest language(SendTemplateRequestAllOfLanguage language) {
    
    this.language = language;
    return this;
  }

   /**
   * Get language
   * @return language
  **/
  @javax.annotation.Nonnull
  public SendTemplateRequestAllOfLanguage getLanguage() {
    return language;
  }


  public void setLanguage(SendTemplateRequestAllOfLanguage language) {
    this.language = language;
  }


  public SendTemplateRequest params(List<SendTemplateRequestAllOfParams> params) {
    
    this.params = params;
    return this;
  }

  public SendTemplateRequest addParamsItem(SendTemplateRequestAllOfParams paramsItem) {
    if (this.params == null) {
      this.params = new ArrayList<>();
    }
    this.params.add(paramsItem);
    return this;
  }

   /**
   * Array of localizable parameters to be substituted into the template. Each parameter is object contains the following field:  **type** - section of parameters - header, body, footer, button  **parameters** - variables for section.  Each variable is an object that can contain the following fields:  **type** - can be text, currency, date_time, image, document or video  **video**- id (mediaId)  **document**   * id (mediaId)  * filename(optional)  **image** - object with field link (image url)  **currency** - object containing parameters currency_code and amount_1000.  * *currency_code* - Currency code as defined in ISO 4217.  * *amount_1000* - Amount multiplied by 1000.  * *fallback_value* - Default text if localization fails.  **date_time** - If the date_time object is used, further definition of the date and time is required.  * *component* - The time is assembled from components (i.e., day of the week, month, hour, etc.) The time specified will be the same, regardless of the time zone the client is in.  * *unix_epoch* - The time to be displayed is dependent on the time zone the client is in.  * *fallback_value* - Default text if localization fails.  **button** - if button has parameter   * sub_type (url/quick_reply)  * parameters (array to fill button variable)  * index - button position.  **The number of parameters passed must match the number of parameters in the template**
   * @return params
  **/
  @javax.annotation.Nullable
  public List<SendTemplateRequestAllOfParams> getParams() {
    return params;
  }


  public void setParams(List<SendTemplateRequestAllOfParams> params) {
    this.params = params;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    SendTemplateRequest sendTemplateRequest = (SendTemplateRequest) o;
    return Objects.equals(this.namespace, sendTemplateRequest.namespace) &&
        Objects.equals(this.chatId, sendTemplateRequest.chatId) &&
        Objects.equals(this.phone, sendTemplateRequest.phone) &&
        Objects.equals(this.template, sendTemplateRequest.template) &&
        Objects.equals(this.language, sendTemplateRequest.language) &&
        Objects.equals(this.params, sendTemplateRequest.params);
  }

  @Override
  public int hashCode() {
    return Objects.hash(namespace, chatId, phone, template, language, params);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class SendTemplateRequest {\n");
    sb.append("    namespace: ").append(toIndentedString(namespace)).append("\n");
    sb.append("    chatId: ").append(toIndentedString(chatId)).append("\n");
    sb.append("    phone: ").append(toIndentedString(phone)).append("\n");
    sb.append("    template: ").append(toIndentedString(template)).append("\n");
    sb.append("    language: ").append(toIndentedString(language)).append("\n");
    sb.append("    params: ").append(toIndentedString(params)).append("\n");
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
    openapiFields.add("namespace");
    openapiFields.add("chatId");
    openapiFields.add("phone");
    openapiFields.add("template");
    openapiFields.add("language");
    openapiFields.add("params");

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>();
    openapiRequiredFields.add("namespace");
    openapiRequiredFields.add("template");
    openapiRequiredFields.add("language");
  }

 /**
  * Validates the JSON Element and throws an exception if issues found
  *
  * @param jsonElement JSON Element
  * @throws IOException if the JSON Element is invalid with respect to SendTemplateRequest
  */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
      if (jsonElement == null) {
        if (!SendTemplateRequest.openapiRequiredFields.isEmpty()) { // has required fields but JSON element is null
          throw new IllegalArgumentException(String.format("The required field(s) %s in SendTemplateRequest is not found in the empty JSON string", SendTemplateRequest.openapiRequiredFields.toString()));
        }
      }

      Set<Map.Entry<String, JsonElement>> entries = jsonElement.getAsJsonObject().entrySet();
      // check to see if the JSON string contains additional fields
      for (Map.Entry<String, JsonElement> entry : entries) {
        if (!SendTemplateRequest.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `SendTemplateRequest` properties. JSON: %s", entry.getKey(), jsonElement.toString()));
        }
      }

      // check to make sure all required properties/fields are present in the JSON string
      for (String requiredField : SendTemplateRequest.openapiRequiredFields) {
        if (jsonElement.getAsJsonObject().get(requiredField) == null) {
          throw new IllegalArgumentException(String.format("The required field `%s` is not found in the JSON string: %s", requiredField, jsonElement.toString()));
        }
      }
        JsonObject jsonObj = jsonElement.getAsJsonObject();
      if (!jsonObj.get("namespace").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `namespace` to be a primitive type in the JSON string but got `%s`", jsonObj.get("namespace").toString()));
      }
      if ((jsonObj.get("chatId") != null && !jsonObj.get("chatId").isJsonNull()) && !jsonObj.get("chatId").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `chatId` to be a primitive type in the JSON string but got `%s`", jsonObj.get("chatId").toString()));
      }
      if (!jsonObj.get("template").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `template` to be a primitive type in the JSON string but got `%s`", jsonObj.get("template").toString()));
      }
      // validate the required field `language`
      SendTemplateRequestAllOfLanguage.validateJsonElement(jsonObj.get("language"));
      if (jsonObj.get("params") != null && !jsonObj.get("params").isJsonNull()) {
        JsonArray jsonArrayparams = jsonObj.getAsJsonArray("params");
        if (jsonArrayparams != null) {
          // ensure the json data is an array
          if (!jsonObj.get("params").isJsonArray()) {
            throw new IllegalArgumentException(String.format("Expected the field `params` to be an array in the JSON string but got `%s`", jsonObj.get("params").toString()));
          }

          // validate the optional field `params` (array)
          for (int i = 0; i < jsonArrayparams.size(); i++) {
            SendTemplateRequestAllOfParams.validateJsonElement(jsonArrayparams.get(i));
          };
        }
      }
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!SendTemplateRequest.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'SendTemplateRequest' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<SendTemplateRequest> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(SendTemplateRequest.class));

       return (TypeAdapter<T>) new TypeAdapter<SendTemplateRequest>() {
           @Override
           public void write(JsonWriter out, SendTemplateRequest value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public SendTemplateRequest read(JsonReader in) throws IOException {
             JsonElement jsonElement = elementAdapter.read(in);
             validateJsonElement(jsonElement);
             return thisAdapter.fromJsonTree(jsonElement);
           }

       }.nullSafe();
    }
  }

 /**
  * Create an instance of SendTemplateRequest given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of SendTemplateRequest
  * @throws IOException if the JSON string is invalid with respect to SendTemplateRequest
  */
  public static SendTemplateRequest fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, SendTemplateRequest.class);
  }

 /**
  * Convert an instance of SendTemplateRequest to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

