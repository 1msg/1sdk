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
 * @interface SendTemplateRequestAllOfDateTimeComponent
 */
export interface SendTemplateRequestAllOfDateTimeComponent {
    /**
     * 
     * @type {string}
     * @memberof SendTemplateRequestAllOfDateTimeComponent
     */
    dayOfWeek?: SendTemplateRequestAllOfDateTimeComponentDayOfWeekEnum;
    /**
     * 
     * @type {number}
     * @memberof SendTemplateRequestAllOfDateTimeComponent
     */
    year?: number;
    /**
     * 
     * @type {number}
     * @memberof SendTemplateRequestAllOfDateTimeComponent
     */
    month?: number;
    /**
     * 
     * @type {number}
     * @memberof SendTemplateRequestAllOfDateTimeComponent
     */
    dayOfMonth?: number;
    /**
     * 
     * @type {number}
     * @memberof SendTemplateRequestAllOfDateTimeComponent
     */
    hour?: number;
    /**
     * 
     * @type {number}
     * @memberof SendTemplateRequestAllOfDateTimeComponent
     */
    minute?: number;
    /**
     * 
     * @type {string}
     * @memberof SendTemplateRequestAllOfDateTimeComponent
     */
    calendar?: SendTemplateRequestAllOfDateTimeComponentCalendarEnum;
}


/**
 * @export
 */
export const SendTemplateRequestAllOfDateTimeComponentDayOfWeekEnum = {
    Monday: 'MONDAY',
    Tuesday: 'TUESDAY',
    Wednesday: 'WEDNESDAY',
    Thursday: 'THURSDAY',
    Friday: 'FRIDAY',
    Saturday: 'SATURDAY',
    Sunday: 'SUNDAY',
    _1: '1',
    _2: '2',
    _3: '3',
    _4: '4',
    _5: '5',
    _6: '6',
    _7: '7'
} as const;
export type SendTemplateRequestAllOfDateTimeComponentDayOfWeekEnum = typeof SendTemplateRequestAllOfDateTimeComponentDayOfWeekEnum[keyof typeof SendTemplateRequestAllOfDateTimeComponentDayOfWeekEnum];

/**
 * @export
 */
export const SendTemplateRequestAllOfDateTimeComponentCalendarEnum = {
    Gregorian: 'GREGORIAN',
    SolarHijri: 'SOLAR_HIJRI'
} as const;
export type SendTemplateRequestAllOfDateTimeComponentCalendarEnum = typeof SendTemplateRequestAllOfDateTimeComponentCalendarEnum[keyof typeof SendTemplateRequestAllOfDateTimeComponentCalendarEnum];


/**
 * Check if a given object implements the SendTemplateRequestAllOfDateTimeComponent interface.
 */
export function instanceOfSendTemplateRequestAllOfDateTimeComponent(value: object): boolean {
    let isInstance = true;

    return isInstance;
}

export function SendTemplateRequestAllOfDateTimeComponentFromJSON(json: any): SendTemplateRequestAllOfDateTimeComponent {
    return SendTemplateRequestAllOfDateTimeComponentFromJSONTyped(json, false);
}

export function SendTemplateRequestAllOfDateTimeComponentFromJSONTyped(json: any, ignoreDiscriminator: boolean): SendTemplateRequestAllOfDateTimeComponent {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'dayOfWeek': !exists(json, 'day_of_week') ? undefined : json['day_of_week'],
        'year': !exists(json, 'year') ? undefined : json['year'],
        'month': !exists(json, 'month') ? undefined : json['month'],
        'dayOfMonth': !exists(json, 'day_of_month') ? undefined : json['day_of_month'],
        'hour': !exists(json, 'hour') ? undefined : json['hour'],
        'minute': !exists(json, 'minute') ? undefined : json['minute'],
        'calendar': !exists(json, 'calendar') ? undefined : json['calendar'],
    };
}

export function SendTemplateRequestAllOfDateTimeComponentToJSON(value?: SendTemplateRequestAllOfDateTimeComponent | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'day_of_week': value.dayOfWeek,
        'year': value.year,
        'month': value.month,
        'day_of_month': value.dayOfMonth,
        'hour': value.hour,
        'minute': value.minute,
        'calendar': value.calendar,
    };
}

