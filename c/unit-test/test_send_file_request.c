#ifndef send_file_request_TEST
#define send_file_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define send_file_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/send_file_request.h"
send_file_request_t* instantiate_send_file_request(int include_optional);



send_file_request_t* instantiate_send_file_request(int include_optional) {
  send_file_request_t* send_file_request = NULL;
  if (include_optional) {
    send_file_request = send_file_request_create(
      "12020721369@c.us",
      12020721369,
      "0",
      "0",
      "0"
    );
  } else {
    send_file_request = send_file_request_create(
      "12020721369@c.us",
      12020721369,
      "0",
      "0",
      "0"
    );
  }

  return send_file_request;
}


#ifdef send_file_request_MAIN

void test_send_file_request(int include_optional) {
    send_file_request_t* send_file_request_1 = instantiate_send_file_request(include_optional);

	cJSON* jsonsend_file_request_1 = send_file_request_convertToJSON(send_file_request_1);
	printf("send_file_request :\n%s\n", cJSON_Print(jsonsend_file_request_1));
	send_file_request_t* send_file_request_2 = send_file_request_parseFromJSON(jsonsend_file_request_1);
	cJSON* jsonsend_file_request_2 = send_file_request_convertToJSON(send_file_request_2);
	printf("repeating send_file_request:\n%s\n", cJSON_Print(jsonsend_file_request_2));
}

int main() {
  test_send_file_request(1);
  test_send_file_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // send_file_request_MAIN
#endif // send_file_request_TEST
