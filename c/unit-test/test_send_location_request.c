#ifndef send_location_request_TEST
#define send_location_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define send_location_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/send_location_request.h"
send_location_request_t* instantiate_send_location_request(int include_optional);



send_location_request_t* instantiate_send_location_request(int include_optional) {
  send_location_request_t* send_location_request = NULL;
  if (include_optional) {
    send_location_request = send_location_request_create(
      "12020721369@c.us",
      12020721369,
      "45.018337",
      "-73.968285",
      "9766 Valley View St., New York, NY 10024",
      "Facebook HQ"
    );
  } else {
    send_location_request = send_location_request_create(
      "12020721369@c.us",
      12020721369,
      "45.018337",
      "-73.968285",
      "9766 Valley View St., New York, NY 10024",
      "Facebook HQ"
    );
  }

  return send_location_request;
}


#ifdef send_location_request_MAIN

void test_send_location_request(int include_optional) {
    send_location_request_t* send_location_request_1 = instantiate_send_location_request(include_optional);

	cJSON* jsonsend_location_request_1 = send_location_request_convertToJSON(send_location_request_1);
	printf("send_location_request :\n%s\n", cJSON_Print(jsonsend_location_request_1));
	send_location_request_t* send_location_request_2 = send_location_request_parseFromJSON(jsonsend_location_request_1);
	cJSON* jsonsend_location_request_2 = send_location_request_convertToJSON(send_location_request_2);
	printf("repeating send_location_request:\n%s\n", cJSON_Print(jsonsend_location_request_2));
}

int main() {
  test_send_location_request(1);
  test_send_location_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // send_location_request_MAIN
#endif // send_location_request_TEST
