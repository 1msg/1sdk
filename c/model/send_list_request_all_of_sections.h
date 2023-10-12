/*
 * send_list_request_all_of_sections.h
 *
 * 
 */

#ifndef _send_list_request_all_of_sections_H_
#define _send_list_request_all_of_sections_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct send_list_request_all_of_sections_t send_list_request_all_of_sections_t;

#include "send_list_request_all_of_rows.h"



typedef struct send_list_request_all_of_sections_t {
    char *title; // string
    list_t *rows; //nonprimitive container

} send_list_request_all_of_sections_t;

send_list_request_all_of_sections_t *send_list_request_all_of_sections_create(
    char *title,
    list_t *rows
);

void send_list_request_all_of_sections_free(send_list_request_all_of_sections_t *send_list_request_all_of_sections);

send_list_request_all_of_sections_t *send_list_request_all_of_sections_parseFromJSON(cJSON *send_list_request_all_of_sectionsJSON);

cJSON *send_list_request_all_of_sections_convertToJSON(send_list_request_all_of_sections_t *send_list_request_all_of_sections);

#endif /* _send_list_request_all_of_sections_H_ */

