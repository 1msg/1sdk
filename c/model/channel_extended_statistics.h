/*
 * channel_extended_statistics.h
 *
 * 
 */

#ifndef _channel_extended_statistics_H_
#define _channel_extended_statistics_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct channel_extended_statistics_t channel_extended_statistics_t;

#include "channel_extended_statistics_inner.h"



typedef struct channel_extended_statistics_t {

} channel_extended_statistics_t;

channel_extended_statistics_t *channel_extended_statistics_create(
);

void channel_extended_statistics_free(channel_extended_statistics_t *channel_extended_statistics);

channel_extended_statistics_t *channel_extended_statistics_parseFromJSON(cJSON *channel_extended_statisticsJSON);

cJSON *channel_extended_statistics_convertToJSON(channel_extended_statistics_t *channel_extended_statistics);

#endif /* _channel_extended_statistics_H_ */

