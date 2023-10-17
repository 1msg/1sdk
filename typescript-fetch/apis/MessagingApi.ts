/* tslint:disable */
/* eslint-disable */
/**
 * one_msg_waba_sdk
 * [1MSG.IO](https://1msg.io/) is the perfect WhatsApp management tool for your business. With us you get full access to the official Whatsapp API/webhooks.  Every API request must contain an Authorize HTTP header with a token.  This is your channel token, which can be found in your channel project on your profile page. Please do not give the token to anyone or post it publicly.  The authorization token must be added to each request in the GET parameter \'token\' and always passed to query string (?token={your_token}). Parameters in GET queries pass query string. Parameters in POST requests — through the JSON-encoded request body.   All \'send\' methods (except /sendTemplate) will only work when the dialog session with the user is open. Some of our solutions simplify and avoid such limitations, but we urge you to pay more attention to this detail
 *
 * The version of the OpenAPI document: 2.39.0
 * Contact: hello@1msg.io
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


import * as runtime from '../runtime';
import type {
  GetMe401Response,
  GetMessages,
  ReadMessageRequest,
  SendContactRequest,
  SendFileRequest,
  SendListRequest,
  SendLocationRequest,
  SendMessageRequest,
  SendMessageStatus,
  SetMe,
} from '../models/index';
import {
    GetMe401ResponseFromJSON,
    GetMe401ResponseToJSON,
    GetMessagesFromJSON,
    GetMessagesToJSON,
    ReadMessageRequestFromJSON,
    ReadMessageRequestToJSON,
    SendContactRequestFromJSON,
    SendContactRequestToJSON,
    SendFileRequestFromJSON,
    SendFileRequestToJSON,
    SendListRequestFromJSON,
    SendListRequestToJSON,
    SendLocationRequestFromJSON,
    SendLocationRequestToJSON,
    SendMessageRequestFromJSON,
    SendMessageRequestToJSON,
    SendMessageStatusFromJSON,
    SendMessageStatusToJSON,
    SetMeFromJSON,
    SetMeToJSON,
} from '../models/index';

export interface MessagesListRequest {
    last?: boolean;
    lastMessageNumber?: number;
    firstMessageNumber?: number;
    limit?: number;
    chatId?: string;
    minTime?: number;
    maxTime?: number;
    msgId?: string;
}

export interface ReadMessageOperationRequest {
    readMessageRequest?: ReadMessageRequest;
}

export interface SendContactOperationRequest {
    sendContactRequest: SendContactRequest;
}

export interface SendFileOperationRequest {
    sendFileRequest: SendFileRequest;
}

export interface SendListOperationRequest {
    sendListRequest: SendListRequest;
}

export interface SendLocationOperationRequest {
    sendLocationRequest: SendLocationRequest;
}

export interface SendMessageOperationRequest {
    sendMessageRequest: SendMessageRequest;
}

/**
 * 
 */
export class MessagingApi extends runtime.BaseAPI {

