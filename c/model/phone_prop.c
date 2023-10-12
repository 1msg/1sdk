#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "phone_prop.h"



phone_prop_t *phone_prop_create(
    int phone
    ) {
    phone_prop_t *phone_prop_local_var = malloc(sizeof(phone_prop_t));
    if (!phone_prop_local_var) {
        return NULL;
    }
    phone_prop_local_var->phone = phone;

    return phone_prop_local_var;
}


void phone_prop_free(phone_prop_t *phone_prop) {
    if(NULL == phone_prop){
        return ;
    }
    listEntry_t *listEntry;
    free(phone_prop);
}

cJSON *phone_prop_convertToJSON(phone_prop_t *phone_prop) {
    cJSON *item = cJSON_CreateObject();

    // phone_prop->phone
    if(phone_prop->phone) {
    if(cJSON_AddNumberToObject(item, "phone", phone_prop->phone) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

phone_prop_t *phone_prop_parseFromJSON(cJSON *phone_propJSON){

    phone_prop_t *phone_prop_local_var = NULL;

    // phone_prop->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(phone_propJSON, "phone");
    if (phone) { 
    if(!cJSON_IsNumber(phone))
    {
    goto end; //Numeric
    }
    }


    phone_prop_local_var = phone_prop_create (
        phone ? phone->valuedouble : 0
        );

    return phone_prop_local_var;
end:
    return NULL;

}
