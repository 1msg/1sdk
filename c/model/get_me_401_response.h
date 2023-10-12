/*
 * get_me_401_response.h
 *
 * 
 */

#ifndef _get_me_401_response_H_
#define _get_me_401_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct get_me_401_response_t get_me_401_response_t;




typedef struct get_me_401_response_t {
    char *error; // string

} get_me_401_response_t;

get_me_401_response_t *get_me_401_response_create(
    char *error
);

void get_me_401_response_free(get_me_401_response_t *get_me_401_response);

get_me_401_response_t *get_me_401_response_parseFromJSON(cJSON *get_me_401_responseJSON);

cJSON *get_me_401_response_convertToJSON(get_me_401_response_t *get_me_401_response);

#endif /* _get_me_401_response_H_ */

