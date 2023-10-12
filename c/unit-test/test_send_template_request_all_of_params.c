#ifndef send_template_request_all_of_params_TEST
#define send_template_request_all_of_params_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define send_template_request_all_of_params_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/send_template_request_all_of_params.h"
send_template_request_all_of_params_t* instantiate_send_template_request_all_of_params(int include_optional);

#include "test_send_template_request_all_of_currency.c"
#include "test_send_template_request_all_of_date_time.c"


send_template_request_all_of_params_t* instantiate_send_template_request_all_of_params(int include_optional) {
  send_template_request_all_of_params_t* send_template_request_all_of_params = NULL;
  if (include_optional) {
    send_template_request_all_of_params = send_template_request_all_of_params_create(
      "Some title",
       // false, not to have infinite recursion
      instantiate_send_template_request_all_of_currency(0),
       // false, not to have infinite recursion
      instantiate_send_template_request_all_of_date_time(0)
    );
  } else {
    send_template_request_all_of_params = send_template_request_all_of_params_create(
      "Some title",
      NULL,
      NULL
    );
  }

  return send_template_request_all_of_params;
}


#ifdef send_template_request_all_of_params_MAIN

void test_send_template_request_all_of_params(int include_optional) {
    send_template_request_all_of_params_t* send_template_request_all_of_params_1 = instantiate_send_template_request_all_of_params(include_optional);

	cJSON* jsonsend_template_request_all_of_params_1 = send_template_request_all_of_params_convertToJSON(send_template_request_all_of_params_1);
	printf("send_template_request_all_of_params :\n%s\n", cJSON_Print(jsonsend_template_request_all_of_params_1));
	send_template_request_all_of_params_t* send_template_request_all_of_params_2 = send_template_request_all_of_params_parseFromJSON(jsonsend_template_request_all_of_params_1);
	cJSON* jsonsend_template_request_all_of_params_2 = send_template_request_all_of_params_convertToJSON(send_template_request_all_of_params_2);
	printf("repeating send_template_request_all_of_params:\n%s\n", cJSON_Print(jsonsend_template_request_all_of_params_2));
}

int main() {
  test_send_template_request_all_of_params(1);
  test_send_template_request_all_of_params(0);

  printf("Hello world \n");
  return 0;
}

#endif // send_template_request_all_of_params_MAIN
#endif // send_template_request_all_of_params_TEST
