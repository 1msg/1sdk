# # SendFileRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**chat_id** | **string** | **Required if phone is not set**  Chat ID from the message list. Examples: 12020721369@c.us . Used instead of the phone parameter. | [optional]
**phone** | **int** | **Required if chatId is not set**  A phone number starting with the country code. You do not need to add your number.   USA example: 12020721369. | [optional]
**body** | **string** | HTTP link *https://...*  Or base64-encoded file with mime data, for example *data:image/jpeg;base64,/9j/4AAQSkZJRgABAQ...*   File in form-data input field |
**filename** | **string** | File name, for *example 1.jpg* or *hello.xlsx* |
**caption** | **string** | Text under the file. When sending an image сan be used with mentionedPhones, example: this image for @556123122026 | [optional]

[[Back to Model list]](../../README.md#models) [[Back to API list]](../../README.md#endpoints) [[Back to README]](../../README.md)
