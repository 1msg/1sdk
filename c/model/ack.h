/*
 * ack.h
 *
 * 
 */

#ifndef _ack_H_
#define _ack_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ack_t ack_t;


// Enum STATUS for ack

typedef enum  { one_msg_waba_sdk_ack_STATUS_NULL = 0, one_msg_waba_sdk_ack_STATUS_delivered, one_msg_waba_sdk_ack_STATUS_viewed, one_msg_waba_sdk_ack_STATUS_sent } one_msg_waba_sdk_ack_STATUS_e;

char* ack_status_ToString(one_msg_waba_sdk_ack_STATUS_e status);

one_msg_waba_sdk_ack_STATUS_e ack_status_FromString(char* status);



typedef struct ack_t {
    char *id; // string
    char *chat_id; // string
    one_msg_waba_sdk_ack_STATUS_e status; //enum

} ack_t;

ack_t *ack_create(
    char *id,
    char *chat_id,
    one_msg_waba_sdk_ack_STATUS_e status
);

void ack_free(ack_t *ack);

ack_t *ack_parseFromJSON(cJSON *ackJSON);

cJSON *ack_convertToJSON(ack_t *ack);

#endif /* _ack_H_ */

