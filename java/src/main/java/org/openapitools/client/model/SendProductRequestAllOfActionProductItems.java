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
 * SendProductRequestAllOfActionProductItems
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2023-10-17T20:55:21.249421086+07:00[Asia/Bangkok]")
public class SendProductRequestAllOfActionProductItems {
  public static final String SERIALIZED_NAME_PRODUCT_RETAILER_ID = "product_retailer_id";
  @SerializedName(SERIALIZED_NAME_PRODUCT_RETAILER_ID)
  private String productRetailerId;

  public SendProductRequestAllOfActionProductItems() {
  }

  public SendProductRequestAllOfActionProductItems productRetailerId(String productRetailerId) {
    
    this.productRetailerId = productRetailerId;
    return this;
  }

   /**
   * id of the product
   * @return productRetailerId
  **/
  @javax.annotation.Nullable
  public String getProductRetailerId() {
    return productRetailerId;
  }


  public void setProductRetailerId(String productRetailerId) {
    this.productRetailerId = productRetailerId;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    SendProductRequestAllOfActionProductItems sendProductRequestAllOfActionProductItems = (SendProductRequestAllOfActionProductItems) o;
    return Objects.equals(this.productRetailerId, sendProductRequestAllOfActionProductItems.productRetailerId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(productRetailerId);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class SendProductRequestAllOfActionProductItems {\n");
    sb.append("    productRetailerId: ").append(toIndentedString(productRetailerId)).append("\n");
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
    openapiFields.add("product_retailer_id");

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>();
  }

 /**
  * Validates the JSON Element and throws an exception if issues found
  *
  * @param jsonElement JSON Element
  * @throws IOException if the JSON Element is invalid with respect to SendProductRequestAllOfActionProductItems
  */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
      if (jsonElement == null) {
        if (!SendProductRequestAllOfActionProductItems.openapiRequiredFields.isEmpty()) { // has required fields but JSON element is null
          throw new IllegalArgumentException(String.format("The required field(s) %s in SendProductRequestAllOfActionProductItems is not found in the empty JSON string", SendProductRequestAllOfActionProductItems.openapiRequiredFields.toString()));
        }
      }

      Set<Map.Entry<String, JsonElement>> entries = jsonElement.getAsJsonObject().entrySet();
      // check to see if the JSON string contains additional fields
      for (Map.Entry<String, JsonElement> entry : entries) {
        if (!SendProductRequestAllOfActionProductItems.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `SendProductRequestAllOfActionProductItems` properties. JSON: %s", entry.getKey(), jsonElement.toString()));
        }
      }
        JsonObject jsonObj = jsonElement.getAsJsonObject();
      if ((jsonObj.get("product_retailer_id") != null && !jsonObj.get("product_retailer_id").isJsonNull()) && !jsonObj.get("product_retailer_id").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `product_retailer_id` to be a primitive type in the JSON string but got `%s`", jsonObj.get("product_retailer_id").toString()));
      }
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!SendProductRequestAllOfActionProductItems.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'SendProductRequestAllOfActionProductItems' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<SendProductRequestAllOfActionProductItems> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(SendProductRequestAllOfActionProductItems.class));

       return (TypeAdapter<T>) new TypeAdapter<SendProductRequestAllOfActionProductItems>() {
           @Override
           public void write(JsonWriter out, SendProductRequestAllOfActionProductItems value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public SendProductRequestAllOfActionProductItems read(JsonReader in) throws IOException {
             JsonElement jsonElement = elementAdapter.read(in);
             validateJsonElement(jsonElement);
             return thisAdapter.fromJsonTree(jsonElement);
           }

       }.nullSafe();
    }
  }

 /**
  * Create an instance of SendProductRequestAllOfActionProductItems given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of SendProductRequestAllOfActionProductItems
  * @throws IOException if the JSON string is invalid with respect to SendProductRequestAllOfActionProductItems
  */
  public static SendProductRequestAllOfActionProductItems fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, SendProductRequestAllOfActionProductItems.class);
  }

 /**
  * Convert an instance of SendProductRequestAllOfActionProductItems to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

