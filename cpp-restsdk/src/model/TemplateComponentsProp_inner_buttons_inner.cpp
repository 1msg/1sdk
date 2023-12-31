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



#include "CppRestOpenAPIClient/model/TemplateComponentsProp_inner_buttons_inner.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



TemplateComponentsProp_inner_buttons_inner::TemplateComponentsProp_inner_buttons_inner()
{
    m_Type = utility::conversions::to_string_t("");
    m_TypeIsSet = false;
    m_Text = utility::conversions::to_string_t("");
    m_TextIsSet = false;
    m_Url = utility::conversions::to_string_t("");
    m_UrlIsSet = false;
    m_Phone_number = utility::conversions::to_string_t("");
    m_Phone_numberIsSet = false;
    m_ExampleIsSet = false;
}

TemplateComponentsProp_inner_buttons_inner::~TemplateComponentsProp_inner_buttons_inner()
{
}

void TemplateComponentsProp_inner_buttons_inner::validate()
{
    // TODO: implement validation
}

web::json::value TemplateComponentsProp_inner_buttons_inner::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t(U("type"))] = ModelBase::toJson(m_Type);
    }
    if(m_TextIsSet)
    {
        val[utility::conversions::to_string_t(U("text"))] = ModelBase::toJson(m_Text);
    }
    if(m_UrlIsSet)
    {
        val[utility::conversions::to_string_t(U("url"))] = ModelBase::toJson(m_Url);
    }
    if(m_Phone_numberIsSet)
    {
        val[utility::conversions::to_string_t(U("phone_number"))] = ModelBase::toJson(m_Phone_number);
    }
    if(m_ExampleIsSet)
    {
        val[utility::conversions::to_string_t(U("example"))] = ModelBase::toJson(m_Example);
    }

    return val;
}

bool TemplateComponentsProp_inner_buttons_inner::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("type")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setType);
            setType(refVal_setType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("text"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("text")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setText;
            ok &= ModelBase::fromJson(fieldValue, refVal_setText);
            setText(refVal_setText);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("url"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("url")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUrl);
            setUrl(refVal_setUrl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("phone_number"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("phone_number")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPhoneNumber;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPhoneNumber);
            setPhoneNumber(refVal_setPhoneNumber);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("example"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("example")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<AnyType>> refVal_setExample;
            ok &= ModelBase::fromJson(fieldValue, refVal_setExample);
            setExample(refVal_setExample);
        }
    }
    return ok;
}

void TemplateComponentsProp_inner_buttons_inner::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("type")), m_Type));
    }
    if(m_TextIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("text")), m_Text));
    }
    if(m_UrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("url")), m_Url));
    }
    if(m_Phone_numberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("phone_number")), m_Phone_number));
    }
    if(m_ExampleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("example")), m_Example));
    }
}

bool TemplateComponentsProp_inner_buttons_inner::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("type"))))
    {
        utility::string_t refVal_setType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("type"))), refVal_setType );
        setType(refVal_setType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("text"))))
    {
        utility::string_t refVal_setText;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("text"))), refVal_setText );
        setText(refVal_setText);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("url"))))
    {
        utility::string_t refVal_setUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("url"))), refVal_setUrl );
        setUrl(refVal_setUrl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("phone_number"))))
    {
        utility::string_t refVal_setPhoneNumber;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("phone_number"))), refVal_setPhoneNumber );
        setPhoneNumber(refVal_setPhoneNumber);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("example"))))
    {
        std::vector<std::shared_ptr<AnyType>> refVal_setExample;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("example"))), refVal_setExample );
        setExample(refVal_setExample);
    }
    return ok;
}

utility::string_t TemplateComponentsProp_inner_buttons_inner::getType() const
{
    return m_Type;
}

void TemplateComponentsProp_inner_buttons_inner::setType(const utility::string_t& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}

bool TemplateComponentsProp_inner_buttons_inner::typeIsSet() const
{
    return m_TypeIsSet;
}

void TemplateComponentsProp_inner_buttons_inner::unsetType()
{
    m_TypeIsSet = false;
}
utility::string_t TemplateComponentsProp_inner_buttons_inner::getText() const
{
    return m_Text;
}

void TemplateComponentsProp_inner_buttons_inner::setText(const utility::string_t& value)
{
    m_Text = value;
    m_TextIsSet = true;
}

bool TemplateComponentsProp_inner_buttons_inner::textIsSet() const
{
    return m_TextIsSet;
}

void TemplateComponentsProp_inner_buttons_inner::unsetText()
{
    m_TextIsSet = false;
}
utility::string_t TemplateComponentsProp_inner_buttons_inner::getUrl() const
{
    return m_Url;
}

void TemplateComponentsProp_inner_buttons_inner::setUrl(const utility::string_t& value)
{
    m_Url = value;
    m_UrlIsSet = true;
}

bool TemplateComponentsProp_inner_buttons_inner::urlIsSet() const
{
    return m_UrlIsSet;
}

void TemplateComponentsProp_inner_buttons_inner::unsetUrl()
{
    m_UrlIsSet = false;
}
utility::string_t TemplateComponentsProp_inner_buttons_inner::getPhoneNumber() const
{
    return m_Phone_number;
}

void TemplateComponentsProp_inner_buttons_inner::setPhoneNumber(const utility::string_t& value)
{
    m_Phone_number = value;
    m_Phone_numberIsSet = true;
}

bool TemplateComponentsProp_inner_buttons_inner::phoneNumberIsSet() const
{
    return m_Phone_numberIsSet;
}

void TemplateComponentsProp_inner_buttons_inner::unsetPhone_number()
{
    m_Phone_numberIsSet = false;
}
std::vector<std::shared_ptr<AnyType>>& TemplateComponentsProp_inner_buttons_inner::getExample()
{
    return m_Example;
}

void TemplateComponentsProp_inner_buttons_inner::setExample(const std::vector<std::shared_ptr<AnyType>>& value)
{
    m_Example = value;
    m_ExampleIsSet = true;
}

bool TemplateComponentsProp_inner_buttons_inner::exampleIsSet() const
{
    return m_ExampleIsSet;
}

void TemplateComponentsProp_inner_buttons_inner::unsetExample()
{
    m_ExampleIsSet = false;
}
}
}
}
}


