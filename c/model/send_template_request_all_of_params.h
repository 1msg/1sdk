/*
 * send_template_request_all_of_params.h
 *
 * 
 */

#ifndef _send_template_request_all_of_params_H_
#define _send_template_request_all_of_params_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct send_template_request_all_of_params_t send_template_request_all_of_params_t;

#include "send_template_request_all_of_currency.h"
#include "send_template_request_all_of_date_time.h"



typedef struct send_template_request_all_of_params_t {
    char *_default; // string
    struct send_template_request_all_of_currency_t *currency; //model
    struct send_template_request_all_of_date_time_t *date_time; //model

} send_template_request_all_of_params_t;

send_template_request_all_of_params_t *send_template_request_all_of_params_create(
    char *_default,
    send_template_request_all_of_currency_t *currency,
    send_template_request_all_of_date_time_t *date_time
);

void send_template_request_all_of_params_free(send_template_request_all_of_params_t *send_template_request_all_of_params);

send_template_request_all_of_params_t *send_template_request_all_of_params_parseFromJSON(cJSON *send_template_request_all_of_paramsJSON);

cJSON *send_template_request_all_of_params_convertToJSON(send_template_request_all_of_params_t *send_template_request_all_of_params);

#endif /* _send_template_request_all_of_params_H_ */

