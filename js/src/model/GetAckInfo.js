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
import GetAckInfoHooksInner from './GetAckInfoHooksInner';

/**
 * The GetAckInfo model module.
 * @module model/GetAckInfo
 * @version 2.39.0
 */
class GetAckInfo {
    /**
     * Constructs a new <code>GetAckInfo</code>.
     * @alias module:model/GetAckInfo
     */
    constructor() { 
        
        GetAckInfo.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>GetAckInfo</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/GetAckInfo} obj Optional instance to populate.
     * @return {module:model/GetAckInfo} The populated <code>GetAckInfo</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new GetAckInfo();

            if (data.hasOwnProperty('hooks')) {
                obj['hooks'] = ApiClient.convertToType(data['hooks'], [GetAckInfoHooksInner]);
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>GetAckInfo</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>GetAckInfo</code>.
     */
    static validateJSON(data) {
        if (data['hooks']) { // data not null
            // ensure the json data is an array
            if (!Array.isArray(data['hooks'])) {
                throw new Error("Expected the field `hooks` to be an array in the JSON data but got " + data['hooks']);
            }
            // validate the optional field `hooks` (array)
            for (const item of data['hooks']) {
                GetAckInfoHooksInner.validateJSON(item);
            };
        }

        return true;
    }


}



/**
 * @member {Array.<module:model/GetAckInfoHooksInner>} hooks
 */
GetAckInfo.prototype['hooks'] = undefined;






export default GetAckInfo;

