#ifndef send_template_request_all_of_date_time_component_TEST
#define send_template_request_all_of_date_time_component_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define send_template_request_all_of_date_time_component_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/send_template_request_all_of_date_time_component.h"
send_template_request_all_of_date_time_component_t* instantiate_send_template_request_all_of_date_time_component(int include_optional);



send_template_request_all_of_date_time_component_t* instantiate_send_template_request_all_of_date_time_component(int include_optional) {
  send_template_request_all_of_date_time_component_t* send_template_request_all_of_date_time_component = NULL;
  if (include_optional) {
    send_template_request_all_of_date_time_component = send_template_request_all_of_date_time_component_create(
      one_msg_waba_sdk_send_template_request_all_of_date_time_component_DAYOFWEEK_"FRIDAY",
      2001,
      4,
      13,
      17,
      20,
      one_msg_waba_sdk_send_template_request_all_of_date_time_component_CALENDAR_"GREGORIAN"
    );
  } else {
    send_template_request_all_of_date_time_component = send_template_request_all_of_date_time_component_create(
      one_msg_waba_sdk_send_template_request_all_of_date_time_component_DAYOFWEEK_"FRIDAY",
      2001,
      4,
      13,
      17,
      20,
      one_msg_waba_sdk_send_template_request_all_of_date_time_component_CALENDAR_"GREGORIAN"
    );
  }

  return send_template_request_all_of_date_time_component;
}


#ifdef send_template_request_all_of_date_time_component_MAIN

void test_send_template_request_all_of_date_time_component(int include_optional) {
    send_template_request_all_of_date_time_component_t* send_template_request_all_of_date_time_component_1 = instantiate_send_template_request_all_of_date_time_component(include_optional);

	cJSON* jsonsend_template_request_all_of_date_time_component_1 = send_template_request_all_of_date_time_component_convertToJSON(send_template_request_all_of_date_time_component_1);
	printf("send_template_request_all_of_date_time_component :\n%s\n", cJSON_Print(jsonsend_template_request_all_of_date_time_component_1));
	send_template_request_all_of_date_time_component_t* send_template_request_all_of_date_time_component_2 = send_template_request_all_of_date_time_component_parseFromJSON(jsonsend_template_request_all_of_date_time_component_1);
	cJSON* jsonsend_template_request_all_of_date_time_component_2 = send_template_request_all_of_date_time_component_convertToJSON(send_template_request_all_of_date_time_component_2);
	printf("repeating send_template_request_all_of_date_time_component:\n%s\n", cJSON_Print(jsonsend_template_request_all_of_date_time_component_2));
}

int main() {
  test_send_template_request_all_of_date_time_component(1);
  test_send_template_request_all_of_date_time_component(0);

  printf("Hello world \n");
  return 0;
}

#endif // send_template_request_all_of_date_time_component_MAIN
#endif // send_template_request_all_of_date_time_component_TEST
