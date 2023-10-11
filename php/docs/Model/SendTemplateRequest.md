# # SendTemplateRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**namespace** | **string** | Can be found by method /templates |
**chat_id** | **string** | **Required if phone is not set**  Chat ID from the message list. Examples: 12020721369@c.us . Used instead of the phone parameter. | [optional]
**phone** | **int** | **Required if chatId is not set**  A phone number starting with the country code. You do not need to add your number.   USA example: 12020721369. | [optional]
**template** | **string** | Name of template |
**language** | [**\OpenAPI\Client\Model\SendTemplateRequestAllOfLanguage**](SendTemplateRequestAllOfLanguage.md) |  |
**params** | [**\OpenAPI\Client\Model\SendTemplateRequestAllOfParams[]**](SendTemplateRequestAllOfParams.md) | Array of localizable parameters to be substituted into the template. Each parameter is object contains the following field:  **type** - section of parameters - header, body, footer, button  **parameters** - variables for section.  Each variable is an object that can contain the following fields:  **type** - can be text, currency, date_time, image, document or video  **video**- id (mediaId)  **document**   * id (mediaId)  * filename(optional)  **image** - object with field link (image url)  **currency** - object containing parameters currency_code and amount_1000.  * *currency_code* - Currency code as defined in ISO 4217.  * *amount_1000* - Amount multiplied by 1000.  * *fallback_value* - Default text if localization fails.  **date_time** - If the date_time object is used, further definition of the date and time is required.  * *component* - The time is assembled from components (i.e., day of the week, month, hour, etc.) The time specified will be the same, regardless of the time zone the client is in.  * *unix_epoch* - The time to be displayed is dependent on the time zone the client is in.  * *fallback_value* - Default text if localization fails.  **button** - if button has parameter   * sub_type (url/quick_reply)  * parameters (array to fill button variable)  * index - button position.  **The number of parameters passed must match the number of parameters in the template** | [optional]

[[Back to Model list]](../../README.md#models) [[Back to API list]](../../README.md#endpoints) [[Back to README]](../../README.md)
