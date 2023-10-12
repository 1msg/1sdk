#ifndef set_me_request_TEST
#define set_me_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define set_me_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/set_me_request.h"
set_me_request_t* instantiate_set_me_request(int include_optional);



set_me_request_t* instantiate_set_me_request(int include_optional) {
  set_me_request_t* set_me_request = NULL;
  if (include_optional) {
    set_me_request = set_me_request_create(
      "Some about info",
      "Neverland, Unexpected st.",
      "Some company description",
      "john@neverland.play",
      "12020721369",
      one_msg_waba_sdk_set_me_request_VERTICAL_"Other",
      "0"
    );
  } else {
    set_me_request = set_me_request_create(
      "Some about info",
      "Neverland, Unexpected st.",
      "Some company description",
      "john@neverland.play",
      "12020721369",
      one_msg_waba_sdk_set_me_request_VERTICAL_"Other",
      "0"
    );
  }

  return set_me_request;
}


#ifdef set_me_request_MAIN

void test_set_me_request(int include_optional) {
    set_me_request_t* set_me_request_1 = instantiate_set_me_request(include_optional);

	cJSON* jsonset_me_request_1 = set_me_request_convertToJSON(set_me_request_1);
	printf("set_me_request :\n%s\n", cJSON_Print(jsonset_me_request_1));
	set_me_request_t* set_me_request_2 = set_me_request_parseFromJSON(jsonset_me_request_1);
	cJSON* jsonset_me_request_2 = set_me_request_convertToJSON(set_me_request_2);
	printf("repeating set_me_request:\n%s\n", cJSON_Print(jsonset_me_request_2));
}

int main() {
  test_set_me_request(1);
  test_set_me_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // set_me_request_MAIN
#endif // set_me_request_TEST
