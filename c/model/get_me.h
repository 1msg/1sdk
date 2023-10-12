/*
 * get_me.h
 *
 * 
 */

#ifndef _get_me_H_
#define _get_me_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct get_me_t get_me_t;


// Enum VERTICAL for get_me

typedef enum  { one_msg_waba_sdk_get_me_VERTICAL_NULL = 0, one_msg_waba_sdk_get_me_VERTICAL_Automotive, one_msg_waba_sdk_get_me_VERTICAL_Beauty, Spa and Salon, one_msg_waba_sdk_get_me_VERTICAL_Clothing and Apparel, one_msg_waba_sdk_get_me_VERTICAL_Education, one_msg_waba_sdk_get_me_VERTICAL_Entertainment, one_msg_waba_sdk_get_me_VERTICAL_Event Planning and Service, one_msg_waba_sdk_get_me_VERTICAL_Finance and Banking, one_msg_waba_sdk_get_me_VERTICAL_Food and Grocery, one_msg_waba_sdk_get_me_VERTICAL_Public Service, one_msg_waba_sdk_get_me_VERTICAL_Hotel and Lodging, one_msg_waba_sdk_get_me_VERTICAL_Medical and Health, one_msg_waba_sdk_get_me_VERTICAL_Non_profit, one_msg_waba_sdk_get_me_VERTICAL_Professional Services, one_msg_waba_sdk_get_me_VERTICAL_Shopping and Retail, one_msg_waba_sdk_get_me_VERTICAL_Travel and Transportation, one_msg_waba_sdk_get_me_VERTICAL_Restaurant, one_msg_waba_sdk_get_me_VERTICAL_Other, one_msg_waba_sdk_get_me_VERTICAL_ } one_msg_waba_sdk_get_me_VERTICAL_e;

char* get_me_vertical_ToString(one_msg_waba_sdk_get_me_VERTICAL_e vertical);

one_msg_waba_sdk_get_me_VERTICAL_e get_me_vertical_FromString(char* vertical);



typedef struct get_me_t {
    char *about; // string
    char *address; // string
    char *description; // string
    char *email; // string
    char *phone; // string
    one_msg_waba_sdk_get_me_VERTICAL_e vertical; //enum
    char *photo; // string

} get_me_t;

get_me_t *get_me_create(
    char *about,
    char *address,
    char *description,
    char *email,
    char *phone,
    one_msg_waba_sdk_get_me_VERTICAL_e vertical,
    char *photo
);

void get_me_free(get_me_t *get_me);

get_me_t *get_me_parseFromJSON(cJSON *get_meJSON);

cJSON *get_me_convertToJSON(get_me_t *get_me);

#endif /* _get_me_H_ */

