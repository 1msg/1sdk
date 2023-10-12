/*
 * settings.h
 *
 * 
 */

#ifndef _settings_H_
#define _settings_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct settings_t settings_t;




typedef struct settings_t {
    char *webhook_url; // string

} settings_t;

settings_t *settings_create(
    char *webhook_url
);

void settings_free(settings_t *settings);

settings_t *settings_parseFromJSON(cJSON *settingsJSON);

cJSON *settings_convertToJSON(settings_t *settings);

#endif /* _settings_H_ */

