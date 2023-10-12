/*
 * one_msg_waba_sdk
 * [1MSG.IO](https://1msg.io/) is the perfect WhatsApp management tool for your business. With us you get full access to the official Whatsapp API/webhooks.  Every API request must contain an Authorize HTTP header with a token.  This is your channel token, which can be found in your channel project on your profile page. Please do not give the token to anyone or post it publicly.  The authorization token must be added to each request in the GET parameter 'token' and always passed to query string (?token={your_token}). Parameters in GET queries pass query string. Parameters in POST requests — through the JSON-encoded request body.   All 'send' methods (except /sendTemplate) will only work when the dialog session with the user is open. Some of our solutions simplify and avoid such limitations, but we urge you to pay more attention to this detail
 *
 * The version of the OpenAPI document: 2.39.0
 * Contact: hello@1msg.io
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package org.openapitools.client.api;

import org.openapitools.client.ApiException;
import org.openapitools.client.model.ChannelExtendedStatistics;
import org.openapitools.client.model.ChannelStatistics;
import org.openapitools.client.model.ChannelStatus;
import org.openapitools.client.model.GetCommerce;
import org.openapitools.client.model.GetIP;
import org.openapitools.client.model.GetMe;
import org.openapitools.client.model.GetMe401Response;
import org.openapitools.client.model.SetMe;
import org.openapitools.client.model.SetMeRequest;
import org.openapitools.client.model.SetSettings200Response;
import org.openapitools.client.model.Settings;
import org.junit.jupiter.api.Disabled;
import org.junit.jupiter.api.Test;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * API tests for ChannelApi
 */
@Disabled
public class ChannelApiTest {

    private final ChannelApi api = new ChannelApi();

    /**
     * Get Commerce Settings
     *
     * **is_catalog_visible** - Set to true to show catalog storefront icon or false to hide it. **is_cart_enabled** - Set to true to enable cart or false to disable it.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void getCommerceTest() throws ApiException {
        GetCommerce response = api.getCommerce();
        // TODO: test validations
    }

    /**
     * Get Extended Channel statistics
     *
     * Get channel usage extended statistics
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void getExtendedStatisticsTest() throws ApiException {
        ChannelExtendedStatistics response = api.getExtendedStatistics();
        // TODO: test validations
    }

    /**
     * Get Profile Info
     *
     * Use this edge to retrieve your profile&#39;s About info
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void getMeTest() throws ApiException {
        GetMe response = api.getMe();
        // TODO: test validations
    }

    /**
     * Get Settings
     *
     * **webhookUrl** - Http or https URL for receiving notifications.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void getSettingsTest() throws ApiException {
        Settings response = api.getSettings();
        // TODO: test validations
    }

    /**
     * Get Channel statistics
     *
     * Get channel usage statistics
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void getStatisticsTest() throws ApiException {
        String date = null;
        ChannelStatistics response = api.getStatistics(date);
        // TODO: test validations
    }

    /**
     *  Get Status
     *
     * Returns the status of your WhatsApp Business API client. Channel statuses:  **connected**_/_**connecting** - everything is ok.  **disconnected** - The Coreapp is not connected to the WhatsApp servers.  **uninitialized** - The application could be in the process of upgrading or initializing the database schema. Try again in a few minutes and contact Support if you continue to see this status.  **unregistered** - You need to register your WhatsApp Business API client. Either you have been blocked and need to take some action (contact Support)
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void getStatusTest() throws ApiException {
        ChannelStatus response = api.getStatus();
        // TODO: test validations
    }

    /**
     * Get channel server IP
     *
     * 
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void outputIPTest() throws ApiException {
        GetIP response = api.outputIP();
        // TODO: test validations
    }

    /**
     * Change user info
     *
     * Change user info
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void setMeTest() throws ApiException {
        SetMeRequest setMeRequest = null;
        SetMe response = api.setMe(setMeRequest);
        // TODO: test validations
    }

    /**
     * Set settings
     *
     * **webhookUrl** - Http or https URL for receiving notifications.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void setSettingsTest() throws ApiException {
        Settings settings = null;
        SetSettings200Response response = api.setSettings(settings);
        // TODO: test validations
    }

}