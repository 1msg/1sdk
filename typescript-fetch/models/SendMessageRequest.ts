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

import { exists, mapValues } from '../runtime';
/**
 * 
 * @export
 * @interface SendMessageRequest
 */
export interface SendMessageRequest {
    /**
     * **Required if phone is not set**
     * 
     * Chat ID from the message list. Examples: 12020721369@c.us
     * . Used instead of the phone parameter.
     * @type {string}
     * @memberof SendMessageRequest
     */
    chatId?: string;
    /**
     * **Required if chatId is not set**
     * 
     * A phone number starting with the country code. You do not
     * need to add your number. 
     * 
     * USA example: 12020721369.
     * @type {number}
     * @memberof SendMessageRequest
     */
    phone?: number;
    /**
     * Message text, UTF-8 or UTF-16 string with emoji 🍏. Can be used with mentionedPhones, example: this text for @556123122026
     * @type {string}
     * @memberof SendMessageRequest
     */
    body: string;
}

/**
 * Check if a given object implements the SendMessageRequest interface.
 */
export function instanceOfSendMessageRequest(value: object): boolean {
    let isInstance = true;
    isInstance = isInstance && "body" in value;

    return isInstance;
}

export function SendMessageRequestFromJSON(json: any): SendMessageRequest {
    return SendMessageRequestFromJSONTyped(json, false);
}

export function SendMessageRequestFromJSONTyped(json: any, ignoreDiscriminator: boolean): SendMessageRequest {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'chatId': !exists(json, 'chatId') ? undefined : json['chatId'],
        'phone': !exists(json, 'phone') ? undefined : json['phone'],
        'body': json['body'],
    };
}

export function SendMessageRequestToJSON(value?: SendMessageRequest | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'chatId': value.chatId,
        'phone': value.phone,
        'body': value.body,
    };
}

