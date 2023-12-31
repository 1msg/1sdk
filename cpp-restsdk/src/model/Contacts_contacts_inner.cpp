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



#include "CppRestOpenAPIClient/model/Contacts_contacts_inner.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Contacts_contacts_inner::Contacts_contacts_inner()
{
    m_Input = utility::conversions::to_string_t("");
    m_InputIsSet = false;
    m_Status = utility::conversions::to_string_t("");
    m_StatusIsSet = false;
    m_Wa_id = utility::conversions::to_string_t("");
    m_Wa_idIsSet = false;
}

Contacts_contacts_inner::~Contacts_contacts_inner()
{
}

void Contacts_contacts_inner::validate()
{
    // TODO: implement validation
}

web::json::value Contacts_contacts_inner::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_InputIsSet)
    {
        val[utility::conversions::to_string_t(U("input"))] = ModelBase::toJson(m_Input);
    }
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t(U("status"))] = ModelBase::toJson(m_Status);
    }
    if(m_Wa_idIsSet)
    {
        val[utility::conversions::to_string_t(U("wa_id"))] = ModelBase::toJson(m_Wa_id);
    }

    return val;
}

bool Contacts_contacts_inner::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("input"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("input")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setInput;
            ok &= ModelBase::fromJson(fieldValue, refVal_setInput);
            setInput(refVal_setInput);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("status"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("status")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setStatus;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStatus);
            setStatus(refVal_setStatus);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("wa_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("wa_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setWaId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setWaId);
            setWaId(refVal_setWaId);
        }
    }
    return ok;
}

void Contacts_contacts_inner::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_InputIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("input")), m_Input));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("status")), m_Status));
    }
    if(m_Wa_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("wa_id")), m_Wa_id));
    }
}

bool Contacts_contacts_inner::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("input"))))
    {
        utility::string_t refVal_setInput;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("input"))), refVal_setInput );
        setInput(refVal_setInput);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("status"))))
    {
        utility::string_t refVal_setStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("status"))), refVal_setStatus );
        setStatus(refVal_setStatus);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("wa_id"))))
    {
        utility::string_t refVal_setWaId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("wa_id"))), refVal_setWaId );
        setWaId(refVal_setWaId);
    }
    return ok;
}

utility::string_t Contacts_contacts_inner::getInput() const
{
    return m_Input;
}

void Contacts_contacts_inner::setInput(const utility::string_t& value)
{
    m_Input = value;
    m_InputIsSet = true;
}

bool Contacts_contacts_inner::inputIsSet() const
{
    return m_InputIsSet;
}

void Contacts_contacts_inner::unsetInput()
{
    m_InputIsSet = false;
}
utility::string_t Contacts_contacts_inner::getStatus() const
{
    return m_Status;
}

void Contacts_contacts_inner::setStatus(const utility::string_t& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool Contacts_contacts_inner::statusIsSet() const
{
    return m_StatusIsSet;
}

void Contacts_contacts_inner::unsetStatus()
{
    m_StatusIsSet = false;
}
utility::string_t Contacts_contacts_inner::getWaId() const
{
    return m_Wa_id;
}

void Contacts_contacts_inner::setWaId(const utility::string_t& value)
{
    m_Wa_id = value;
    m_Wa_idIsSet = true;
}

bool Contacts_contacts_inner::waIdIsSet() const
{
    return m_Wa_idIsSet;
}

void Contacts_contacts_inner::unsetWa_id()
{
    m_Wa_idIsSet = false;
}
}
}
}
}


