#ifndef send_message_request_TEST
#define send_message_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define send_message_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/send_message_request.h"
send_message_request_t* instantiate_send_message_request(int include_optional);



send_message_request_t* instantiate_send_message_request(int include_optional) {
  send_message_request_t* send_message_request = NULL;
  if (include_optional) {
    send_message_request = send_message_request_create(
      "12020721369@c.us",
      12020721369,
      "0"
    );
  } else {
    send_message_request = send_message_request_create(
      "12020721369@c.us",
      12020721369,
      "0"
    );
  }

  return send_message_request;
}


#ifdef send_message_request_MAIN

void test_send_message_request(int include_optional) {
    send_message_request_t* send_message_request_1 = instantiate_send_message_request(include_optional);

	cJSON* jsonsend_message_request_1 = send_message_request_convertToJSON(send_message_request_1);
	printf("send_message_request :\n%s\n", cJSON_Print(jsonsend_message_request_1));
	send_message_request_t* send_message_request_2 = send_message_request_parseFromJSON(jsonsend_message_request_1);
	cJSON* jsonsend_message_request_2 = send_message_request_convertToJSON(send_message_request_2);
	printf("repeating send_message_request:\n%s\n", cJSON_Print(jsonsend_message_request_2));
}

int main() {
  test_send_message_request(1);
  test_send_message_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // send_message_request_MAIN
#endif // send_message_request_TEST
