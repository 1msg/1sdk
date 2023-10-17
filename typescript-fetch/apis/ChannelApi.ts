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


import * as runtime from '../runtime';
import type {
  ChannelExtendedStatisticsInner,
  ChannelStatistics,
  ChannelStatus,
  GetCommerceInner,
  GetIP,
  GetMe,
  GetMe401Response,
  SetMe,
  SetMeRequest,
  SetSettings200Response,
  Settings,
} from '../models/index';
import {
    ChannelExtendedStatisticsInnerFromJSON,
    ChannelExtendedStatisticsInnerToJSON,
    ChannelStatisticsFromJSON,
    ChannelStatisticsToJSON,
    ChannelStatusFromJSON,
    ChannelStatusToJSON,
    GetCommerceInnerFromJSON,
    GetCommerceInnerToJSON,
    GetIPFromJSON,
    GetIPToJSON,
    GetMeFromJSON,
    GetMeToJSON,
    GetMe401ResponseFromJSON,
    GetMe401ResponseToJSON,
    SetMeFromJSON,
    SetMeToJSON,
    SetMeRequestFromJSON,
    SetMeRequestToJSON,
    SetSettings200ResponseFromJSON,
    SetSettings200ResponseToJSON,
    SettingsFromJSON,
    SettingsToJSON,
} from '../models/index';

export interface GetStatisticsRequest {
    date?: string;
}

export interface SetMeOperationRequest {
    setMeRequest: SetMeRequest;
}

export interface SetSettingsRequest {
    settings: Settings;
}

/**
 * 
 */
export class ChannelApi extends runtime.BaseAPI {

