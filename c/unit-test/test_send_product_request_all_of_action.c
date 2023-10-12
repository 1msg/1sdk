#ifndef send_product_request_all_of_action_TEST
#define send_product_request_all_of_action_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define send_product_request_all_of_action_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/send_product_request_all_of_action.h"
send_product_request_all_of_action_t* instantiate_send_product_request_all_of_action(int include_optional);



send_product_request_all_of_action_t* instantiate_send_product_request_all_of_action(int include_optional) {
  send_product_request_all_of_action_t* send_product_request_all_of_action = NULL;
  if (include_optional) {
    send_product_request_all_of_action = send_product_request_all_of_action_create(
      "407921857496983",
      "product-1",
      list_createList()
    );
  } else {
    send_product_request_all_of_action = send_product_request_all_of_action_create(
      "407921857496983",
      "product-1",
      list_createList()
    );
  }

  return send_product_request_all_of_action;
}


#ifdef send_product_request_all_of_action_MAIN

void test_send_product_request_all_of_action(int include_optional) {
    send_product_request_all_of_action_t* send_product_request_all_of_action_1 = instantiate_send_product_request_all_of_action(include_optional);

	cJSON* jsonsend_product_request_all_of_action_1 = send_product_request_all_of_action_convertToJSON(send_product_request_all_of_action_1);
	printf("send_product_request_all_of_action :\n%s\n", cJSON_Print(jsonsend_product_request_all_of_action_1));
	send_product_request_all_of_action_t* send_product_request_all_of_action_2 = send_product_request_all_of_action_parseFromJSON(jsonsend_product_request_all_of_action_1);
	cJSON* jsonsend_product_request_all_of_action_2 = send_product_request_all_of_action_convertToJSON(send_product_request_all_of_action_2);
	printf("repeating send_product_request_all_of_action:\n%s\n", cJSON_Print(jsonsend_product_request_all_of_action_2));
}

int main() {
  test_send_product_request_all_of_action(1);
  test_send_product_request_all_of_action(0);

  printf("Hello world \n");
  return 0;
}

#endif // send_product_request_all_of_action_MAIN
#endif // send_product_request_all_of_action_TEST
