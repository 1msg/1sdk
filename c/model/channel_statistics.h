/*
 * channel_statistics.h
 *
 * 
 */

#ifndef _channel_statistics_H_
#define _channel_statistics_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct channel_statistics_t channel_statistics_t;




typedef struct channel_statistics_t {
    char *date; // string
    double templates_cost; //numeric

} channel_statistics_t;

channel_statistics_t *channel_statistics_create(
    char *date,
    double templates_cost
);

void channel_statistics_free(channel_statistics_t *channel_statistics);

channel_statistics_t *channel_statistics_parseFromJSON(cJSON *channel_statisticsJSON);

cJSON *channel_statistics_convertToJSON(channel_statistics_t *channel_statistics);

#endif /* _channel_statistics_H_ */

