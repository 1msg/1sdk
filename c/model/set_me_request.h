/*
 * set_me_request.h
 *
 * 
 */

#ifndef _set_me_request_H_
#define _set_me_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct set_me_request_t set_me_request_t;


// Enum VERTICAL for set_me_request

typedef enum  { one_msg_waba_sdk_set_me_request_VERTICAL_NULL = 0, one_msg_waba_sdk_set_me_request_VERTICAL_Automotive, one_msg_waba_sdk_set_me_request_VERTICAL_Beauty, Spa and Salon, one_msg_waba_sdk_set_me_request_VERTICAL_Clothing and Apparel, one_msg_waba_sdk_set_me_request_VERTICAL_Education, one_msg_waba_sdk_set_me_request_VERTICAL_Entertainment, one_msg_waba_sdk_set_me_request_VERTICAL_Event Planning and Service, one_msg_waba_sdk_set_me_request_VERTICAL_Finance and Banking, one_msg_waba_sdk_set_me_request_VERTICAL_Food and Grocery, one_msg_waba_sdk_set_me_request_VERTICAL_Public Service, one_msg_waba_sdk_set_me_request_VERTICAL_Hotel and Lodging, one_msg_waba_sdk_set_me_request_VERTICAL_Medical and Health, one_msg_waba_sdk_set_me_request_VERTICAL_Non_profit, one_msg_waba_sdk_set_me_request_VERTICAL_Professional Services, one_msg_waba_sdk_set_me_request_VERTICAL_Shopping and Retail, one_msg_waba_sdk_set_me_request_VERTICAL_Travel and Transportation, one_msg_waba_sdk_set_me_request_VERTICAL_Restaurant, one_msg_waba_sdk_set_me_request_VERTICAL_Other, one_msg_waba_sdk_set_me_request_VERTICAL_ } one_msg_waba_sdk_set_me_request_VERTICAL_e;

char* set_me_request_vertical_ToString(one_msg_waba_sdk_set_me_request_VERTICAL_e vertical);

one_msg_waba_sdk_set_me_request_VERTICAL_e set_me_request_vertical_FromString(char* vertical);



typedef struct set_me_request_t {
    char *about; // string
    char *address; // string
    char *description; // string
    char *email; // string
    char *phone; // string
    one_msg_waba_sdk_set_me_request_VERTICAL_e vertical; //enum
    char *photo; // string

} set_me_request_t;

set_me_request_t *set_me_request_create(
    char *about,
    char *address,
    char *description,
    char *email,
    char *phone,
    one_msg_waba_sdk_set_me_request_VERTICAL_e vertical,
    char *photo
);

void set_me_request_free(set_me_request_t *set_me_request);

set_me_request_t *set_me_request_parseFromJSON(cJSON *set_me_requestJSON);

cJSON *set_me_request_convertToJSON(set_me_request_t *set_me_request);

#endif /* _set_me_request_H_ */

