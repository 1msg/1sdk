#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "channel_extended_statistics_inner.h"



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
    ) {
    channel_extended_statistics_inner_t *channel_extended_statistics_inner_local_var = malloc(sizeof(channel_extended_statistics_inner_t));
    if (!channel_extended_statistics_inner_local_var) {
        return NULL;
    }
    channel_extended_statistics_inner_local_var->business_initiated_paid_quantity = business_initiated_paid_quantity;
    channel_extended_statistics_inner_local_var->business_initiated_price = business_initiated_price;
    channel_extended_statistics_inner_local_var->business_initiated_quantity = business_initiated_quantity;
    channel_extended_statistics_inner_local_var->free_entry_point = free_entry_point;
    channel_extended_statistics_inner_local_var->free_quantity = free_quantity;
    channel_extended_statistics_inner_local_var->free_tier = free_tier;
    channel_extended_statistics_inner_local_var->paid_quantity = paid_quantity;
    channel_extended_statistics_inner_local_var->period_date = period_date;
    channel_extended_statistics_inner_local_var->quantity = quantity;
    channel_extended_statistics_inner_local_var->total_price = total_price;
    channel_extended_statistics_inner_local_var->user_initiated_paid_quantity = user_initiated_paid_quantity;
    channel_extended_statistics_inner_local_var->user_initiated_price = user_initiated_price;
    channel_extended_statistics_inner_local_var->user_initiated_quantity = user_initiated_quantity;

    return channel_extended_statistics_inner_local_var;
}


void channel_extended_statistics_inner_free(channel_extended_statistics_inner_t *channel_extended_statistics_inner) {
    if(NULL == channel_extended_statistics_inner){
        return ;
    }
    listEntry_t *listEntry;
    if (channel_extended_statistics_inner->period_date) {
        free(channel_extended_statistics_inner->period_date);
        channel_extended_statistics_inner->period_date = NULL;
    }
    free(channel_extended_statistics_inner);
}

