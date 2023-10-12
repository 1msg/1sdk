# Org.OpenAPITools.Model.SendListRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ChatId** | **string** | **Required if phone is not set**  Chat ID from the message list. Examples: 12020721369@c.us . Used instead of the phone parameter. | [optional] 
**Phone** | **int** | **Required if chatId is not set**  A phone number starting with the country code. You do not need to add your number.   USA example: 12020721369. | [optional] 
**Body** | **string** | Main message text | 
**Header** | **string** | Header will be located above message text | [optional] 
**Footer** | **string** | Footer will be placed under message text | [optional] 
**Action** | **string** | Action for open list | 
**Sections** | [**List&lt;SendListRequestAllOfSections&gt;**](SendListRequestAllOfSections.md) | Up to 10 sections from which the client can choose.  Each section is object with fields:  *title* - Title of section, up to 24 symbols. Required if there are more then 1 section  *rows* - available options. Required    Each option is object with fields:  *id* - Unique id for option, up to 200 symbols. Required  *title* - Title of option, up to 24 symbols. Required  *description* - Description of option, up to 72 symbols    Example:  [{\&quot;title\&quot;:\&quot;Section 1\&quot;,\&quot;rows\&quot;:[{\&quot;id\&quot;:\&quot;1\&quot;,\&quot;title\&quot;:\&quot;Option 1\&quot;,\&quot;description\&quot;:\&quot;Description 1\&quot;}]},{\&quot;title\&quot;:\&quot;Section 2\&quot;,\&quot;rows\&quot;:[{\&quot;id\&quot;:\&quot;2\&quot;,\&quot;title\&quot;:\&quot;Option 2\&quot;,\&quot;description\&quot;:\&quot;Description 2\&quot;}]}] | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

