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
import ChatIdProp from './ChatIdProp';
import PhoneProp from './PhoneProp';

/**
 * The SendMessageRequest model module.
 * @module model/SendMessageRequest
 * @version 2.39.0
 */
class SendMessageRequest {
    /**
     * Constructs a new <code>SendMessageRequest</code>.
     * @alias module:model/SendMessageRequest
     * @implements module:model/ChatIdProp
     * @implements module:model/PhoneProp
     * @param body {String} Message text, UTF-8 or UTF-16 string with emoji 🍏. Can be used with mentionedPhones, example: this text for @556123122026
     */
    constructor(body) { 
        ChatIdProp.initialize(this);PhoneProp.initialize(this);
        SendMessageRequest.initialize(this, body);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, body) { 
        obj['body'] = body;
    }

    /**
     * Constructs a <code>SendMessageRequest</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/SendMessageRequest} obj Optional instance to populate.
     * @return {module:model/SendMessageRequest} The populated <code>SendMessageRequest</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new SendMessageRequest();
            ChatIdProp.constructFromObject(data, obj);
            PhoneProp.constructFromObject(data, obj);

            if (data.hasOwnProperty('chatId')) {
                obj['chatId'] = ApiClient.convertToType(data['chatId'], 'String');
            }
            if (data.hasOwnProperty('phone')) {
                obj['phone'] = ApiClient.convertToType(data['phone'], 'Number');
            }
            if (data.hasOwnProperty('body')) {
                obj['body'] = ApiClient.convertToType(data['body'], 'String');
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>SendMessageRequest</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>SendMessageRequest</code>.
     */
    static validateJSON(data) {
        // check to make sure all required properties are present in the JSON string
        for (const property of SendMessageRequest.RequiredProperties) {
            if (!data[property]) {
                throw new Error("The required field `" + property + "` is not found in the JSON data: " + JSON.stringify(data));
            }
        }
        // ensure the json data is a string
        if (data['chatId'] && !(typeof data['chatId'] === 'string' || data['chatId'] instanceof String)) {
            throw new Error("Expected the field `chatId` to be a primitive type in the JSON string but got " + data['chatId']);
        }
        // ensure the json data is a string
        if (data['body'] && !(typeof data['body'] === 'string' || data['body'] instanceof String)) {
            throw new Error("Expected the field `body` to be a primitive type in the JSON string but got " + data['body']);
        }

        return true;
    }


}

SendMessageRequest.RequiredProperties = ["body"];

/**
 * **Required if phone is not set**  Chat ID from the message list. Examples: 12020721369@c.us . Used instead of the phone parameter.
 * @member {String} chatId
 */
SendMessageRequest.prototype['chatId'] = undefined;

/**
 * **Required if chatId is not set**  A phone number starting with the country code. You do not need to add your number.   USA example: 12020721369.
 * @member {Number} phone
 */
SendMessageRequest.prototype['phone'] = undefined;

/**
 * Message text, UTF-8 or UTF-16 string with emoji 🍏. Can be used with mentionedPhones, example: this text for @556123122026
 * @member {String} body
 */
SendMessageRequest.prototype['body'] = undefined;


// Implement ChatIdProp interface:
/**
 * **Required if phone is not set**  Chat ID from the message list. Examples: 12020721369@c.us . Used instead of the phone parameter.
 * @member {String} chatId
 */
ChatIdProp.prototype['chatId'] = undefined;
// Implement PhoneProp interface:
/**
 * **Required if chatId is not set**  A phone number starting with the country code. You do not need to add your number.   USA example: 12020721369.
 * @member {Number} phone
 */
PhoneProp.prototype['phone'] = undefined;




export default SendMessageRequest;

