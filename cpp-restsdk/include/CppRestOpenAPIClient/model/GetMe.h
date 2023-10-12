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
 * GetMe.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_GetMe_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_GetMe_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  GetMe
    : public ModelBase
{
public:
    GetMe();
    virtual ~GetMe();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// GetMe members

    /// <summary>
    /// Profile&#x60;s About section.
    /// </summary>
    utility::string_t getAbout() const;
    bool aboutIsSet() const;
    void unsetAbout();

    void setAbout(const utility::string_t& value);

    /// <summary>
    /// Address of the business
    /// </summary>
    utility::string_t getAddress() const;
    bool addressIsSet() const;
    void unsetAddress();

    void setAddress(const utility::string_t& value);

    /// <summary>
    /// Description of the business. Max 256 characters
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();

    void setDescription(const utility::string_t& value);

    /// <summary>
    /// Business email
    /// </summary>
    utility::string_t getEmail() const;
    bool emailIsSet() const;
    void unsetEmail();

    void setEmail(const utility::string_t& value);

    /// <summary>
    /// Linked phone number
    /// </summary>
    utility::string_t getPhone() const;
    bool phoneIsSet() const;
    void unsetPhone();

    void setPhone(const utility::string_t& value);

    /// <summary>
    /// Industry of the business
    /// </summary>
    utility::string_t getVertical() const;
    bool verticalIsSet() const;
    void unsetVertical();

    void setVertical(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPhoto() const;
    bool photoIsSet() const;
    void unsetPhoto();

    void setPhoto(const utility::string_t& value);


protected:
    utility::string_t m_About;
    bool m_AboutIsSet;
    utility::string_t m_Address;
    bool m_AddressIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    utility::string_t m_Email;
    bool m_EmailIsSet;
    utility::string_t m_Phone;
    bool m_PhoneIsSet;
    utility::string_t m_Vertical;
    bool m_VerticalIsSet;
    utility::string_t m_Photo;
    bool m_PhotoIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_GetMe_H_ */
