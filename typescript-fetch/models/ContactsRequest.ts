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
 * @interface ContactsRequest
 */
export interface ContactsRequest {
    /**
     * Operating mode:
     * 
     * *wait* - synchronous
     * 
     * *no_wait* - asynchronous (default)
     * @type {string}
     * @memberof ContactsRequest
     */
    blocking?: string;
    /**
     * Using cache:
     * 
     * *true* - ignore cache
     * 
     * *false* - use cache (default)
     * @type {boolean}
     * @memberof ContactsRequest
     */
    forceCheck?: boolean;
    /**
     * Array of contact numbers for checking. Recommended format is +16315551001
     * 
     * Example:
     * 
     * ["16315551000","+1 631 555 1001","6315551002","+1 (631) 555-1004","1-631-555-1005"]
     * @type {Array<string>}
     * @memberof ContactsRequest
     */
    contacts: Array<string>;
}

/**
 * Check if a given object implements the ContactsRequest interface.
 */
export function instanceOfContactsRequest(value: object): boolean {
    let isInstance = true;
    isInstance = isInstance && "contacts" in value;

    return isInstance;
}

export function ContactsRequestFromJSON(json: any): ContactsRequest {
    return ContactsRequestFromJSONTyped(json, false);
}

export function ContactsRequestFromJSONTyped(json: any, ignoreDiscriminator: boolean): ContactsRequest {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'blocking': !exists(json, 'blocking') ? undefined : json['blocking'],
        'forceCheck': !exists(json, 'force_check') ? undefined : json['force_check'],
        'contacts': json['contacts'],
    };
}

export function ContactsRequestToJSON(value?: ContactsRequest | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'blocking': value.blocking,
        'force_check': value.forceCheck,
        'contacts': value.contacts,
    };
}

