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
import java.math.BigDecimal;
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
 * ChannelExtendedStatisticsInner
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2023-10-12T15:05:13.148337711+07:00[Asia/Bangkok]")
public class ChannelExtendedStatisticsInner {
  public static final String SERIALIZED_NAME_BUSINESS_INITIATED_PAID_QUANTITY = "business_initiated_paid_quantity";
  @SerializedName(SERIALIZED_NAME_BUSINESS_INITIATED_PAID_QUANTITY)
  private Integer businessInitiatedPaidQuantity;

  public static final String SERIALIZED_NAME_BUSINESS_INITIATED_PRICE = "business_initiated_price";
  @SerializedName(SERIALIZED_NAME_BUSINESS_INITIATED_PRICE)
  private BigDecimal businessInitiatedPrice;

  public static final String SERIALIZED_NAME_BUSINESS_INITIATED_QUANTITY = "business_initiated_quantity";
  @SerializedName(SERIALIZED_NAME_BUSINESS_INITIATED_QUANTITY)
  private Integer businessInitiatedQuantity;

  public static final String SERIALIZED_NAME_FREE_ENTRY_POINT = "free_entry_point";
  @SerializedName(SERIALIZED_NAME_FREE_ENTRY_POINT)
  private Integer freeEntryPoint;

  public static final String SERIALIZED_NAME_FREE_QUANTITY = "free_quantity";
  @SerializedName(SERIALIZED_NAME_FREE_QUANTITY)
  private Integer freeQuantity;

  public static final String SERIALIZED_NAME_FREE_TIER = "free_tier";
  @SerializedName(SERIALIZED_NAME_FREE_TIER)
  private Integer freeTier;

  public static final String SERIALIZED_NAME_PAID_QUANTITY = "paid_quantity";
  @SerializedName(SERIALIZED_NAME_PAID_QUANTITY)
  private Integer paidQuantity;

  public static final String SERIALIZED_NAME_PERIOD_DATE = "period_date";
  @SerializedName(SERIALIZED_NAME_PERIOD_DATE)
  private String periodDate;

  public static final String SERIALIZED_NAME_QUANTITY = "quantity";
  @SerializedName(SERIALIZED_NAME_QUANTITY)
  private BigDecimal quantity;

  public static final String SERIALIZED_NAME_TOTAL_PRICE = "total_price";
  @SerializedName(SERIALIZED_NAME_TOTAL_PRICE)
  private BigDecimal totalPrice;

  public static final String SERIALIZED_NAME_USER_INITIATED_PAID_QUANTITY = "user_initiated_paid_quantity";
  @SerializedName(SERIALIZED_NAME_USER_INITIATED_PAID_QUANTITY)
  private Integer userInitiatedPaidQuantity;

  public static final String SERIALIZED_NAME_USER_INITIATED_PRICE = "user_initiated_price";
  @SerializedName(SERIALIZED_NAME_USER_INITIATED_PRICE)
  private BigDecimal userInitiatedPrice;

  public static final String SERIALIZED_NAME_USER_INITIATED_QUANTITY = "user_initiated_quantity";
  @SerializedName(SERIALIZED_NAME_USER_INITIATED_QUANTITY)
  private Integer userInitiatedQuantity;

  public ChannelExtendedStatisticsInner() {
  }

  public ChannelExtendedStatisticsInner businessInitiatedPaidQuantity(Integer businessInitiatedPaidQuantity) {
    
    this.businessInitiatedPaidQuantity = businessInitiatedPaidQuantity;
    return this;
  }

   /**
   * Get businessInitiatedPaidQuantity
   * @return businessInitiatedPaidQuantity
  **/
  @javax.annotation.Nullable
  public Integer getBusinessInitiatedPaidQuantity() {
    return businessInitiatedPaidQuantity;
  }


  public void setBusinessInitiatedPaidQuantity(Integer businessInitiatedPaidQuantity) {
    this.businessInitiatedPaidQuantity = businessInitiatedPaidQuantity;
  }


  public ChannelExtendedStatisticsInner businessInitiatedPrice(BigDecimal businessInitiatedPrice) {
    
    this.businessInitiatedPrice = businessInitiatedPrice;
    return this;
  }

