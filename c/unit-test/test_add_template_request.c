#ifndef add_template_request_TEST
#define add_template_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define add_template_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/add_template_request.h"
add_template_request_t* instantiate_add_template_request(int include_optional);



add_template_request_t* instantiate_add_template_request(int include_optional) {
  add_template_request_t* add_template_request = NULL;
  if (include_optional) {
    add_template_request = add_template_request_create(
      "start",
      one_msg_waba_sdk_add_template_request__"MARKETING",
      list_createList(),
      one_msg_waba_sdk_add_template_request__"en"
    );
  } else {
    add_template_request = add_template_request_create(
      "start",
      one_msg_waba_sdk_add_template_request__"MARKETING",
      list_createList(),
      one_msg_waba_sdk_add_template_request__"en"
    );
  }

  return add_template_request;
}


#ifdef add_template_request_MAIN

void test_add_template_request(int include_optional) {
    add_template_request_t* add_template_request_1 = instantiate_add_template_request(include_optional);

	cJSON* jsonadd_template_request_1 = add_template_request_convertToJSON(add_template_request_1);
	printf("add_template_request :\n%s\n", cJSON_Print(jsonadd_template_request_1));
	add_template_request_t* add_template_request_2 = add_template_request_parseFromJSON(jsonadd_template_request_1);
	cJSON* jsonadd_template_request_2 = add_template_request_convertToJSON(add_template_request_2);
	printf("repeating add_template_request:\n%s\n", cJSON_Print(jsonadd_template_request_2));
}

int main() {
  test_add_template_request(1);
  test_add_template_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // add_template_request_MAIN
#endif // add_template_request_TEST
