#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "channel_status.h"


char* statuschannel_status_ToString(one_msg_waba_sdk_channel_status_STATUS_e status) {
    char* statusArray[] =  { "NULL", "connected", "connecting", "disconnected", "uninitialized", "unregistered" };
	return statusArray[status];
}

one_msg_waba_sdk_channel_status_STATUS_e statuschannel_status_FromString(char* status){
    int stringToReturn = 0;
    char *statusArray[] =  { "NULL", "connected", "connecting", "disconnected", "uninitialized", "unregistered" };
    size_t sizeofArray = sizeof(statusArray) / sizeof(statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(status, statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

channel_status_t *channel_status_create(
    one_msg_waba_sdk_channel_status_STATUS_e status
    ) {
    channel_status_t *channel_status_local_var = malloc(sizeof(channel_status_t));
    if (!channel_status_local_var) {
        return NULL;
    }
    channel_status_local_var->status = status;

    return channel_status_local_var;
}


void channel_status_free(channel_status_t *channel_status) {
    if(NULL == channel_status){
        return ;
    }
    listEntry_t *listEntry;
    free(channel_status);
}

cJSON *channel_status_convertToJSON(channel_status_t *channel_status) {
    cJSON *item = cJSON_CreateObject();

    // channel_status->status
    if(channel_status->status != one_msg_waba_sdk_channel_status_STATUS_NULL) {
    if(cJSON_AddStringToObject(item, "status", statuschannel_status_ToString(channel_status->status)) == NULL)
    {
    goto fail; //Enum
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

channel_status_t *channel_status_parseFromJSON(cJSON *channel_statusJSON){

    channel_status_t *channel_status_local_var = NULL;

    // channel_status->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(channel_statusJSON, "status");
    one_msg_waba_sdk_channel_status_STATUS_e statusVariable;
    if (status) { 
    if(!cJSON_IsString(status))
    {
    goto end; //Enum
    }
    statusVariable = statuschannel_status_FromString(status->valuestring);
    }


    channel_status_local_var = channel_status_create (
        status ? statusVariable : -1
        );

    return channel_status_local_var;
end:
    return NULL;

}