    /**
     * **is_catalog_visible** - Set to true to show catalog storefront icon or false to hide it. **is_cart_enabled** - Set to true to enable cart or false to disable it.
     * Get Commerce Settings
     */
    async getCommerceRaw(initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<Array<GetCommerceInner>>> {
        const queryParameters: any = {};

        const headerParameters: runtime.HTTPHeaders = {};

        if (this.configuration && this.configuration.apiKey) {
            queryParameters["token"] = this.configuration.apiKey("token"); // token authentication
        }

        const response = await this.request({
            path: `/commerce`,
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => jsonValue.map(GetCommerceInnerFromJSON));
    }

    /**
     * **is_catalog_visible** - Set to true to show catalog storefront icon or false to hide it. **is_cart_enabled** - Set to true to enable cart or false to disable it.
     * Get Commerce Settings
     */
    async getCommerce(initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<Array<GetCommerceInner>> {
        const response = await this.getCommerceRaw(initOverrides);
        return await response.value();
    }

    /**
     * Get channel usage extended statistics
     * Get Extended Channel statistics
     */
    async getExtendedStatisticsRaw(initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<Array<ChannelExtendedStatisticsInner>>> {
        const queryParameters: any = {};

        const headerParameters: runtime.HTTPHeaders = {};

        if (this.configuration && this.configuration.apiKey) {
            queryParameters["token"] = this.configuration.apiKey("token"); // token authentication
        }

        const response = await this.request({
            path: `/extendedStatistics`,
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => jsonValue.map(ChannelExtendedStatisticsInnerFromJSON));
    }

    /**
     * Get channel usage extended statistics
     * Get Extended Channel statistics
     */
    async getExtendedStatistics(initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<Array<ChannelExtendedStatisticsInner>> {
        const response = await this.getExtendedStatisticsRaw(initOverrides);
        return await response.value();
    }

    /**
     * Use this edge to retrieve your profile\'s About info
     * Get Profile Info
     */
    async getMeRaw(initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<GetMe>> {
        const queryParameters: any = {};

        const headerParameters: runtime.HTTPHeaders = {};

        if (this.configuration && this.configuration.apiKey) {
            queryParameters["token"] = this.configuration.apiKey("token"); // token authentication
        }

        const response = await this.request({
            path: `/me`,
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => GetMeFromJSON(jsonValue));
    }

    /**
     * Use this edge to retrieve your profile\'s About info
     * Get Profile Info
     */
    async getMe(initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<GetMe> {
        const response = await this.getMeRaw(initOverrides);
        return await response.value();
    }

    /**
     * **webhookUrl** - Http or https URL for receiving notifications.
     * Get Settings
     */
    async getSettingsRaw(initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<Settings>> {
        const queryParameters: any = {};

        const headerParameters: runtime.HTTPHeaders = {};

        if (this.configuration && this.configuration.apiKey) {
            queryParameters["token"] = this.configuration.apiKey("token"); // token authentication
        }

        const response = await this.request({
            path: `/settings`,
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => SettingsFromJSON(jsonValue));
    }

    /**
     * **webhookUrl** - Http or https URL for receiving notifications.
     * Get Settings
     */
    async getSettings(initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<Settings> {
        const response = await this.getSettingsRaw(initOverrides);
        return await response.value();
    }

    /**
     * Get channel usage statistics
     * Get Channel statistics
     */
    async getStatisticsRaw(requestParameters: GetStatisticsRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<ChannelStatistics>> {
        const queryParameters: any = {};

        if (requestParameters.date !== undefined) {
            queryParameters['date'] = requestParameters.date;
        }

        const headerParameters: runtime.HTTPHeaders = {};

        if (this.configuration && this.configuration.apiKey) {
            queryParameters["token"] = this.configuration.apiKey("token"); // token authentication
        }

        const response = await this.request({
            path: `/statistics`,
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => ChannelStatisticsFromJSON(jsonValue));
    }

    /**
     * Get channel usage statistics
     * Get Channel statistics
     */
    async getStatistics(requestParameters: GetStatisticsRequest = {}, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<ChannelStatistics> {
        const response = await this.getStatisticsRaw(requestParameters, initOverrides);
        return await response.value();
    }

    /**
     * Returns the status of your WhatsApp Business API client. Channel statuses:  **connected**_/_**connecting** - everything is ok.  **disconnected** - The Coreapp is not connected to the WhatsApp servers.  **uninitialized** - The application could be in the process of upgrading or initializing the database schema. Try again in a few minutes and contact Support if you continue to see this status.  **unregistered** - You need to register your WhatsApp Business API client. Either you have been blocked and need to take some action (contact Support)
     *  Get Status
     */
    async getStatusRaw(initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<ChannelStatus>> {
        const queryParameters: any = {};

        const headerParameters: runtime.HTTPHeaders = {};

        if (this.configuration && this.configuration.apiKey) {
            queryParameters["token"] = this.configuration.apiKey("token"); // token authentication
        }

        const response = await this.request({
            path: `/status`,
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => ChannelStatusFromJSON(jsonValue));
    }

    /**
     * Returns the status of your WhatsApp Business API client. Channel statuses:  **connected**_/_**connecting** - everything is ok.  **disconnected** - The Coreapp is not connected to the WhatsApp servers.  **uninitialized** - The application could be in the process of upgrading or initializing the database schema. Try again in a few minutes and contact Support if you continue to see this status.  **unregistered** - You need to register your WhatsApp Business API client. Either you have been blocked and need to take some action (contact Support)
     *  Get Status
     */
    async getStatus(initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<ChannelStatus> {
        const response = await this.getStatusRaw(initOverrides);
        return await response.value();
    }

    /**
     * 
     * Get channel server IP
     */
    async outputIPRaw(initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<GetIP>> {
        const queryParameters: any = {};

        const headerParameters: runtime.HTTPHeaders = {};

        if (this.configuration && this.configuration.apiKey) {
            queryParameters["token"] = this.configuration.apiKey("token"); // token authentication
        }

        const response = await this.request({
            path: `/outputIP`,
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => GetIPFromJSON(jsonValue));
    }

    /**
     * 
     * Get channel server IP
     */
    async outputIP(initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<GetIP> {
        const response = await this.outputIPRaw(initOverrides);
        return await response.value();
    }

    /**
     * Change user info
     * Change user info
     */
    async setMeRaw(requestParameters: SetMeOperationRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<SetMe>> {
        if (requestParameters.setMeRequest === null || requestParameters.setMeRequest === undefined) {
            throw new runtime.RequiredError('setMeRequest','Required parameter requestParameters.setMeRequest was null or undefined when calling setMe.');
        }

        const queryParameters: any = {};

        const headerParameters: runtime.HTTPHeaders = {};

        headerParameters['Content-Type'] = 'application/x-www-form-urlencoded';

        if (this.configuration && this.configuration.apiKey) {
            queryParameters["token"] = this.configuration.apiKey("token"); // token authentication
        }

        const response = await this.request({
            path: `/me`,
            method: 'POST',
            headers: headerParameters,
            query: queryParameters,
            body: SetMeRequestToJSON(requestParameters.setMeRequest),
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => SetMeFromJSON(jsonValue));
    }

    /**
     * Change user info
     * Change user info
     */
    async setMe(requestParameters: SetMeOperationRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<SetMe> {
        const response = await this.setMeRaw(requestParameters, initOverrides);
        return await response.value();
    }

    /**
     * **webhookUrl** - Http or https URL for receiving notifications.
     * Set settings
     */
    async setSettingsRaw(requestParameters: SetSettingsRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<SetSettings200Response>> {
        if (requestParameters.settings === null || requestParameters.settings === undefined) {
            throw new runtime.RequiredError('settings','Required parameter requestParameters.settings was null or undefined when calling setSettings.');
        }

        const queryParameters: any = {};

        const headerParameters: runtime.HTTPHeaders = {};

        headerParameters['Content-Type'] = 'application/json';

        if (this.configuration && this.configuration.apiKey) {
            queryParameters["token"] = this.configuration.apiKey("token"); // token authentication
        }

        const response = await this.request({
            path: `/settings`,
            method: 'POST',
            headers: headerParameters,
            query: queryParameters,
            body: SettingsToJSON(requestParameters.settings),
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => SetSettings200ResponseFromJSON(jsonValue));
    }

    /**
     * **webhookUrl** - Http or https URL for receiving notifications.
     * Set settings
     */
    async setSettings(requestParameters: SetSettingsRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<SetSettings200Response> {
        const response = await this.setSettingsRaw(requestParameters, initOverrides);
        return await response.value();
    }

}
