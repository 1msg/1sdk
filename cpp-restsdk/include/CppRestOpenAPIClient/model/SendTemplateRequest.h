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
 * SendTemplateRequest.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_SendTemplateRequest_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_SendTemplateRequest_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/SendTemplateRequest_allOf_params.h"
#include <cpprest/details/basic_types.h>
#include <vector>
#include "CppRestOpenAPIClient/model/SendTemplateRequest_allOf_language.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class SendTemplateRequest_allOf_language;
class SendTemplateRequest_allOf_params;

/// <summary>
/// 
/// </summary>
class  SendTemplateRequest
    : public ModelBase
{
public:
    SendTemplateRequest();
    virtual ~SendTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SendTemplateRequest members

    /// <summary>
    /// Can be found by method /templates
    /// </summary>
    utility::string_t getRNamespace() const;
    bool rNamespaceIsSet() const;
    void unsetr_namespace();

    void setRNamespace(const utility::string_t& value);

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
    /// Name of template
    /// </summary>
    utility::string_t getRTemplate() const;
    bool rTemplateIsSet() const;
    void unsetr_template();

    void setRTemplate(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<SendTemplateRequest_allOf_language> getLanguage() const;
    bool languageIsSet() const;
    void unsetLanguage();

    void setLanguage(const std::shared_ptr<SendTemplateRequest_allOf_language>& value);

    /// <summary>
    /// Array of localizable parameters to be substituted into the template. Each parameter is object contains the following field:  **type** - section of parameters - header, body, footer, button  **parameters** - variables for section.  Each variable is an object that can contain the following fields:  **type** - can be text, currency, date_time, image, document or video  **video**- id (mediaId)  **document**   * id (mediaId)  * filename(optional)  **image** - object with field link (image url)  **currency** - object containing parameters currency_code and amount_1000.  * *currency_code* - Currency code as defined in ISO 4217.  * *amount_1000* - Amount multiplied by 1000.  * *fallback_value* - Default text if localization fails.  **date_time** - If the date_time object is used, further definition of the date and time is required.  * *component* - The time is assembled from components (i.e., day of the week, month, hour, etc.) The time specified will be the same, regardless of the time zone the client is in.  * *unix_epoch* - The time to be displayed is dependent on the time zone the client is in.  * *fallback_value* - Default text if localization fails.  **button** - if button has parameter   * sub_type (url/quick_reply)  * parameters (array to fill button variable)  * index - button position.  **The number of parameters passed must match the number of parameters in the template**
    /// </summary>
    std::vector<std::shared_ptr<SendTemplateRequest_allOf_params>>& getParams();
    bool paramsIsSet() const;
    void unsetParams();

    void setParams(const std::vector<std::shared_ptr<SendTemplateRequest_allOf_params>>& value);


protected:
    utility::string_t m_r_namespace;
    bool m_r_namespaceIsSet;
    utility::string_t m_ChatId;
    bool m_ChatIdIsSet;
    int32_t m_Phone;
    bool m_PhoneIsSet;
    utility::string_t m_r_template;
    bool m_r_templateIsSet;
    std::shared_ptr<SendTemplateRequest_allOf_language> m_Language;
    bool m_LanguageIsSet;
    std::vector<std::shared_ptr<SendTemplateRequest_allOf_params>> m_Params;
    bool m_ParamsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_SendTemplateRequest_H_ */
