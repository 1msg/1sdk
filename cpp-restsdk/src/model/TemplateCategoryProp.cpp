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



#include "CppRestOpenAPIClient/model/TemplateCategoryProp.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


namespace
{
using EnumUnderlyingType = utility::string_t;

TemplateCategoryProp::eTemplateCategoryProp toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("MARKETING")))
        return TemplateCategoryProp::eTemplateCategoryProp::TemplateCategoryProp_MARKETING;
    if (val == utility::conversions::to_string_t(U("TRANSACTIONAL")))
        return TemplateCategoryProp::eTemplateCategoryProp::TemplateCategoryProp_TRANSACTIONAL;
    if (val == utility::conversions::to_string_t(U("OTP")))
        return TemplateCategoryProp::eTemplateCategoryProp::TemplateCategoryProp_OTP;
    return {};
}

EnumUnderlyingType fromEnum(TemplateCategoryProp::eTemplateCategoryProp e)
{
    switch (e)
    {
    case TemplateCategoryProp::eTemplateCategoryProp::TemplateCategoryProp_MARKETING:
        return U("MARKETING");
    case TemplateCategoryProp::eTemplateCategoryProp::TemplateCategoryProp_TRANSACTIONAL:
        return U("TRANSACTIONAL");
    case TemplateCategoryProp::eTemplateCategoryProp::TemplateCategoryProp_OTP:
        return U("OTP");
    default:
        break;
    }
    return {};
}
}

TemplateCategoryProp::TemplateCategoryProp()
{
}

TemplateCategoryProp::~TemplateCategoryProp()
{
}

void TemplateCategoryProp::validate()
{
    // TODO: implement validation
}

web::json::value TemplateCategoryProp::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool TemplateCategoryProp::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void TemplateCategoryProp::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool TemplateCategoryProp::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }
    {
        EnumUnderlyingType e;
        ok = ModelBase::fromHttpContent(multipart->getContent(namePrefix), e);
        if (ok)
        {
            auto v = toEnum(e);
            setValue(v);
        }
    }
    return ok;
}

TemplateCategoryProp::eTemplateCategoryProp TemplateCategoryProp::getValue() const
{
   return m_value;
}

void TemplateCategoryProp::setValue(TemplateCategoryProp::eTemplateCategoryProp const value)
{
   m_value = value;
}


}
}
}
}

