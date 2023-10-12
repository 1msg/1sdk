#ifndef send_template_request_all_of_date_time_TEST
#define send_template_request_all_of_date_time_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define send_template_request_all_of_date_time_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/send_template_request_all_of_date_time.h"
send_template_request_all_of_date_time_t* instantiate_send_template_request_all_of_date_time(int include_optional);

#include "test_send_template_request_all_of_date_time_component.c"
#include "test_send_template_request_all_of_date_time_unix_epoch.c"


send_template_request_all_of_date_time_t* instantiate_send_template_request_all_of_date_time(int include_optional) {
  send_template_request_all_of_date_time_t* send_template_request_all_of_date_time = NULL;
  if (include_optional) {
    send_template_request_all_of_date_time = send_template_request_all_of_date_time_create(
       // false, not to have infinite recursion
      instantiate_send_template_request_all_of_date_time_component(0),
       // false, not to have infinite recursion
      instantiate_send_template_request_all_of_date_time_unix_epoch(0)
    );
  } else {
    send_template_request_all_of_date_time = send_template_request_all_of_date_time_create(
      NULL,
      NULL
    );
  }

  return send_template_request_all_of_date_time;
}


#ifdef send_template_request_all_of_date_time_MAIN

void test_send_template_request_all_of_date_time(int include_optional) {
    send_template_request_all_of_date_time_t* send_template_request_all_of_date_time_1 = instantiate_send_template_request_all_of_date_time(include_optional);

	cJSON* jsonsend_template_request_all_of_date_time_1 = send_template_request_all_of_date_time_convertToJSON(send_template_request_all_of_date_time_1);
	printf("send_template_request_all_of_date_time :\n%s\n", cJSON_Print(jsonsend_template_request_all_of_date_time_1));
	send_template_request_all_of_date_time_t* send_template_request_all_of_date_time_2 = send_template_request_all_of_date_time_parseFromJSON(jsonsend_template_request_all_of_date_time_1);
	cJSON* jsonsend_template_request_all_of_date_time_2 = send_template_request_all_of_date_time_convertToJSON(send_template_request_all_of_date_time_2);
	printf("repeating send_template_request_all_of_date_time:\n%s\n", cJSON_Print(jsonsend_template_request_all_of_date_time_2));
}

int main() {
  test_send_template_request_all_of_date_time(1);
  test_send_template_request_all_of_date_time(0);

  printf("Hello world \n");
  return 0;
}

#endif // send_template_request_all_of_date_time_MAIN
#endif // send_template_request_all_of_date_time_TEST
