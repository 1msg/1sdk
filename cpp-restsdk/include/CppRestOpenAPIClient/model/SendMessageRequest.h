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
 * SendMessageRequest.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_SendMessageRequest_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_SendMessageRequest_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  SendMessageRequest
    : public ModelBase
{
public:
    SendMessageRequest();
    virtual ~SendMessageRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SendMessageRequest members

    /// <summary>
    /// **Required if phone is not set**  Chat ID from the message list. Examples: 12020721369@c.us . Used instead of the phone parameter.
    /// </summary>
    utility::string_t getChatId() const;
    bool chatIdIsSet() const;
    void unsetChatId();

    void setChatId(const utility::string_t& value);

    /// <summary>
    /// **Required if chatId is not set**  A phone number starting with the country code. You do not need to add your number.   USA example: 12020721369.
    /// </summary>
    int32_t getPhone() const;
    bool phoneIsSet() const;
    void unsetPhone();

    void setPhone(int32_t value);

    /// <summary>
    /// Message text, UTF-8 or UTF-16 string with emoji 🍏. Can be used with mentionedPhones, example: this text for @556123122026
    /// </summary>
    utility::string_t getBody() const;
    bool bodyIsSet() const;
    void unsetBody();

    void setBody(const utility::string_t& value);


protected:
    utility::string_t m_ChatId;
    bool m_ChatIdIsSet;
    int32_t m_Phone;
    bool m_PhoneIsSet;
    utility::string_t m_Body;
    bool m_BodyIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_SendMessageRequest_H_ */
