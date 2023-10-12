/*
 * webhook_url.h
 *
 * 
 */

#ifndef _webhook_url_H_
#define _webhook_url_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_url_t webhook_url_t;




typedef struct webhook_url_t {
    char *webhook_url; // string

} webhook_url_t;

webhook_url_t *webhook_url_create(
    char *webhook_url
);

void webhook_url_free(webhook_url_t *webhook_url);

webhook_url_t *webhook_url_parseFromJSON(cJSON *webhook_urlJSON);

cJSON *webhook_url_convertToJSON(webhook_url_t *webhook_url);

#endif /* _webhook_url_H_ */

