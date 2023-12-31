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
import SendTemplateRequestAllOfLanguage from './SendTemplateRequestAllOfLanguage';
import SendTemplateRequestAllOfParams from './SendTemplateRequestAllOfParams';
import TemplateNamespaceField from './TemplateNamespaceField';

/**
 * The SendTemplateRequest model module.
 * @module model/SendTemplateRequest
 * @version 2.39.0
 */
class SendTemplateRequest {
    /**
     * Constructs a new <code>SendTemplateRequest</code>.
     * @alias module:model/SendTemplateRequest
     * @implements module:model/TemplateNamespaceField
     * @implements module:model/ChatIdProp
     * @implements module:model/PhoneProp
     * @param namespace {String} Can be found by method /templates
     * @param template {String} Name of template
     * @param language {module:model/SendTemplateRequestAllOfLanguage} 
     */
    constructor(namespace, template, language) { 
        TemplateNamespaceField.initialize(this);ChatIdProp.initialize(this);PhoneProp.initialize(this);
        SendTemplateRequest.initialize(this, namespace, template, language);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, namespace, template, language) { 
        obj['namespace'] = namespace;
        obj['template'] = template;
        obj['language'] = language;
    }

    /**
     * Constructs a <code>SendTemplateRequest</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/SendTemplateRequest} obj Optional instance to populate.
     * @return {module:model/SendTemplateRequest} The populated <code>SendTemplateRequest</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new SendTemplateRequest();
            TemplateNamespaceField.constructFromObject(data, obj);
            ChatIdProp.constructFromObject(data, obj);
            PhoneProp.constructFromObject(data, obj);

            if (data.hasOwnProperty('namespace')) {
                obj['namespace'] = ApiClient.convertToType(data['namespace'], 'String');
            }
            if (data.hasOwnProperty('chatId')) {
                obj['chatId'] = ApiClient.convertToType(data['chatId'], 'String');
            }
            if (data.hasOwnProperty('phone')) {
                obj['phone'] = ApiClient.convertToType(data['phone'], 'Number');
            }
            if (data.hasOwnProperty('template')) {
                obj['template'] = ApiClient.convertToType(data['template'], 'String');
            }
            if (data.hasOwnProperty('language')) {
                obj['language'] = SendTemplateRequestAllOfLanguage.constructFromObject(data['language']);
            }
            if (data.hasOwnProperty('params')) {
                obj['params'] = ApiClient.convertToType(data['params'], [SendTemplateRequestAllOfParams]);
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>SendTemplateRequest</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>SendTemplateRequest</code>.
     */
    static validateJSON(data) {
        // check to make sure all required properties are present in the JSON string
        for (const property of SendTemplateRequest.RequiredProperties) {
            if (!data[property]) {
                throw new Error("The required field `" + property + "` is not found in the JSON data: " + JSON.stringify(data));
            }
        }
        // ensure the json data is a string
        if (data['namespace'] && !(typeof data['namespace'] === 'string' || data['namespace'] instanceof String)) {
            throw new Error("Expected the field `namespace` to be a primitive type in the JSON string but got " + data['namespace']);
        }
        // ensure the json data is a string
        if (data['chatId'] && !(typeof data['chatId'] === 'string' || data['chatId'] instanceof String)) {
            throw new Error("Expected the field `chatId` to be a primitive type in the JSON string but got " + data['chatId']);
        }
        // ensure the json data is a string
        if (data['template'] && !(typeof data['template'] === 'string' || data['template'] instanceof String)) {
            throw new Error("Expected the field `template` to be a primitive type in the JSON string but got " + data['template']);
        }
        // validate the optional field `language`
        if (data['language']) { // data not null
          SendTemplateRequestAllOfLanguage.validateJSON(data['language']);
        }
        if (data['params']) { // data not null
            // ensure the json data is an array
            if (!Array.isArray(data['params'])) {
                throw new Error("Expected the field `params` to be an array in the JSON data but got " + data['params']);
            }
            // validate the optional field `params` (array)
            for (const item of data['params']) {
                SendTemplateRequestAllOfParams.validateJSON(item);
            };
        }

        return true;
    }


}

SendTemplateRequest.RequiredProperties = ["namespace", "template", "language"];

/**
 * Can be found by method /templates
 * @member {String} namespace
 */
SendTemplateRequest.prototype['namespace'] = undefined;

/**
 * **Required if phone is not set**  Chat ID from the message list. Examples: 12020721369@c.us . Used instead of the phone parameter.
 * @member {String} chatId
 */
SendTemplateRequest.prototype['chatId'] = undefined;

/**
 * **Required if chatId is not set**  A phone number starting with the country code. You do not need to add your number.   USA example: 12020721369.
 * @member {Number} phone
 */
SendTemplateRequest.prototype['phone'] = undefined;

/**
 * Name of template
 * @member {String} template
 */
SendTemplateRequest.prototype['template'] = undefined;

/**
 * @member {module:model/SendTemplateRequestAllOfLanguage} language
 */
SendTemplateRequest.prototype['language'] = undefined;

/**
 * Array of localizable parameters to be substituted into the template. Each parameter is object contains the following field:  **type** - section of parameters - header, body, footer, button  **parameters** - variables for section.  Each variable is an object that can contain the following fields:  **type** - can be text, currency, date_time, image, document or video  **video**- id (mediaId)  **document**   * id (mediaId)  * filename(optional)  **image** - object with field link (image url)  **currency** - object containing parameters currency_code and amount_1000.  * *currency_code* - Currency code as defined in ISO 4217.  * *amount_1000* - Amount multiplied by 1000.  * *fallback_value* - Default text if localization fails.  **date_time** - If the date_time object is used, further definition of the date and time is required.  * *component* - The time is assembled from components (i.e., day of the week, month, hour, etc.) The time specified will be the same, regardless of the time zone the client is in.  * *unix_epoch* - The time to be displayed is dependent on the time zone the client is in.  * *fallback_value* - Default text if localization fails.  **button** - if button has parameter   * sub_type (url/quick_reply)  * parameters (array to fill button variable)  * index - button position.  **The number of parameters passed must match the number of parameters in the template**
 * @member {Array.<module:model/SendTemplateRequestAllOfParams>} params
 */
SendTemplateRequest.prototype['params'] = undefined;


// Implement TemplateNamespaceField interface:
/**
 * @member {String} namespace
 */
TemplateNamespaceField.prototype['namespace'] = undefined;
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




export default SendTemplateRequest;

