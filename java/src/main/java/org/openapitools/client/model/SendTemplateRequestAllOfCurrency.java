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

import org.openapitools.client.JSON;

/**
 * SendTemplateRequestAllOfCurrency
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2023-10-12T15:05:13.148337711+07:00[Asia/Bangkok]")
public class SendTemplateRequestAllOfCurrency {
  public static final String SERIALIZED_NAME_CURRENCY_CODE = "currency_code";
  @SerializedName(SERIALIZED_NAME_CURRENCY_CODE)
  private String currencyCode;

  public static final String SERIALIZED_NAME_AMOUNT1000 = "amount_1000";
  @SerializedName(SERIALIZED_NAME_AMOUNT1000)
  private Integer amount1000;

  public SendTemplateRequestAllOfCurrency() {
  }

  public SendTemplateRequestAllOfCurrency currencyCode(String currencyCode) {
    
    this.currencyCode = currencyCode;
    return this;
  }

   /**
   * Get currencyCode
   * @return currencyCode
  **/
  @javax.annotation.Nullable
  public String getCurrencyCode() {
    return currencyCode;
  }


  public void setCurrencyCode(String currencyCode) {
    this.currencyCode = currencyCode;
  }


  public SendTemplateRequestAllOfCurrency amount1000(Integer amount1000) {
    
    this.amount1000 = amount1000;
    return this;
  }

   /**
   * Get amount1000
   * @return amount1000
  **/
  @javax.annotation.Nullable
  public Integer getAmount1000() {
    return amount1000;
  }


  public void setAmount1000(Integer amount1000) {
    this.amount1000 = amount1000;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    SendTemplateRequestAllOfCurrency sendTemplateRequestAllOfCurrency = (SendTemplateRequestAllOfCurrency) o;
    return Objects.equals(this.currencyCode, sendTemplateRequestAllOfCurrency.currencyCode) &&
        Objects.equals(this.amount1000, sendTemplateRequestAllOfCurrency.amount1000);
  }

  @Override
  public int hashCode() {
    return Objects.hash(currencyCode, amount1000);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class SendTemplateRequestAllOfCurrency {\n");
    sb.append("    currencyCode: ").append(toIndentedString(currencyCode)).append("\n");
    sb.append("    amount1000: ").append(toIndentedString(amount1000)).append("\n");
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
    openapiFields.add("currency_code");
    openapiFields.add("amount_1000");

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>();
  }

 /**
  * Validates the JSON Element and throws an exception if issues found
  *
  * @param jsonElement JSON Element
  * @throws IOException if the JSON Element is invalid with respect to SendTemplateRequestAllOfCurrency
  */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
      if (jsonElement == null) {
        if (!SendTemplateRequestAllOfCurrency.openapiRequiredFields.isEmpty()) { // has required fields but JSON element is null
          throw new IllegalArgumentException(String.format("The required field(s) %s in SendTemplateRequestAllOfCurrency is not found in the empty JSON string", SendTemplateRequestAllOfCurrency.openapiRequiredFields.toString()));
        }
      }

      Set<Map.Entry<String, JsonElement>> entries = jsonElement.getAsJsonObject().entrySet();
      // check to see if the JSON string contains additional fields
      for (Map.Entry<String, JsonElement> entry : entries) {
        if (!SendTemplateRequestAllOfCurrency.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `SendTemplateRequestAllOfCurrency` properties. JSON: %s", entry.getKey(), jsonElement.toString()));
        }
      }
        JsonObject jsonObj = jsonElement.getAsJsonObject();
      if ((jsonObj.get("currency_code") != null && !jsonObj.get("currency_code").isJsonNull()) && !jsonObj.get("currency_code").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `currency_code` to be a primitive type in the JSON string but got `%s`", jsonObj.get("currency_code").toString()));
      }
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!SendTemplateRequestAllOfCurrency.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'SendTemplateRequestAllOfCurrency' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<SendTemplateRequestAllOfCurrency> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(SendTemplateRequestAllOfCurrency.class));

       return (TypeAdapter<T>) new TypeAdapter<SendTemplateRequestAllOfCurrency>() {
           @Override
           public void write(JsonWriter out, SendTemplateRequestAllOfCurrency value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public SendTemplateRequestAllOfCurrency read(JsonReader in) throws IOException {
             JsonElement jsonElement = elementAdapter.read(in);
             validateJsonElement(jsonElement);
             return thisAdapter.fromJsonTree(jsonElement);
           }

       }.nullSafe();
    }
  }

 /**
  * Create an instance of SendTemplateRequestAllOfCurrency given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of SendTemplateRequestAllOfCurrency
  * @throws IOException if the JSON string is invalid with respect to SendTemplateRequestAllOfCurrency
  */
  public static SendTemplateRequestAllOfCurrency fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, SendTemplateRequestAllOfCurrency.class);
  }

 /**
  * Convert an instance of SendTemplateRequestAllOfCurrency to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

