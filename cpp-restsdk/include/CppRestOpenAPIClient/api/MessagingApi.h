/**
 * one_msg_waba_sdk
 * [1MSG.IO](https://1msg.io/) is the perfect WhatsApp management tool for your business. With us you get full access to the official Whatsapp API/webhooks.  Every API request must contain an Authorize HTTP header with a token.  This is your channel token, which can be found in your channel project on your profile page. Please do not give the token to anyone or post it publicly.  The authorization token must be added to each request in the GET parameter 'token' and always passed to query string (?token={your_token}). Parameters in GET queries pass query string. Parameters in POST requests — through the JSON-encoded request body.   All 'send' methods (except /sendTemplate) will only work when the dialog session with the user is open. Some of our solutions simplify and avoid such limitations, but we urge you to pay more attention to this detail
 *
 * The version of the OpenAPI document: 2.39.0
 * Contact: hello@1msg.io
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.0.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * MessagingApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_MessagingApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_MessagingApi_H_



#include "CppRestOpenAPIClient/ApiClient.h"

#include "CppRestOpenAPIClient/model/GetMe_401_response.h"
#include "CppRestOpenAPIClient/model/GetMessages.h"
#include "CppRestOpenAPIClient/model/ReadMessageRequest.h"
#include "CppRestOpenAPIClient/model/SendContactRequest.h"
#include "CppRestOpenAPIClient/model/SendFileRequest.h"
#include "CppRestOpenAPIClient/model/SendListRequest.h"
#include "CppRestOpenAPIClient/model/SendLocationRequest.h"
#include "CppRestOpenAPIClient/model/SendMessageRequest.h"
#include "CppRestOpenAPIClient/model/SendMessageStatus.h"
#include "CppRestOpenAPIClient/model/SetMe.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  MessagingApi 
{
public:

    explicit MessagingApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~MessagingApi();

    /// <summary>
    /// Get messages list
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="last">Displays the last messages. If this parameter is passed, then lastMessageNumber is ignored. (optional, default to false)</param>
    /// <param name="lastMessageNumber">The lastMessageNumber parameter from the last response. Example: 100 (optional, default to 0)</param>
    /// <param name="firstMessageNumber">The firstMessageNumber parameter from the last response. Example: 1 (optional, default to 0)</param>
    /// <param name="limit">Sets length of the message list. Default 100. With value 0 returns all messages. (optional, default to 0)</param>
    /// <param name="chatId">Filter messages by chatId  Chat ID from the message list. Example: 556123122026@c.us (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="minTime">Filter messages received after specified time. Example: 1665396610 (optional, default to 0)</param>
    /// <param name="maxTime">Filter messages received before specified time. Example: 1665396610 (optional, default to 0)</param>
    /// <param name="msgId">Message ID. Example: 0XzkmGNn4prUAQlzsHApGNRXQ0U (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<GetMessages>> messagesList(
        boost::optional<bool> last,
        boost::optional<int32_t> lastMessageNumber,
        boost::optional<int32_t> firstMessageNumber,
        boost::optional<int32_t> limit,
        boost::optional<utility::string_t> chatId,
        boost::optional<int32_t> minTime,
        boost::optional<int32_t> maxTime,
        boost::optional<utility::string_t> msgId
    ) const;
    /// <summary>
    /// Mark message as read
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="readMessageRequest"> (optional)</param>
    pplx::task<std::shared_ptr<SetMe>> readMessage(
        boost::optional<std::shared_ptr<ReadMessageRequest>> readMessageRequest
    ) const;
    /// <summary>
    /// Send a Contact
    /// </summary>
    /// <remarks>
    /// Send a contact to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.
    /// </remarks>
    /// <param name="sendContactRequest"></param>
    pplx::task<std::shared_ptr<SendMessageStatus>> sendContact(
        std::shared_ptr<SendContactRequest> sendContactRequest
    ) const;
    /// <summary>
    /// Send a File
    /// </summary>
    /// <remarks>
    /// Send a file to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.
    /// </remarks>
    /// <param name="sendFileRequest"></param>
    pplx::task<std::shared_ptr<SendMessageStatus>> sendFile(
        std::shared_ptr<SendFileRequest> sendFileRequest
    ) const;
    /// <summary>
    /// Send List Message
    /// </summary>
    /// <remarks>
    /// Send Interactive List Message to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.
    /// </remarks>
    /// <param name="sendListRequest"></param>
    pplx::task<std::shared_ptr<SendMessageStatus>> sendList(
        std::shared_ptr<SendListRequest> sendListRequest
    ) const;
    /// <summary>
    /// Send a Location
    /// </summary>
    /// <remarks>
    /// Send a location to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.
    /// </remarks>
    /// <param name="sendLocationRequest"></param>
    pplx::task<std::shared_ptr<SendMessageStatus>> sendLocation(
        std::shared_ptr<SendLocationRequest> sendLocationRequest
    ) const;
    /// <summary>
    /// Send a Message
    /// </summary>
    /// <remarks>
    /// Send a message to an existing chat. (Only if the dialogue has an Open Session). The message will be added to the queue for sending and delivered even if the phone is disconnected from the Internet or authorization is not passed.  Only one of two parameters is needed to determine the destination - chatId or phone.
    /// </remarks>
    /// <param name="sendMessageRequest"></param>
    pplx::task<std::shared_ptr<SendMessageStatus>> sendMessage(
        std::shared_ptr<SendMessageRequest> sendMessageRequest
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_MessagingApi_H_ */

