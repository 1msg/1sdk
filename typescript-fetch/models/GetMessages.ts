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
import type { GetMessagesMessagesInner } from './GetMessagesMessagesInner';
import {
    GetMessagesMessagesInnerFromJSON,
    GetMessagesMessagesInnerFromJSONTyped,
    GetMessagesMessagesInnerToJSON,
} from './GetMessagesMessagesInner';

/**
 * 
 * @export
 * @interface GetMessages
 */
export interface GetMessages {
    /**
     * 
     * @type {Array<GetMessagesMessagesInner>}
     * @memberof GetMessages
     */
    messages?: Array<GetMessagesMessagesInner>;
}

/**
 * Check if a given object implements the GetMessages interface.
 */
export function instanceOfGetMessages(value: object): boolean {
    let isInstance = true;

    return isInstance;
}

export function GetMessagesFromJSON(json: any): GetMessages {
    return GetMessagesFromJSONTyped(json, false);
}

export function GetMessagesFromJSONTyped(json: any, ignoreDiscriminator: boolean): GetMessages {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'messages': !exists(json, 'messages') ? undefined : ((json['messages'] as Array<any>).map(GetMessagesMessagesInnerFromJSON)),
    };
}

export function GetMessagesToJSON(value?: GetMessages | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'messages': value.messages === undefined ? undefined : ((value.messages as Array<any>).map(GetMessagesMessagesInnerToJSON)),
    };
}

