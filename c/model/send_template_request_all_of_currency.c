#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "send_template_request_all_of_currency.h"



send_template_request_all_of_currency_t *send_template_request_all_of_currency_create(
    char *currency_code,
    int amount_1000
    ) {
    send_template_request_all_of_currency_t *send_template_request_all_of_currency_local_var = malloc(sizeof(send_template_request_all_of_currency_t));
    if (!send_template_request_all_of_currency_local_var) {
        return NULL;
    }
    send_template_request_all_of_currency_local_var->currency_code = currency_code;
    send_template_request_all_of_currency_local_var->amount_1000 = amount_1000;

    return send_template_request_all_of_currency_local_var;
}


void send_template_request_all_of_currency_free(send_template_request_all_of_currency_t *send_template_request_all_of_currency) {
    if(NULL == send_template_request_all_of_currency){
        return ;
    }
    listEntry_t *listEntry;
    if (send_template_request_all_of_currency->currency_code) {
        free(send_template_request_all_of_currency->currency_code);
        send_template_request_all_of_currency->currency_code = NULL;
    }
    free(send_template_request_all_of_currency);
}

cJSON *send_template_request_all_of_currency_convertToJSON(send_template_request_all_of_currency_t *send_template_request_all_of_currency) {
    cJSON *item = cJSON_CreateObject();

    // send_template_request_all_of_currency->currency_code
    if(send_template_request_all_of_currency->currency_code) {
    if(cJSON_AddStringToObject(item, "currency_code", send_template_request_all_of_currency->currency_code) == NULL) {
    goto fail; //String
    }
    }


    // send_template_request_all_of_currency->amount_1000
    if(send_template_request_all_of_currency->amount_1000) {
    if(cJSON_AddNumberToObject(item, "amount_1000", send_template_request_all_of_currency->amount_1000) == NULL) {
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

send_template_request_all_of_currency_t *send_template_request_all_of_currency_parseFromJSON(cJSON *send_template_request_all_of_currencyJSON){

    send_template_request_all_of_currency_t *send_template_request_all_of_currency_local_var = NULL;

    // send_template_request_all_of_currency->currency_code
    cJSON *currency_code = cJSON_GetObjectItemCaseSensitive(send_template_request_all_of_currencyJSON, "currency_code");
    if (currency_code) { 
    if(!cJSON_IsString(currency_code) && !cJSON_IsNull(currency_code))
    {
    goto end; //String
    }
    }

    // send_template_request_all_of_currency->amount_1000
    cJSON *amount_1000 = cJSON_GetObjectItemCaseSensitive(send_template_request_all_of_currencyJSON, "amount_1000");
    if (amount_1000) { 
    if(!cJSON_IsNumber(amount_1000))
    {
    goto end; //Numeric
    }
    }


    send_template_request_all_of_currency_local_var = send_template_request_all_of_currency_create (
        currency_code && !cJSON_IsNull(currency_code) ? strdup(currency_code->valuestring) : NULL,
        amount_1000 ? amount_1000->valuedouble : 0
        );

    return send_template_request_all_of_currency_local_var;
end:
    return NULL;

}
