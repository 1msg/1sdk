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
 * @interface TemplateComponentsPropInnerButtonsInner
 */
export interface TemplateComponentsPropInnerButtonsInner {
    /**
     * 
     * @type {string}
     * @memberof TemplateComponentsPropInnerButtonsInner
     */
    type?: TemplateComponentsPropInnerButtonsInnerTypeEnum;
    /**
     * 
     * @type {string}
     * @memberof TemplateComponentsPropInnerButtonsInner
     */
    text?: string;
    /**
     * 
     * @type {string}
     * @memberof TemplateComponentsPropInnerButtonsInner
     */
    url?: string;
    /**
     * 
     * @type {string}
     * @memberof TemplateComponentsPropInnerButtonsInner
     */
    phoneNumber?: string;
    /**
     * 
     * @type {Array<any>}
     * @memberof TemplateComponentsPropInnerButtonsInner
     */
    example?: Array<any>;
}


/**
 * @export
 */
export const TemplateComponentsPropInnerButtonsInnerTypeEnum = {
    PhoneNumber: 'PHONE_NUMBER',
    Url: 'URL',
    QuickReply: 'QUICK_REPLY'
} as const;
export type TemplateComponentsPropInnerButtonsInnerTypeEnum = typeof TemplateComponentsPropInnerButtonsInnerTypeEnum[keyof typeof TemplateComponentsPropInnerButtonsInnerTypeEnum];


/**
 * Check if a given object implements the TemplateComponentsPropInnerButtonsInner interface.
 */
export function instanceOfTemplateComponentsPropInnerButtonsInner(value: object): boolean {
    let isInstance = true;

    return isInstance;
}

export function TemplateComponentsPropInnerButtonsInnerFromJSON(json: any): TemplateComponentsPropInnerButtonsInner {
    return TemplateComponentsPropInnerButtonsInnerFromJSONTyped(json, false);
}

export function TemplateComponentsPropInnerButtonsInnerFromJSONTyped(json: any, ignoreDiscriminator: boolean): TemplateComponentsPropInnerButtonsInner {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'type': !exists(json, 'type') ? undefined : json['type'],
        'text': !exists(json, 'text') ? undefined : json['text'],
        'url': !exists(json, 'url') ? undefined : json['url'],
        'phoneNumber': !exists(json, 'phone_number') ? undefined : json['phone_number'],
        'example': !exists(json, 'example') ? undefined : json['example'],
    };
}

export function TemplateComponentsPropInnerButtonsInnerToJSON(value?: TemplateComponentsPropInnerButtonsInner | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'type': value.type,
        'text': value.text,
        'url': value.url,
        'phone_number': value.phoneNumber,
        'example': value.example,
    };
}
