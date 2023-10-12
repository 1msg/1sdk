/*
 * me_components.h
 *
 * 
 */

#ifndef _me_components_H_
#define _me_components_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct me_components_t me_components_t;


// Enum VERTICAL for me_components

typedef enum  { one_msg_waba_sdk_me_components_VERTICAL_NULL = 0, one_msg_waba_sdk_me_components_VERTICAL_Automotive, one_msg_waba_sdk_me_components_VERTICAL_Beauty, Spa and Salon, one_msg_waba_sdk_me_components_VERTICAL_Clothing and Apparel, one_msg_waba_sdk_me_components_VERTICAL_Education, one_msg_waba_sdk_me_components_VERTICAL_Entertainment, one_msg_waba_sdk_me_components_VERTICAL_Event Planning and Service, one_msg_waba_sdk_me_components_VERTICAL_Finance and Banking, one_msg_waba_sdk_me_components_VERTICAL_Food and Grocery, one_msg_waba_sdk_me_components_VERTICAL_Public Service, one_msg_waba_sdk_me_components_VERTICAL_Hotel and Lodging, one_msg_waba_sdk_me_components_VERTICAL_Medical and Health, one_msg_waba_sdk_me_components_VERTICAL_Non_profit, one_msg_waba_sdk_me_components_VERTICAL_Professional Services, one_msg_waba_sdk_me_components_VERTICAL_Shopping and Retail, one_msg_waba_sdk_me_components_VERTICAL_Travel and Transportation, one_msg_waba_sdk_me_components_VERTICAL_Restaurant, one_msg_waba_sdk_me_components_VERTICAL_Other, one_msg_waba_sdk_me_components_VERTICAL_ } one_msg_waba_sdk_me_components_VERTICAL_e;

char* me_components_vertical_ToString(one_msg_waba_sdk_me_components_VERTICAL_e vertical);

one_msg_waba_sdk_me_components_VERTICAL_e me_components_vertical_FromString(char* vertical);



typedef struct me_components_t {
    char *about; // string
    char *address; // string
    char *description; // string
    char *email; // string
    char *phone; // string
    one_msg_waba_sdk_me_components_VERTICAL_e vertical; //enum
    char *photo; // string

} me_components_t;

me_components_t *me_components_create(
    char *about,
    char *address,
    char *description,
    char *email,
    char *phone,
    one_msg_waba_sdk_me_components_VERTICAL_e vertical,
    char *photo
);

void me_components_free(me_components_t *me_components);

me_components_t *me_components_parseFromJSON(cJSON *me_componentsJSON);

cJSON *me_components_convertToJSON(me_components_t *me_components);

#endif /* _me_components_H_ */

