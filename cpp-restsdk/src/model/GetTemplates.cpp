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



#include "CppRestOpenAPIClient/model/GetTemplates.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



GetTemplates::GetTemplates()
{
    m_Total = 0;
    m_TotalIsSet = false;
    m_TemplatesIsSet = false;
}

GetTemplates::~GetTemplates()
{
}

void GetTemplates::validate()
{
    // TODO: implement validation
}

web::json::value GetTemplates::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_TotalIsSet)
    {
        val[utility::conversions::to_string_t(U("total"))] = ModelBase::toJson(m_Total);
    }
    if(m_TemplatesIsSet)
    {
        val[utility::conversions::to_string_t(U("templates"))] = ModelBase::toJson(m_Templates);
    }

    return val;
}

bool GetTemplates::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("total"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("total")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setTotal;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTotal);
            setTotal(refVal_setTotal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("templates"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("templates")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<GetTemplates_templates_inner>> refVal_setTemplates;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTemplates);
            setTemplates(refVal_setTemplates);
        }
    }
    return ok;
}

void GetTemplates::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_TotalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("total")), m_Total));
    }
    if(m_TemplatesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("templates")), m_Templates));
    }
}

bool GetTemplates::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("total"))))
    {
        int32_t refVal_setTotal;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("total"))), refVal_setTotal );
        setTotal(refVal_setTotal);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("templates"))))
    {
        std::vector<std::shared_ptr<GetTemplates_templates_inner>> refVal_setTemplates;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("templates"))), refVal_setTemplates );
        setTemplates(refVal_setTemplates);
    }
    return ok;
}

int32_t GetTemplates::getTotal() const
{
    return m_Total;
}

void GetTemplates::setTotal(int32_t value)
{
    m_Total = value;
    m_TotalIsSet = true;
}

bool GetTemplates::totalIsSet() const
{
    return m_TotalIsSet;
}

void GetTemplates::unsetTotal()
{
    m_TotalIsSet = false;
}
std::vector<std::shared_ptr<GetTemplates_templates_inner>>& GetTemplates::getTemplates()
{
    return m_Templates;
}

void GetTemplates::setTemplates(const std::vector<std::shared_ptr<GetTemplates_templates_inner>>& value)
{
    m_Templates = value;
    m_TemplatesIsSet = true;
}

bool GetTemplates::templatesIsSet() const
{
    return m_TemplatesIsSet;
}

void GetTemplates::unsetTemplates()
{
    m_TemplatesIsSet = false;
}
}
}
}
}


