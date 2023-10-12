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



#include "CppRestOpenAPIClient/model/SetWebhookStatus.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



SetWebhookStatus::SetWebhookStatus()
{
    m_Set = false;
    m_SetIsSet = false;
    m_Message = utility::conversions::to_string_t("");
    m_MessageIsSet = false;
}

SetWebhookStatus::~SetWebhookStatus()
{
}

void SetWebhookStatus::validate()
{
    // TODO: implement validation
}

web::json::value SetWebhookStatus::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SetIsSet)
    {
        val[utility::conversions::to_string_t(U("set"))] = ModelBase::toJson(m_Set);
    }
    if(m_MessageIsSet)
    {
        val[utility::conversions::to_string_t(U("message"))] = ModelBase::toJson(m_Message);
    }

    return val;
}

bool SetWebhookStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("set"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("set")));
        if(!fieldValue.is_null())
        {
            bool refVal_setSet;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSet);
            setSet(refVal_setSet);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("message"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("message")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setMessage;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMessage);
            setMessage(refVal_setMessage);
        }
    }
    return ok;
}

void SetWebhookStatus::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_SetIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("set")), m_Set));
    }
    if(m_MessageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("message")), m_Message));
    }
}

bool SetWebhookStatus::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("set"))))
    {
        bool refVal_setSet;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("set"))), refVal_setSet );
        setSet(refVal_setSet);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("message"))))
    {
        utility::string_t refVal_setMessage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("message"))), refVal_setMessage );
        setMessage(refVal_setMessage);
    }
    return ok;
}

bool SetWebhookStatus::isSet() const
{
    return m_Set;
}

void SetWebhookStatus::setSet(bool value)
{
    m_Set = value;
    m_SetIsSet = true;
}

bool SetWebhookStatus::setIsSet() const
{
    return m_SetIsSet;
}

void SetWebhookStatus::unsetSet()
{
    m_SetIsSet = false;
}
utility::string_t SetWebhookStatus::getMessage() const
{
    return m_Message;
}

void SetWebhookStatus::setMessage(const utility::string_t& value)
{
    m_Message = value;
    m_MessageIsSet = true;
}

bool SetWebhookStatus::messageIsSet() const
{
    return m_MessageIsSet;
}

void SetWebhookStatus::unsetMessage()
{
    m_MessageIsSet = false;
}
}
}
}
}


