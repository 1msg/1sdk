/*
 * send_template_request_all_of_date_time_unix_epoch.h
 *
 * 
 */

#ifndef _send_template_request_all_of_date_time_unix_epoch_H_
#define _send_template_request_all_of_date_time_unix_epoch_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct send_template_request_all_of_date_time_unix_epoch_t send_template_request_all_of_date_time_unix_epoch_t;




typedef struct send_template_request_all_of_date_time_unix_epoch_t {
    int timestamp; //numeric

} send_template_request_all_of_date_time_unix_epoch_t;

send_template_request_all_of_date_time_unix_epoch_t *send_template_request_all_of_date_time_unix_epoch_create(
    int timestamp
);

void send_template_request_all_of_date_time_unix_epoch_free(send_template_request_all_of_date_time_unix_epoch_t *send_template_request_all_of_date_time_unix_epoch);

send_template_request_all_of_date_time_unix_epoch_t *send_template_request_all_of_date_time_unix_epoch_parseFromJSON(cJSON *send_template_request_all_of_date_time_unix_epochJSON);

cJSON *send_template_request_all_of_date_time_unix_epoch_convertToJSON(send_template_request_all_of_date_time_unix_epoch_t *send_template_request_all_of_date_time_unix_epoch);

#endif /* _send_template_request_all_of_date_time_unix_epoch_H_ */

