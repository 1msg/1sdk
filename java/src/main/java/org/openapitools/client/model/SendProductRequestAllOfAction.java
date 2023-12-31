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
import org.openapitools.client.model.SendProductRequestAllOfActionSections;

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
 * Object containing info about product or catalog. Can contain the following fields:  **catalog_id** - id of catalog  **product_retailer_id** - id of product. Only for sending single product.  **sections** - used for sending multiply products. It&#x60;s array containing objects with catalog info. See example below.  Example: {\&quot;catalog_id\&quot;:\&quot;{{catalog_id}}\&quot;,\&quot;sections\&quot;:[{\&quot;title\&quot;:\&quot;the-section-title\&quot;,\&quot;product_items\&quot;:[{\&quot;product_retailer_id\&quot;:\&quot;{{SKU-1}}\&quot;},{\&quot;product_retailer_id\&quot;:\&quot;{{SKU-2}}\&quot;}]},{\&quot;title\&quot;:\&quot;the-section-title2\&quot;,\&quot;product_items\&quot;:[{\&quot;product_retailer_id\&quot;:\&quot;{{SKU-1}}\&quot;}]}]}
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2023-10-17T20:55:21.249421086+07:00[Asia/Bangkok]")
public class SendProductRequestAllOfAction {
  public static final String SERIALIZED_NAME_CATALOG_ID = "catalog_id";
  @SerializedName(SERIALIZED_NAME_CATALOG_ID)
  private String catalogId;

  public static final String SERIALIZED_NAME_PRODUCT_RETAILER_ID = "product_retailer_id";
  @SerializedName(SERIALIZED_NAME_PRODUCT_RETAILER_ID)
  private String productRetailerId;

  public static final String SERIALIZED_NAME_SECTIONS = "sections";
  @SerializedName(SERIALIZED_NAME_SECTIONS)
  private List<SendProductRequestAllOfActionSections> sections;

  public SendProductRequestAllOfAction() {
  }

  public SendProductRequestAllOfAction catalogId(String catalogId) {
    
    this.catalogId = catalogId;
    return this;
  }

   /**
   * id of the catalog
   * @return catalogId
  **/
  @javax.annotation.Nullable
  public String getCatalogId() {
    return catalogId;
  }


  public void setCatalogId(String catalogId) {
    this.catalogId = catalogId;
  }


  public SendProductRequestAllOfAction productRetailerId(String productRetailerId) {
    
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


  public SendProductRequestAllOfAction sections(List<SendProductRequestAllOfActionSections> sections) {
    
    this.sections = sections;
    return this;
  }

  public SendProductRequestAllOfAction addSectionsItem(SendProductRequestAllOfActionSections sectionsItem) {
    if (this.sections == null) {
      this.sections = new ArrayList<>();
    }
    this.sections.add(sectionsItem);
    return this;
  }

   /**
   * Get sections
   * @return sections
  **/
  @javax.annotation.Nullable
  public List<SendProductRequestAllOfActionSections> getSections() {
    return sections;
  }


  public void setSections(List<SendProductRequestAllOfActionSections> sections) {
    this.sections = sections;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    SendProductRequestAllOfAction sendProductRequestAllOfAction = (SendProductRequestAllOfAction) o;
    return Objects.equals(this.catalogId, sendProductRequestAllOfAction.catalogId) &&
        Objects.equals(this.productRetailerId, sendProductRequestAllOfAction.productRetailerId) &&
        Objects.equals(this.sections, sendProductRequestAllOfAction.sections);
  }

  @Override
  public int hashCode() {
    return Objects.hash(catalogId, productRetailerId, sections);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class SendProductRequestAllOfAction {\n");
    sb.append("    catalogId: ").append(toIndentedString(catalogId)).append("\n");
    sb.append("    productRetailerId: ").append(toIndentedString(productRetailerId)).append("\n");
    sb.append("    sections: ").append(toIndentedString(sections)).append("\n");
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
    openapiFields.add("catalog_id");
    openapiFields.add("product_retailer_id");
    openapiFields.add("sections");

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>();
  }

 /**
  * Validates the JSON Element and throws an exception if issues found
  *
  * @param jsonElement JSON Element
  * @throws IOException if the JSON Element is invalid with respect to SendProductRequestAllOfAction
  */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
      if (jsonElement == null) {
        if (!SendProductRequestAllOfAction.openapiRequiredFields.isEmpty()) { // has required fields but JSON element is null
          throw new IllegalArgumentException(String.format("The required field(s) %s in SendProductRequestAllOfAction is not found in the empty JSON string", SendProductRequestAllOfAction.openapiRequiredFields.toString()));
        }
      }

      Set<Map.Entry<String, JsonElement>> entries = jsonElement.getAsJsonObject().entrySet();
      // check to see if the JSON string contains additional fields
      for (Map.Entry<String, JsonElement> entry : entries) {
        if (!SendProductRequestAllOfAction.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `SendProductRequestAllOfAction` properties. JSON: %s", entry.getKey(), jsonElement.toString()));
        }
      }
        JsonObject jsonObj = jsonElement.getAsJsonObject();
      if ((jsonObj.get("catalog_id") != null && !jsonObj.get("catalog_id").isJsonNull()) && !jsonObj.get("catalog_id").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `catalog_id` to be a primitive type in the JSON string but got `%s`", jsonObj.get("catalog_id").toString()));
      }
      if ((jsonObj.get("product_retailer_id") != null && !jsonObj.get("product_retailer_id").isJsonNull()) && !jsonObj.get("product_retailer_id").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `product_retailer_id` to be a primitive type in the JSON string but got `%s`", jsonObj.get("product_retailer_id").toString()));
      }
      if (jsonObj.get("sections") != null && !jsonObj.get("sections").isJsonNull()) {
        JsonArray jsonArraysections = jsonObj.getAsJsonArray("sections");
        if (jsonArraysections != null) {
          // ensure the json data is an array
          if (!jsonObj.get("sections").isJsonArray()) {
            throw new IllegalArgumentException(String.format("Expected the field `sections` to be an array in the JSON string but got `%s`", jsonObj.get("sections").toString()));
          }

          // validate the optional field `sections` (array)
          for (int i = 0; i < jsonArraysections.size(); i++) {
            SendProductRequestAllOfActionSections.validateJsonElement(jsonArraysections.get(i));
          };
        }
      }
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!SendProductRequestAllOfAction.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'SendProductRequestAllOfAction' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<SendProductRequestAllOfAction> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(SendProductRequestAllOfAction.class));

       return (TypeAdapter<T>) new TypeAdapter<SendProductRequestAllOfAction>() {
           @Override
           public void write(JsonWriter out, SendProductRequestAllOfAction value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public SendProductRequestAllOfAction read(JsonReader in) throws IOException {
             JsonElement jsonElement = elementAdapter.read(in);
             validateJsonElement(jsonElement);
             return thisAdapter.fromJsonTree(jsonElement);
           }

       }.nullSafe();
    }
  }

 /**
  * Create an instance of SendProductRequestAllOfAction given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of SendProductRequestAllOfAction
  * @throws IOException if the JSON string is invalid with respect to SendProductRequestAllOfAction
  */
  public static SendProductRequestAllOfAction fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, SendProductRequestAllOfAction.class);
  }

 /**
  * Convert an instance of SendProductRequestAllOfAction to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

