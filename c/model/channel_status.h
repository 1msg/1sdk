/*
 * channel_status.h
 *
 * 
 */

#ifndef _channel_status_H_
#define _channel_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct channel_status_t channel_status_t;


// Enum STATUS for channel_status

typedef enum  { one_msg_waba_sdk_channel_status_STATUS_NULL = 0, one_msg_waba_sdk_channel_status_STATUS_connected, one_msg_waba_sdk_channel_status_STATUS_connecting, one_msg_waba_sdk_channel_status_STATUS_disconnected, one_msg_waba_sdk_channel_status_STATUS_uninitialized, one_msg_waba_sdk_channel_status_STATUS_unregistered } one_msg_waba_sdk_channel_status_STATUS_e;

char* channel_status_status_ToString(one_msg_waba_sdk_channel_status_STATUS_e status);

one_msg_waba_sdk_channel_status_STATUS_e channel_status_status_FromString(char* status);



typedef struct channel_status_t {
    one_msg_waba_sdk_channel_status_STATUS_e status; //enum

} channel_status_t;

channel_status_t *channel_status_create(
    one_msg_waba_sdk_channel_status_STATUS_e status
);

void channel_status_free(channel_status_t *channel_status);

channel_status_t *channel_status_parseFromJSON(cJSON *channel_statusJSON);

cJSON *channel_status_convertToJSON(channel_status_t *channel_status);

#endif /* _channel_status_H_ */

