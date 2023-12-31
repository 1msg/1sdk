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
 * The CommerceParams model module.
 * @module model/CommerceParams
 * @version 2.39.0
 */
class CommerceParams {
    /**
     * Constructs a new <code>CommerceParams</code>.
     * @alias module:model/CommerceParams
     * @param isCartEnabled {Boolean} 
     * @param isCatalogVisible {Boolean} 
     */
    constructor(isCartEnabled, isCatalogVisible) { 
        
        CommerceParams.initialize(this, isCartEnabled, isCatalogVisible);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, isCartEnabled, isCatalogVisible) { 
        obj['is_cart_enabled'] = isCartEnabled;
        obj['is_catalog_visible'] = isCatalogVisible;
    }

    /**
     * Constructs a <code>CommerceParams</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/CommerceParams} obj Optional instance to populate.
     * @return {module:model/CommerceParams} The populated <code>CommerceParams</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new CommerceParams();

            if (data.hasOwnProperty('is_cart_enabled')) {
                obj['is_cart_enabled'] = ApiClient.convertToType(data['is_cart_enabled'], 'Boolean');
            }
            if (data.hasOwnProperty('is_catalog_visible')) {
                obj['is_catalog_visible'] = ApiClient.convertToType(data['is_catalog_visible'], 'Boolean');
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>CommerceParams</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>CommerceParams</code>.
     */
    static validateJSON(data) {
        // check to make sure all required properties are present in the JSON string
        for (const property of CommerceParams.RequiredProperties) {
            if (!data[property]) {
                throw new Error("The required field `" + property + "` is not found in the JSON data: " + JSON.stringify(data));
            }
        }

        return true;
    }


}

CommerceParams.RequiredProperties = ["is_cart_enabled", "is_catalog_visible"];

/**
 * @member {Boolean} is_cart_enabled
 */
CommerceParams.prototype['is_cart_enabled'] = undefined;

/**
 * @member {Boolean} is_catalog_visible
 */
CommerceParams.prototype['is_catalog_visible'] = undefined;






export default CommerceParams;

