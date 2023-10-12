#ifndef send_template_request_all_of_language_TEST
#define send_template_request_all_of_language_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define send_template_request_all_of_language_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/send_template_request_all_of_language.h"
send_template_request_all_of_language_t* instantiate_send_template_request_all_of_language(int include_optional);



send_template_request_all_of_language_t* instantiate_send_template_request_all_of_language(int include_optional) {
  send_template_request_all_of_language_t* send_template_request_all_of_language = NULL;
  if (include_optional) {
    send_template_request_all_of_language = send_template_request_all_of_language_create(
      one_msg_waba_sdk_send_template_request_all_of_language_POLICY_"deterministic",
      one_msg_waba_sdk_send_template_request_all_of_language__"en"
    );
  } else {
    send_template_request_all_of_language = send_template_request_all_of_language_create(
      one_msg_waba_sdk_send_template_request_all_of_language_POLICY_"deterministic",
      one_msg_waba_sdk_send_template_request_all_of_language__"en"
    );
  }

  return send_template_request_all_of_language;
}


#ifdef send_template_request_all_of_language_MAIN

void test_send_template_request_all_of_language(int include_optional) {
    send_template_request_all_of_language_t* send_template_request_all_of_language_1 = instantiate_send_template_request_all_of_language(include_optional);

	cJSON* jsonsend_template_request_all_of_language_1 = send_template_request_all_of_language_convertToJSON(send_template_request_all_of_language_1);
	printf("send_template_request_all_of_language :\n%s\n", cJSON_Print(jsonsend_template_request_all_of_language_1));
	send_template_request_all_of_language_t* send_template_request_all_of_language_2 = send_template_request_all_of_language_parseFromJSON(jsonsend_template_request_all_of_language_1);
	cJSON* jsonsend_template_request_all_of_language_2 = send_template_request_all_of_language_convertToJSON(send_template_request_all_of_language_2);
	printf("repeating send_template_request_all_of_language:\n%s\n", cJSON_Print(jsonsend_template_request_all_of_language_2));
}

int main() {
  test_send_template_request_all_of_language(1);
  test_send_template_request_all_of_language(0);

  printf("Hello world \n");
  return 0;
}

#endif // send_template_request_all_of_language_MAIN
#endif // send_template_request_all_of_language_TEST