   /**
   * Get businessInitiatedPrice
   * @return businessInitiatedPrice
  **/
  @javax.annotation.Nullable
  public BigDecimal getBusinessInitiatedPrice() {
    return businessInitiatedPrice;
  }


  public void setBusinessInitiatedPrice(BigDecimal businessInitiatedPrice) {
    this.businessInitiatedPrice = businessInitiatedPrice;
  }


  public ChannelExtendedStatisticsInner businessInitiatedQuantity(Integer businessInitiatedQuantity) {
    
    this.businessInitiatedQuantity = businessInitiatedQuantity;
    return this;
  }

   /**
   * Get businessInitiatedQuantity
   * @return businessInitiatedQuantity
  **/
  @javax.annotation.Nullable
  public Integer getBusinessInitiatedQuantity() {
    return businessInitiatedQuantity;
  }


  public void setBusinessInitiatedQuantity(Integer businessInitiatedQuantity) {
    this.businessInitiatedQuantity = businessInitiatedQuantity;
  }


  public ChannelExtendedStatisticsInner freeEntryPoint(Integer freeEntryPoint) {
    
    this.freeEntryPoint = freeEntryPoint;
    return this;
  }

   /**
   * Get freeEntryPoint
   * @return freeEntryPoint
  **/
  @javax.annotation.Nullable
  public Integer getFreeEntryPoint() {
    return freeEntryPoint;
  }


  public void setFreeEntryPoint(Integer freeEntryPoint) {
    this.freeEntryPoint = freeEntryPoint;
  }


  public ChannelExtendedStatisticsInner freeQuantity(Integer freeQuantity) {
    
    this.freeQuantity = freeQuantity;
    return this;
  }

   /**
   * Get freeQuantity
   * @return freeQuantity
  **/
  @javax.annotation.Nullable
  public Integer getFreeQuantity() {
    return freeQuantity;
  }


  public void setFreeQuantity(Integer freeQuantity) {
    this.freeQuantity = freeQuantity;
  }


  public ChannelExtendedStatisticsInner freeTier(Integer freeTier) {
    
    this.freeTier = freeTier;
    return this;
  }

   /**
   * Get freeTier
   * @return freeTier
  **/
  @javax.annotation.Nullable
  public Integer getFreeTier() {
    return freeTier;
  }


  public void setFreeTier(Integer freeTier) {
    this.freeTier = freeTier;
  }


  public ChannelExtendedStatisticsInner paidQuantity(Integer paidQuantity) {
    
    this.paidQuantity = paidQuantity;
    return this;
  }

   /**
   * Get paidQuantity
   * @return paidQuantity
  **/
  @javax.annotation.Nullable
  public Integer getPaidQuantity() {
    return paidQuantity;
  }


  public void setPaidQuantity(Integer paidQuantity) {
    this.paidQuantity = paidQuantity;
  }


  public ChannelExtendedStatisticsInner periodDate(String periodDate) {
    
    this.periodDate = periodDate;
    return this;
  }

   /**
   * Get periodDate
   * @return periodDate
  **/
  @javax.annotation.Nullable
  public String getPeriodDate() {
    return periodDate;
  }


  public void setPeriodDate(String periodDate) {
    this.periodDate = periodDate;
  }


  public ChannelExtendedStatisticsInner quantity(BigDecimal quantity) {
    
    this.quantity = quantity;
    return this;
  }

   /**
   * Get quantity
   * @return quantity
  **/
  @javax.annotation.Nullable
  public BigDecimal getQuantity() {
    return quantity;
  }


  public void setQuantity(BigDecimal quantity) {
    this.quantity = quantity;
  }


  public ChannelExtendedStatisticsInner totalPrice(BigDecimal totalPrice) {
    
    this.totalPrice = totalPrice;
    return this;
  }

   /**
   * Get totalPrice
   * @return totalPrice
  **/
  @javax.annotation.Nullable
  public BigDecimal getTotalPrice() {
    return totalPrice;
  }


  public void setTotalPrice(BigDecimal totalPrice) {
    this.totalPrice = totalPrice;
  }


