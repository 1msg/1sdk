/*
 * send_template_request_all_of_date_time.h
 *
 * 
 */

#ifndef _send_template_request_all_of_date_time_H_
#define _send_template_request_all_of_date_time_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct send_template_request_all_of_date_time_t send_template_request_all_of_date_time_t;

#include "send_template_request_all_of_date_time_component.h"
#include "send_template_request_all_of_date_time_unix_epoch.h"



typedef struct send_template_request_all_of_date_time_t {
    struct send_template_request_all_of_date_time_component_t *component; //model
    struct send_template_request_all_of_date_time_unix_epoch_t *unix_epoch; //model

} send_template_request_all_of_date_time_t;

send_template_request_all_of_date_time_t *send_template_request_all_of_date_time_create(
    send_template_request_all_of_date_time_component_t *component,
    send_template_request_all_of_date_time_unix_epoch_t *unix_epoch
);

void send_template_request_all_of_date_time_free(send_template_request_all_of_date_time_t *send_template_request_all_of_date_time);

send_template_request_all_of_date_time_t *send_template_request_all_of_date_time_parseFromJSON(cJSON *send_template_request_all_of_date_timeJSON);

cJSON *send_template_request_all_of_date_time_convertToJSON(send_template_request_all_of_date_time_t *send_template_request_all_of_date_time);

#endif /* _send_template_request_all_of_date_time_H_ */

