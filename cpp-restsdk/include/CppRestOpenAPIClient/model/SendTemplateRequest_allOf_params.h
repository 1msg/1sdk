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
 * SendTemplateRequest_allOf_params.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_SendTemplateRequest_allOf_params_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_SendTemplateRequest_allOf_params_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/SendTemplateRequest_allOf_currency.h"
#include "CppRestOpenAPIClient/model/SendTemplateRequest_allOf_date_time.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class SendTemplateRequest_allOf_currency;
class SendTemplateRequest_allOf_date_time;

/// <summary>
/// 
/// </summary>
class  SendTemplateRequest_allOf_params
    : public ModelBase
{
public:
    SendTemplateRequest_allOf_params();
    virtual ~SendTemplateRequest_allOf_params();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SendTemplateRequest_allOf_params members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRDefault() const;
    bool rDefaultIsSet() const;
    void unsetr_default();

    void setRDefault(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<SendTemplateRequest_allOf_currency> getCurrency() const;
    bool currencyIsSet() const;
    void unsetCurrency();

    void setCurrency(const std::shared_ptr<SendTemplateRequest_allOf_currency>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<SendTemplateRequest_allOf_date_time> getDateTime() const;
    bool dateTimeIsSet() const;
    void unsetDate_time();

    void setDateTime(const std::shared_ptr<SendTemplateRequest_allOf_date_time>& value);


protected:
    utility::string_t m_r_default;
    bool m_r_defaultIsSet;
    std::shared_ptr<SendTemplateRequest_allOf_currency> m_Currency;
    bool m_CurrencyIsSet;
    std::shared_ptr<SendTemplateRequest_allOf_date_time> m_Date_time;
    bool m_Date_timeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_SendTemplateRequest_allOf_params_H_ */
