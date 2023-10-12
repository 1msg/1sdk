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
 * SendTemplateRequest_allOf_date_time.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_SendTemplateRequest_allOf_date_time_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_SendTemplateRequest_allOf_date_time_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/SendTemplateRequest_allOf_date_time_component.h"
#include "CppRestOpenAPIClient/model/SendTemplateRequest_allOf_date_time_unix_epoch.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class SendTemplateRequest_allOf_date_time_component;
class SendTemplateRequest_allOf_date_time_unix_epoch;

/// <summary>
/// 
/// </summary>
class  SendTemplateRequest_allOf_date_time
    : public ModelBase
{
public:
    SendTemplateRequest_allOf_date_time();
    virtual ~SendTemplateRequest_allOf_date_time();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SendTemplateRequest_allOf_date_time members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<SendTemplateRequest_allOf_date_time_component> getComponent() const;
    bool componentIsSet() const;
    void unsetComponent();

    void setComponent(const std::shared_ptr<SendTemplateRequest_allOf_date_time_component>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<SendTemplateRequest_allOf_date_time_unix_epoch> getUnixEpoch() const;
    bool unixEpochIsSet() const;
    void unsetUnix_epoch();

    void setUnixEpoch(const std::shared_ptr<SendTemplateRequest_allOf_date_time_unix_epoch>& value);


protected:
    std::shared_ptr<SendTemplateRequest_allOf_date_time_component> m_Component;
    bool m_ComponentIsSet;
    std::shared_ptr<SendTemplateRequest_allOf_date_time_unix_epoch> m_Unix_epoch;
    bool m_Unix_epochIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_SendTemplateRequest_allOf_date_time_H_ */
