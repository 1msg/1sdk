/*
 * set_settings_200_response.h
 *
 * 
 */

#ifndef _set_settings_200_response_H_
#define _set_settings_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct set_settings_200_response_t set_settings_200_response_t;

#include "set_settings_200_response_all_of_update.h"



typedef struct set_settings_200_response_t {
    char *webhook_url; // string
    struct set_settings_200_response_all_of_update_t *update; //model

} set_settings_200_response_t;

set_settings_200_response_t *set_settings_200_response_create(
    char *webhook_url,
    set_settings_200_response_all_of_update_t *update
);

void set_settings_200_response_free(set_settings_200_response_t *set_settings_200_response);

set_settings_200_response_t *set_settings_200_response_parseFromJSON(cJSON *set_settings_200_responseJSON);

cJSON *set_settings_200_response_convertToJSON(set_settings_200_response_t *set_settings_200_response);

#endif /* _set_settings_200_response_H_ */

