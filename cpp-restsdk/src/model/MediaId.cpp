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



#include "CppRestOpenAPIClient/model/MediaId.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



MediaId::MediaId()
{
    m_MediaId = utility::conversions::to_string_t("");
    m_MediaIdIsSet = false;
}

MediaId::~MediaId()
{
}

void MediaId::validate()
{
    // TODO: implement validation
}

web::json::value MediaId::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_MediaIdIsSet)
    {
        val[utility::conversions::to_string_t(U("mediaId"))] = ModelBase::toJson(m_MediaId);
    }

    return val;
}

bool MediaId::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("mediaId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("mediaId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setMediaId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMediaId);
            setMediaId(refVal_setMediaId);
        }
    }
    return ok;
}

void MediaId::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_MediaIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("mediaId")), m_MediaId));
    }
}

bool MediaId::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("mediaId"))))
    {
        utility::string_t refVal_setMediaId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("mediaId"))), refVal_setMediaId );
        setMediaId(refVal_setMediaId);
    }
    return ok;
}

utility::string_t MediaId::getMediaId() const
{
    return m_MediaId;
}

void MediaId::setMediaId(const utility::string_t& value)
{
    m_MediaId = value;
    m_MediaIdIsSet = true;
}

bool MediaId::mediaIdIsSet() const
{
    return m_MediaIdIsSet;
}

void MediaId::unsetMediaId()
{
    m_MediaIdIsSet = false;
}
}
}
}
}


