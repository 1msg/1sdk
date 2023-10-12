#ifndef set_webhook_status_TEST
#define set_webhook_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define set_webhook_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/set_webhook_status.h"
set_webhook_status_t* instantiate_set_webhook_status(int include_optional);



set_webhook_status_t* instantiate_set_webhook_status(int include_optional) {
  set_webhook_status_t* set_webhook_status = NULL;
  if (include_optional) {
    set_webhook_status = set_webhook_status_create(
      true,
      "https://bin.1msg.io/1f9aj261"
    );
  } else {
    set_webhook_status = set_webhook_status_create(
      true,
      "https://bin.1msg.io/1f9aj261"
    );
  }

  return set_webhook_status;
}


#ifdef set_webhook_status_MAIN

void test_set_webhook_status(int include_optional) {
    set_webhook_status_t* set_webhook_status_1 = instantiate_set_webhook_status(include_optional);

	cJSON* jsonset_webhook_status_1 = set_webhook_status_convertToJSON(set_webhook_status_1);
	printf("set_webhook_status :\n%s\n", cJSON_Print(jsonset_webhook_status_1));
	set_webhook_status_t* set_webhook_status_2 = set_webhook_status_parseFromJSON(jsonset_webhook_status_1);
	cJSON* jsonset_webhook_status_2 = set_webhook_status_convertToJSON(set_webhook_status_2);
	printf("repeating set_webhook_status:\n%s\n", cJSON_Print(jsonset_webhook_status_2));
}

int main() {
  test_set_webhook_status(1);
  test_set_webhook_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // set_webhook_status_MAIN
#endif // set_webhook_status_TEST
