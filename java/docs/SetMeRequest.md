

# SetMeRequest


## Properties

| Name | Type | Description | Notes |
|------------ | ------------- | ------------- | -------------|
|**about** | **String** | Profile&#x60;s About section. |  [optional] |
|**address** | **String** | Address of the business |  [optional] |
|**description** | **String** | Description of the business. Max 256 characters |  [optional] |
|**email** | **String** | Business email |  [optional] |
|**phone** | **String** | Linked phone number |  [optional] |
|**vertical** | [**VerticalEnum**](#VerticalEnum) | Industry of the business |  [optional] |
|**photo** | **String** | HTTP link *https://...*  Or base64-encoded file with mime data, for example *data:image/jpeg;base64,/9j/4AAQSkZJRgABAQ...*   File in form-data input field |  [optional] |



## Enum: VerticalEnum

| Name | Value |
|---- | -----|
| AUTOMOTIVE | &quot;Automotive&quot; |
| BEAUTY_SPA_AND_SALON | &quot;Beauty, Spa and Salon&quot; |
| CLOTHING_AND_APPAREL | &quot;Clothing and Apparel&quot; |
| EDUCATION | &quot;Education&quot; |
| ENTERTAINMENT | &quot;Entertainment&quot; |
| EVENT_PLANNING_AND_SERVICE | &quot;Event Planning and Service&quot; |
| FINANCE_AND_BANKING | &quot;Finance and Banking&quot; |
| FOOD_AND_GROCERY | &quot;Food and Grocery&quot; |
| PUBLIC_SERVICE | &quot;Public Service&quot; |
| HOTEL_AND_LODGING | &quot;Hotel and Lodging&quot; |
| MEDICAL_AND_HEALTH | &quot;Medical and Health&quot; |
| NON_PROFIT | &quot;Non-profit&quot; |
| PROFESSIONAL_SERVICES | &quot;Professional Services&quot; |
| SHOPPING_AND_RETAIL | &quot;Shopping and Retail&quot; |
| TRAVEL_AND_TRANSPORTATION | &quot;Travel and Transportation&quot; |
| RESTAURANT | &quot;Restaurant&quot; |
| OTHER | &quot;Other&quot; |
| EMPTY | &quot;&quot; |



