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
 * @interface MeComponents
 */
export interface MeComponents {
    /**
     * Profile`s About section.
     * @type {string}
     * @memberof MeComponents
     */
    about?: string;
    /**
     * Address of the business
     * @type {string}
     * @memberof MeComponents
     */
    address?: string;
    /**
     * Description of the business. Max 256 characters
     * @type {string}
     * @memberof MeComponents
     */
    description?: string;
    /**
     * Business email
     * @type {string}
     * @memberof MeComponents
     */
    email?: string;
    /**
     * Linked phone number
     * @type {string}
     * @memberof MeComponents
     */
    phone?: string;
    /**
     * Industry of the business
     * @type {string}
     * @memberof MeComponents
     */
    vertical?: MeComponentsVerticalEnum;
    /**
     * HTTP link
     * *https://...*
     * 
     * Or base64-encoded file with mime data, for example
     * *data:image/jpeg;base64,/9j/4AAQSkZJRgABAQ...* 
     * 
     * File in form-data input field
     * @type {string}
     * @memberof MeComponents
     */
    photo?: string;
}


/**
 * @export
 */
export const MeComponentsVerticalEnum = {
    Automotive: 'Automotive',
    BeautySpaAndSalon: 'Beauty, Spa and Salon',
    ClothingAndApparel: 'Clothing and Apparel',
    Education: 'Education',
    Entertainment: 'Entertainment',
    EventPlanningAndService: 'Event Planning and Service',
    FinanceAndBanking: 'Finance and Banking',
    FoodAndGrocery: 'Food and Grocery',
    PublicService: 'Public Service',
    HotelAndLodging: 'Hotel and Lodging',
    MedicalAndHealth: 'Medical and Health',
    NonProfit: 'Non-profit',
    ProfessionalServices: 'Professional Services',
    ShoppingAndRetail: 'Shopping and Retail',
    TravelAndTransportation: 'Travel and Transportation',
    Restaurant: 'Restaurant',
    Other: 'Other',
    Empty: ''
} as const;
export type MeComponentsVerticalEnum = typeof MeComponentsVerticalEnum[keyof typeof MeComponentsVerticalEnum];


/**
 * Check if a given object implements the MeComponents interface.
 */
export function instanceOfMeComponents(value: object): boolean {
    let isInstance = true;

    return isInstance;
}

export function MeComponentsFromJSON(json: any): MeComponents {
    return MeComponentsFromJSONTyped(json, false);
}

export function MeComponentsFromJSONTyped(json: any, ignoreDiscriminator: boolean): MeComponents {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'about': !exists(json, 'about') ? undefined : json['about'],
        'address': !exists(json, 'address') ? undefined : json['address'],
        'description': !exists(json, 'description') ? undefined : json['description'],
        'email': !exists(json, 'email') ? undefined : json['email'],
        'phone': !exists(json, 'phone') ? undefined : json['phone'],
        'vertical': !exists(json, 'vertical') ? undefined : json['vertical'],
        'photo': !exists(json, 'photo') ? undefined : json['photo'],
    };
}

export function MeComponentsToJSON(value?: MeComponents | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'about': value.about,
        'address': value.address,
        'description': value.description,
        'email': value.email,
        'phone': value.phone,
        'vertical': value.vertical,
        'photo': value.photo,
    };
}

