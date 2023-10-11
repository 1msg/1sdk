# OpenAPIClient-php

[1MSG.IO](https://1msg.io/) is the perfect WhatsApp management tool for your business. With us you get full access to the official Whatsapp API/webhooks.

Every API request must contain an Authorize HTTP header with a token. 
This is your channel token, which can be found in your channel project on your profile page.
Please do not give the token to anyone or post it publicly.

The authorization token must be added to each request in the GET parameter 'token' and always passed to query string (?token={your_token}).
Parameters in GET queries pass query string. Parameters in POST requests — through the JSON-encoded request body. 

All 'send' methods (except /sendTemplate) will only work when the dialog session with the user is open. Some of our solutions simplify and avoid such limitations, but we urge you to pay more attention to this detail


## Installation & Usage

### Requirements

PHP 7.4 and later.
Should also work with PHP 8.0.

### Composer

To install the bindings via [Composer](https://getcomposer.org/), add the following to `composer.json`:

```json
{
  "repositories": [
    {
      "type": "vcs",
      "url": "https://github.com/GIT_USER_ID/GIT_REPO_ID.git"
    }
  ],
  "require": {
    "GIT_USER_ID/GIT_REPO_ID": "*@dev"
  }
}
```

Then run `composer install`

### Manual Installation

Download the files and include `autoload.php`:

```php
<?php
require_once('/path/to/OpenAPIClient-php/vendor/autoload.php');
```

## Getting Started

Please follow the [installation procedure](#installation--usage) and then run the following:

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');



// Configure API key authorization: token
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('token', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('token', 'Bearer');


$apiInstance = new OpenAPI\Client\Api\ChannelApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->getCommerce();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling ChannelApi->getCommerce: ', $e->getMessage(), PHP_EOL;
}

```

## API Endpoints

All URIs are relative to *https://api.1msg.io/YOUR_INSTANCE_NUMBER*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*ChannelApi* | [**getCommerce**](docs/Api/ChannelApi.md#getcommerce) | **GET** /commerce | Get Commerce Settings
*ChannelApi* | [**getExtendedStatistics**](docs/Api/ChannelApi.md#getextendedstatistics) | **GET** /extendedStatistics | Get Extended Channel statistics
*ChannelApi* | [**getMe**](docs/Api/ChannelApi.md#getme) | **GET** /me | Get Profile Info
*ChannelApi* | [**getSettings**](docs/Api/ChannelApi.md#getsettings) | **GET** /settings | Get Settings
*ChannelApi* | [**getStatistics**](docs/Api/ChannelApi.md#getstatistics) | **GET** /statistics | Get Channel statistics
*ChannelApi* | [**getStatus**](docs/Api/ChannelApi.md#getstatus) | **GET** /status | Get Status
*ChannelApi* | [**outputIP**](docs/Api/ChannelApi.md#outputip) | **GET** /outputIP | Get channel server IP
*ChannelApi* | [**setMe**](docs/Api/ChannelApi.md#setme) | **POST** /me | Change user info
*ChannelApi* | [**setSettings**](docs/Api/ChannelApi.md#setsettings) | **POST** /settings | Set settings
*MediaApi* | [**uploadMedia**](docs/Api/MediaApi.md#uploadmedia) | **POST** /uploadMedia | Upload media &amp; get mediaId
*MessagingApi* | [**messagesList**](docs/Api/MessagingApi.md#messageslist) | **GET** /messages | Get messages list
*MessagingApi* | [**readMessage**](docs/Api/MessagingApi.md#readmessage) | **POST** /readMessage | Mark message as read
*MessagingApi* | [**sendContact**](docs/Api/MessagingApi.md#sendcontact) | **POST** /sendContact | Send a Contact
*MessagingApi* | [**sendFile**](docs/Api/MessagingApi.md#sendfile) | **POST** /sendFile | Send a File
*MessagingApi* | [**sendList**](docs/Api/MessagingApi.md#sendlist) | **POST** /sendList | Send List Message
*MessagingApi* | [**sendLocation**](docs/Api/MessagingApi.md#sendlocation) | **POST** /sendLocation | Send a Location
*MessagingApi* | [**sendMessage**](docs/Api/MessagingApi.md#sendmessage) | **POST** /sendMessage | Send a Message
*ProductsCatalogsApi* | [**sendProduct**](docs/Api/ProductsCatalogsApi.md#sendproduct) | **POST** /sendProduct | Send a Product
*ProductsCatalogsApi* | [**setCommerce**](docs/Api/ProductsCatalogsApi.md#setcommerce) | **POST** /commerce | Set Commerce Settings
*TemplatesApi* | [**addTemplate**](docs/Api/TemplatesApi.md#addtemplate) | **POST** /addTemplate | Create template
*TemplatesApi* | [**removeTemplate**](docs/Api/TemplatesApi.md#removetemplate) | **POST** /removeTemplate | Remove template
*TemplatesApi* | [**sendTemplate**](docs/Api/TemplatesApi.md#sendtemplate) | **POST** /sendTemplate | Send Template Message
*TemplatesApi* | [**templatesList**](docs/Api/TemplatesApi.md#templateslist) | **GET** /templates | Get templates list
*WebhooksApi* | [**ackHookInfo**](docs/Api/WebhooksApi.md#ackhookinfo) | **GET** /hookInfo | Check ACKs
*WebhooksApi* | [**setWebhook**](docs/Api/WebhooksApi.md#setwebhook) | **POST** /webhook | Set webhook

## Models

- [Ack](docs/Model/Ack.md)
- [AddTemplateRequest](docs/Model/AddTemplateRequest.md)
- [ChannelExtendedStatistics](docs/Model/ChannelExtendedStatistics.md)
- [ChannelExtendedStatisticsInner](docs/Model/ChannelExtendedStatisticsInner.md)
- [ChannelStatistics](docs/Model/ChannelStatistics.md)
- [ChannelStatus](docs/Model/ChannelStatus.md)
- [ChatIdProp](docs/Model/ChatIdProp.md)
- [Commerce](docs/Model/Commerce.md)
- [CommerceParams](docs/Model/CommerceParams.md)
- [Contacts](docs/Model/Contacts.md)
- [ContactsContactsInner](docs/Model/ContactsContactsInner.md)
- [ContactsRequest](docs/Model/ContactsRequest.md)
- [GetAckInfo](docs/Model/GetAckInfo.md)
- [GetAckInfoHooksInner](docs/Model/GetAckInfoHooksInner.md)
- [GetCommerce](docs/Model/GetCommerce.md)
- [GetCommerceInner](docs/Model/GetCommerceInner.md)
- [GetIP](docs/Model/GetIP.md)
- [GetMe](docs/Model/GetMe.md)
- [GetMe401Response](docs/Model/GetMe401Response.md)
- [GetMessages](docs/Model/GetMessages.md)
- [GetMessagesMessagesInner](docs/Model/GetMessagesMessagesInner.md)
- [GetTemplates](docs/Model/GetTemplates.md)
- [GetTemplatesTemplatesInner](docs/Model/GetTemplatesTemplatesInner.md)
- [MeComponents](docs/Model/MeComponents.md)
- [MediaId](docs/Model/MediaId.md)
- [Message](docs/Model/Message.md)
- [MessageIdProp](docs/Model/MessageIdProp.md)
- [PhoneProp](docs/Model/PhoneProp.md)
- [ReadMessageRequest](docs/Model/ReadMessageRequest.md)
- [RemoveTemplateRequest](docs/Model/RemoveTemplateRequest.md)
- [SendContactRequest](docs/Model/SendContactRequest.md)
- [SendFileRequest](docs/Model/SendFileRequest.md)
- [SendListRequest](docs/Model/SendListRequest.md)
- [SendListRequestAllOfRows](docs/Model/SendListRequestAllOfRows.md)
- [SendListRequestAllOfSections](docs/Model/SendListRequestAllOfSections.md)
- [SendLocationRequest](docs/Model/SendLocationRequest.md)
- [SendMessageRequest](docs/Model/SendMessageRequest.md)
- [SendMessageStatus](docs/Model/SendMessageStatus.md)
- [SendProductRequest](docs/Model/SendProductRequest.md)
- [SendProductRequestAllOfAction](docs/Model/SendProductRequestAllOfAction.md)
- [SendProductRequestAllOfActionProductItems](docs/Model/SendProductRequestAllOfActionProductItems.md)
- [SendProductRequestAllOfActionSections](docs/Model/SendProductRequestAllOfActionSections.md)
- [SendTemplateRequest](docs/Model/SendTemplateRequest.md)
- [SendTemplateRequestAllOfCurrency](docs/Model/SendTemplateRequestAllOfCurrency.md)
- [SendTemplateRequestAllOfDateTime](docs/Model/SendTemplateRequestAllOfDateTime.md)
- [SendTemplateRequestAllOfDateTimeComponent](docs/Model/SendTemplateRequestAllOfDateTimeComponent.md)
- [SendTemplateRequestAllOfDateTimeUnixEpoch](docs/Model/SendTemplateRequestAllOfDateTimeUnixEpoch.md)
- [SendTemplateRequestAllOfLanguage](docs/Model/SendTemplateRequestAllOfLanguage.md)
- [SendTemplateRequestAllOfParams](docs/Model/SendTemplateRequestAllOfParams.md)
- [SetCommerce](docs/Model/SetCommerce.md)
- [SetMe](docs/Model/SetMe.md)
- [SetMeRequest](docs/Model/SetMeRequest.md)
- [SetSettings200Response](docs/Model/SetSettings200Response.md)
- [SetSettings200ResponseAllOfUpdate](docs/Model/SetSettings200ResponseAllOfUpdate.md)
- [SetWebhookStatus](docs/Model/SetWebhookStatus.md)
- [Settings](docs/Model/Settings.md)
- [TemplateCategoryProp](docs/Model/TemplateCategoryProp.md)
- [TemplateComponentsProp](docs/Model/TemplateComponentsProp.md)
- [TemplateComponentsPropInner](docs/Model/TemplateComponentsPropInner.md)
- [TemplateComponentsPropInnerButtonsInner](docs/Model/TemplateComponentsPropInnerButtonsInner.md)
- [TemplateLanguageProp](docs/Model/TemplateLanguageProp.md)
- [TemplateNamespaceField](docs/Model/TemplateNamespaceField.md)
- [UploadMedia](docs/Model/UploadMedia.md)
- [WebhookUrl](docs/Model/WebhookUrl.md)

## Authorization

Authentication schemes defined for the API:
### token

- **Type**: API key
- **API key parameter name**: token
- **Location**: URL query string


## Tests

To run the tests, use:

```bash
composer install
vendor/bin/phpunit
```

## Author

hello@1msg.io

## About this package

This PHP package is automatically generated by the [OpenAPI Generator](https://openapi-generator.tech) project:

- API version: `2.39.0`
- Build package: `org.openapitools.codegen.languages.PhpClientCodegen`
