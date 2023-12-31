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



#include "CppRestOpenAPIClient/model/SendListRequest.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



SendListRequest::SendListRequest()
{
    m_ChatId = utility::conversions::to_string_t("");
    m_ChatIdIsSet = false;
    m_Phone = 0;
    m_PhoneIsSet = false;
    m_Body = utility::conversions::to_string_t("");
    m_BodyIsSet = false;
    m_Header = utility::conversions::to_string_t("");
    m_HeaderIsSet = false;
    m_Footer = utility::conversions::to_string_t("");
    m_FooterIsSet = false;
    m_Action = utility::conversions::to_string_t("");
    m_ActionIsSet = false;
    m_SectionsIsSet = false;
}

SendListRequest::~SendListRequest()
{
}

void SendListRequest::validate()
{
    // TODO: implement validation
}

web::json::value SendListRequest::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ChatIdIsSet)
    {
        val[utility::conversions::to_string_t(U("chatId"))] = ModelBase::toJson(m_ChatId);
    }
    if(m_PhoneIsSet)
    {
        val[utility::conversions::to_string_t(U("phone"))] = ModelBase::toJson(m_Phone);
    }
    if(m_BodyIsSet)
    {
        val[utility::conversions::to_string_t(U("body"))] = ModelBase::toJson(m_Body);
    }
    if(m_HeaderIsSet)
    {
        val[utility::conversions::to_string_t(U("header"))] = ModelBase::toJson(m_Header);
    }
    if(m_FooterIsSet)
    {
        val[utility::conversions::to_string_t(U("footer"))] = ModelBase::toJson(m_Footer);
    }
    if(m_ActionIsSet)
    {
        val[utility::conversions::to_string_t(U("action"))] = ModelBase::toJson(m_Action);
    }
    if(m_SectionsIsSet)
    {
        val[utility::conversions::to_string_t(U("sections"))] = ModelBase::toJson(m_Sections);
    }

    return val;
}

bool SendListRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("chatId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("chatId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setChatId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setChatId);
            setChatId(refVal_setChatId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("phone"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("phone")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setPhone;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPhone);
            setPhone(refVal_setPhone);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("body"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("body")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setBody;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBody);
            setBody(refVal_setBody);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("header"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("header")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setHeader;
            ok &= ModelBase::fromJson(fieldValue, refVal_setHeader);
            setHeader(refVal_setHeader);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("footer"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("footer")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setFooter;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFooter);
            setFooter(refVal_setFooter);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("action"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("action")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAction;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAction);
            setAction(refVal_setAction);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("sections"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("sections")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<SendListRequest_allOf_sections>> refVal_setSections;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSections);
            setSections(refVal_setSections);
        }
    }
    return ok;
}

void SendListRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ChatIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("chatId")), m_ChatId));
    }
    if(m_PhoneIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("phone")), m_Phone));
    }
    if(m_BodyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("body")), m_Body));
    }
    if(m_HeaderIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("header")), m_Header));
    }
    if(m_FooterIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("footer")), m_Footer));
    }
    if(m_ActionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("action")), m_Action));
    }
    if(m_SectionsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("sections")), m_Sections));
    }
}

bool SendListRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("chatId"))))
    {
        utility::string_t refVal_setChatId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("chatId"))), refVal_setChatId );
        setChatId(refVal_setChatId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("phone"))))
    {
        int32_t refVal_setPhone;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("phone"))), refVal_setPhone );
        setPhone(refVal_setPhone);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("body"))))
    {
        utility::string_t refVal_setBody;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("body"))), refVal_setBody );
        setBody(refVal_setBody);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("header"))))
    {
        utility::string_t refVal_setHeader;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("header"))), refVal_setHeader );
        setHeader(refVal_setHeader);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("footer"))))
    {
        utility::string_t refVal_setFooter;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("footer"))), refVal_setFooter );
        setFooter(refVal_setFooter);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("action"))))
    {
        utility::string_t refVal_setAction;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("action"))), refVal_setAction );
        setAction(refVal_setAction);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("sections"))))
    {
        std::vector<std::shared_ptr<SendListRequest_allOf_sections>> refVal_setSections;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("sections"))), refVal_setSections );
        setSections(refVal_setSections);
    }
    return ok;
}

utility::string_t SendListRequest::getChatId() const
{
    return m_ChatId;
}

void SendListRequest::setChatId(const utility::string_t& value)
{
    m_ChatId = value;
    m_ChatIdIsSet = true;
}

bool SendListRequest::chatIdIsSet() const
{
    return m_ChatIdIsSet;
}

void SendListRequest::unsetChatId()
{
    m_ChatIdIsSet = false;
}
int32_t SendListRequest::getPhone() const
{
    return m_Phone;
}

void SendListRequest::setPhone(int32_t value)
{
    m_Phone = value;
    m_PhoneIsSet = true;
}

bool SendListRequest::phoneIsSet() const
{
    return m_PhoneIsSet;
}

void SendListRequest::unsetPhone()
{
    m_PhoneIsSet = false;
}
utility::string_t SendListRequest::getBody() const
{
    return m_Body;
}

void SendListRequest::setBody(const utility::string_t& value)
{
    m_Body = value;
    m_BodyIsSet = true;
}

bool SendListRequest::bodyIsSet() const
{
    return m_BodyIsSet;
}

void SendListRequest::unsetBody()
{
    m_BodyIsSet = false;
}
utility::string_t SendListRequest::getHeader() const
{
    return m_Header;
}

void SendListRequest::setHeader(const utility::string_t& value)
{
    m_Header = value;
    m_HeaderIsSet = true;
}

bool SendListRequest::headerIsSet() const
{
    return m_HeaderIsSet;
}

void SendListRequest::unsetHeader()
{
    m_HeaderIsSet = false;
}
utility::string_t SendListRequest::getFooter() const
{
    return m_Footer;
}

void SendListRequest::setFooter(const utility::string_t& value)
{
    m_Footer = value;
    m_FooterIsSet = true;
}

bool SendListRequest::footerIsSet() const
{
    return m_FooterIsSet;
}

void SendListRequest::unsetFooter()
{
    m_FooterIsSet = false;
}
utility::string_t SendListRequest::getAction() const
{
    return m_Action;
}

void SendListRequest::setAction(const utility::string_t& value)
{
    m_Action = value;
    m_ActionIsSet = true;
}

bool SendListRequest::actionIsSet() const
{
    return m_ActionIsSet;
}

void SendListRequest::unsetAction()
{
    m_ActionIsSet = false;
}
std::vector<std::shared_ptr<SendListRequest_allOf_sections>>& SendListRequest::getSections()
{
    return m_Sections;
}

void SendListRequest::setSections(const std::vector<std::shared_ptr<SendListRequest_allOf_sections>>& value)
{
    m_Sections = value;
    m_SectionsIsSet = true;
}

bool SendListRequest::sectionsIsSet() const
{
    return m_SectionsIsSet;
}

void SendListRequest::unsetSections()
{
    m_SectionsIsSet = false;
}
}
}
}
}


