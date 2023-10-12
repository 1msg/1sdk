#ifndef send_product_request_all_of_action_sections_TEST
#define send_product_request_all_of_action_sections_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define send_product_request_all_of_action_sections_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/send_product_request_all_of_action_sections.h"
send_product_request_all_of_action_sections_t* instantiate_send_product_request_all_of_action_sections(int include_optional);



send_product_request_all_of_action_sections_t* instantiate_send_product_request_all_of_action_sections(int include_optional) {
  send_product_request_all_of_action_sections_t* send_product_request_all_of_action_sections = NULL;
  if (include_optional) {
    send_product_request_all_of_action_sections = send_product_request_all_of_action_sections_create(
      "the-section-title",
      list_createList()
    );
  } else {
    send_product_request_all_of_action_sections = send_product_request_all_of_action_sections_create(
      "the-section-title",
      list_createList()
    );
  }

  return send_product_request_all_of_action_sections;
}


#ifdef send_product_request_all_of_action_sections_MAIN

void test_send_product_request_all_of_action_sections(int include_optional) {
    send_product_request_all_of_action_sections_t* send_product_request_all_of_action_sections_1 = instantiate_send_product_request_all_of_action_sections(include_optional);

	cJSON* jsonsend_product_request_all_of_action_sections_1 = send_product_request_all_of_action_sections_convertToJSON(send_product_request_all_of_action_sections_1);
	printf("send_product_request_all_of_action_sections :\n%s\n", cJSON_Print(jsonsend_product_request_all_of_action_sections_1));
	send_product_request_all_of_action_sections_t* send_product_request_all_of_action_sections_2 = send_product_request_all_of_action_sections_parseFromJSON(jsonsend_product_request_all_of_action_sections_1);
	cJSON* jsonsend_product_request_all_of_action_sections_2 = send_product_request_all_of_action_sections_convertToJSON(send_product_request_all_of_action_sections_2);
	printf("repeating send_product_request_all_of_action_sections:\n%s\n", cJSON_Print(jsonsend_product_request_all_of_action_sections_2));
}

int main() {
  test_send_product_request_all_of_action_sections(1);
  test_send_product_request_all_of_action_sections(0);

  printf("Hello world \n");
  return 0;
}

#endif // send_product_request_all_of_action_sections_MAIN
#endif // send_product_request_all_of_action_sections_TEST
