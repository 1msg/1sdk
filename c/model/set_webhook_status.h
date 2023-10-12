/*
 * set_webhook_status.h
 *
 * 
 */

#ifndef _set_webhook_status_H_
#define _set_webhook_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct set_webhook_status_t set_webhook_status_t;




typedef struct set_webhook_status_t {
    int set; //boolean
    char *message; // string

} set_webhook_status_t;

set_webhook_status_t *set_webhook_status_create(
    int set,
    char *message
);

void set_webhook_status_free(set_webhook_status_t *set_webhook_status);

set_webhook_status_t *set_webhook_status_parseFromJSON(cJSON *set_webhook_statusJSON);

cJSON *set_webhook_status_convertToJSON(set_webhook_status_t *set_webhook_status);

#endif /* _set_webhook_status_H_ */

