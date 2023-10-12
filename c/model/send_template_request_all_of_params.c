#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "send_template_request_all_of_params.h"



send_template_request_all_of_params_t *send_template_request_all_of_params_create(
    char *_default,
    send_template_request_all_of_currency_t *currency,
    send_template_request_all_of_date_time_t *date_time
    ) {
    send_template_request_all_of_params_t *send_template_request_all_of_params_local_var = malloc(sizeof(send_template_request_all_of_params_t));
    if (!send_template_request_all_of_params_local_var) {
        return NULL;
    }
    send_template_request_all_of_params_local_var->_default = _default;
    send_template_request_all_of_params_local_var->currency = currency;
    send_template_request_all_of_params_local_var->date_time = date_time;

    return send_template_request_all_of_params_local_var;
}


void send_template_request_all_of_params_free(send_template_request_all_of_params_t *send_template_request_all_of_params) {
    if(NULL == send_template_request_all_of_params){
        return ;
    }
    listEntry_t *listEntry;
    if (send_template_request_all_of_params->_default) {
        free(send_template_request_all_of_params->_default);
        send_template_request_all_of_params->_default = NULL;
    }
    if (send_template_request_all_of_params->currency) {
        send_template_request_all_of_currency_free(send_template_request_all_of_params->currency);
        send_template_request_all_of_params->currency = NULL;
    }
    if (send_template_request_all_of_params->date_time) {
        send_template_request_all_of_date_time_free(send_template_request_all_of_params->date_time);
        send_template_request_all_of_params->date_time = NULL;
    }
    free(send_template_request_all_of_params);
}

cJSON *send_template_request_all_of_params_convertToJSON(send_template_request_all_of_params_t *send_template_request_all_of_params) {
    cJSON *item = cJSON_CreateObject();

    // send_template_request_all_of_params->_default
    if(send_template_request_all_of_params->_default) {
    if(cJSON_AddStringToObject(item, "default", send_template_request_all_of_params->_default) == NULL) {
    goto fail; //String
    }
    }


    // send_template_request_all_of_params->currency
    if(send_template_request_all_of_params->currency) {
    cJSON *currency_local_JSON = send_template_request_all_of_currency_convertToJSON(send_template_request_all_of_params->currency);
    if(currency_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "currency", currency_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // send_template_request_all_of_params->date_time
    if(send_template_request_all_of_params->date_time) {
    cJSON *date_time_local_JSON = send_template_request_all_of_date_time_convertToJSON(send_template_request_all_of_params->date_time);
    if(date_time_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "date_time", date_time_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

send_template_request_all_of_params_t *send_template_request_all_of_params_parseFromJSON(cJSON *send_template_request_all_of_paramsJSON){

    send_template_request_all_of_params_t *send_template_request_all_of_params_local_var = NULL;

    // define the local variable for send_template_request_all_of_params->currency
    send_template_request_all_of_currency_t *currency_local_nonprim = NULL;

    // define the local variable for send_template_request_all_of_params->date_time
    send_template_request_all_of_date_time_t *date_time_local_nonprim = NULL;

    // send_template_request_all_of_params->_default
    cJSON *_default = cJSON_GetObjectItemCaseSensitive(send_template_request_all_of_paramsJSON, "default");
    if (_default) { 
    if(!cJSON_IsString(_default) && !cJSON_IsNull(_default))
    {
    goto end; //String
    }
    }

    // send_template_request_all_of_params->currency
    cJSON *currency = cJSON_GetObjectItemCaseSensitive(send_template_request_all_of_paramsJSON, "currency");
    if (currency) { 
    currency_local_nonprim = send_template_request_all_of_currency_parseFromJSON(currency); //nonprimitive
    }

    // send_template_request_all_of_params->date_time
    cJSON *date_time = cJSON_GetObjectItemCaseSensitive(send_template_request_all_of_paramsJSON, "date_time");
    if (date_time) { 
    date_time_local_nonprim = send_template_request_all_of_date_time_parseFromJSON(date_time); //nonprimitive
    }


    send_template_request_all_of_params_local_var = send_template_request_all_of_params_create (
        _default && !cJSON_IsNull(_default) ? strdup(_default->valuestring) : NULL,
        currency ? currency_local_nonprim : NULL,
        date_time ? date_time_local_nonprim : NULL
        );

    return send_template_request_all_of_params_local_var;
end:
    if (currency_local_nonprim) {
        send_template_request_all_of_currency_free(currency_local_nonprim);
        currency_local_nonprim = NULL;
    }
    if (date_time_local_nonprim) {
        send_template_request_all_of_date_time_free(date_time_local_nonprim);
        date_time_local_nonprim = NULL;
    }
    return NULL;

}
