# OneMsgWabaSdk.SendFileRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**chatId** | **String** | **Required if phone is not set**  Chat ID from the message list. Examples: 12020721369@c.us . Used instead of the phone parameter. | [optional] 
**phone** | **Number** | **Required if chatId is not set**  A phone number starting with the country code. You do not need to add your number.   USA example: 12020721369. | [optional] 
**body** | **String** | HTTP link *https://...*  Or base64-encoded file with mime data, for example *data:image/jpeg;base64,/9j/4AAQSkZJRgABAQ...*   File in form-data input field | 
**filename** | **String** | File name, for *example 1.jpg* or *hello.xlsx* | 
**caption** | **String** | Text under the file. When sending an image сan be used with mentionedPhones, example: this image for @556123122026 | [optional] 


