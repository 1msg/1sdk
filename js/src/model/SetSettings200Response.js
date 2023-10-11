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
import SetSettings200ResponseAllOfUpdate from './SetSettings200ResponseAllOfUpdate';
import Settings from './Settings';

/**
 * The SetSettings200Response model module.
 * @module model/SetSettings200Response
 * @version 2.39.0
 */
class SetSettings200Response {
    /**
     * Constructs a new <code>SetSettings200Response</code>.
     * @alias module:model/SetSettings200Response
     * @implements module:model/Settings
     * @param update {module:model/SetSettings200ResponseAllOfUpdate} 
     */
    constructor(update) { 
        Settings.initialize(this);
        SetSettings200Response.initialize(this, update);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, update) { 
        obj['update'] = update;
    }

    /**
     * Constructs a <code>SetSettings200Response</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/SetSettings200Response} obj Optional instance to populate.
     * @return {module:model/SetSettings200Response} The populated <code>SetSettings200Response</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new SetSettings200Response();
            Settings.constructFromObject(data, obj);

            if (data.hasOwnProperty('webhookUrl')) {
                obj['webhookUrl'] = ApiClient.convertToType(data['webhookUrl'], 'String');
            }
            if (data.hasOwnProperty('update')) {
                obj['update'] = SetSettings200ResponseAllOfUpdate.constructFromObject(data['update']);
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>SetSettings200Response</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>SetSettings200Response</code>.
     */
    static validateJSON(data) {
        // check to make sure all required properties are present in the JSON string
        for (const property of SetSettings200Response.RequiredProperties) {
            if (!data[property]) {
                throw new Error("The required field `" + property + "` is not found in the JSON data: " + JSON.stringify(data));
            }
        }
        // ensure the json data is a string
        if (data['webhookUrl'] && !(typeof data['webhookUrl'] === 'string' || data['webhookUrl'] instanceof String)) {
            throw new Error("Expected the field `webhookUrl` to be a primitive type in the JSON string but got " + data['webhookUrl']);
        }
        // validate the optional field `update`
        if (data['update']) { // data not null
          SetSettings200ResponseAllOfUpdate.validateJSON(data['update']);
        }

        return true;
    }


}

SetSettings200Response.RequiredProperties = ["update"];

/**
 * @member {String} webhookUrl
 */
SetSettings200Response.prototype['webhookUrl'] = undefined;

/**
 * @member {module:model/SetSettings200ResponseAllOfUpdate} update
 */
SetSettings200Response.prototype['update'] = undefined;


// Implement Settings interface:
/**
 * @member {String} webhookUrl
 */
Settings.prototype['webhookUrl'] = undefined;




export default SetSettings200Response;

