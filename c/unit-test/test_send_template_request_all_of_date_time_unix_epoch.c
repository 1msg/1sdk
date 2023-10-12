#ifndef send_template_request_all_of_date_time_unix_epoch_TEST
#define send_template_request_all_of_date_time_unix_epoch_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define send_template_request_all_of_date_time_unix_epoch_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/send_template_request_all_of_date_time_unix_epoch.h"
send_template_request_all_of_date_time_unix_epoch_t* instantiate_send_template_request_all_of_date_time_unix_epoch(int include_optional);



send_template_request_all_of_date_time_unix_epoch_t* instantiate_send_template_request_all_of_date_time_unix_epoch(int include_optional) {
  send_template_request_all_of_date_time_unix_epoch_t* send_template_request_all_of_date_time_unix_epoch = NULL;
  if (include_optional) {
    send_template_request_all_of_date_time_unix_epoch = send_template_request_all_of_date_time_unix_epoch_create(
      987168000
    );
  } else {
    send_template_request_all_of_date_time_unix_epoch = send_template_request_all_of_date_time_unix_epoch_create(
      987168000
    );
  }

  return send_template_request_all_of_date_time_unix_epoch;
}


#ifdef send_template_request_all_of_date_time_unix_epoch_MAIN

void test_send_template_request_all_of_date_time_unix_epoch(int include_optional) {
    send_template_request_all_of_date_time_unix_epoch_t* send_template_request_all_of_date_time_unix_epoch_1 = instantiate_send_template_request_all_of_date_time_unix_epoch(include_optional);

	cJSON* jsonsend_template_request_all_of_date_time_unix_epoch_1 = send_template_request_all_of_date_time_unix_epoch_convertToJSON(send_template_request_all_of_date_time_unix_epoch_1);
	printf("send_template_request_all_of_date_time_unix_epoch :\n%s\n", cJSON_Print(jsonsend_template_request_all_of_date_time_unix_epoch_1));
	send_template_request_all_of_date_time_unix_epoch_t* send_template_request_all_of_date_time_unix_epoch_2 = send_template_request_all_of_date_time_unix_epoch_parseFromJSON(jsonsend_template_request_all_of_date_time_unix_epoch_1);
	cJSON* jsonsend_template_request_all_of_date_time_unix_epoch_2 = send_template_request_all_of_date_time_unix_epoch_convertToJSON(send_template_request_all_of_date_time_unix_epoch_2);
	printf("repeating send_template_request_all_of_date_time_unix_epoch:\n%s\n", cJSON_Print(jsonsend_template_request_all_of_date_time_unix_epoch_2));
}

int main() {
  test_send_template_request_all_of_date_time_unix_epoch(1);
  test_send_template_request_all_of_date_time_unix_epoch(0);

  printf("Hello world \n");
  return 0;
}

#endif // send_template_request_all_of_date_time_unix_epoch_MAIN
#endif // send_template_request_all_of_date_time_unix_epoch_TEST
