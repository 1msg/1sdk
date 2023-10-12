/*
 * channel_extended_statistics_inner.h
 *
 * 
 */

#ifndef _channel_extended_statistics_inner_H_
#define _channel_extended_statistics_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct channel_extended_statistics_inner_t channel_extended_statistics_inner_t;




typedef struct channel_extended_statistics_inner_t {
    int business_initiated_paid_quantity; //numeric
    double business_initiated_price; //numeric
    int business_initiated_quantity; //numeric
    int free_entry_point; //numeric
    int free_quantity; //numeric
    int free_tier; //numeric
    int paid_quantity; //numeric
    char *period_date; // string
    double quantity; //numeric
    double total_price; //numeric
    int user_initiated_paid_quantity; //numeric
    double user_initiated_price; //numeric
    int user_initiated_quantity; //numeric

} channel_extended_statistics_inner_t;

channel_extended_statistics_inner_t *channel_extended_statistics_inner_create(
    int business_initiated_paid_quantity,
    double business_initiated_price,
    int business_initiated_quantity,
    int free_entry_point,
    int free_quantity,
    int free_tier,
    int paid_quantity,
    char *period_date,
    double quantity,
    double total_price,
    int user_initiated_paid_quantity,
    double user_initiated_price,
    int user_initiated_quantity
);

void channel_extended_statistics_inner_free(channel_extended_statistics_inner_t *channel_extended_statistics_inner);

channel_extended_statistics_inner_t *channel_extended_statistics_inner_parseFromJSON(cJSON *channel_extended_statistics_innerJSON);

cJSON *channel_extended_statistics_inner_convertToJSON(channel_extended_statistics_inner_t *channel_extended_statistics_inner);

#endif /* _channel_extended_statistics_inner_H_ */

