#ifndef set_settings_200_response_TEST
#define set_settings_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define set_settings_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/set_settings_200_response.h"
set_settings_200_response_t* instantiate_set_settings_200_response(int include_optional);

#include "test_set_settings_200_response_all_of_update.c"


set_settings_200_response_t* instantiate_set_settings_200_response(int include_optional) {
  set_settings_200_response_t* set_settings_200_response = NULL;
  if (include_optional) {
    set_settings_200_response = set_settings_200_response_create(
      "https://bin.1msg.io/1f9aj261",
      null
    );
  } else {
    set_settings_200_response = set_settings_200_response_create(
      "https://bin.1msg.io/1f9aj261",
      null
    );
  }

  return set_settings_200_response;
}


#ifdef set_settings_200_response_MAIN

void test_set_settings_200_response(int include_optional) {
    set_settings_200_response_t* set_settings_200_response_1 = instantiate_set_settings_200_response(include_optional);

	cJSON* jsonset_settings_200_response_1 = set_settings_200_response_convertToJSON(set_settings_200_response_1);
	printf("set_settings_200_response :\n%s\n", cJSON_Print(jsonset_settings_200_response_1));
	set_settings_200_response_t* set_settings_200_response_2 = set_settings_200_response_parseFromJSON(jsonset_settings_200_response_1);
	cJSON* jsonset_settings_200_response_2 = set_settings_200_response_convertToJSON(set_settings_200_response_2);
	printf("repeating set_settings_200_response:\n%s\n", cJSON_Print(jsonset_settings_200_response_2));
}

int main() {
  test_set_settings_200_response(1);
  test_set_settings_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // set_settings_200_response_MAIN
#endif // set_settings_200_response_TEST
