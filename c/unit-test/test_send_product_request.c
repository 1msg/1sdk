#ifndef send_product_request_TEST
#define send_product_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define send_product_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/send_product_request.h"
send_product_request_t* instantiate_send_product_request(int include_optional);

#include "test_send_product_request_all_of_action.c"


send_product_request_t* instantiate_send_product_request(int include_optional) {
  send_product_request_t* send_product_request = NULL;
  if (include_optional) {
    send_product_request = send_product_request_create(
      "12020721369@c.us",
      12020721369,
      {"catalog_id":"{{catalog_id}}","sections":[{"title":"the-section-title","product_items":[{"product_retailer_id":"{{SKU-1}}"},{"product_retailer_id":"{{SKU-2}}"}]},{"title":"the-section-title2","product_items":[{"product_retailer_id":"{{SKU-1}}"}]}]},
      "Some text",
      "Footer",
      "Header"
    );
  } else {
    send_product_request = send_product_request_create(
      "12020721369@c.us",
      12020721369,
      {"catalog_id":"{{catalog_id}}","sections":[{"title":"the-section-title","product_items":[{"product_retailer_id":"{{SKU-1}}"},{"product_retailer_id":"{{SKU-2}}"}]},{"title":"the-section-title2","product_items":[{"product_retailer_id":"{{SKU-1}}"}]}]},
      "Some text",
      "Footer",
      "Header"
    );
  }

  return send_product_request;
}


#ifdef send_product_request_MAIN

void test_send_product_request(int include_optional) {
    send_product_request_t* send_product_request_1 = instantiate_send_product_request(include_optional);

	cJSON* jsonsend_product_request_1 = send_product_request_convertToJSON(send_product_request_1);
	printf("send_product_request :\n%s\n", cJSON_Print(jsonsend_product_request_1));
	send_product_request_t* send_product_request_2 = send_product_request_parseFromJSON(jsonsend_product_request_1);
	cJSON* jsonsend_product_request_2 = send_product_request_convertToJSON(send_product_request_2);
	printf("repeating send_product_request:\n%s\n", cJSON_Print(jsonsend_product_request_2));
}

int main() {
  test_send_product_request(1);
  test_send_product_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // send_product_request_MAIN
#endif // send_product_request_TEST