cJSON *channel_extended_statistics_inner_convertToJSON(channel_extended_statistics_inner_t *channel_extended_statistics_inner) {
    cJSON *item = cJSON_CreateObject();

    // channel_extended_statistics_inner->business_initiated_paid_quantity
    if(channel_extended_statistics_inner->business_initiated_paid_quantity) {
    if(cJSON_AddNumberToObject(item, "business_initiated_paid_quantity", channel_extended_statistics_inner->business_initiated_paid_quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // channel_extended_statistics_inner->business_initiated_price
    if(channel_extended_statistics_inner->business_initiated_price) {
    if(cJSON_AddNumberToObject(item, "business_initiated_price", channel_extended_statistics_inner->business_initiated_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // channel_extended_statistics_inner->business_initiated_quantity
    if(channel_extended_statistics_inner->business_initiated_quantity) {
    if(cJSON_AddNumberToObject(item, "business_initiated_quantity", channel_extended_statistics_inner->business_initiated_quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // channel_extended_statistics_inner->free_entry_point
    if(channel_extended_statistics_inner->free_entry_point) {
    if(cJSON_AddNumberToObject(item, "free_entry_point", channel_extended_statistics_inner->free_entry_point) == NULL) {
    goto fail; //Numeric
    }
    }


    // channel_extended_statistics_inner->free_quantity
    if(channel_extended_statistics_inner->free_quantity) {
    if(cJSON_AddNumberToObject(item, "free_quantity", channel_extended_statistics_inner->free_quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // channel_extended_statistics_inner->free_tier
    if(channel_extended_statistics_inner->free_tier) {
    if(cJSON_AddNumberToObject(item, "free_tier", channel_extended_statistics_inner->free_tier) == NULL) {
    goto fail; //Numeric
    }
    }


    // channel_extended_statistics_inner->paid_quantity
    if(channel_extended_statistics_inner->paid_quantity) {
    if(cJSON_AddNumberToObject(item, "paid_quantity", channel_extended_statistics_inner->paid_quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // channel_extended_statistics_inner->period_date
    if(channel_extended_statistics_inner->period_date) {
    if(cJSON_AddStringToObject(item, "period_date", channel_extended_statistics_inner->period_date) == NULL) {
    goto fail; //String
    }
    }


    // channel_extended_statistics_inner->quantity
    if(channel_extended_statistics_inner->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", channel_extended_statistics_inner->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // channel_extended_statistics_inner->total_price
    if(channel_extended_statistics_inner->total_price) {
    if(cJSON_AddNumberToObject(item, "total_price", channel_extended_statistics_inner->total_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // channel_extended_statistics_inner->user_initiated_paid_quantity
    if(channel_extended_statistics_inner->user_initiated_paid_quantity) {
    if(cJSON_AddNumberToObject(item, "user_initiated_paid_quantity", channel_extended_statistics_inner->user_initiated_paid_quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // channel_extended_statistics_inner->user_initiated_price
    if(channel_extended_statistics_inner->user_initiated_price) {
    if(cJSON_AddNumberToObject(item, "user_initiated_price", channel_extended_statistics_inner->user_initiated_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // channel_extended_statistics_inner->user_initiated_quantity
    if(channel_extended_statistics_inner->user_initiated_quantity) {
    if(cJSON_AddNumberToObject(item, "user_initiated_quantity", channel_extended_statistics_inner->user_initiated_quantity) == NULL) {
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

channel_extended_statistics_inner_t *channel_extended_statistics_inner_parseFromJSON(cJSON *channel_extended_statistics_innerJSON){

    channel_extended_statistics_inner_t *channel_extended_statistics_inner_local_var = NULL;

    // channel_extended_statistics_inner->business_initiated_paid_quantity
    cJSON *business_initiated_paid_quantity = cJSON_GetObjectItemCaseSensitive(channel_extended_statistics_innerJSON, "business_initiated_paid_quantity");
    if (business_initiated_paid_quantity) { 
    if(!cJSON_IsNumber(business_initiated_paid_quantity))
    {
    goto end; //Numeric
    }
    }

    // channel_extended_statistics_inner->business_initiated_price
    cJSON *business_initiated_price = cJSON_GetObjectItemCaseSensitive(channel_extended_statistics_innerJSON, "business_initiated_price");
    if (business_initiated_price) { 
    if(!cJSON_IsNumber(business_initiated_price))
    {
    goto end; //Numeric
    }
    }

    // channel_extended_statistics_inner->business_initiated_quantity
    cJSON *business_initiated_quantity = cJSON_GetObjectItemCaseSensitive(channel_extended_statistics_innerJSON, "business_initiated_quantity");
    if (business_initiated_quantity) { 
    if(!cJSON_IsNumber(business_initiated_quantity))
    {
    goto end; //Numeric
    }
    }

    // channel_extended_statistics_inner->free_entry_point
    cJSON *free_entry_point = cJSON_GetObjectItemCaseSensitive(channel_extended_statistics_innerJSON, "free_entry_point");
    if (free_entry_point) { 
    if(!cJSON_IsNumber(free_entry_point))
    {
    goto end; //Numeric
    }
    }

    // channel_extended_statistics_inner->free_quantity
    cJSON *free_quantity = cJSON_GetObjectItemCaseSensitive(channel_extended_statistics_innerJSON, "free_quantity");
    if (free_quantity) { 
    if(!cJSON_IsNumber(free_quantity))
    {
    goto end; //Numeric
    }
    }

    // channel_extended_statistics_inner->free_tier
    cJSON *free_tier = cJSON_GetObjectItemCaseSensitive(channel_extended_statistics_innerJSON, "free_tier");
    if (free_tier) { 
    if(!cJSON_IsNumber(free_tier))
    {
    goto end; //Numeric
    }
    }

    // channel_extended_statistics_inner->paid_quantity
    cJSON *paid_quantity = cJSON_GetObjectItemCaseSensitive(channel_extended_statistics_innerJSON, "paid_quantity");
    if (paid_quantity) { 
    if(!cJSON_IsNumber(paid_quantity))
    {
    goto end; //Numeric
    }
    }

    // channel_extended_statistics_inner->period_date
    cJSON *period_date = cJSON_GetObjectItemCaseSensitive(channel_extended_statistics_innerJSON, "period_date");
    if (period_date) { 
    if(!cJSON_IsString(period_date) && !cJSON_IsNull(period_date))
    {
    goto end; //String
    }
    }

    // channel_extended_statistics_inner->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(channel_extended_statistics_innerJSON, "quantity");
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // channel_extended_statistics_inner->total_price
    cJSON *total_price = cJSON_GetObjectItemCaseSensitive(channel_extended_statistics_innerJSON, "total_price");
    if (total_price) { 
    if(!cJSON_IsNumber(total_price))
    {
    goto end; //Numeric
    }
    }

    // channel_extended_statistics_inner->user_initiated_paid_quantity
    cJSON *user_initiated_paid_quantity = cJSON_GetObjectItemCaseSensitive(channel_extended_statistics_innerJSON, "user_initiated_paid_quantity");
    if (user_initiated_paid_quantity) { 
    if(!cJSON_IsNumber(user_initiated_paid_quantity))
    {
    goto end; //Numeric
    }
    }

    // channel_extended_statistics_inner->user_initiated_price
    cJSON *user_initiated_price = cJSON_GetObjectItemCaseSensitive(channel_extended_statistics_innerJSON, "user_initiated_price");
    if (user_initiated_price) { 
    if(!cJSON_IsNumber(user_initiated_price))
    {
    goto end; //Numeric
    }
    }

    // channel_extended_statistics_inner->user_initiated_quantity
    cJSON *user_initiated_quantity = cJSON_GetObjectItemCaseSensitive(channel_extended_statistics_innerJSON, "user_initiated_quantity");
    if (user_initiated_quantity) { 
    if(!cJSON_IsNumber(user_initiated_quantity))
    {
    goto end; //Numeric
    }
    }


    channel_extended_statistics_inner_local_var = channel_extended_statistics_inner_create (
        business_initiated_paid_quantity ? business_initiated_paid_quantity->valuedouble : 0,
        business_initiated_price ? business_initiated_price->valuedouble : 0,
        business_initiated_quantity ? business_initiated_quantity->valuedouble : 0,
        free_entry_point ? free_entry_point->valuedouble : 0,
        free_quantity ? free_quantity->valuedouble : 0,
        free_tier ? free_tier->valuedouble : 0,
        paid_quantity ? paid_quantity->valuedouble : 0,
        period_date && !cJSON_IsNull(period_date) ? strdup(period_date->valuestring) : NULL,
        quantity ? quantity->valuedouble : 0,
        total_price ? total_price->valuedouble : 0,
        user_initiated_paid_quantity ? user_initiated_paid_quantity->valuedouble : 0,
        user_initiated_price ? user_initiated_price->valuedouble : 0,
        user_initiated_quantity ? user_initiated_quantity->valuedouble : 0
        );

    return channel_extended_statistics_inner_local_var;
end:
    return NULL;

}
