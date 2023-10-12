#ifndef send_product_request_all_of_action_product_items_TEST
#define send_product_request_all_of_action_product_items_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define send_product_request_all_of_action_product_items_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/send_product_request_all_of_action_product_items.h"
send_product_request_all_of_action_product_items_t* instantiate_send_product_request_all_of_action_product_items(int include_optional);



send_product_request_all_of_action_product_items_t* instantiate_send_product_request_all_of_action_product_items(int include_optional) {
  send_product_request_all_of_action_product_items_t* send_product_request_all_of_action_product_items = NULL;
  if (include_optional) {
    send_product_request_all_of_action_product_items = send_product_request_all_of_action_product_items_create(
      "product-1"
    );
  } else {
    send_product_request_all_of_action_product_items = send_product_request_all_of_action_product_items_create(
      "product-1"
    );
  }

  return send_product_request_all_of_action_product_items;
}


#ifdef send_product_request_all_of_action_product_items_MAIN

void test_send_product_request_all_of_action_product_items(int include_optional) {
    send_product_request_all_of_action_product_items_t* send_product_request_all_of_action_product_items_1 = instantiate_send_product_request_all_of_action_product_items(include_optional);

	cJSON* jsonsend_product_request_all_of_action_product_items_1 = send_product_request_all_of_action_product_items_convertToJSON(send_product_request_all_of_action_product_items_1);
	printf("send_product_request_all_of_action_product_items :\n%s\n", cJSON_Print(jsonsend_product_request_all_of_action_product_items_1));
	send_product_request_all_of_action_product_items_t* send_product_request_all_of_action_product_items_2 = send_product_request_all_of_action_product_items_parseFromJSON(jsonsend_product_request_all_of_action_product_items_1);
	cJSON* jsonsend_product_request_all_of_action_product_items_2 = send_product_request_all_of_action_product_items_convertToJSON(send_product_request_all_of_action_product_items_2);
	printf("repeating send_product_request_all_of_action_product_items:\n%s\n", cJSON_Print(jsonsend_product_request_all_of_action_product_items_2));
}

int main() {
  test_send_product_request_all_of_action_product_items(1);
  test_send_product_request_all_of_action_product_items(0);

  printf("Hello world \n");
  return 0;
}

#endif // send_product_request_all_of_action_product_items_MAIN
#endif // send_product_request_all_of_action_product_items_TEST
