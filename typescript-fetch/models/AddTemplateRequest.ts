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
import type { TemplateCategoryProp } from './TemplateCategoryProp';
import {
    TemplateCategoryPropFromJSON,
    TemplateCategoryPropFromJSONTyped,
    TemplateCategoryPropToJSON,
} from './TemplateCategoryProp';
import type { TemplateComponentsPropInner } from './TemplateComponentsPropInner';
import {
    TemplateComponentsPropInnerFromJSON,
    TemplateComponentsPropInnerFromJSONTyped,
    TemplateComponentsPropInnerToJSON,
} from './TemplateComponentsPropInner';
import type { TemplateLanguageProp } from './TemplateLanguageProp';
import {
    TemplateLanguagePropFromJSON,
    TemplateLanguagePropFromJSONTyped,
    TemplateLanguagePropToJSON,
} from './TemplateLanguageProp';

/**
 * 
 * @export
 * @interface AddTemplateRequest
 */
export interface AddTemplateRequest {
    /**
     * Name of template
     * @type {string}
     * @memberof AddTemplateRequest
     */
    name?: string;
    /**
     * 
     * @type {TemplateCategoryProp}
     * @memberof AddTemplateRequest
     */
    category?: TemplateCategoryProp;
    /**
     * Array of template components
     * @type {Array<TemplateComponentsPropInner>}
     * @memberof AddTemplateRequest
     */
    components?: Array<TemplateComponentsPropInner>;
    /**
     * 
     * @type {TemplateLanguageProp}
     * @memberof AddTemplateRequest
     */
    language?: TemplateLanguageProp;
}

/**
 * Check if a given object implements the AddTemplateRequest interface.
 */
export function instanceOfAddTemplateRequest(value: object): boolean {
    let isInstance = true;

    return isInstance;
}

export function AddTemplateRequestFromJSON(json: any): AddTemplateRequest {
    return AddTemplateRequestFromJSONTyped(json, false);
}

export function AddTemplateRequestFromJSONTyped(json: any, ignoreDiscriminator: boolean): AddTemplateRequest {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'name': !exists(json, 'name') ? undefined : json['name'],
        'category': !exists(json, 'category') ? undefined : TemplateCategoryPropFromJSON(json['category']),
        'components': !exists(json, 'components') ? undefined : ((json['components'] as Array<any>).map(TemplateComponentsPropInnerFromJSON)),
        'language': !exists(json, 'language') ? undefined : TemplateLanguagePropFromJSON(json['language']),
    };
}

export function AddTemplateRequestToJSON(value?: AddTemplateRequest | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'name': value.name,
        'category': TemplateCategoryPropToJSON(value.category),
        'components': value.components === undefined ? undefined : ((value.components as Array<any>).map(TemplateComponentsPropInnerToJSON)),
        'language': TemplateLanguagePropToJSON(value.language),
    };
}