    /**
     * 
     * Get messages list
     */
    async messagesListRaw(requestParameters: MessagesListRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<GetMessages>> {
        const queryParameters: any = {};

        if (requestParameters.last !== undefined) {
            queryParameters['last'] = requestParameters.last;
        }

        if (requestParameters.lastMessageNumber !== undefined) {
            queryParameters['lastMessageNumber'] = requestParameters.lastMessageNumber;
        }

        if (requestParameters.firstMessageNumber !== undefined) {
            queryParameters['firstMessageNumber'] = requestParameters.firstMessageNumber;
        }

        if (requestParameters.limit !== undefined) {
            queryParameters['limit'] = requestParameters.limit;
        }

        if (requestParameters.chatId !== undefined) {
            queryParameters['chatId'] = requestParameters.chatId;
        }

        if (requestParameters.minTime !== undefined) {
            queryParameters['min_time'] = requestParameters.minTime;
        }

        if (requestParameters.maxTime !== undefined) {
            queryParameters['max_time'] = requestParameters.maxTime;
        }

        if (requestParameters.msgId !== undefined) {
            queryParameters['msgId'] = requestParameters.msgId;
        }

        const headerParameters: runtime.HTTPHeaders = {};

        if (this.configuration && this.configuration.apiKey) {
            queryParameters["token"] = this.configuration.apiKey("token"); // token authentication
        }

        const response = await this.request({
            path: `/messages`,
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => GetMessagesFromJSON(jsonValue));
    }

    /**
     * 
     * Get messages list
     */
    async messagesList(requestParameters: MessagesListRequest = {}, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<GetMessages> {
        const response = await this.messagesListRaw(requestParameters, initOverrides);
        return await response.value();
    }

    /**
     * 
     * Mark message as read
     */
    async readMessageRaw(requestParameters: ReadMessageOperationRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<SetMe>> {
        const queryParameters: any = {};

        const headerParameters: runtime.HTTPHeaders = {};

        headerParameters['Content-Type'] = 'application/x-www-form-urlencoded';

        if (this.configuration && this.configuration.apiKey) {
            queryParameters["token"] = this.configuration.apiKey("token"); // token authentication
        }

        const response = await this.request({
            path: `/readMessage`,
            method: 'POST',
            headers: headerParameters,
            query: queryParameters,
            body: ReadMessageRequestToJSON(requestParameters.readMessageRequest),
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => SetMeFromJSON(jsonValue));
    }

    /**
     * 
     * Mark message as read
     */
    async readMessage(requestParameters: ReadMessageOperationRequest = {}, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<SetMe> {
        const response = await this.readMessageRaw(requestParameters, initOverrides);
        return await response.value();
    }

    /**
     * Send a contact to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.
     * Send a Contact
     */
    async sendContactRaw(requestParameters: SendContactOperationRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<SendMessageStatus>> {
        if (requestParameters.sendContactRequest === null || requestParameters.sendContactRequest === undefined) {
            throw new runtime.RequiredError('sendContactRequest','Required parameter requestParameters.sendContactRequest was null or undefined when calling sendContact.');
        }

        const queryParameters: any = {};

        const headerParameters: runtime.HTTPHeaders = {};

        headerParameters['Content-Type'] = 'application/x-www-form-urlencoded';

        if (this.configuration && this.configuration.apiKey) {
            queryParameters["token"] = this.configuration.apiKey("token"); // token authentication
        }

        const response = await this.request({
            path: `/sendContact`,
            method: 'POST',
            headers: headerParameters,
            query: queryParameters,
            body: SendContactRequestToJSON(requestParameters.sendContactRequest),
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => SendMessageStatusFromJSON(jsonValue));
    }

    /**
     * Send a contact to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.
     * Send a Contact
     */
    async sendContact(requestParameters: SendContactOperationRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<SendMessageStatus> {
        const response = await this.sendContactRaw(requestParameters, initOverrides);
        return await response.value();
    }

    /**
     * Send a file to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.
     * Send a File
     */
    async sendFileRaw(requestParameters: SendFileOperationRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<SendMessageStatus>> {
        if (requestParameters.sendFileRequest === null || requestParameters.sendFileRequest === undefined) {
            throw new runtime.RequiredError('sendFileRequest','Required parameter requestParameters.sendFileRequest was null or undefined when calling sendFile.');
        }

        const queryParameters: any = {};

        const headerParameters: runtime.HTTPHeaders = {};

        headerParameters['Content-Type'] = 'application/x-www-form-urlencoded';

        if (this.configuration && this.configuration.apiKey) {
            queryParameters["token"] = this.configuration.apiKey("token"); // token authentication
        }

        const response = await this.request({
            path: `/sendFile`,
            method: 'POST',
            headers: headerParameters,
            query: queryParameters,
            body: SendFileRequestToJSON(requestParameters.sendFileRequest),
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => SendMessageStatusFromJSON(jsonValue));
    }

    /**
     * Send a file to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.
     * Send a File
     */
    async sendFile(requestParameters: SendFileOperationRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<SendMessageStatus> {
        const response = await this.sendFileRaw(requestParameters, initOverrides);
        return await response.value();
    }

    /**
     * Send Interactive List Message to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.
     * Send List Message
     */
    async sendListRaw(requestParameters: SendListOperationRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<SendMessageStatus>> {
        if (requestParameters.sendListRequest === null || requestParameters.sendListRequest === undefined) {
            throw new runtime.RequiredError('sendListRequest','Required parameter requestParameters.sendListRequest was null or undefined when calling sendList.');
        }

        const queryParameters: any = {};

        const headerParameters: runtime.HTTPHeaders = {};

        headerParameters['Content-Type'] = 'application/x-www-form-urlencoded';

        if (this.configuration && this.configuration.apiKey) {
            queryParameters["token"] = this.configuration.apiKey("token"); // token authentication
        }

        const response = await this.request({
            path: `/sendList`,
            method: 'POST',
            headers: headerParameters,
            query: queryParameters,
            body: SendListRequestToJSON(requestParameters.sendListRequest),
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => SendMessageStatusFromJSON(jsonValue));
    }

    /**
     * Send Interactive List Message to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.
     * Send List Message
     */
    async sendList(requestParameters: SendListOperationRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<SendMessageStatus> {
        const response = await this.sendListRaw(requestParameters, initOverrides);
        return await response.value();
    }

    /**
     * Send a location to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.
     * Send a Location
     */
    async sendLocationRaw(requestParameters: SendLocationOperationRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<SendMessageStatus>> {
        if (requestParameters.sendLocationRequest === null || requestParameters.sendLocationRequest === undefined) {
            throw new runtime.RequiredError('sendLocationRequest','Required parameter requestParameters.sendLocationRequest was null or undefined when calling sendLocation.');
        }

        const queryParameters: any = {};

        const headerParameters: runtime.HTTPHeaders = {};

        headerParameters['Content-Type'] = 'application/x-www-form-urlencoded';

        if (this.configuration && this.configuration.apiKey) {
            queryParameters["token"] = this.configuration.apiKey("token"); // token authentication
        }

        const response = await this.request({
            path: `/sendLocation`,
            method: 'POST',
            headers: headerParameters,
            query: queryParameters,
            body: SendLocationRequestToJSON(requestParameters.sendLocationRequest),
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => SendMessageStatusFromJSON(jsonValue));
    }

    /**
     * Send a location to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.
     * Send a Location
     */
    async sendLocation(requestParameters: SendLocationOperationRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<SendMessageStatus> {
        const response = await this.sendLocationRaw(requestParameters, initOverrides);
        return await response.value();
    }

    /**
     * Send a message to an existing chat. (Only if the dialogue has an Open Session). The message will be added to the queue for sending and delivered even if the phone is disconnected from the Internet or authorization is not passed.  Only one of two parameters is needed to determine the destination - chatId or phone.
     * Send a Message
     */
    async sendMessageRaw(requestParameters: SendMessageOperationRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<SendMessageStatus>> {
        if (requestParameters.sendMessageRequest === null || requestParameters.sendMessageRequest === undefined) {
            throw new runtime.RequiredError('sendMessageRequest','Required parameter requestParameters.sendMessageRequest was null or undefined when calling sendMessage.');
        }

        const queryParameters: any = {};

        const headerParameters: runtime.HTTPHeaders = {};

        headerParameters['Content-Type'] = 'application/x-www-form-urlencoded';

        if (this.configuration && this.configuration.apiKey) {
            queryParameters["token"] = this.configuration.apiKey("token"); // token authentication
        }

        const response = await this.request({
            path: `/sendMessage`,
            method: 'POST',
            headers: headerParameters,
            query: queryParameters,
            body: SendMessageRequestToJSON(requestParameters.sendMessageRequest),
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => SendMessageStatusFromJSON(jsonValue));
    }

    /**
     * Send a message to an existing chat. (Only if the dialogue has an Open Session). The message will be added to the queue for sending and delivered even if the phone is disconnected from the Internet or authorization is not passed.  Only one of two parameters is needed to determine the destination - chatId or phone.
     * Send a Message
     */
    async sendMessage(requestParameters: SendMessageOperationRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<SendMessageStatus> {
        const response = await this.sendMessageRaw(requestParameters, initOverrides);
        return await response.value();
    }

}