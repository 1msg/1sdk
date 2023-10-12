/*
 * get_ip.h
 *
 * 
 */

#ifndef _get_ip_H_
#define _get_ip_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct get_ip_t get_ip_t;




typedef struct get_ip_t {
    char *result; // string

} get_ip_t;

get_ip_t *get_ip_create(
    char *result
);

void get_ip_free(get_ip_t *get_ip);

get_ip_t *get_ip_parseFromJSON(cJSON *get_ipJSON);

cJSON *get_ip_convertToJSON(get_ip_t *get_ip);

#endif /* _get_ip_H_ */

