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
import type { TemplateComponentsPropInnerButtonsInner } from './TemplateComponentsPropInnerButtonsInner';
import {
    TemplateComponentsPropInnerButtonsInnerFromJSON,
    TemplateComponentsPropInnerButtonsInnerFromJSONTyped,
    TemplateComponentsPropInnerButtonsInnerToJSON,
} from './TemplateComponentsPropInnerButtonsInner';

/**
 * 
 * @export
 * @interface TemplateComponentsPropInner
 */
export interface TemplateComponentsPropInner {
    /**
     * 
     * @type {string}
     * @memberof TemplateComponentsPropInner
     */
    type?: TemplateComponentsPropInnerTypeEnum;
    /**
     * Only for HEADER type
     * @type {string}
     * @memberof TemplateComponentsPropInner
     */
    format?: TemplateComponentsPropInnerFormatEnum;
    /**
     * 
     * @type {string}
     * @memberof TemplateComponentsPropInner
     */
    text?: string;
    /**
     * 
     * @type {object}
     * @memberof TemplateComponentsPropInner
     */
    example?: object;
    /**
     * 
     * @type {Array<TemplateComponentsPropInnerButtonsInner>}
     * @memberof TemplateComponentsPropInner
     */
    buttons?: Array<TemplateComponentsPropInnerButtonsInner>;
}


/**
 * @export
 */
export const TemplateComponentsPropInnerTypeEnum = {
    Body: 'BODY',
    Header: 'HEADER',
    Footer: 'FOOTER',
    Buttons: 'BUTTONS'
} as const;
export type TemplateComponentsPropInnerTypeEnum = typeof TemplateComponentsPropInnerTypeEnum[keyof typeof TemplateComponentsPropInnerTypeEnum];

/**
 * @export
 */
export const TemplateComponentsPropInnerFormatEnum = {
    Text: 'TEXT',
    Image: 'IMAGE',
    Document: 'DOCUMENT',
    Video: 'VIDEO'
} as const;
export type TemplateComponentsPropInnerFormatEnum = typeof TemplateComponentsPropInnerFormatEnum[keyof typeof TemplateComponentsPropInnerFormatEnum];


/**
 * Check if a given object implements the TemplateComponentsPropInner interface.
 */
export function instanceOfTemplateComponentsPropInner(value: object): boolean {
    let isInstance = true;

    return isInstance;
}

export function TemplateComponentsPropInnerFromJSON(json: any): TemplateComponentsPropInner {
    return TemplateComponentsPropInnerFromJSONTyped(json, false);
}

export function TemplateComponentsPropInnerFromJSONTyped(json: any, ignoreDiscriminator: boolean): TemplateComponentsPropInner {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'type': !exists(json, 'type') ? undefined : json['type'],
        'format': !exists(json, 'format') ? undefined : json['format'],
        'text': !exists(json, 'text') ? undefined : json['text'],
        'example': !exists(json, 'example') ? undefined : json['example'],
        'buttons': !exists(json, 'buttons') ? undefined : ((json['buttons'] as Array<any>).map(TemplateComponentsPropInnerButtonsInnerFromJSON)),
    };
}

export function TemplateComponentsPropInnerToJSON(value?: TemplateComponentsPropInner | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'type': value.type,
        'format': value.format,
        'text': value.text,
        'example': value.example,
        'buttons': value.buttons === undefined ? undefined : ((value.buttons as Array<any>).map(TemplateComponentsPropInnerButtonsInnerToJSON)),
    };
}

