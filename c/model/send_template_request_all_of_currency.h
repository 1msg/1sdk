/*
 * send_template_request_all_of_currency.h
 *
 * 
 */

#ifndef _send_template_request_all_of_currency_H_
#define _send_template_request_all_of_currency_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct send_template_request_all_of_currency_t send_template_request_all_of_currency_t;




typedef struct send_template_request_all_of_currency_t {
    char *currency_code; // string
    int amount_1000; //numeric

} send_template_request_all_of_currency_t;

send_template_request_all_of_currency_t *send_template_request_all_of_currency_create(
    char *currency_code,
    int amount_1000
);

void send_template_request_all_of_currency_free(send_template_request_all_of_currency_t *send_template_request_all_of_currency);

send_template_request_all_of_currency_t *send_template_request_all_of_currency_parseFromJSON(cJSON *send_template_request_all_of_currencyJSON);

cJSON *send_template_request_all_of_currency_convertToJSON(send_template_request_all_of_currency_t *send_template_request_all_of_currency);

#endif /* _send_template_request_all_of_currency_H_ */

