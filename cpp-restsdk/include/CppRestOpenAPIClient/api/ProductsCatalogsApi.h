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

/*
 * ProductsCatalogsApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_ProductsCatalogsApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_ProductsCatalogsApi_H_



#include "CppRestOpenAPIClient/ApiClient.h"

#include "CppRestOpenAPIClient/model/Commerce.h"
#include "CppRestOpenAPIClient/model/GetMe_401_response.h"
#include "CppRestOpenAPIClient/model/SendMessageStatus.h"
#include "CppRestOpenAPIClient/model/SendProductRequest.h"
#include "CppRestOpenAPIClient/model/SetCommerce.h"
#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  ProductsCatalogsApi 
{
public:

    explicit ProductsCatalogsApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~ProductsCatalogsApi();

    /// <summary>
    /// Send a Product
    /// </summary>
    /// <remarks>
    /// Send a single product or product list to a new or existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.  First, you need to upload your inventory to Facebook. You can use the API or Facebook’s Commerce Manager to do that. If you already have a Facebook catalog set up, we suggest that you leverage that catalog for WhatsApp commerce use cases.  **You can not send products to Business WhatsApp clients.**
    /// </remarks>
    /// <param name="sendProductRequest"></param>
    pplx::task<std::shared_ptr<SendMessageStatus>> sendProduct(
        std::shared_ptr<SendProductRequest> sendProductRequest
    ) const;
    /// <summary>
    /// Set Commerce Settings
    /// </summary>
    /// <remarks>
    /// **is_catalog_visible** - Set to true to show catalog storefront icon or false to hide it. **is_cart_enabled** - Set to true to enable cart or false to disable it.
    /// </remarks>
    /// <param name="commerce"></param>
    pplx::task<std::shared_ptr<SetCommerce>> setCommerce(
        std::shared_ptr<Commerce> commerce
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_ProductsCatalogsApi_H_ */

