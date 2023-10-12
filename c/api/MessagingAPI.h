#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/get_me_401_response.h"
#include "../model/get_messages.h"
#include "../model/read_message_request.h"
#include "../model/send_contact_request.h"
#include "../model/send_file_request.h"
#include "../model/send_list_request.h"
#include "../model/send_location_request.h"
#include "../model/send_message_request.h"
#include "../model/send_message_status.h"
#include "../model/set_me.h"


// Get messages list
//
// 
//
get_messages_t*
MessagingAPI_messagesList(apiClient_t *apiClient, int last , int lastMessageNumber , int firstMessageNumber , int limit , char * chatId , int min_time , int max_time , char * msgId );


// Mark message as read
//
// 
//
set_me_t*
MessagingAPI_readMessage(apiClient_t *apiClient, read_message_request_t * read_message_request );


// Send a Contact
//
// Send a contact to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.
//
send_message_status_t*
MessagingAPI_sendContact(apiClient_t *apiClient, send_contact_request_t * send_contact_request );


// Send a File
//
// Send a file to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.
//
send_message_status_t*
MessagingAPI_sendFile(apiClient_t *apiClient, send_file_request_t * send_file_request );


// Send List Message
//
// Send Interactive List Message to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.
//
send_message_status_t*
MessagingAPI_sendList(apiClient_t *apiClient, send_list_request_t * send_list_request );


// Send a Location
//
// Send a location to an existing chat. (Only if the dialogue has an Open Session). Only one of two parameters is needed to determine the destination - chatId or phone.
//
send_message_status_t*
MessagingAPI_sendLocation(apiClient_t *apiClient, send_location_request_t * send_location_request );


// Send a Message
//
// Send a message to an existing chat. (Only if the dialogue has an Open Session). The message will be added to the queue for sending and delivered even if the phone is disconnected from the Internet or authorization is not passed.  Only one of two parameters is needed to determine the destination - chatId or phone.
//
send_message_status_t*
MessagingAPI_sendMessage(apiClient_t *apiClient, send_message_request_t * send_message_request );


