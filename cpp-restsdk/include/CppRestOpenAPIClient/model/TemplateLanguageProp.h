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
 * TemplateLanguageProp.h
 *
 * Template language
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_TemplateLanguageProp_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_TemplateLanguageProp_H_


#include "CppRestOpenAPIClient/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  TemplateLanguageProp
    : public ModelBase
{
public:
    TemplateLanguageProp();
    virtual ~TemplateLanguageProp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eTemplateLanguageProp
    {
        TemplateLanguageProp_AF,
        TemplateLanguageProp_SQ,
        TemplateLanguageProp_AR,
        TemplateLanguageProp_AZ,
        TemplateLanguageProp_BN,
        TemplateLanguageProp_BG,
        TemplateLanguageProp_CA,
        TemplateLanguageProp_ZH_CN,
        TemplateLanguageProp_ZH_HK,
        TemplateLanguageProp_ZH_TW,
        TemplateLanguageProp_HR,
        TemplateLanguageProp_CS,
        TemplateLanguageProp_DA,
        TemplateLanguageProp_NL,
        TemplateLanguageProp_EN,
        TemplateLanguageProp_EN_GB,
        TemplateLanguageProp_EN_US,
        TemplateLanguageProp_ET,
        TemplateLanguageProp_FIL,
        TemplateLanguageProp_FI,
        TemplateLanguageProp_FR,
        TemplateLanguageProp_DE,
        TemplateLanguageProp_EL,
        TemplateLanguageProp_GU,
        TemplateLanguageProp_HE,
        TemplateLanguageProp_HI,
        TemplateLanguageProp_HU,
        TemplateLanguageProp_ID,
        TemplateLanguageProp_GA,
        TemplateLanguageProp_IT,
        TemplateLanguageProp_JA,
        TemplateLanguageProp_KN,
        TemplateLanguageProp_KK,
        TemplateLanguageProp_KO,
        TemplateLanguageProp_LO,
        TemplateLanguageProp_LV,
        TemplateLanguageProp_LT,
        TemplateLanguageProp_MK,
        TemplateLanguageProp_MS,
        TemplateLanguageProp_MR,
        TemplateLanguageProp_NB,
        TemplateLanguageProp_FA,
        TemplateLanguageProp_PL,
        TemplateLanguageProp_PT_BR,
        TemplateLanguageProp_PT_PT,
        TemplateLanguageProp_PA,
        TemplateLanguageProp_RO,
        TemplateLanguageProp_RU,
        TemplateLanguageProp_SR,
        TemplateLanguageProp_SK,
        TemplateLanguageProp_SL,
        TemplateLanguageProp_ES,
        TemplateLanguageProp_ES_AR,
        TemplateLanguageProp_ES_ES,
        TemplateLanguageProp_ES_MX,
        TemplateLanguageProp_SW,
        TemplateLanguageProp_SV,
        TemplateLanguageProp_TA,
        TemplateLanguageProp_TE,
        TemplateLanguageProp_TH,
        TemplateLanguageProp_TR,
        TemplateLanguageProp_UK,
        TemplateLanguageProp_UR,
        TemplateLanguageProp_UZ,
        TemplateLanguageProp_VI,
    };

    eTemplateLanguageProp getValue() const;
    void setValue(eTemplateLanguageProp const value);

    protected:
        eTemplateLanguageProp m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_TemplateLanguageProp_H_ */
