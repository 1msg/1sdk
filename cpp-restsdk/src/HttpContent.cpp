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

#include "CppRestOpenAPIClient/HttpContent.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

HttpContent::HttpContent()
{
}

HttpContent::~HttpContent()
{
}

utility::string_t HttpContent::getContentDisposition() const
{
    return m_ContentDisposition;
}

void HttpContent::setContentDisposition( const utility::string_t & value )
{
    m_ContentDisposition = value;
}

utility::string_t HttpContent::getName() const
{
    return m_Name;
}

void HttpContent::setName( const utility::string_t & value )
{
    m_Name = value;
}

utility::string_t HttpContent::getFileName() const
{
    return m_FileName;
}

void HttpContent::setFileName( const utility::string_t & value )
{
    m_FileName = value;
}

utility::string_t HttpContent::getContentType() const
{
    return m_ContentType;
}

void HttpContent::setContentType( const utility::string_t & value )
{
    m_ContentType = value;
}

std::shared_ptr<std::istream> HttpContent::getData() const
{
    return m_Data;
}

void HttpContent::setData( std::shared_ptr<std::istream> value )
{
    m_Data = value;
}

void HttpContent::writeTo( std::ostream& stream )
{
    m_Data->seekg( 0, m_Data->beg );
    stream << m_Data->rdbuf();
}

}
}
}
}
