/*
 * send_list_request_all_of_rows.h
 *
 * 
 */

#ifndef _send_list_request_all_of_rows_H_
#define _send_list_request_all_of_rows_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct send_list_request_all_of_rows_t send_list_request_all_of_rows_t;




typedef struct send_list_request_all_of_rows_t {
    char *id; // string
    char *title; // string
    char *description; // string

} send_list_request_all_of_rows_t;

send_list_request_all_of_rows_t *send_list_request_all_of_rows_create(
    char *id,
    char *title,
    char *description
);

void send_list_request_all_of_rows_free(send_list_request_all_of_rows_t *send_list_request_all_of_rows);

send_list_request_all_of_rows_t *send_list_request_all_of_rows_parseFromJSON(cJSON *send_list_request_all_of_rowsJSON);

cJSON *send_list_request_all_of_rows_convertToJSON(send_list_request_all_of_rows_t *send_list_request_all_of_rows);

#endif /* _send_list_request_all_of_rows_H_ */

