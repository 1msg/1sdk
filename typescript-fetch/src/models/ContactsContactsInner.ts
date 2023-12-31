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
 * @interface ContactsContactsInner
 */
export interface ContactsContactsInner {
    /**
     * Sent value
     * @type {string}
     * @memberof ContactsContactsInner
     */
    input?: string;
    /**
     * Contacts status: 
     * 
     * *failed* - got error on processing
     * 
     * *processing* - still not detected
     * 
     * *invalid* - unavailable for sending
     * 
     * *valid* - available for sending
     * @type {string}
     * @memberof ContactsContactsInner
     */
    status?: string;
    /**
     * Formatted contact phone
     * @type {string}
     * @memberof ContactsContactsInner
     */
    waId?: string;
}

/**
 * Check if a given object implements the ContactsContactsInner interface.
 */
export function instanceOfContactsContactsInner(value: object): boolean {
    let isInstance = true;

    return isInstance;
}

export function ContactsContactsInnerFromJSON(json: any): ContactsContactsInner {
    return ContactsContactsInnerFromJSONTyped(json, false);
}

export function ContactsContactsInnerFromJSONTyped(json: any, ignoreDiscriminator: boolean): ContactsContactsInner {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'input': !exists(json, 'input') ? undefined : json['input'],
        'status': !exists(json, 'status') ? undefined : json['status'],
        'waId': !exists(json, 'wa_id') ? undefined : json['wa_id'],
    };
}

export function ContactsContactsInnerToJSON(value?: ContactsContactsInner | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'input': value.input,
        'status': value.status,
        'wa_id': value.waId,
    };
}

