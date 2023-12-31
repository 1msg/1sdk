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


import ApiClient from "../ApiClient";
import ChannelExtendedStatistics from '../model/ChannelExtendedStatistics';
import ChannelStatistics from '../model/ChannelStatistics';
import ChannelStatus from '../model/ChannelStatus';
import GetCommerce from '../model/GetCommerce';
import GetIP from '../model/GetIP';
import GetMe from '../model/GetMe';
import GetMe401Response from '../model/GetMe401Response';
import SetMe from '../model/SetMe';
import SetMeRequest from '../model/SetMeRequest';
import SetSettings200Response from '../model/SetSettings200Response';
import Settings from '../model/Settings';

/**
* Channel service.
* @module api/ChannelApi
* @version 2.39.0
*/
export default class ChannelApi {

    /**
    * Constructs a new ChannelApi. 
    * @alias module:api/ChannelApi
    * @class
    * @param {module:ApiClient} [apiClient] Optional API client implementation to use,
    * default to {@link module:ApiClient#instance} if unspecified.
    */
    constructor(apiClient) {
        this.apiClient = apiClient || ApiClient.instance;
    }



    /**
     * Get Commerce Settings
     * **is_catalog_visible** - Set to true to show catalog storefront icon or false to hide it. **is_cart_enabled** - Set to true to enable cart or false to disable it.
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/GetCommerce} and HTTP response
     */
    getCommerceWithHttpInfo() {
      let postBody = null;

      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['token'];
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = GetCommerce;
      return this.apiClient.callApi(
        '/commerce', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null
      );
    }

    /**
     * Get Commerce Settings
     * **is_catalog_visible** - Set to true to show catalog storefront icon or false to hide it. **is_cart_enabled** - Set to true to enable cart or false to disable it.
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/GetCommerce}
     */
    getCommerce() {
      return this.getCommerceWithHttpInfo()
        .then(function(response_and_data) {
          return response_and_data.data;
        });
    }


    /**
     * Get Extended Channel statistics
     * Get channel usage extended statistics
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/ChannelExtendedStatistics} and HTTP response
     */
    getExtendedStatisticsWithHttpInfo() {
      let postBody = null;

      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['token'];
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = ChannelExtendedStatistics;
      return this.apiClient.callApi(
        '/extendedStatistics', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null
      );
    }

    /**
     * Get Extended Channel statistics
     * Get channel usage extended statistics
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/ChannelExtendedStatistics}
     */
    getExtendedStatistics() {
      return this.getExtendedStatisticsWithHttpInfo()
        .then(function(response_and_data) {
          return response_and_data.data;
        });
    }


    /**
     * Get Profile Info
     * Use this edge to retrieve your profile's About info
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/GetMe} and HTTP response
     */
    getMeWithHttpInfo() {
      let postBody = null;

      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['token'];
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = GetMe;
      return this.apiClient.callApi(
        '/me', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null
      );
    }

    /**
     * Get Profile Info
     * Use this edge to retrieve your profile's About info
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/GetMe}
     */
    getMe() {
      return this.getMeWithHttpInfo()
        .then(function(response_and_data) {
          return response_and_data.data;
        });
    }


    /**
     * Get Settings
     * **webhookUrl** - Http or https URL for receiving notifications.
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/Settings} and HTTP response
     */
    getSettingsWithHttpInfo() {
      let postBody = null;

      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['token'];
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = Settings;
      return this.apiClient.callApi(
        '/settings', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null
      );
    }

    /**
     * Get Settings
     * **webhookUrl** - Http or https URL for receiving notifications.
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/Settings}
     */
    getSettings() {
      return this.getSettingsWithHttpInfo()
        .then(function(response_and_data) {
          return response_and_data.data;
        });
    }


