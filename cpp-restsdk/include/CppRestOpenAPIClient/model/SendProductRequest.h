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
 * SendProductRequest.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_SendProductRequest_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_SendProductRequest_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/SendProductRequest_allOf_action.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class SendProductRequest_allOf_action;

/// <summary>
/// 
/// </summary>
class  SendProductRequest
    : public ModelBase
{
public:
    SendProductRequest();
    virtual ~SendProductRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SendProductRequest members

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
    /// 
    /// </summary>
    std::shared_ptr<SendProductRequest_allOf_action> getAction() const;
    bool actionIsSet() const;
    void unsetAction();

    void setAction(const std::shared_ptr<SendProductRequest_allOf_action>& value);

    /// <summary>
    /// Text of message. Example: Some text.
    /// </summary>
    utility::string_t getBody() const;
    bool bodyIsSet() const;
    void unsetBody();

    void setBody(const utility::string_t& value);

    /// <summary>
    /// Located under the message text. Example: Footer.
    /// </summary>
    utility::string_t getFooter() const;
    bool footerIsSet() const;
    void unsetFooter();

    void setFooter(const utility::string_t& value);

    /// <summary>
    /// Header of catalog. Example: Header.  **Required when sending the catalog.**
    /// </summary>
    utility::string_t getHeader() const;
    bool headerIsSet() const;
    void unsetHeader();

    void setHeader(const utility::string_t& value);


protected:
    utility::string_t m_ChatId;
    bool m_ChatIdIsSet;
    int32_t m_Phone;
    bool m_PhoneIsSet;
    std::shared_ptr<SendProductRequest_allOf_action> m_Action;
    bool m_ActionIsSet;
    utility::string_t m_Body;
    bool m_BodyIsSet;
    utility::string_t m_Footer;
    bool m_FooterIsSet;
    utility::string_t m_Header;
    bool m_HeaderIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_SendProductRequest_H_ */
