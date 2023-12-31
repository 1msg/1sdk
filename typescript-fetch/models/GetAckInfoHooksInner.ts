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
 * @interface GetAckInfoHooksInner
 */
export interface GetAckInfoHooksInner {
    /**
     * 
     * @type {string}
     * @memberof GetAckInfoHooksInner
     */
    id?: string;
    /**
     * 
     * @type {string}
     * @memberof GetAckInfoHooksInner
     */
    type?: string;
    /**
     * 
     * @type {string}
     * @memberof GetAckInfoHooksInner
     */
    status?: string;
    /**
     * 
     * @type {object}
     * @memberof GetAckInfoHooksInner
     */
    pricing?: object;
    /**
     * 
     * @type {string}
     * @memberof GetAckInfoHooksInner
     */
    timestamp?: string;
    /**
     * 
     * @type {object}
     * @memberof GetAckInfoHooksInner
     */
    conversation?: object;
    /**
     * 
     * @type {string}
     * @memberof GetAckInfoHooksInner
     */
    recipientId?: string;
}

/**
 * Check if a given object implements the GetAckInfoHooksInner interface.
 */
export function instanceOfGetAckInfoHooksInner(value: object): boolean {
    let isInstance = true;

    return isInstance;
}

export function GetAckInfoHooksInnerFromJSON(json: any): GetAckInfoHooksInner {
    return GetAckInfoHooksInnerFromJSONTyped(json, false);
}

export function GetAckInfoHooksInnerFromJSONTyped(json: any, ignoreDiscriminator: boolean): GetAckInfoHooksInner {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'id': !exists(json, 'id') ? undefined : json['id'],
        'type': !exists(json, 'type') ? undefined : json['type'],
        'status': !exists(json, 'status') ? undefined : json['status'],
        'pricing': !exists(json, 'pricing') ? undefined : json['pricing'],
        'timestamp': !exists(json, 'timestamp') ? undefined : json['timestamp'],
        'conversation': !exists(json, 'conversation') ? undefined : json['conversation'],
        'recipientId': !exists(json, 'recipient_id') ? undefined : json['recipient_id'],
    };
}

export function GetAckInfoHooksInnerToJSON(value?: GetAckInfoHooksInner | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'id': value.id,
        'type': value.type,
        'status': value.status,
        'pricing': value.pricing,
        'timestamp': value.timestamp,
        'conversation': value.conversation,
        'recipient_id': value.recipientId,
    };
}

