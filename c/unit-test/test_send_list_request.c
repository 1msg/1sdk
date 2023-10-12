#ifndef send_list_request_TEST
#define send_list_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define send_list_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/send_list_request.h"
send_list_request_t* instantiate_send_list_request(int include_optional);



send_list_request_t* instantiate_send_list_request(int include_optional) {
  send_list_request_t* send_list_request = NULL;
  if (include_optional) {
    send_list_request = send_list_request_create(
      "12020721369@c.us",
      12020721369,
      "Please choose option",
      "Some options",
      "Thank you",
      "List",
      [{"title":"Section 1","rows":[{"id":"1","title":"Option 1","description":"Description 1"}]},{"title":"Section 2","rows":[{"id":"2","title":"Option 2","description":"Description 2"}]}]
    );
  } else {
    send_list_request = send_list_request_create(
      "12020721369@c.us",
      12020721369,
      "Please choose option",
      "Some options",
      "Thank you",
      "List",
      [{"title":"Section 1","rows":[{"id":"1","title":"Option 1","description":"Description 1"}]},{"title":"Section 2","rows":[{"id":"2","title":"Option 2","description":"Description 2"}]}]
    );
  }

  return send_list_request;
}


#ifdef send_list_request_MAIN

void test_send_list_request(int include_optional) {
    send_list_request_t* send_list_request_1 = instantiate_send_list_request(include_optional);

	cJSON* jsonsend_list_request_1 = send_list_request_convertToJSON(send_list_request_1);
	printf("send_list_request :\n%s\n", cJSON_Print(jsonsend_list_request_1));
	send_list_request_t* send_list_request_2 = send_list_request_parseFromJSON(jsonsend_list_request_1);
	cJSON* jsonsend_list_request_2 = send_list_request_convertToJSON(send_list_request_2);
	printf("repeating send_list_request:\n%s\n", cJSON_Print(jsonsend_list_request_2));
}

int main() {
  test_send_list_request(1);
  test_send_list_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // send_list_request_MAIN
#endif // send_list_request_TEST
