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



#include "CppRestOpenAPIClient/model/GetMessages_messages_inner.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



GetMessages_messages_inner::GetMessages_messages_inner()
{
    m_MessageNumber = 0;
    m_MessageNumberIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Body = utility::conversions::to_string_t("");
    m_BodyIsSet = false;
    m_FromMe = false;
    m_FromMeIsSet = false;
    m_Self = 0;
    m_SelfIsSet = false;
    m_IsForwarded = 0;
    m_IsForwardedIsSet = false;
    m_Author = utility::conversions::to_string_t("");
    m_AuthorIsSet = false;
    m_Time = 0;
    m_TimeIsSet = false;
    m_ChatId = utility::conversions::to_string_t("");
    m_ChatIdIsSet = false;
    m_Type = utility::conversions::to_string_t("");
    m_TypeIsSet = false;
    m_SenderName = utility::conversions::to_string_t("");
    m_SenderNameIsSet = false;
    m_Caption = utility::conversions::to_string_t("");
    m_CaptionIsSet = false;
    m_QuotedMsgId = utility::conversions::to_string_t("");
    m_QuotedMsgIdIsSet = false;
    m_MetadataIsSet = false;
    m_ChatName = utility::conversions::to_string_t("");
    m_ChatNameIsSet = false;
}

GetMessages_messages_inner::~GetMessages_messages_inner()
{
}

void GetMessages_messages_inner::validate()
{
    // TODO: implement validation
}

web::json::value GetMessages_messages_inner::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_MessageNumberIsSet)
    {
        val[utility::conversions::to_string_t(U("messageNumber"))] = ModelBase::toJson(m_MessageNumber);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_BodyIsSet)
    {
        val[utility::conversions::to_string_t(U("body"))] = ModelBase::toJson(m_Body);
    }
    if(m_FromMeIsSet)
    {
        val[utility::conversions::to_string_t(U("fromMe"))] = ModelBase::toJson(m_FromMe);
    }
    if(m_SelfIsSet)
    {
        val[utility::conversions::to_string_t(U("self"))] = ModelBase::toJson(m_Self);
    }
    if(m_IsForwardedIsSet)
    {
        val[utility::conversions::to_string_t(U("isForwarded"))] = ModelBase::toJson(m_IsForwarded);
    }
    if(m_AuthorIsSet)
    {
        val[utility::conversions::to_string_t(U("author"))] = ModelBase::toJson(m_Author);
    }
    if(m_TimeIsSet)
    {
        val[utility::conversions::to_string_t(U("time"))] = ModelBase::toJson(m_Time);
    }
    if(m_ChatIdIsSet)
    {
        val[utility::conversions::to_string_t(U("chatId"))] = ModelBase::toJson(m_ChatId);
    }
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t(U("type"))] = ModelBase::toJson(m_Type);
    }
    if(m_SenderNameIsSet)
    {
        val[utility::conversions::to_string_t(U("senderName"))] = ModelBase::toJson(m_SenderName);
    }
    if(m_CaptionIsSet)
    {
        val[utility::conversions::to_string_t(U("caption"))] = ModelBase::toJson(m_Caption);
    }
    if(m_QuotedMsgIdIsSet)
    {
        val[utility::conversions::to_string_t(U("quotedMsgId"))] = ModelBase::toJson(m_QuotedMsgId);
    }
    if(m_MetadataIsSet)
    {
        val[utility::conversions::to_string_t(U("metadata"))] = ModelBase::toJson(m_Metadata);
    }
    if(m_ChatNameIsSet)
    {
        val[utility::conversions::to_string_t(U("chatName"))] = ModelBase::toJson(m_ChatName);
    }

    return val;
}

bool GetMessages_messages_inner::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("messageNumber"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("messageNumber")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setMessageNumber;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMessageNumber);
            setMessageNumber(refVal_setMessageNumber);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setId);
            setId(refVal_setId);
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
    if(val.has_field(utility::conversions::to_string_t(U("fromMe"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("fromMe")));
        if(!fieldValue.is_null())
        {
            bool refVal_setFromMe;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFromMe);
            setFromMe(refVal_setFromMe);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("self"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("self")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setSelf;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSelf);
            setSelf(refVal_setSelf);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("isForwarded"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("isForwarded")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setIsForwarded;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIsForwarded);
            setIsForwarded(refVal_setIsForwarded);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("author"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("author")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAuthor;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAuthor);
            setAuthor(refVal_setAuthor);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("time"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("time")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTime);
            setTime(refVal_setTime);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t(U("senderName"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("senderName")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSenderName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSenderName);
            setSenderName(refVal_setSenderName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("caption"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("caption")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCaption;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCaption);
            setCaption(refVal_setCaption);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("quotedMsgId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("quotedMsgId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setQuotedMsgId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setQuotedMsgId);
            setQuotedMsgId(refVal_setQuotedMsgId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("metadata"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("metadata")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_setMetadata;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMetadata);
            setMetadata(refVal_setMetadata);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("chatName"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("chatName")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setChatName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setChatName);
            setChatName(refVal_setChatName);
        }
    }
    return ok;
}

void GetMessages_messages_inner::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_MessageNumberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("messageNumber")), m_MessageNumber));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_BodyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("body")), m_Body));
    }
    if(m_FromMeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("fromMe")), m_FromMe));
    }
    if(m_SelfIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("self")), m_Self));
    }
    if(m_IsForwardedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("isForwarded")), m_IsForwarded));
    }
    if(m_AuthorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("author")), m_Author));
    }
    if(m_TimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("time")), m_Time));
    }
    if(m_ChatIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("chatId")), m_ChatId));
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("type")), m_Type));
    }
    if(m_SenderNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("senderName")), m_SenderName));
    }
    if(m_CaptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("caption")), m_Caption));
    }
    if(m_QuotedMsgIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("quotedMsgId")), m_QuotedMsgId));
    }
    if(m_MetadataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("metadata")), m_Metadata));
    }
    if(m_ChatNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("chatName")), m_ChatName));
    }
}