    /**
     * Get Channel statistics
     * Get channel usage statistics
     * @param {Object} opts Optional parameters
     * @param {String} [date] Month and year in format mm.YYYY.
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/ChannelStatistics} and HTTP response
     */
    getStatisticsWithHttpInfo(opts) {
      opts = opts || {};
      let postBody = null;

      let pathParams = {
      };
      let queryParams = {
        'date': opts['date']
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['token'];
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = ChannelStatistics;
      return this.apiClient.callApi(
        '/statistics', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null
      );
    }

    /**
     * Get Channel statistics
     * Get channel usage statistics
     * @param {Object} opts Optional parameters
     * @param {String} opts.date Month and year in format mm.YYYY.
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/ChannelStatistics}
     */
    getStatistics(opts) {
      return this.getStatisticsWithHttpInfo(opts)
        .then(function(response_and_data) {
          return response_and_data.data;
        });
    }


    /**
     *  Get Status
     * Returns the status of your WhatsApp Business API client. Channel statuses:  **connected**_/_**connecting** - everything is ok.  **disconnected** - The Coreapp is not connected to the WhatsApp servers.  **uninitialized** - The application could be in the process of upgrading or initializing the database schema. Try again in a few minutes and contact Support if you continue to see this status.  **unregistered** - You need to register your WhatsApp Business API client. Either you have been blocked and need to take some action (contact Support)
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/ChannelStatus} and HTTP response
     */
    getStatusWithHttpInfo() {
      let postBody = null;

      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['token'];
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = ChannelStatus;
      return this.apiClient.callApi(
        '/status', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null
      );
    }

    /**
     *  Get Status
     * Returns the status of your WhatsApp Business API client. Channel statuses:  **connected**_/_**connecting** - everything is ok.  **disconnected** - The Coreapp is not connected to the WhatsApp servers.  **uninitialized** - The application could be in the process of upgrading or initializing the database schema. Try again in a few minutes and contact Support if you continue to see this status.  **unregistered** - You need to register your WhatsApp Business API client. Either you have been blocked and need to take some action (contact Support)
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/ChannelStatus}
     */
    getStatus() {
      return this.getStatusWithHttpInfo()
        .then(function(response_and_data) {
          return response_and_data.data;
        });
    }


    /**
     * Get channel server IP
     * 
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/GetIP} and HTTP response
     */
    outputIPWithHttpInfo() {
      let postBody = null;

      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['token'];
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = GetIP;
      return this.apiClient.callApi(
        '/outputIP', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null
      );
    }

    /**
     * Get channel server IP
     * 
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/GetIP}
     */
    outputIP() {
      return this.outputIPWithHttpInfo()
        .then(function(response_and_data) {
          return response_and_data.data;
        });
    }


    /**
     * Change user info
     * Change user info
     * @param {module:model/SetMeRequest} setMeRequest 
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/SetMe} and HTTP response
     */
    setMeWithHttpInfo(setMeRequest) {
      let postBody = setMeRequest;
      // verify the required parameter 'setMeRequest' is set
      if (setMeRequest === undefined || setMeRequest === null) {
        throw new Error("Missing the required parameter 'setMeRequest' when calling setMe");
      }

      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['token'];
      let contentTypes = ['application/x-www-form-urlencoded', 'application/json'];
      let accepts = ['application/json'];
      let returnType = SetMe;
      return this.apiClient.callApi(
        '/me', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null
      );
    }

    /**
     * Change user info
     * Change user info
     * @param {module:model/SetMeRequest} setMeRequest 
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/SetMe}
     */
    setMe(setMeRequest) {
      return this.setMeWithHttpInfo(setMeRequest)
        .then(function(response_and_data) {
          return response_and_data.data;
        });
    }


    /**
     * Set settings
     * **webhookUrl** - Http or https URL for receiving notifications.
     * @param {module:model/Settings} settings 
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with an object containing data of type {@link module:model/SetSettings200Response} and HTTP response
     */
    setSettingsWithHttpInfo(settings) {
      let postBody = settings;
      // verify the required parameter 'settings' is set
      if (settings === undefined || settings === null) {
        throw new Error("Missing the required parameter 'settings' when calling setSettings");
      }

      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['token'];
      let contentTypes = ['application/json', 'application/x-www-form-urlencoded'];
      let accepts = ['application/json'];
      let returnType = SetSettings200Response;
      return this.apiClient.callApi(
        '/settings', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null
      );
    }

    /**
     * Set settings
     * **webhookUrl** - Http or https URL for receiving notifications.
     * @param {module:model/Settings} settings 
     * @return {Promise} a {@link https://www.promisejs.org/|Promise}, with data of type {@link module:model/SetSettings200Response}
     */
    setSettings(settings) {
      return this.setSettingsWithHttpInfo(settings)
        .then(function(response_and_data) {
          return response_and_data.data;
        });
    }


}
