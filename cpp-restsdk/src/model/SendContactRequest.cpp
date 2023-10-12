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



#include "CppRestOpenAPIClient/model/SendContactRequest.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



SendContactRequest::SendContactRequest()
{
    m_ChatId = utility::conversions::to_string_t("");
    m_ChatIdIsSet = false;
    m_Phone = 0;
    m_PhoneIsSet = false;
    m_ContactsIsSet = false;
}

SendContactRequest::~SendContactRequest()
{
}

void SendContactRequest::validate()
{
    // TODO: implement validation
}

web::json::value SendContactRequest::toJson() const
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
    if(m_ContactsIsSet)
    {
        val[utility::conversions::to_string_t(U("contacts"))] = ModelBase::toJson(m_Contacts);
    }

    return val;
}

bool SendContactRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("contacts"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("contacts")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Object>> refVal_setContacts;
            ok &= ModelBase::fromJson(fieldValue, refVal_setContacts);
            setContacts(refVal_setContacts);
        }
    }
    return ok;
}

void SendContactRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ContactsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("contacts")), m_Contacts));
    }
}

bool SendContactRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("contacts"))))
    {
        std::vector<std::shared_ptr<Object>> refVal_setContacts;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("contacts"))), refVal_setContacts );
        setContacts(refVal_setContacts);
    }
    return ok;
}

utility::string_t SendContactRequest::getChatId() const
{
    return m_ChatId;
}

void SendContactRequest::setChatId(const utility::string_t& value)
{
    m_ChatId = value;
    m_ChatIdIsSet = true;
}

bool SendContactRequest::chatIdIsSet() const
{
    return m_ChatIdIsSet;
}

void SendContactRequest::unsetChatId()
{
    m_ChatIdIsSet = false;
}
int32_t SendContactRequest::getPhone() const
{
    return m_Phone;
}

void SendContactRequest::setPhone(int32_t value)
{
    m_Phone = value;
    m_PhoneIsSet = true;
}

bool SendContactRequest::phoneIsSet() const
{
    return m_PhoneIsSet;
}

void SendContactRequest::unsetPhone()
{
    m_PhoneIsSet = false;
}
std::vector<std::shared_ptr<Object>>& SendContactRequest::getContacts()
{
    return m_Contacts;
}

void SendContactRequest::setContacts(const std::vector<std::shared_ptr<Object>>& value)
{
    m_Contacts = value;
    m_ContactsIsSet = true;
}

bool SendContactRequest::contactsIsSet() const
{
    return m_ContactsIsSet;
}

void SendContactRequest::unsetContacts()
{
    m_ContactsIsSet = false;
}
}
}
}
}

