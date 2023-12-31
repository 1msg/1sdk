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
import org.openapitools.client.model.TemplateCategoryProp;
import org.openapitools.client.model.TemplateComponentsProp;
import org.openapitools.client.model.TemplateLanguageProp;

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
 * GetTemplatesTemplatesInner
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2023-10-17T20:55:21.249421086+07:00[Asia/Bangkok]")
public class GetTemplatesTemplatesInner {
  public static final String SERIALIZED_NAME_CATEGORY = "category";
  @SerializedName(SERIALIZED_NAME_CATEGORY)
  private TemplateCategoryProp category;

  public static final String SERIALIZED_NAME_COMPONENTS = "components";
  @SerializedName(SERIALIZED_NAME_COMPONENTS)
  private TemplateComponentsProp components;

  public static final String SERIALIZED_NAME_LANGUAGE = "language";
  @SerializedName(SERIALIZED_NAME_LANGUAGE)
  private TemplateLanguageProp language;

  public static final String SERIALIZED_NAME_NAME = "name";
  @SerializedName(SERIALIZED_NAME_NAME)
  private String name;

  public static final String SERIALIZED_NAME_NAMESPACE = "namespace";
  @SerializedName(SERIALIZED_NAME_NAMESPACE)
  private String namespace;

  public static final String SERIALIZED_NAME_REJECTED_REASON = "rejected_reason";
  @SerializedName(SERIALIZED_NAME_REJECTED_REASON)
  private String rejectedReason;

  public static final String SERIALIZED_NAME_STATUS = "status";
  @SerializedName(SERIALIZED_NAME_STATUS)
  private String status;

  public GetTemplatesTemplatesInner() {
  }

  public GetTemplatesTemplatesInner category(TemplateCategoryProp category) {
    
    this.category = category;
    return this;
  }

   /**
   * Get category
   * @return category
  **/
  @javax.annotation.Nullable
  public TemplateCategoryProp getCategory() {
    return category;
  }


  public void setCategory(TemplateCategoryProp category) {
    this.category = category;
  }


  public GetTemplatesTemplatesInner components(TemplateComponentsProp components) {
    
    this.components = components;
    return this;
  }

   /**
   * Get components
   * @return components
  **/
  @javax.annotation.Nullable
  public TemplateComponentsProp getComponents() {
    return components;
  }


  public void setComponents(TemplateComponentsProp components) {
    this.components = components;
  }


  public GetTemplatesTemplatesInner language(TemplateLanguageProp language) {
    
    this.language = language;
    return this;
  }

   /**
   * Get language
   * @return language
  **/
  @javax.annotation.Nullable
  public TemplateLanguageProp getLanguage() {
    return language;
  }


  public void setLanguage(TemplateLanguageProp language) {
    this.language = language;
  }


  public GetTemplatesTemplatesInner name(String name) {
    
    this.name = name;
    return this;
  }

   /**
   * Get name
   * @return name
  **/
  @javax.annotation.Nullable
  public String getName() {
    return name;
  }


  public void setName(String name) {
    this.name = name;
  }


  public GetTemplatesTemplatesInner namespace(String namespace) {
    
    this.namespace = namespace;
    return this;
  }

   /**
   * Can be found by method /templates
   * @return namespace
  **/
  @javax.annotation.Nullable
  public String getNamespace() {
    return namespace;
  }


  public void setNamespace(String namespace) {
    this.namespace = namespace;
  }


  public GetTemplatesTemplatesInner rejectedReason(String rejectedReason) {
    
    this.rejectedReason = rejectedReason;
    return this;
  }

   /**
   * Get rejectedReason
   * @return rejectedReason
  **/
  @javax.annotation.Nullable
  public String getRejectedReason() {
    return rejectedReason;
  }


  public void setRejectedReason(String rejectedReason) {
    this.rejectedReason = rejectedReason;
  }


  public GetTemplatesTemplatesInner status(String status) {
    
    this.status = status;
    return this;
  }

   /**
   * Get status
   * @return status
  **/
  @javax.annotation.Nullable
  public String getStatus() {
    return status;
  }


