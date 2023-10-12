#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "channel_statistics.h"



channel_statistics_t *channel_statistics_create(
    char *date,
    double templates_cost
    ) {
    channel_statistics_t *channel_statistics_local_var = malloc(sizeof(channel_statistics_t));
    if (!channel_statistics_local_var) {
        return NULL;
    }
    channel_statistics_local_var->date = date;
    channel_statistics_local_var->templates_cost = templates_cost;

    return channel_statistics_local_var;
}


void channel_statistics_free(channel_statistics_t *channel_statistics) {
    if(NULL == channel_statistics){
        return ;
    }
    listEntry_t *listEntry;
    if (channel_statistics->date) {
        free(channel_statistics->date);
        channel_statistics->date = NULL;
    }
    free(channel_statistics);
}

cJSON *channel_statistics_convertToJSON(channel_statistics_t *channel_statistics) {
    cJSON *item = cJSON_CreateObject();

    // channel_statistics->date
    if(channel_statistics->date) {
    if(cJSON_AddStringToObject(item, "date", channel_statistics->date) == NULL) {
    goto fail; //String
    }
    }


    // channel_statistics->templates_cost
    if(channel_statistics->templates_cost) {
    if(cJSON_AddNumberToObject(item, "templates_cost", channel_statistics->templates_cost) == NULL) {
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

channel_statistics_t *channel_statistics_parseFromJSON(cJSON *channel_statisticsJSON){

    channel_statistics_t *channel_statistics_local_var = NULL;

    // channel_statistics->date
    cJSON *date = cJSON_GetObjectItemCaseSensitive(channel_statisticsJSON, "date");
    if (date) { 
    if(!cJSON_IsString(date) && !cJSON_IsNull(date))
    {
    goto end; //String
    }
    }

    // channel_statistics->templates_cost
    cJSON *templates_cost = cJSON_GetObjectItemCaseSensitive(channel_statisticsJSON, "templates_cost");
    if (templates_cost) { 
    if(!cJSON_IsNumber(templates_cost))
    {
    goto end; //Numeric
    }
    }


    channel_statistics_local_var = channel_statistics_create (
        date && !cJSON_IsNull(date) ? strdup(date->valuestring) : NULL,
        templates_cost ? templates_cost->valuedouble : 0
        );

    return channel_statistics_local_var;
end:
    return NULL;

}
