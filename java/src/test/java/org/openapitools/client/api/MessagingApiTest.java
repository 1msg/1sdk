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
import org.openapitools.client.model.GetMe401Response;
import org.openapitools.client.model.GetMessages;
import org.openapitools.client.model.ReadMessageRequest;
import org.openapitools.client.model.SendContactRequest;
import org.openapitools.client.model.SendFileRequest;
import org.openapitools.client.model.SendListRequest;
import org.openapitools.client.model.SendLocationRequest;
import org.openapitools.client.model.SendMessageRequest;
import org.openapitools.client.model.SendMessageStatus;
import org.openapitools.client.model.SetMe;
import org.junit.jupiter.api.Disabled;
import org.junit.jupiter.api.Test;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * API tests for MessagingApi
 */
@Disabled
public class MessagingApiTest {

    private final MessagingApi api = new MessagingApi();

    /**
     * Get messages list
     *
     * 
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void messagesListTest() throws ApiException {
        Boolean last = null;
        Integer lastMessageNumber = null;
        Integer firstMessageNumber = null;
        Integer limit = null;
        String chatId = null;
        Integer minTime = null;
        Integer maxTime = null;
        String msgId = null;
        GetMessages response = api.messagesList(last, lastMessageNumber, firstMessageNumber, limit, chatId, minTime, maxTime, msgId);
        // TODO: test validations
    }

    /**
     * Mark message as read
     *
     * 
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void readMessageTest() throws ApiException {
        ReadMessageRequest readMessageRequest = null;
        SetMe response = api.readMessage(readMessageRequest);
        // TODO: test validations
    }

    /**
     * Send a Contact
     *
     * Send a contact to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void sendContactTest() throws ApiException {
        SendContactRequest sendContactRequest = null;
        SendMessageStatus response = api.sendContact(sendContactRequest);
        // TODO: test validations
    }

    /**
     * Send a File
     *
     * Send a file to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void sendFileTest() throws ApiException {
        SendFileRequest sendFileRequest = null;
        SendMessageStatus response = api.sendFile(sendFileRequest);
        // TODO: test validations
    }

    /**
     * Send List Message
     *
     * Send Interactive List Message to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void sendListTest() throws ApiException {
        SendListRequest sendListRequest = null;
        SendMessageStatus response = api.sendList(sendListRequest);
        // TODO: test validations
    }

    /**
     * Send a Location
     *
     * Send a location to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void sendLocationTest() throws ApiException {
        SendLocationRequest sendLocationRequest = null;
        SendMessageStatus response = api.sendLocation(sendLocationRequest);
        // TODO: test validations
    }

    /**
     * Send a Message
     *
     * Send a message to an existing chat. (Only if the dialogue has an Open Session). The message will be added to the queue for sending and delivered even if the phone is disconnected from the Internet or authorization is not passed.  Only one of two parameters is needed to determine the destination - chatId or phone.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void sendMessageTest() throws ApiException {
        SendMessageRequest sendMessageRequest = null;
        SendMessageStatus response = api.sendMessage(sendMessageRequest);
        // TODO: test validations
    }

}
