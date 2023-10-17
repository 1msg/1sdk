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
 * @interface SendLocationRequest
 */
export interface SendLocationRequest {
    /**
     * **Required if phone is not set**
     * 
     * Chat ID from the message list. Examples: 12020721369@c.us
     * . Used instead of the phone parameter.
     * @type {string}
     * @memberof SendLocationRequest
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
     * @memberof SendLocationRequest
     */
    phone?: number;
    /**
     * Latitude of the location. Example: 45.018337
     * @type {string}
     * @memberof SendLocationRequest
     */
    lat: string;
    /**
     * Longitude of the location. Example: -73.968285
     * @type {string}
     * @memberof SendLocationRequest
     */
    lng: string;
    /**
     * Address of the location. Only displayed if name is present. Example: 9766 Valley View St., New York, NY 10024
     * @type {string}
     * @memberof SendLocationRequest
     */
    address?: string;
    /**
     * Name of the location. Example: Facebook HQ
     * @type {string}
     * @memberof SendLocationRequest
     */
    name?: string;
}

/**
 * Check if a given object implements the SendLocationRequest interface.
 */
export function instanceOfSendLocationRequest(value: object): boolean {
    let isInstance = true;
    isInstance = isInstance && "lat" in value;
    isInstance = isInstance && "lng" in value;

    return isInstance;
}

export function SendLocationRequestFromJSON(json: any): SendLocationRequest {
    return SendLocationRequestFromJSONTyped(json, false);
}

export function SendLocationRequestFromJSONTyped(json: any, ignoreDiscriminator: boolean): SendLocationRequest {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'chatId': !exists(json, 'chatId') ? undefined : json['chatId'],
        'phone': !exists(json, 'phone') ? undefined : json['phone'],
        'lat': json['lat'],
        'lng': json['lng'],
        'address': !exists(json, 'address') ? undefined : json['address'],
        'name': !exists(json, 'name') ? undefined : json['name'],
    };
}

export function SendLocationRequestToJSON(value?: SendLocationRequest | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'chatId': value.chatId,
        'phone': value.phone,
        'lat': value.lat,
        'lng': value.lng,
        'address': value.address,
        'name': value.name,
    };
}

