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
 * @interface GetMessagesMessagesInner
 */
export interface GetMessagesMessagesInner {
    /**
     * 
     * @type {number}
     * @memberof GetMessagesMessagesInner
     */
    messageNumber?: number;
    /**
     * 
     * @type {string}
     * @memberof GetMessagesMessagesInner
     */
    id?: string;
    /**
     * 
     * @type {string}
     * @memberof GetMessagesMessagesInner
     */
    body?: string;
    /**
     * 
     * @type {boolean}
     * @memberof GetMessagesMessagesInner
     */
    fromMe?: boolean;
    /**
     * 
     * @type {number}
     * @memberof GetMessagesMessagesInner
     */
    self?: number;
    /**
     * 
     * @type {number}
     * @memberof GetMessagesMessagesInner
     */
    isForwarded?: number;
    /**
     * 
     * @type {string}
     * @memberof GetMessagesMessagesInner
     */
    author?: string;
    /**
     * 
     * @type {number}
     * @memberof GetMessagesMessagesInner
     */
    time?: number;
    /**
     * 
     * @type {string}
     * @memberof GetMessagesMessagesInner
     */
    chatId?: string;
    /**
     * 
     * @type {string}
     * @memberof GetMessagesMessagesInner
     */
    type?: string;
    /**
     * 
     * @type {string}
     * @memberof GetMessagesMessagesInner
     */
    senderName?: string;
    /**
     * 
     * @type {string}
     * @memberof GetMessagesMessagesInner
     */
    caption?: string;
    /**
     * 
     * @type {string}
     * @memberof GetMessagesMessagesInner
     */
    quotedMsgId?: string;
    /**
     * 
     * @type {object}
     * @memberof GetMessagesMessagesInner
     */
    metadata?: object;
    /**
     * 
     * @type {string}
     * @memberof GetMessagesMessagesInner
     */
    chatName?: string;
}

/**
 * Check if a given object implements the GetMessagesMessagesInner interface.
 */
export function instanceOfGetMessagesMessagesInner(value: object): boolean {
    let isInstance = true;

    return isInstance;
}

export function GetMessagesMessagesInnerFromJSON(json: any): GetMessagesMessagesInner {
    return GetMessagesMessagesInnerFromJSONTyped(json, false);
}

export function GetMessagesMessagesInnerFromJSONTyped(json: any, ignoreDiscriminator: boolean): GetMessagesMessagesInner {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'messageNumber': !exists(json, 'messageNumber') ? undefined : json['messageNumber'],
        'id': !exists(json, 'id') ? undefined : json['id'],
        'body': !exists(json, 'body') ? undefined : json['body'],
        'fromMe': !exists(json, 'fromMe') ? undefined : json['fromMe'],
        'self': !exists(json, 'self') ? undefined : json['self'],
        'isForwarded': !exists(json, 'isForwarded') ? undefined : json['isForwarded'],
        'author': !exists(json, 'author') ? undefined : json['author'],
        'time': !exists(json, 'time') ? undefined : json['time'],
        'chatId': !exists(json, 'chatId') ? undefined : json['chatId'],
        'type': !exists(json, 'type') ? undefined : json['type'],
        'senderName': !exists(json, 'senderName') ? undefined : json['senderName'],
        'caption': !exists(json, 'caption') ? undefined : json['caption'],
        'quotedMsgId': !exists(json, 'quotedMsgId') ? undefined : json['quotedMsgId'],
        'metadata': !exists(json, 'metadata') ? undefined : json['metadata'],
        'chatName': !exists(json, 'chatName') ? undefined : json['chatName'],
    };
}

export function GetMessagesMessagesInnerToJSON(value?: GetMessagesMessagesInner | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'messageNumber': value.messageNumber,
        'id': value.id,
        'body': value.body,
        'fromMe': value.fromMe,
        'self': value.self,
        'isForwarded': value.isForwarded,
        'author': value.author,
        'time': value.time,
        'chatId': value.chatId,
        'type': value.type,
        'senderName': value.senderName,
        'caption': value.caption,
        'quotedMsgId': value.quotedMsgId,
        'metadata': value.metadata,
        'chatName': value.chatName,
    };
}

