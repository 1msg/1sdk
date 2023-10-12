#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "channel_extended_statistics.h"



channel_extended_statistics_t *channel_extended_statistics_create(
    ) {
    channel_extended_statistics_t *channel_extended_statistics_local_var = malloc(sizeof(channel_extended_statistics_t));
    if (!channel_extended_statistics_local_var) {
        return NULL;
    }

    return channel_extended_statistics_local_var;
}


void channel_extended_statistics_free(channel_extended_statistics_t *channel_extended_statistics) {
    if(NULL == channel_extended_statistics){
        return ;
    }
    listEntry_t *listEntry;
    free(channel_extended_statistics);
}

cJSON *channel_extended_statistics_convertToJSON(channel_extended_statistics_t *channel_extended_statistics) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

channel_extended_statistics_t *channel_extended_statistics_parseFromJSON(cJSON *channel_extended_statisticsJSON){

    channel_extended_statistics_t *channel_extended_statistics_local_var = NULL;


    channel_extended_statistics_local_var = channel_extended_statistics_create (
        );

    return channel_extended_statistics_local_var;
end:
    return NULL;

}
