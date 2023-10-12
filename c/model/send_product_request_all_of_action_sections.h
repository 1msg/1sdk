/*
 * send_product_request_all_of_action_sections.h
 *
 * 
 */

#ifndef _send_product_request_all_of_action_sections_H_
#define _send_product_request_all_of_action_sections_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct send_product_request_all_of_action_sections_t send_product_request_all_of_action_sections_t;

#include "send_product_request_all_of_action_product_items.h"



typedef struct send_product_request_all_of_action_sections_t {
    char *title; // string
    list_t *product_items; //nonprimitive container

} send_product_request_all_of_action_sections_t;

send_product_request_all_of_action_sections_t *send_product_request_all_of_action_sections_create(
    char *title,
    list_t *product_items
);

void send_product_request_all_of_action_sections_free(send_product_request_all_of_action_sections_t *send_product_request_all_of_action_sections);

send_product_request_all_of_action_sections_t *send_product_request_all_of_action_sections_parseFromJSON(cJSON *send_product_request_all_of_action_sectionsJSON);

cJSON *send_product_request_all_of_action_sections_convertToJSON(send_product_request_all_of_action_sections_t *send_product_request_all_of_action_sections);

#endif /* _send_product_request_all_of_action_sections_H_ */

