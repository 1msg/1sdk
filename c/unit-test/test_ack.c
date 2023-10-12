#ifndef ack_TEST
#define ack_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ack_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ack.h"
ack_t* instantiate_ack(int include_optional);



ack_t* instantiate_ack(int include_optional) {
  ack_t* ack = NULL;
  if (include_optional) {
    ack = ack_create(
      "true_12020721369@c.us_DF38E6A25B42CC8CCE13EC40F",
      "12020721369@c.us",
      one_msg_waba_sdk_ack_STATUS_"viewed"
    );
  } else {
    ack = ack_create(
      "true_12020721369@c.us_DF38E6A25B42CC8CCE13EC40F",
      "12020721369@c.us",
      one_msg_waba_sdk_ack_STATUS_"viewed"
    );
  }

  return ack;
}


#ifdef ack_MAIN

void test_ack(int include_optional) {
    ack_t* ack_1 = instantiate_ack(include_optional);

	cJSON* jsonack_1 = ack_convertToJSON(ack_1);
	printf("ack :\n%s\n", cJSON_Print(jsonack_1));
	ack_t* ack_2 = ack_parseFromJSON(jsonack_1);
	cJSON* jsonack_2 = ack_convertToJSON(ack_2);
	printf("repeating ack:\n%s\n", cJSON_Print(jsonack_2));
}

int main() {
  test_ack(1);
  test_ack(0);

  printf("Hello world \n");
  return 0;
}

#endif // ack_MAIN
#endif // ack_TEST