bool GetMessages_messages_inner::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("messageNumber"))))
    {
        int32_t refVal_setMessageNumber;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("messageNumber"))), refVal_setMessageNumber );
        setMessageNumber(refVal_setMessageNumber);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("body"))))
    {
        utility::string_t refVal_setBody;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("body"))), refVal_setBody );
        setBody(refVal_setBody);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("fromMe"))))
    {
        bool refVal_setFromMe;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("fromMe"))), refVal_setFromMe );
        setFromMe(refVal_setFromMe);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("self"))))
    {
        int32_t refVal_setSelf;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("self"))), refVal_setSelf );
        setSelf(refVal_setSelf);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("isForwarded"))))
    {
        int32_t refVal_setIsForwarded;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("isForwarded"))), refVal_setIsForwarded );
        setIsForwarded(refVal_setIsForwarded);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("author"))))
    {
        utility::string_t refVal_setAuthor;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("author"))), refVal_setAuthor );
        setAuthor(refVal_setAuthor);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("time"))))
    {
        int32_t refVal_setTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("time"))), refVal_setTime );
        setTime(refVal_setTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("chatId"))))
    {
        utility::string_t refVal_setChatId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("chatId"))), refVal_setChatId );
        setChatId(refVal_setChatId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("type"))))
    {
        utility::string_t refVal_setType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("type"))), refVal_setType );
        setType(refVal_setType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("senderName"))))
    {
        utility::string_t refVal_setSenderName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("senderName"))), refVal_setSenderName );
        setSenderName(refVal_setSenderName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("caption"))))
    {
        utility::string_t refVal_setCaption;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("caption"))), refVal_setCaption );
        setCaption(refVal_setCaption);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("quotedMsgId"))))
    {
        utility::string_t refVal_setQuotedMsgId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("quotedMsgId"))), refVal_setQuotedMsgId );
        setQuotedMsgId(refVal_setQuotedMsgId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("metadata"))))
    {
        std::shared_ptr<Object> refVal_setMetadata;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("metadata"))), refVal_setMetadata );
        setMetadata(refVal_setMetadata);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("chatName"))))
    {
        utility::string_t refVal_setChatName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("chatName"))), refVal_setChatName );
        setChatName(refVal_setChatName);
    }
    return ok;
}

int32_t GetMessages_messages_inner::getMessageNumber() const
{
    return m_MessageNumber;
}

void GetMessages_messages_inner::setMessageNumber(int32_t value)
{
    m_MessageNumber = value;
    m_MessageNumberIsSet = true;
}

bool GetMessages_messages_inner::messageNumberIsSet() const
{
    return m_MessageNumberIsSet;
}

void GetMessages_messages_inner::unsetMessageNumber()
{
    m_MessageNumberIsSet = false;
}
utility::string_t GetMessages_messages_inner::getId() const
{
    return m_Id;
}

void GetMessages_messages_inner::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool GetMessages_messages_inner::idIsSet() const
{
    return m_IdIsSet;
}

void GetMessages_messages_inner::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t GetMessages_messages_inner::getBody() const
{
    return m_Body;
}

void GetMessages_messages_inner::setBody(const utility::string_t& value)
{
    m_Body = value;
    m_BodyIsSet = true;
}

bool GetMessages_messages_inner::bodyIsSet() const
{
    return m_BodyIsSet;
}

void GetMessages_messages_inner::unsetBody()
{
    m_BodyIsSet = false;
}
bool GetMessages_messages_inner::isFromMe() const
{
    return m_FromMe;
}

void GetMessages_messages_inner::setFromMe(bool value)
{
    m_FromMe = value;
    m_FromMeIsSet = true;
}

bool GetMessages_messages_inner::fromMeIsSet() const
{
    return m_FromMeIsSet;
}

void GetMessages_messages_inner::unsetFromMe()
{
    m_FromMeIsSet = false;
}
int32_t GetMessages_messages_inner::getSelf() const
{
    return m_Self;
}

