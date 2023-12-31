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
 * ContactsRequest
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2023-10-17T20:55:21.249421086+07:00[Asia/Bangkok]")
public class ContactsRequest {
  public static final String SERIALIZED_NAME_BLOCKING = "blocking";
  @SerializedName(SERIALIZED_NAME_BLOCKING)
  private String blocking;

  public static final String SERIALIZED_NAME_FORCE_CHECK = "force_check";
  @SerializedName(SERIALIZED_NAME_FORCE_CHECK)
  private Boolean forceCheck;

  public static final String SERIALIZED_NAME_CONTACTS = "contacts";
  @SerializedName(SERIALIZED_NAME_CONTACTS)
  private List<String> contacts = new ArrayList<>();

  public ContactsRequest() {
  }

  public ContactsRequest blocking(String blocking) {
    
    this.blocking = blocking;
    return this;
  }

   /**
   * Operating mode:  *wait* - synchronous  *no_wait* - asynchronous (default)
   * @return blocking
  **/
  @javax.annotation.Nullable
  public String getBlocking() {
    return blocking;
  }


  public void setBlocking(String blocking) {
    this.blocking = blocking;
  }


  public ContactsRequest forceCheck(Boolean forceCheck) {
    
    this.forceCheck = forceCheck;
    return this;
  }

   /**
   * Using cache:  *true* - ignore cache  *false* - use cache (default)
   * @return forceCheck
  **/
  @javax.annotation.Nullable
  public Boolean getForceCheck() {
    return forceCheck;
  }


  public void setForceCheck(Boolean forceCheck) {
    this.forceCheck = forceCheck;
  }


  public ContactsRequest contacts(List<String> contacts) {
    
    this.contacts = contacts;
    return this;
  }

  public ContactsRequest addContactsItem(String contactsItem) {
    if (this.contacts == null) {
      this.contacts = new ArrayList<>();
    }
    this.contacts.add(contactsItem);
    return this;
  }

   /**
   * Array of contact numbers for checking. Recommended format is +16315551001  Example:  [\&quot;16315551000\&quot;,\&quot;+1 631 555 1001\&quot;,\&quot;6315551002\&quot;,\&quot;+1 (631) 555-1004\&quot;,\&quot;1-631-555-1005\&quot;]
   * @return contacts
  **/
  @javax.annotation.Nonnull
  public List<String> getContacts() {
    return contacts;
  }


  public void setContacts(List<String> contacts) {
    this.contacts = contacts;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ContactsRequest contactsRequest = (ContactsRequest) o;
    return Objects.equals(this.blocking, contactsRequest.blocking) &&
        Objects.equals(this.forceCheck, contactsRequest.forceCheck) &&
        Objects.equals(this.contacts, contactsRequest.contacts);
  }

  @Override
  public int hashCode() {
    return Objects.hash(blocking, forceCheck, contacts);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ContactsRequest {\n");
    sb.append("    blocking: ").append(toIndentedString(blocking)).append("\n");
    sb.append("    forceCheck: ").append(toIndentedString(forceCheck)).append("\n");
    sb.append("    contacts: ").append(toIndentedString(contacts)).append("\n");
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
    openapiFields.add("blocking");
    openapiFields.add("force_check");
    openapiFields.add("contacts");

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>();
    openapiRequiredFields.add("contacts");
  }

 /**
  * Validates the JSON Element and throws an exception if issues found
  *
  * @param jsonElement JSON Element
  * @throws IOException if the JSON Element is invalid with respect to ContactsRequest
  */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
      if (jsonElement == null) {
        if (!ContactsRequest.openapiRequiredFields.isEmpty()) { // has required fields but JSON element is null
          throw new IllegalArgumentException(String.format("The required field(s) %s in ContactsRequest is not found in the empty JSON string", ContactsRequest.openapiRequiredFields.toString()));
        }
      }

      Set<Map.Entry<String, JsonElement>> entries = jsonElement.getAsJsonObject().entrySet();
      // check to see if the JSON string contains additional fields
      for (Map.Entry<String, JsonElement> entry : entries) {
        if (!ContactsRequest.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `ContactsRequest` properties. JSON: %s", entry.getKey(), jsonElement.toString()));
        }
      }

      // check to make sure all required properties/fields are present in the JSON string
      for (String requiredField : ContactsRequest.openapiRequiredFields) {
        if (jsonElement.getAsJsonObject().get(requiredField) == null) {
          throw new IllegalArgumentException(String.format("The required field `%s` is not found in the JSON string: %s", requiredField, jsonElement.toString()));
        }
      }
        JsonObject jsonObj = jsonElement.getAsJsonObject();
      if ((jsonObj.get("blocking") != null && !jsonObj.get("blocking").isJsonNull()) && !jsonObj.get("blocking").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `blocking` to be a primitive type in the JSON string but got `%s`", jsonObj.get("blocking").toString()));
      }
      // ensure the required json array is present
      if (jsonObj.get("contacts") == null) {
        throw new IllegalArgumentException("Expected the field `linkedContent` to be an array in the JSON string but got `null`");
      } else if (!jsonObj.get("contacts").isJsonArray()) {
        throw new IllegalArgumentException(String.format("Expected the field `contacts` to be an array in the JSON string but got `%s`", jsonObj.get("contacts").toString()));
      }
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!ContactsRequest.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'ContactsRequest' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<ContactsRequest> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(ContactsRequest.class));

       return (TypeAdapter<T>) new TypeAdapter<ContactsRequest>() {
           @Override
           public void write(JsonWriter out, ContactsRequest value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public ContactsRequest read(JsonReader in) throws IOException {
             JsonElement jsonElement = elementAdapter.read(in);
             validateJsonElement(jsonElement);
             return thisAdapter.fromJsonTree(jsonElement);
           }

       }.nullSafe();
    }
  }

 /**
  * Create an instance of ContactsRequest given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of ContactsRequest
  * @throws IOException if the JSON string is invalid with respect to ContactsRequest
  */
  public static ContactsRequest fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, ContactsRequest.class);
  }

 /**
  * Convert an instance of ContactsRequest to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

