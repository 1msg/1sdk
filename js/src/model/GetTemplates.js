/**
 * one_msg_waba_sdk
 * [1MSG.IO](https://1msg.io/) is the perfect WhatsApp management tool for your business. With us you get full access to the official Whatsapp API/webhooks.  Every API request must contain an Authorize HTTP header with a token.  This is your channel token, which can be found in your channel project on your profile page. Please do not give the token to anyone or post it publicly.  The authorization token must be added to each request in the GET parameter 'token' and always passed to query string (?token={your_token}). Parameters in GET queries pass query string. Parameters in POST requests — through the JSON-encoded request body.   All 'send' methods (except /sendTemplate) will only work when the dialog session with the user is open. Some of our solutions simplify and avoid such limitations, but we urge you to pay more attention to this detail
 *
 * The version of the OpenAPI document: 2.39.0
 * Contact: hello@1msg.io
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */

import ApiClient from '../ApiClient';
import GetTemplatesTemplatesInner from './GetTemplatesTemplatesInner';

/**
 * The GetTemplates model module.
 * @module model/GetTemplates
 * @version 2.39.0
 */
class GetTemplates {
    /**
     * Constructs a new <code>GetTemplates</code>.
     * @alias module:model/GetTemplates
     */
    constructor() { 
        
        GetTemplates.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>GetTemplates</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/GetTemplates} obj Optional instance to populate.
     * @return {module:model/GetTemplates} The populated <code>GetTemplates</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new GetTemplates();

            if (data.hasOwnProperty('total')) {
                obj['total'] = ApiClient.convertToType(data['total'], 'Number');
            }
            if (data.hasOwnProperty('templates')) {
                obj['templates'] = ApiClient.convertToType(data['templates'], [GetTemplatesTemplatesInner]);
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>GetTemplates</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>GetTemplates</code>.
     */
    static validateJSON(data) {
        if (data['templates']) { // data not null
            // ensure the json data is an array
            if (!Array.isArray(data['templates'])) {
                throw new Error("Expected the field `templates` to be an array in the JSON data but got " + data['templates']);
            }
            // validate the optional field `templates` (array)
            for (const item of data['templates']) {
                GetTemplatesTemplatesInner.validateJSON(item);
            };
        }

        return true;
    }


}



/**
 * @member {Number} total
 */
GetTemplates.prototype['total'] = undefined;

/**
 * @member {Array.<module:model/GetTemplatesTemplatesInner>} templates
 */
GetTemplates.prototype['templates'] = undefined;






export default GetTemplates;

