#ifndef send_template_request_TEST
#define send_template_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define send_template_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/send_template_request.h"
send_template_request_t* instantiate_send_template_request(int include_optional);

#include "test_send_template_request_all_of_language.c"


send_template_request_t* instantiate_send_template_request(int include_optional) {
  send_template_request_t* send_template_request = NULL;
  if (include_optional) {
    send_template_request = send_template_request_create(
      "ca300906_cfbc_410b_99fb_dcee1t39d578",
      "12020721369@c.us",
      12020721369,
      "start",
       // false, not to have infinite recursion
      instantiate_send_template_request_all_of_language(0),
      list_createList()
    );
  } else {
    send_template_request = send_template_request_create(
      "ca300906_cfbc_410b_99fb_dcee1t39d578",
      "12020721369@c.us",
      12020721369,
      "start",
      NULL,
      list_createList()
    );
  }

  return send_template_request;
}


#ifdef send_template_request_MAIN

void test_send_template_request(int include_optional) {
    send_template_request_t* send_template_request_1 = instantiate_send_template_request(include_optional);

	cJSON* jsonsend_template_request_1 = send_template_request_convertToJSON(send_template_request_1);
	printf("send_template_request :\n%s\n", cJSON_Print(jsonsend_template_request_1));
	send_template_request_t* send_template_request_2 = send_template_request_parseFromJSON(jsonsend_template_request_1);
	cJSON* jsonsend_template_request_2 = send_template_request_convertToJSON(send_template_request_2);
	printf("repeating send_template_request:\n%s\n", cJSON_Print(jsonsend_template_request_2));
}

int main() {
  test_send_template_request(1);
  test_send_template_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // send_template_request_MAIN
#endif // send_template_request_TEST
