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
 * @interface Message
 */
export interface Message {
    /**
     * unique id
     * @type {string}
     * @memberof Message
     */
    id?: string;
    /**
     * text message for type "chat", or link to download the file for "ptt", "image", "audio", "video" and "document", or latitude and longitude for "location", or message "[Call]" for "call_log"
     * @type {string}
     * @memberof Message
     */
    body?: string;
    /**
     * true - outgoing, false - incoming
     * @type {boolean}
     * @memberof Message
     */
    fromMe?: boolean;
    /**
     * 1 - generated by api, 0 - generated by app
     * @type {number}
     * @memberof Message
     */
    self?: number;
    /**
     * true - forwarded message, false - direct message
     * @type {boolean}
     * @memberof Message
     */
    isForwarded?: boolean;
    /**
     * Author ID of the message
     * @type {string}
     * @memberof Message
     */
    author?: string;
    /**
     * send time, unix timestamp
     * @type {number}
     * @memberof Message
     */
    time?: number;
    /**
     * chat ID
     * @type {string}
     * @memberof Message
     */
    chatId?: string;
    /**
     * type of the message
     * @type {string}
     * @memberof Message
     */
    type?: MessageTypeEnum;
    /**
     * Sender name
     * @type {string}
     * @memberof Message
     */
    senderName?: string;
    /**
     * File caption or filename
     * @type {string}
     * @memberof Message
     */
    caption?: string;
    /**
     * ID of quoted message
     * @type {string}
     * @memberof Message
     */
    quotedMsgId?: string;
}


/**
 * @export
 */
export const MessageTypeEnum = {
    Chat: 'chat',
    Interactive: 'interactive',
    Image: 'image',
    Video: 'video',
    Document: 'document',
    Audio: 'audio',
    Sticker: 'sticker',
    Voice: 'voice'
} as const;
export type MessageTypeEnum = typeof MessageTypeEnum[keyof typeof MessageTypeEnum];


/**
 * Check if a given object implements the Message interface.
 */
export function instanceOfMessage(value: object): boolean {
    let isInstance = true;

    return isInstance;
}

export function MessageFromJSON(json: any): Message {
    return MessageFromJSONTyped(json, false);
}

export function MessageFromJSONTyped(json: any, ignoreDiscriminator: boolean): Message {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
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
    };
}

export function MessageToJSON(value?: Message | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
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
    };
}

