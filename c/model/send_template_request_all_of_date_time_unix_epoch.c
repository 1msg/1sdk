#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "send_template_request_all_of_date_time_unix_epoch.h"



send_template_request_all_of_date_time_unix_epoch_t *send_template_request_all_of_date_time_unix_epoch_create(
    int timestamp
    ) {
    send_template_request_all_of_date_time_unix_epoch_t *send_template_request_all_of_date_time_unix_epoch_local_var = malloc(sizeof(send_template_request_all_of_date_time_unix_epoch_t));
    if (!send_template_request_all_of_date_time_unix_epoch_local_var) {
        return NULL;
    }
    send_template_request_all_of_date_time_unix_epoch_local_var->timestamp = timestamp;

    return send_template_request_all_of_date_time_unix_epoch_local_var;
}


void send_template_request_all_of_date_time_unix_epoch_free(send_template_request_all_of_date_time_unix_epoch_t *send_template_request_all_of_date_time_unix_epoch) {
    if(NULL == send_template_request_all_of_date_time_unix_epoch){
        return ;
    }
    listEntry_t *listEntry;
    free(send_template_request_all_of_date_time_unix_epoch);
}

cJSON *send_template_request_all_of_date_time_unix_epoch_convertToJSON(send_template_request_all_of_date_time_unix_epoch_t *send_template_request_all_of_date_time_unix_epoch) {
    cJSON *item = cJSON_CreateObject();

    // send_template_request_all_of_date_time_unix_epoch->timestamp
    if(send_template_request_all_of_date_time_unix_epoch->timestamp) {
    if(cJSON_AddNumberToObject(item, "timestamp", send_template_request_all_of_date_time_unix_epoch->timestamp) == NULL) {
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

send_template_request_all_of_date_time_unix_epoch_t *send_template_request_all_of_date_time_unix_epoch_parseFromJSON(cJSON *send_template_request_all_of_date_time_unix_epochJSON){

    send_template_request_all_of_date_time_unix_epoch_t *send_template_request_all_of_date_time_unix_epoch_local_var = NULL;

    // send_template_request_all_of_date_time_unix_epoch->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(send_template_request_all_of_date_time_unix_epochJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsNumber(timestamp))
    {
    goto end; //Numeric
    }
    }


    send_template_request_all_of_date_time_unix_epoch_local_var = send_template_request_all_of_date_time_unix_epoch_create (
        timestamp ? timestamp->valuedouble : 0
        );

    return send_template_request_all_of_date_time_unix_epoch_local_var;
end:
    return NULL;

}