  public ChannelExtendedStatisticsInner userInitiatedPaidQuantity(Integer userInitiatedPaidQuantity) {
    
    this.userInitiatedPaidQuantity = userInitiatedPaidQuantity;
    return this;
  }

   /**
   * Get userInitiatedPaidQuantity
   * @return userInitiatedPaidQuantity
  **/
  @javax.annotation.Nullable
  public Integer getUserInitiatedPaidQuantity() {
    return userInitiatedPaidQuantity;
  }


  public void setUserInitiatedPaidQuantity(Integer userInitiatedPaidQuantity) {
    this.userInitiatedPaidQuantity = userInitiatedPaidQuantity;
  }


  public ChannelExtendedStatisticsInner userInitiatedPrice(BigDecimal userInitiatedPrice) {
    
    this.userInitiatedPrice = userInitiatedPrice;
    return this;
  }

   /**
   * Get userInitiatedPrice
   * @return userInitiatedPrice
  **/
  @javax.annotation.Nullable
  public BigDecimal getUserInitiatedPrice() {
    return userInitiatedPrice;
  }


  public void setUserInitiatedPrice(BigDecimal userInitiatedPrice) {
    this.userInitiatedPrice = userInitiatedPrice;
  }


  public ChannelExtendedStatisticsInner userInitiatedQuantity(Integer userInitiatedQuantity) {
    
    this.userInitiatedQuantity = userInitiatedQuantity;
    return this;
  }

   /**
   * Get userInitiatedQuantity
   * @return userInitiatedQuantity
  **/
  @javax.annotation.Nullable
  public Integer getUserInitiatedQuantity() {
    return userInitiatedQuantity;
  }


  public void setUserInitiatedQuantity(Integer userInitiatedQuantity) {
    this.userInitiatedQuantity = userInitiatedQuantity;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ChannelExtendedStatisticsInner channelExtendedStatisticsInner = (ChannelExtendedStatisticsInner) o;
    return Objects.equals(this.businessInitiatedPaidQuantity, channelExtendedStatisticsInner.businessInitiatedPaidQuantity) &&
        Objects.equals(this.businessInitiatedPrice, channelExtendedStatisticsInner.businessInitiatedPrice) &&
        Objects.equals(this.businessInitiatedQuantity, channelExtendedStatisticsInner.businessInitiatedQuantity) &&
        Objects.equals(this.freeEntryPoint, channelExtendedStatisticsInner.freeEntryPoint) &&
        Objects.equals(this.freeQuantity, channelExtendedStatisticsInner.freeQuantity) &&
        Objects.equals(this.freeTier, channelExtendedStatisticsInner.freeTier) &&
        Objects.equals(this.paidQuantity, channelExtendedStatisticsInner.paidQuantity) &&
        Objects.equals(this.periodDate, channelExtendedStatisticsInner.periodDate) &&
        Objects.equals(this.quantity, channelExtendedStatisticsInner.quantity) &&
        Objects.equals(this.totalPrice, channelExtendedStatisticsInner.totalPrice) &&
        Objects.equals(this.userInitiatedPaidQuantity, channelExtendedStatisticsInner.userInitiatedPaidQuantity) &&
        Objects.equals(this.userInitiatedPrice, channelExtendedStatisticsInner.userInitiatedPrice) &&
        Objects.equals(this.userInitiatedQuantity, channelExtendedStatisticsInner.userInitiatedQuantity);
  }

