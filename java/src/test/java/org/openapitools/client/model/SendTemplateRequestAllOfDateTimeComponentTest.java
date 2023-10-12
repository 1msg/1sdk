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


package org.openapitools.client.model;

import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import java.io.IOException;
import java.util.Arrays;
import org.junit.jupiter.api.Disabled;
import org.junit.jupiter.api.Test;

/**
 * Model tests for SendTemplateRequestAllOfDateTimeComponent
 */
public class SendTemplateRequestAllOfDateTimeComponentTest {
    private final SendTemplateRequestAllOfDateTimeComponent model = new SendTemplateRequestAllOfDateTimeComponent();

    /**
     * Model tests for SendTemplateRequestAllOfDateTimeComponent
     */
    @Test
    public void testSendTemplateRequestAllOfDateTimeComponent() {
        // TODO: test SendTemplateRequestAllOfDateTimeComponent
    }

    /**
     * Test the property 'dayOfWeek'
     */
    @Test
    public void dayOfWeekTest() {
        // TODO: test dayOfWeek
    }

    /**
     * Test the property 'year'
     */
    @Test
    public void yearTest() {
        // TODO: test year
    }

    /**
     * Test the property 'month'
     */
    @Test
    public void monthTest() {
        // TODO: test month
    }

    /**
     * Test the property 'dayOfMonth'
     */
    @Test
    public void dayOfMonthTest() {
        // TODO: test dayOfMonth
    }

    /**
     * Test the property 'hour'
     */
    @Test
    public void hourTest() {
        // TODO: test hour
    }

    /**
     * Test the property 'minute'
     */
    @Test
    public void minuteTest() {
        // TODO: test minute
    }

    /**
     * Test the property 'calendar'
     */
    @Test
    public void calendarTest() {
        // TODO: test calendar
    }

}
