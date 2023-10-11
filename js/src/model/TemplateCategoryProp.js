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
/**
* Enum class TemplateCategoryProp.
* @enum {}
* @readonly
*/
export default class TemplateCategoryProp {
    
        /**
         * value: "MARKETING"
         * @const
         */
        "MARKETING" = "MARKETING";

    
        /**
         * value: "TRANSACTIONAL"
         * @const
         */
        "TRANSACTIONAL" = "TRANSACTIONAL";

    
        /**
         * value: "OTP"
         * @const
         */
        "OTP" = "OTP";

    

    /**
    * Returns a <code>TemplateCategoryProp</code> enum value from a Javascript object name.
    * @param {Object} data The plain JavaScript object containing the name of the enum value.
    * @return {module:model/TemplateCategoryProp} The enum <code>TemplateCategoryProp</code> value.
    */
    static constructFromObject(object) {
        return object;
    }
}

