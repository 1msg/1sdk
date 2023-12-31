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
import ContactsContactsInner from './ContactsContactsInner';

/**
 * The Contacts model module.
 * @module model/Contacts
 * @version 2.39.0
 */
class Contacts {
    /**
     * Constructs a new <code>Contacts</code>.
     * @alias module:model/Contacts
     */
    constructor() { 
        
        Contacts.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>Contacts</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/Contacts} obj Optional instance to populate.
     * @return {module:model/Contacts} The populated <code>Contacts</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new Contacts();

            if (data.hasOwnProperty('contacts')) {
                obj['contacts'] = ApiClient.convertToType(data['contacts'], [ContactsContactsInner]);
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>Contacts</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>Contacts</code>.
     */
    static validateJSON(data) {
        if (data['contacts']) { // data not null
            // ensure the json data is an array
            if (!Array.isArray(data['contacts'])) {
                throw new Error("Expected the field `contacts` to be an array in the JSON data but got " + data['contacts']);
            }
            // validate the optional field `contacts` (array)
            for (const item of data['contacts']) {
                ContactsContactsInner.validateJSON(item);
            };
        }

        return true;
    }


}



/**
 * List of checked numbers
 * @member {Array.<module:model/ContactsContactsInner>} contacts
 */
Contacts.prototype['contacts'] = undefined;






export default Contacts;

