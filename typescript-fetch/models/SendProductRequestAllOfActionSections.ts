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
import type { SendProductRequestAllOfActionProductItems } from './SendProductRequestAllOfActionProductItems';
import {
    SendProductRequestAllOfActionProductItemsFromJSON,
    SendProductRequestAllOfActionProductItemsFromJSONTyped,
    SendProductRequestAllOfActionProductItemsToJSON,
} from './SendProductRequestAllOfActionProductItems';

/**
 * 
 * @export
 * @interface SendProductRequestAllOfActionSections
 */
export interface SendProductRequestAllOfActionSections {
    /**
     * Title of the section. Example: the-section-title
     * @type {string}
     * @memberof SendProductRequestAllOfActionSections
     */
    title?: string;
    /**
     * 
     * @type {Array<SendProductRequestAllOfActionProductItems>}
     * @memberof SendProductRequestAllOfActionSections
     */
    productItems?: Array<SendProductRequestAllOfActionProductItems>;
}

/**
 * Check if a given object implements the SendProductRequestAllOfActionSections interface.
 */
export function instanceOfSendProductRequestAllOfActionSections(value: object): boolean {
    let isInstance = true;

    return isInstance;
}

export function SendProductRequestAllOfActionSectionsFromJSON(json: any): SendProductRequestAllOfActionSections {
    return SendProductRequestAllOfActionSectionsFromJSONTyped(json, false);
}

export function SendProductRequestAllOfActionSectionsFromJSONTyped(json: any, ignoreDiscriminator: boolean): SendProductRequestAllOfActionSections {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'title': !exists(json, 'title') ? undefined : json['title'],
        'productItems': !exists(json, 'product_items') ? undefined : ((json['product_items'] as Array<any>).map(SendProductRequestAllOfActionProductItemsFromJSON)),
    };
}

export function SendProductRequestAllOfActionSectionsToJSON(value?: SendProductRequestAllOfActionSections | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'title': value.title,
        'product_items': value.productItems === undefined ? undefined : ((value.productItems as Array<any>).map(SendProductRequestAllOfActionProductItemsToJSON)),
    };
}

