#ifndef send_template_request_all_of_currency_TEST
#define send_template_request_all_of_currency_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define send_template_request_all_of_currency_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/send_template_request_all_of_currency.h"
send_template_request_all_of_currency_t* instantiate_send_template_request_all_of_currency(int include_optional);



send_template_request_all_of_currency_t* instantiate_send_template_request_all_of_currency(int include_optional) {
  send_template_request_all_of_currency_t* send_template_request_all_of_currency = NULL;
  if (include_optional) {
    send_template_request_all_of_currency = send_template_request_all_of_currency_create(
      "USD",
      100990
    );
  } else {
    send_template_request_all_of_currency = send_template_request_all_of_currency_create(
      "USD",
      100990
    );
  }

  return send_template_request_all_of_currency;
}


#ifdef send_template_request_all_of_currency_MAIN

void test_send_template_request_all_of_currency(int include_optional) {
    send_template_request_all_of_currency_t* send_template_request_all_of_currency_1 = instantiate_send_template_request_all_of_currency(include_optional);

	cJSON* jsonsend_template_request_all_of_currency_1 = send_template_request_all_of_currency_convertToJSON(send_template_request_all_of_currency_1);
	printf("send_template_request_all_of_currency :\n%s\n", cJSON_Print(jsonsend_template_request_all_of_currency_1));
	send_template_request_all_of_currency_t* send_template_request_all_of_currency_2 = send_template_request_all_of_currency_parseFromJSON(jsonsend_template_request_all_of_currency_1);
	cJSON* jsonsend_template_request_all_of_currency_2 = send_template_request_all_of_currency_convertToJSON(send_template_request_all_of_currency_2);
	printf("repeating send_template_request_all_of_currency:\n%s\n", cJSON_Print(jsonsend_template_request_all_of_currency_2));
}

int main() {
  test_send_template_request_all_of_currency(1);
  test_send_template_request_all_of_currency(0);

  printf("Hello world \n");
  return 0;
}

#endif // send_template_request_all_of_currency_MAIN
#endif // send_template_request_all_of_currency_TEST