  public void setStatus(String status) {
    this.status = status;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    GetTemplatesTemplatesInner getTemplatesTemplatesInner = (GetTemplatesTemplatesInner) o;
    return Objects.equals(this.category, getTemplatesTemplatesInner.category) &&
        Objects.equals(this.components, getTemplatesTemplatesInner.components) &&
        Objects.equals(this.language, getTemplatesTemplatesInner.language) &&
        Objects.equals(this.name, getTemplatesTemplatesInner.name) &&
        Objects.equals(this.namespace, getTemplatesTemplatesInner.namespace) &&
        Objects.equals(this.rejectedReason, getTemplatesTemplatesInner.rejectedReason) &&
        Objects.equals(this.status, getTemplatesTemplatesInner.status);
  }

  @Override
  public int hashCode() {
    return Objects.hash(category, components, language, name, namespace, rejectedReason, status);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class GetTemplatesTemplatesInner {\n");
    sb.append("    category: ").append(toIndentedString(category)).append("\n");
    sb.append("    components: ").append(toIndentedString(components)).append("\n");
    sb.append("    language: ").append(toIndentedString(language)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    namespace: ").append(toIndentedString(namespace)).append("\n");
    sb.append("    rejectedReason: ").append(toIndentedString(rejectedReason)).append("\n");
    sb.append("    status: ").append(toIndentedString(status)).append("\n");
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
    openapiFields.add("category");
    openapiFields.add("components");
    openapiFields.add("language");
    openapiFields.add("name");
    openapiFields.add("namespace");
    openapiFields.add("rejected_reason");
    openapiFields.add("status");

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>();
  }

 /**
  * Validates the JSON Element and throws an exception if issues found
  *
  * @param jsonElement JSON Element
  * @throws IOException if the JSON Element is invalid with respect to GetTemplatesTemplatesInner
  */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
      if (jsonElement == null) {
        if (!GetTemplatesTemplatesInner.openapiRequiredFields.isEmpty()) { // has required fields but JSON element is null
          throw new IllegalArgumentException(String.format("The required field(s) %s in GetTemplatesTemplatesInner is not found in the empty JSON string", GetTemplatesTemplatesInner.openapiRequiredFields.toString()));
        }
      }

      Set<Map.Entry<String, JsonElement>> entries = jsonElement.getAsJsonObject().entrySet();
      // check to see if the JSON string contains additional fields
      for (Map.Entry<String, JsonElement> entry : entries) {
        if (!GetTemplatesTemplatesInner.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `GetTemplatesTemplatesInner` properties. JSON: %s", entry.getKey(), jsonElement.toString()));
        }
      }
        JsonObject jsonObj = jsonElement.getAsJsonObject();
      if ((jsonObj.get("name") != null && !jsonObj.get("name").isJsonNull()) && !jsonObj.get("name").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `name` to be a primitive type in the JSON string but got `%s`", jsonObj.get("name").toString()));
      }
      if ((jsonObj.get("namespace") != null && !jsonObj.get("namespace").isJsonNull()) && !jsonObj.get("namespace").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `namespace` to be a primitive type in the JSON string but got `%s`", jsonObj.get("namespace").toString()));
      }
      if ((jsonObj.get("rejected_reason") != null && !jsonObj.get("rejected_reason").isJsonNull()) && !jsonObj.get("rejected_reason").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `rejected_reason` to be a primitive type in the JSON string but got `%s`", jsonObj.get("rejected_reason").toString()));
      }
      if ((jsonObj.get("status") != null && !jsonObj.get("status").isJsonNull()) && !jsonObj.get("status").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `status` to be a primitive type in the JSON string but got `%s`", jsonObj.get("status").toString()));
      }
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!GetTemplatesTemplatesInner.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'GetTemplatesTemplatesInner' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<GetTemplatesTemplatesInner> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(GetTemplatesTemplatesInner.class));

       return (TypeAdapter<T>) new TypeAdapter<GetTemplatesTemplatesInner>() {
           @Override
           public void write(JsonWriter out, GetTemplatesTemplatesInner value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public GetTemplatesTemplatesInner read(JsonReader in) throws IOException {
             JsonElement jsonElement = elementAdapter.read(in);
             validateJsonElement(jsonElement);
             return thisAdapter.fromJsonTree(jsonElement);
           }

       }.nullSafe();
    }
  }

 /**
  * Create an instance of GetTemplatesTemplatesInner given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of GetTemplatesTemplatesInner
  * @throws IOException if the JSON string is invalid with respect to GetTemplatesTemplatesInner
  */
  public static GetTemplatesTemplatesInner fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, GetTemplatesTemplatesInner.class);
  }

 /**
  * Convert an instance of GetTemplatesTemplatesInner to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