void GetMessages_messages_inner::setSelf(int32_t value)
{
    m_Self = value;
    m_SelfIsSet = true;
}

bool GetMessages_messages_inner::selfIsSet() const
{
    return m_SelfIsSet;
}

void GetMessages_messages_inner::unsetSelf()
{
    m_SelfIsSet = false;
}
int32_t GetMessages_messages_inner::getIsForwarded() const
{
    return m_IsForwarded;
}

void GetMessages_messages_inner::setIsForwarded(int32_t value)
{
    m_IsForwarded = value;
    m_IsForwardedIsSet = true;
}

bool GetMessages_messages_inner::isForwardedIsSet() const
{
    return m_IsForwardedIsSet;
}

void GetMessages_messages_inner::unsetIsForwarded()
{
    m_IsForwardedIsSet = false;
}
utility::string_t GetMessages_messages_inner::getAuthor() const
{
    return m_Author;
}

void GetMessages_messages_inner::setAuthor(const utility::string_t& value)
{
    m_Author = value;
    m_AuthorIsSet = true;
}

bool GetMessages_messages_inner::authorIsSet() const
{
    return m_AuthorIsSet;
}

void GetMessages_messages_inner::unsetAuthor()
{
    m_AuthorIsSet = false;
}
int32_t GetMessages_messages_inner::getTime() const
{
    return m_Time;
}

void GetMessages_messages_inner::setTime(int32_t value)
{
    m_Time = value;
    m_TimeIsSet = true;
}

bool GetMessages_messages_inner::timeIsSet() const
{
    return m_TimeIsSet;
}

void GetMessages_messages_inner::unsetTime()
{
    m_TimeIsSet = false;
}
utility::string_t GetMessages_messages_inner::getChatId() const
{
    return m_ChatId;
}

void GetMessages_messages_inner::setChatId(const utility::string_t& value)
{
    m_ChatId = value;
    m_ChatIdIsSet = true;
}

bool GetMessages_messages_inner::chatIdIsSet() const
{
    return m_ChatIdIsSet;
}

void GetMessages_messages_inner::unsetChatId()
{
    m_ChatIdIsSet = false;
}
utility::string_t GetMessages_messages_inner::getType() const
{
    return m_Type;
}

void GetMessages_messages_inner::setType(const utility::string_t& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}

bool GetMessages_messages_inner::typeIsSet() const
{
    return m_TypeIsSet;
}

void GetMessages_messages_inner::unsetType()
{
    m_TypeIsSet = false;
}
utility::string_t GetMessages_messages_inner::getSenderName() const
{
    return m_SenderName;
}

void GetMessages_messages_inner::setSenderName(const utility::string_t& value)
{
    m_SenderName = value;
    m_SenderNameIsSet = true;
}

bool GetMessages_messages_inner::senderNameIsSet() const
{
    return m_SenderNameIsSet;
}

void GetMessages_messages_inner::unsetSenderName()
{
    m_SenderNameIsSet = false;
}
utility::string_t GetMessages_messages_inner::getCaption() const
{
    return m_Caption;
}

void GetMessages_messages_inner::setCaption(const utility::string_t& value)
{
    m_Caption = value;
    m_CaptionIsSet = true;
}

bool GetMessages_messages_inner::captionIsSet() const
{
    return m_CaptionIsSet;
}

void GetMessages_messages_inner::unsetCaption()
{
    m_CaptionIsSet = false;
}
utility::string_t GetMessages_messages_inner::getQuotedMsgId() const
{
    return m_QuotedMsgId;
}

void GetMessages_messages_inner::setQuotedMsgId(const utility::string_t& value)
{
    m_QuotedMsgId = value;
    m_QuotedMsgIdIsSet = true;
}

bool GetMessages_messages_inner::quotedMsgIdIsSet() const
{
    return m_QuotedMsgIdIsSet;
}

void GetMessages_messages_inner::unsetQuotedMsgId()
{
    m_QuotedMsgIdIsSet = false;
}
std::shared_ptr<Object> GetMessages_messages_inner::getMetadata() const
{
    return m_Metadata;
}

void GetMessages_messages_inner::setMetadata(const std::shared_ptr<Object>& value)
{
    m_Metadata = value;
    m_MetadataIsSet = true;
}

bool GetMessages_messages_inner::metadataIsSet() const
{
    return m_MetadataIsSet;
}

void GetMessages_messages_inner::unsetMetadata()
{
    m_MetadataIsSet = false;
}
utility::string_t GetMessages_messages_inner::getChatName() const
{
    return m_ChatName;
}

void GetMessages_messages_inner::setChatName(const utility::string_t& value)
{
    m_ChatName = value;
    m_ChatNameIsSet = true;
}

bool GetMessages_messages_inner::chatNameIsSet() const
{
    return m_ChatNameIsSet;
}

void GetMessages_messages_inner::unsetChatName()
{
    m_ChatNameIsSet = false;
}
}
}
}
}