  @Override
  public int hashCode() {
    return Objects.hash(businessInitiatedPaidQuantity, businessInitiatedPrice, businessInitiatedQuantity, freeEntryPoint, freeQuantity, freeTier, paidQuantity, periodDate, quantity, totalPrice, userInitiatedPaidQuantity, userInitiatedPrice, userInitiatedQuantity);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ChannelExtendedStatisticsInner {\n");
    sb.append("    businessInitiatedPaidQuantity: ").append(toIndentedString(businessInitiatedPaidQuantity)).append("\n");
    sb.append("    businessInitiatedPrice: ").append(toIndentedString(businessInitiatedPrice)).append("\n");
    sb.append("    businessInitiatedQuantity: ").append(toIndentedString(businessInitiatedQuantity)).append("\n");
    sb.append("    freeEntryPoint: ").append(toIndentedString(freeEntryPoint)).append("\n");
    sb.append("    freeQuantity: ").append(toIndentedString(freeQuantity)).append("\n");
    sb.append("    freeTier: ").append(toIndentedString(freeTier)).append("\n");
    sb.append("    paidQuantity: ").append(toIndentedString(paidQuantity)).append("\n");
    sb.append("    periodDate: ").append(toIndentedString(periodDate)).append("\n");
    sb.append("    quantity: ").append(toIndentedString(quantity)).append("\n");
    sb.append("    totalPrice: ").append(toIndentedString(totalPrice)).append("\n");
    sb.append("    userInitiatedPaidQuantity: ").append(toIndentedString(userInitiatedPaidQuantity)).append("\n");
    sb.append("    userInitiatedPrice: ").append(toIndentedString(userInitiatedPrice)).append("\n");
    sb.append("    userInitiatedQuantity: ").append(toIndentedString(userInitiatedQuantity)).append("\n");
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
    openapiFields.add("business_initiated_paid_quantity");
    openapiFields.add("business_initiated_price");
    openapiFields.add("business_initiated_quantity");
    openapiFields.add("free_entry_point");
    openapiFields.add("free_quantity");
    openapiFields.add("free_tier");
    openapiFields.add("paid_quantity");
    openapiFields.add("period_date");
    openapiFields.add("quantity");
    openapiFields.add("total_price");
    openapiFields.add("user_initiated_paid_quantity");
    openapiFields.add("user_initiated_price");
    openapiFields.add("user_initiated_quantity");

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>();
  }

 /**
  * Validates the JSON Element and throws an exception if issues found
  *
  * @param jsonElement JSON Element
  * @throws IOException if the JSON Element is invalid with respect to ChannelExtendedStatisticsInner
  */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
      if (jsonElement == null) {
        if (!ChannelExtendedStatisticsInner.openapiRequiredFields.isEmpty()) { // has required fields but JSON element is null
          throw new IllegalArgumentException(String.format("The required field(s) %s in ChannelExtendedStatisticsInner is not found in the empty JSON string", ChannelExtendedStatisticsInner.openapiRequiredFields.toString()));
        }
      }

      Set<Map.Entry<String, JsonElement>> entries = jsonElement.getAsJsonObject().entrySet();
      // check to see if the JSON string contains additional fields
      for (Map.Entry<String, JsonElement> entry : entries) {
        if (!ChannelExtendedStatisticsInner.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `ChannelExtendedStatisticsInner` properties. JSON: %s", entry.getKey(), jsonElement.toString()));
        }
      }
        JsonObject jsonObj = jsonElement.getAsJsonObject();
      if ((jsonObj.get("period_date") != null && !jsonObj.get("period_date").isJsonNull()) && !jsonObj.get("period_date").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `period_date` to be a primitive type in the JSON string but got `%s`", jsonObj.get("period_date").toString()));
      }
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!ChannelExtendedStatisticsInner.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'ChannelExtendedStatisticsInner' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<ChannelExtendedStatisticsInner> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(ChannelExtendedStatisticsInner.class));

       return (TypeAdapter<T>) new TypeAdapter<ChannelExtendedStatisticsInner>() {
           @Override
           public void write(JsonWriter out, ChannelExtendedStatisticsInner value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public ChannelExtendedStatisticsInner read(JsonReader in) throws IOException {
             JsonElement jsonElement = elementAdapter.read(in);
             validateJsonElement(jsonElement);
             return thisAdapter.fromJsonTree(jsonElement);
           }

       }.nullSafe();
    }
  }

 /**
  * Create an instance of ChannelExtendedStatisticsInner given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of ChannelExtendedStatisticsInner
  * @throws IOException if the JSON string is invalid with respect to ChannelExtendedStatisticsInner
  */
  public static ChannelExtendedStatisticsInner fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, ChannelExtendedStatisticsInner.class);
  }

 /**
  * Convert an instance of ChannelExtendedStatisticsInner to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

