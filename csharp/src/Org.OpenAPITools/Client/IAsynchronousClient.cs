/*
 * one_msg_waba_sdk
 *
 * [1MSG.IO](https://1msg.io/) is the perfect WhatsApp management tool for your business. With us you get full access to the official Whatsapp API/webhooks.  Every API request must contain an Authorize HTTP header with a token.  This is your channel token, which can be found in your channel project on your profile page. Please do not give the token to anyone or post it publicly.  The authorization token must be added to each request in the GET parameter 'token' and always passed to query string (?token={your_token}). Parameters in GET queries pass query string. Parameters in POST requests — through the JSON-encoded request body.   All 'send' methods (except /sendTemplate) will only work when the dialog session with the user is open. Some of our solutions simplify and avoid such limitations, but we urge you to pay more attention to this detail
 *
 * The version of the OpenAPI document: 2.39.0
 * Contact: hello@1msg.io
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */


using System;
using System.Threading.Tasks;

namespace Org.OpenAPITools.Client
{
    /// <summary>
    /// Contract for Asynchronous RESTful API interactions.
    ///
    /// This interface allows consumers to provide a custom API accessor client.
    /// </summary>
    public interface IAsynchronousClient
    {
        /// <summary>
        /// Executes a non-blocking call to some <paramref name="path"/> using the GET http verb.
        /// </summary>
        /// <param name="path">The relative path to invoke.</param>
        /// <param name="options">The request parameters to pass along to the client.</param>
        /// <param name="configuration">Per-request configurable settings.</param>
        /// <param name="cancellationToken">Cancellation Token to cancel the request.</param>
        /// <typeparam name="T">The return type.</typeparam>
        /// <returns>A task eventually representing the response data, decorated with <see cref="ApiResponse{T}"/></returns>
        Task<ApiResponse<T>> GetAsync<T>(string path, RequestOptions options, IReadableConfiguration configuration = null, System.Threading.CancellationToken cancellationToken = default(System.Threading.CancellationToken));

        /// <summary>
        /// Executes a non-blocking call to some <paramref name="path"/> using the POST http verb.
        /// </summary>
        /// <param name="path">The relative path to invoke.</param>
        /// <param name="options">The request parameters to pass along to the client.</param>
        /// <param name="configuration">Per-request configurable settings.</param>
        /// <param name="cancellationToken">Cancellation Token to cancel the request.</param>
        /// <typeparam name="T">The return type.</typeparam>
        /// <returns>A task eventually representing the response data, decorated with <see cref="ApiResponse{T}"/></returns>
        Task<ApiResponse<T>> PostAsync<T>(string path, RequestOptions options, IReadableConfiguration configuration = null, System.Threading.CancellationToken cancellationToken = default(System.Threading.CancellationToken));

        /// <summary>
        /// Executes a non-blocking call to some <paramref name="path"/> using the PUT http verb.
        /// </summary>
        /// <param name="path">The relative path to invoke.</param>
        /// <param name="options">The request parameters to pass along to the client.</param>
        /// <param name="configuration">Per-request configurable settings.</param>
        /// <param name="cancellationToken">Cancellation Token to cancel the request.</param>
        /// <typeparam name="T">The return type.</typeparam>
        /// <returns>A task eventually representing the response data, decorated with <see cref="ApiResponse{T}"/></returns>
        Task<ApiResponse<T>> PutAsync<T>(string path, RequestOptions options, IReadableConfiguration configuration = null, System.Threading.CancellationToken cancellationToken = default(System.Threading.CancellationToken));

        /// <summary>
        /// Executes a non-blocking call to some <paramref name="path"/> using the DELETE http verb.
        /// </summary>
        /// <param name="path">The relative path to invoke.</param>
        /// <param name="options">The request parameters to pass along to the client.</param>
        /// <param name="configuration">Per-request configurable settings.</param>
        /// <param name="cancellationToken">Cancellation Token to cancel the request.</param>
        /// <typeparam name="T">The return type.</typeparam>
        /// <returns>A task eventually representing the response data, decorated with <see cref="ApiResponse{T}"/></returns>
        Task<ApiResponse<T>> DeleteAsync<T>(string path, RequestOptions options, IReadableConfiguration configuration = null, System.Threading.CancellationToken cancellationToken = default(System.Threading.CancellationToken));

        /// <summary>
        /// Executes a non-blocking call to some <paramref name="path"/> using the HEAD http verb.
        /// </summary>
        /// <param name="path">The relative path to invoke.</param>
        /// <param name="options">The request parameters to pass along to the client.</param>
        /// <param name="configuration">Per-request configurable settings.</param>
        /// <param name="cancellationToken">Cancellation Token to cancel the request.</param>
        /// <typeparam name="T">The return type.</typeparam>
        /// <returns>A task eventually representing the response data, decorated with <see cref="ApiResponse{T}"/></returns>
        Task<ApiResponse<T>> HeadAsync<T>(string path, RequestOptions options, IReadableConfiguration configuration = null, System.Threading.CancellationToken cancellationToken = default(System.Threading.CancellationToken));

        /// <summary>
        /// Executes a non-blocking call to some <paramref name="path"/> using the OPTIONS http verb.
        /// </summary>
        /// <param name="path">The relative path to invoke.</param>
        /// <param name="options">The request parameters to pass along to the client.</param>
        /// <param name="configuration">Per-request configurable settings.</param>
        /// <param name="cancellationToken">Cancellation Token to cancel the request.</param>
        /// <typeparam name="T">The return type.</typeparam>
        /// <returns>A task eventually representing the response data, decorated with <see cref="ApiResponse{T}"/></returns>
        Task<ApiResponse<T>> OptionsAsync<T>(string path, RequestOptions options, IReadableConfiguration configuration = null, System.Threading.CancellationToken cancellationToken = default(System.Threading.CancellationToken));

        /// <summary>
        /// Executes a non-blocking call to some <paramref name="path"/> using the PATCH http verb.
        /// </summary>
        /// <param name="path">The relative path to invoke.</param>
        /// <param name="options">The request parameters to pass along to the client.</param>
        /// <param name="configuration">Per-request configurable settings.</param>
        /// <param name="cancellationToken">Cancellation Token to cancel the request.</param>
        /// <typeparam name="T">The return type.</typeparam>
        /// <returns>A task eventually representing the response data, decorated with <see cref="ApiResponse{T}"/></returns>
        Task<ApiResponse<T>> PatchAsync<T>(string path, RequestOptions options, IReadableConfiguration configuration = null, System.Threading.CancellationToken cancellationToken = default(System.Threading.CancellationToken));
    }
}
