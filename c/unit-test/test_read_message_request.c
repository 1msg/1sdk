#ifndef read_message_request_TEST
#define read_message_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define read_message_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/read_message_request.h"
read_message_request_t* instantiate_read_message_request(int include_optional);



read_message_request_t* instantiate_read_message_request(int include_optional) {
  read_message_request_t* read_message_request = NULL;
  if (include_optional) {
    read_message_request = read_message_request_create(
      "0XzkmGNn4prUAQlzsHApGNRXQ0U"
    );
  } else {
    read_message_request = read_message_request_create(
      "0XzkmGNn4prUAQlzsHApGNRXQ0U"
    );
  }

  return read_message_request;
}


#ifdef read_message_request_MAIN

void test_read_message_request(int include_optional) {
    read_message_request_t* read_message_request_1 = instantiate_read_message_request(include_optional);

	cJSON* jsonread_message_request_1 = read_message_request_convertToJSON(read_message_request_1);
	printf("read_message_request :\n%s\n", cJSON_Print(jsonread_message_request_1));
	read_message_request_t* read_message_request_2 = read_message_request_parseFromJSON(jsonread_message_request_1);
	cJSON* jsonread_message_request_2 = read_message_request_convertToJSON(read_message_request_2);
	printf("repeating read_message_request:\n%s\n", cJSON_Print(jsonread_message_request_2));
}

int main() {
  test_read_message_request(1);
  test_read_message_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // read_message_request_MAIN
#endif // read_message_request_TEST
