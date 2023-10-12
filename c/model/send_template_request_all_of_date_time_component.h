/*
 * send_template_request_all_of_date_time_component.h
 *
 * 
 */

#ifndef _send_template_request_all_of_date_time_component_H_
#define _send_template_request_all_of_date_time_component_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct send_template_request_all_of_date_time_component_t send_template_request_all_of_date_time_component_t;


// Enum DAYOFWEEK for send_template_request_all_of_date_time_component

typedef enum  { one_msg_waba_sdk_send_template_request_all_of_date_time_component_DAYOFWEEK_NULL = 0, one_msg_waba_sdk_send_template_request_all_of_date_time_component_DAYOFWEEK_MONDAY, one_msg_waba_sdk_send_template_request_all_of_date_time_component_DAYOFWEEK_TUESDAY, one_msg_waba_sdk_send_template_request_all_of_date_time_component_DAYOFWEEK_WEDNESDAY, one_msg_waba_sdk_send_template_request_all_of_date_time_component_DAYOFWEEK_THURSDAY, one_msg_waba_sdk_send_template_request_all_of_date_time_component_DAYOFWEEK_FRIDAY, one_msg_waba_sdk_send_template_request_all_of_date_time_component_DAYOFWEEK_SATURDAY, one_msg_waba_sdk_send_template_request_all_of_date_time_component_DAYOFWEEK_SUNDAY, one_msg_waba_sdk_send_template_request_all_of_date_time_component_DAYOFWEEK__1, one_msg_waba_sdk_send_template_request_all_of_date_time_component_DAYOFWEEK__2, one_msg_waba_sdk_send_template_request_all_of_date_time_component_DAYOFWEEK__3, one_msg_waba_sdk_send_template_request_all_of_date_time_component_DAYOFWEEK__4, one_msg_waba_sdk_send_template_request_all_of_date_time_component_DAYOFWEEK__5, one_msg_waba_sdk_send_template_request_all_of_date_time_component_DAYOFWEEK__6, one_msg_waba_sdk_send_template_request_all_of_date_time_component_DAYOFWEEK__7 } one_msg_waba_sdk_send_template_request_all_of_date_time_component_DAYOFWEEK_e;

char* send_template_request_all_of_date_time_component_day_of_week_ToString(one_msg_waba_sdk_send_template_request_all_of_date_time_component_DAYOFWEEK_e day_of_week);

one_msg_waba_sdk_send_template_request_all_of_date_time_component_DAYOFWEEK_e send_template_request_all_of_date_time_component_day_of_week_FromString(char* day_of_week);

// Enum CALENDAR for send_template_request_all_of_date_time_component

typedef enum  { one_msg_waba_sdk_send_template_request_all_of_date_time_component_CALENDAR_NULL = 0, one_msg_waba_sdk_send_template_request_all_of_date_time_component_CALENDAR_GREGORIAN, one_msg_waba_sdk_send_template_request_all_of_date_time_component_CALENDAR_SOLAR_HIJRI } one_msg_waba_sdk_send_template_request_all_of_date_time_component_CALENDAR_e;

char* send_template_request_all_of_date_time_component_calendar_ToString(one_msg_waba_sdk_send_template_request_all_of_date_time_component_CALENDAR_e calendar);

one_msg_waba_sdk_send_template_request_all_of_date_time_component_CALENDAR_e send_template_request_all_of_date_time_component_calendar_FromString(char* calendar);



typedef struct send_template_request_all_of_date_time_component_t {
    one_msg_waba_sdk_send_template_request_all_of_date_time_component_DAYOFWEEK_e day_of_week; //enum
    int year; //numeric
    int month; //numeric
    int day_of_month; //numeric
    int hour; //numeric
    int minute; //numeric
    one_msg_waba_sdk_send_template_request_all_of_date_time_component_CALENDAR_e calendar; //enum

} send_template_request_all_of_date_time_component_t;

send_template_request_all_of_date_time_component_t *send_template_request_all_of_date_time_component_create(
    one_msg_waba_sdk_send_template_request_all_of_date_time_component_DAYOFWEEK_e day_of_week,
    int year,
    int month,
    int day_of_month,
    int hour,
    int minute,
    one_msg_waba_sdk_send_template_request_all_of_date_time_component_CALENDAR_e calendar
);

void send_template_request_all_of_date_time_component_free(send_template_request_all_of_date_time_component_t *send_template_request_all_of_date_time_component);

send_template_request_all_of_date_time_component_t *send_template_request_all_of_date_time_component_parseFromJSON(cJSON *send_template_request_all_of_date_time_componentJSON);

cJSON *send_template_request_all_of_date_time_component_convertToJSON(send_template_request_all_of_date_time_component_t *send_template_request_all_of_date_time_component);

#endif /* _send_template_request_all_of_date_time_component_H_ */

