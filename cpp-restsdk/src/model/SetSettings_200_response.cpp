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



#include "CppRestOpenAPIClient/model/SetSettings_200_response.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



SetSettings_200_response::SetSettings_200_response()
{
    m_WebhookUrl = utility::conversions::to_string_t("");
    m_WebhookUrlIsSet = false;
    m_UpdateIsSet = false;
}

SetSettings_200_response::~SetSettings_200_response()
{
}

void SetSettings_200_response::validate()
{
    // TODO: implement validation
}

web::json::value SetSettings_200_response::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_WebhookUrlIsSet)
    {
        val[utility::conversions::to_string_t(U("webhookUrl"))] = ModelBase::toJson(m_WebhookUrl);
    }
    if(m_UpdateIsSet)
    {
        val[utility::conversions::to_string_t(U("update"))] = ModelBase::toJson(m_Update);
    }

    return val;
}

bool SetSettings_200_response::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("webhookUrl"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("webhookUrl")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setWebhookUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setWebhookUrl);
            setWebhookUrl(refVal_setWebhookUrl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("update"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("update")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<SetSettings_200_response_allOf_update> refVal_setUpdate;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUpdate);
            setUpdate(refVal_setUpdate);
        }
    }
    return ok;
}

void SetSettings_200_response::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_WebhookUrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("webhookUrl")), m_WebhookUrl));
    }
    if(m_UpdateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("update")), m_Update));
    }
}

bool SetSettings_200_response::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("webhookUrl"))))
    {
        utility::string_t refVal_setWebhookUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("webhookUrl"))), refVal_setWebhookUrl );
        setWebhookUrl(refVal_setWebhookUrl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("update"))))
    {
        std::shared_ptr<SetSettings_200_response_allOf_update> refVal_setUpdate;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("update"))), refVal_setUpdate );
        setUpdate(refVal_setUpdate);
    }
    return ok;
}

utility::string_t SetSettings_200_response::getWebhookUrl() const
{
    return m_WebhookUrl;
}

void SetSettings_200_response::setWebhookUrl(const utility::string_t& value)
{
    m_WebhookUrl = value;
    m_WebhookUrlIsSet = true;
}

bool SetSettings_200_response::webhookUrlIsSet() const
{
    return m_WebhookUrlIsSet;
}

void SetSettings_200_response::unsetWebhookUrl()
{
    m_WebhookUrlIsSet = false;
}
std::shared_ptr<SetSettings_200_response_allOf_update> SetSettings_200_response::getUpdate() const
{
    return m_Update;
}

void SetSettings_200_response::setUpdate(const std::shared_ptr<SetSettings_200_response_allOf_update>& value)
{
    m_Update = value;
    m_UpdateIsSet = true;
}

bool SetSettings_200_response::updateIsSet() const
{
    return m_UpdateIsSet;
}

void SetSettings_200_response::unsetUpdate()
{
    m_UpdateIsSet = false;
}
}
}
}
}

