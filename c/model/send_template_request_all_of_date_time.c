#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "send_template_request_all_of_date_time.h"



send_template_request_all_of_date_time_t *send_template_request_all_of_date_time_create(
    send_template_request_all_of_date_time_component_t *component,
    send_template_request_all_of_date_time_unix_epoch_t *unix_epoch
    ) {
    send_template_request_all_of_date_time_t *send_template_request_all_of_date_time_local_var = malloc(sizeof(send_template_request_all_of_date_time_t));
    if (!send_template_request_all_of_date_time_local_var) {
        return NULL;
    }
    send_template_request_all_of_date_time_local_var->component = component;
    send_template_request_all_of_date_time_local_var->unix_epoch = unix_epoch;

    return send_template_request_all_of_date_time_local_var;
}


void send_template_request_all_of_date_time_free(send_template_request_all_of_date_time_t *send_template_request_all_of_date_time) {
    if(NULL == send_template_request_all_of_date_time){
        return ;
    }
    listEntry_t *listEntry;
    if (send_template_request_all_of_date_time->component) {
        send_template_request_all_of_date_time_component_free(send_template_request_all_of_date_time->component);
        send_template_request_all_of_date_time->component = NULL;
    }
    if (send_template_request_all_of_date_time->unix_epoch) {
        send_template_request_all_of_date_time_unix_epoch_free(send_template_request_all_of_date_time->unix_epoch);
        send_template_request_all_of_date_time->unix_epoch = NULL;
    }
    free(send_template_request_all_of_date_time);
}

cJSON *send_template_request_all_of_date_time_convertToJSON(send_template_request_all_of_date_time_t *send_template_request_all_of_date_time) {
    cJSON *item = cJSON_CreateObject();

    // send_template_request_all_of_date_time->component
    if(send_template_request_all_of_date_time->component) {
    cJSON *component_local_JSON = send_template_request_all_of_date_time_component_convertToJSON(send_template_request_all_of_date_time->component);
    if(component_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "component", component_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // send_template_request_all_of_date_time->unix_epoch
    if(send_template_request_all_of_date_time->unix_epoch) {
    cJSON *unix_epoch_local_JSON = send_template_request_all_of_date_time_unix_epoch_convertToJSON(send_template_request_all_of_date_time->unix_epoch);
    if(unix_epoch_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "unix_epoch", unix_epoch_local_JSON);
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

send_template_request_all_of_date_time_t *send_template_request_all_of_date_time_parseFromJSON(cJSON *send_template_request_all_of_date_timeJSON){

    send_template_request_all_of_date_time_t *send_template_request_all_of_date_time_local_var = NULL;

    // define the local variable for send_template_request_all_of_date_time->component
    send_template_request_all_of_date_time_component_t *component_local_nonprim = NULL;

    // define the local variable for send_template_request_all_of_date_time->unix_epoch
    send_template_request_all_of_date_time_unix_epoch_t *unix_epoch_local_nonprim = NULL;

    // send_template_request_all_of_date_time->component
    cJSON *component = cJSON_GetObjectItemCaseSensitive(send_template_request_all_of_date_timeJSON, "component");
    if (component) { 
    component_local_nonprim = send_template_request_all_of_date_time_component_parseFromJSON(component); //nonprimitive
    }

    // send_template_request_all_of_date_time->unix_epoch
    cJSON *unix_epoch = cJSON_GetObjectItemCaseSensitive(send_template_request_all_of_date_timeJSON, "unix_epoch");
    if (unix_epoch) { 
    unix_epoch_local_nonprim = send_template_request_all_of_date_time_unix_epoch_parseFromJSON(unix_epoch); //nonprimitive
    }


    send_template_request_all_of_date_time_local_var = send_template_request_all_of_date_time_create (
        component ? component_local_nonprim : NULL,
        unix_epoch ? unix_epoch_local_nonprim : NULL
        );

    return send_template_request_all_of_date_time_local_var;
end:
    if (component_local_nonprim) {
        send_template_request_all_of_date_time_component_free(component_local_nonprim);
        component_local_nonprim = NULL;
    }
    if (unix_epoch_local_nonprim) {
        send_template_request_all_of_date_time_unix_epoch_free(unix_epoch_local_nonprim);
        unix_epoch_local_nonprim = NULL;
    }
    return NULL;

}
