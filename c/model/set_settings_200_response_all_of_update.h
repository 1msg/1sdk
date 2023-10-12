/*
 * set_settings_200_response_all_of_update.h
 *
 * 
 */

#ifndef _set_settings_200_response_all_of_update_H_
#define _set_settings_200_response_all_of_update_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct set_settings_200_response_all_of_update_t set_settings_200_response_all_of_update_t;




typedef struct set_settings_200_response_all_of_update_t {
    char *webhook_url; // string

} set_settings_200_response_all_of_update_t;

set_settings_200_response_all_of_update_t *set_settings_200_response_all_of_update_create(
    char *webhook_url
);

void set_settings_200_response_all_of_update_free(set_settings_200_response_all_of_update_t *set_settings_200_response_all_of_update);

set_settings_200_response_all_of_update_t *set_settings_200_response_all_of_update_parseFromJSON(cJSON *set_settings_200_response_all_of_updateJSON);

cJSON *set_settings_200_response_all_of_update_convertToJSON(set_settings_200_response_all_of_update_t *set_settings_200_response_all_of_update);

#endif /* _set_settings_200_response_all_of_update_H_ */

