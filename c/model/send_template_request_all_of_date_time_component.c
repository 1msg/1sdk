#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "send_template_request_all_of_date_time_component.h"


char* day_of_weeksend_template_request_all_of_date_time_component_ToString(one_msg_waba_sdk_send_template_request_all_of_date_time_component_DAYOFWEEK_e day_of_week) {
    char* day_of_weekArray[] =  { "NULL", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY", "SUNDAY", "1", "2", "3", "4", "5", "6", "7" };
	return day_of_weekArray[day_of_week];
}

one_msg_waba_sdk_send_template_request_all_of_date_time_component_DAYOFWEEK_e day_of_weeksend_template_request_all_of_date_time_component_FromString(char* day_of_week){
    int stringToReturn = 0;
    char *day_of_weekArray[] =  { "NULL", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY", "SUNDAY", "1", "2", "3", "4", "5", "6", "7" };
    size_t sizeofArray = sizeof(day_of_weekArray) / sizeof(day_of_weekArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(day_of_week, day_of_weekArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* calendarsend_template_request_all_of_date_time_component_ToString(one_msg_waba_sdk_send_template_request_all_of_date_time_component_CALENDAR_e calendar) {
    char* calendarArray[] =  { "NULL", "GREGORIAN", "SOLAR_HIJRI" };
	return calendarArray[calendar];
}

one_msg_waba_sdk_send_template_request_all_of_date_time_component_CALENDAR_e calendarsend_template_request_all_of_date_time_component_FromString(char* calendar){
    int stringToReturn = 0;
    char *calendarArray[] =  { "NULL", "GREGORIAN", "SOLAR_HIJRI" };
    size_t sizeofArray = sizeof(calendarArray) / sizeof(calendarArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(calendar, calendarArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

send_template_request_all_of_date_time_component_t *send_template_request_all_of_date_time_component_create(
    one_msg_waba_sdk_send_template_request_all_of_date_time_component_DAYOFWEEK_e day_of_week,
    int year,
    int month,
    int day_of_month,
    int hour,
    int minute,
    one_msg_waba_sdk_send_template_request_all_of_date_time_component_CALENDAR_e calendar
    ) {
    send_template_request_all_of_date_time_component_t *send_template_request_all_of_date_time_component_local_var = malloc(sizeof(send_template_request_all_of_date_time_component_t));
    if (!send_template_request_all_of_date_time_component_local_var) {
        return NULL;
    }
    send_template_request_all_of_date_time_component_local_var->day_of_week = day_of_week;
    send_template_request_all_of_date_time_component_local_var->year = year;
    send_template_request_all_of_date_time_component_local_var->month = month;
    send_template_request_all_of_date_time_component_local_var->day_of_month = day_of_month;
    send_template_request_all_of_date_time_component_local_var->hour = hour;
    send_template_request_all_of_date_time_component_local_var->minute = minute;
    send_template_request_all_of_date_time_component_local_var->calendar = calendar;

    return send_template_request_all_of_date_time_component_local_var;
}


void send_template_request_all_of_date_time_component_free(send_template_request_all_of_date_time_component_t *send_template_request_all_of_date_time_component) {
    if(NULL == send_template_request_all_of_date_time_component){
        return ;
    }
    listEntry_t *listEntry;
    free(send_template_request_all_of_date_time_component);
}

cJSON *send_template_request_all_of_date_time_component_convertToJSON(send_template_request_all_of_date_time_component_t *send_template_request_all_of_date_time_component) {
    cJSON *item = cJSON_CreateObject();

    // send_template_request_all_of_date_time_component->day_of_week
    if(send_template_request_all_of_date_time_component->day_of_week != one_msg_waba_sdk_send_template_request_all_of_date_time_component_DAYOFWEEK_NULL) {
    if(cJSON_AddStringToObject(item, "day_of_week", day_of_weeksend_template_request_all_of_date_time_component_ToString(send_template_request_all_of_date_time_component->day_of_week)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // send_template_request_all_of_date_time_component->year
    if(send_template_request_all_of_date_time_component->year) {
    if(cJSON_AddNumberToObject(item, "year", send_template_request_all_of_date_time_component->year) == NULL) {
    goto fail; //Numeric
    }
    }


    // send_template_request_all_of_date_time_component->month
    if(send_template_request_all_of_date_time_component->month) {
    if(cJSON_AddNumberToObject(item, "month", send_template_request_all_of_date_time_component->month) == NULL) {
    goto fail; //Numeric
    }
    }


    // send_template_request_all_of_date_time_component->day_of_month
    if(send_template_request_all_of_date_time_component->day_of_month) {
    if(cJSON_AddNumberToObject(item, "day_of_month", send_template_request_all_of_date_time_component->day_of_month) == NULL) {
    goto fail; //Numeric
    }
    }


    // send_template_request_all_of_date_time_component->hour
    if(send_template_request_all_of_date_time_component->hour) {
    if(cJSON_AddNumberToObject(item, "hour", send_template_request_all_of_date_time_component->hour) == NULL) {
    goto fail; //Numeric
    }
    }


    // send_template_request_all_of_date_time_component->minute
    if(send_template_request_all_of_date_time_component->minute) {
    if(cJSON_AddNumberToObject(item, "minute", send_template_request_all_of_date_time_component->minute) == NULL) {
    goto fail; //Numeric
    }
    }


    // send_template_request_all_of_date_time_component->calendar
    if(send_template_request_all_of_date_time_component->calendar != one_msg_waba_sdk_send_template_request_all_of_date_time_component_CALENDAR_NULL) {
    if(cJSON_AddStringToObject(item, "calendar", calendarsend_template_request_all_of_date_time_component_ToString(send_template_request_all_of_date_time_component->calendar)) == NULL)
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

send_template_request_all_of_date_time_component_t *send_template_request_all_of_date_time_component_parseFromJSON(cJSON *send_template_request_all_of_date_time_componentJSON){

    send_template_request_all_of_date_time_component_t *send_template_request_all_of_date_time_component_local_var = NULL;

    // send_template_request_all_of_date_time_component->day_of_week
    cJSON *day_of_week = cJSON_GetObjectItemCaseSensitive(send_template_request_all_of_date_time_componentJSON, "day_of_week");
    one_msg_waba_sdk_send_template_request_all_of_date_time_component_DAYOFWEEK_e day_of_weekVariable;
    if (day_of_week) { 
    if(!cJSON_IsString(day_of_week))
    {
    goto end; //Enum
    }
    day_of_weekVariable = day_of_weeksend_template_request_all_of_date_time_component_FromString(day_of_week->valuestring);
    }

    // send_template_request_all_of_date_time_component->year
    cJSON *year = cJSON_GetObjectItemCaseSensitive(send_template_request_all_of_date_time_componentJSON, "year");
    if (year) { 
    if(!cJSON_IsNumber(year))
    {
    goto end; //Numeric
    }
    }

    // send_template_request_all_of_date_time_component->month
    cJSON *month = cJSON_GetObjectItemCaseSensitive(send_template_request_all_of_date_time_componentJSON, "month");
    if (month) { 
    if(!cJSON_IsNumber(month))
    {
    goto end; //Numeric
    }
    }

    // send_template_request_all_of_date_time_component->day_of_month
    cJSON *day_of_month = cJSON_GetObjectItemCaseSensitive(send_template_request_all_of_date_time_componentJSON, "day_of_month");
    if (day_of_month) { 
    if(!cJSON_IsNumber(day_of_month))
    {
    goto end; //Numeric
    }
    }

    // send_template_request_all_of_date_time_component->hour
    cJSON *hour = cJSON_GetObjectItemCaseSensitive(send_template_request_all_of_date_time_componentJSON, "hour");
    if (hour) { 
    if(!cJSON_IsNumber(hour))
    {
    goto end; //Numeric
    }
    }

    // send_template_request_all_of_date_time_component->minute
    cJSON *minute = cJSON_GetObjectItemCaseSensitive(send_template_request_all_of_date_time_componentJSON, "minute");
    if (minute) { 
    if(!cJSON_IsNumber(minute))
    {
    goto end; //Numeric
    }
    }

    // send_template_request_all_of_date_time_component->calendar
    cJSON *calendar = cJSON_GetObjectItemCaseSensitive(send_template_request_all_of_date_time_componentJSON, "calendar");
    one_msg_waba_sdk_send_template_request_all_of_date_time_component_CALENDAR_e calendarVariable;
    if (calendar) { 
    if(!cJSON_IsString(calendar))
    {
    goto end; //Enum
    }
    calendarVariable = calendarsend_template_request_all_of_date_time_component_FromString(calendar->valuestring);
    }


    send_template_request_all_of_date_time_component_local_var = send_template_request_all_of_date_time_component_create (
        day_of_week ? day_of_weekVariable : -1,
        year ? year->valuedouble : 0,
        month ? month->valuedouble : 0,
        day_of_month ? day_of_month->valuedouble : 0,
        hour ? hour->valuedouble : 0,
        minute ? minute->valuedouble : 0,
        calendar ? calendarVariable : -1
        );

    return send_template_request_all_of_date_time_component_local_var;
end:
    return NULL;

}
