#ifndef set_settings_200_response_all_of_update_TEST
#define set_settings_200_response_all_of_update_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define set_settings_200_response_all_of_update_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/set_settings_200_response_all_of_update.h"
set_settings_200_response_all_of_update_t* instantiate_set_settings_200_response_all_of_update(int include_optional);



set_settings_200_response_all_of_update_t* instantiate_set_settings_200_response_all_of_update(int include_optional) {
  set_settings_200_response_all_of_update_t* set_settings_200_response_all_of_update = NULL;
  if (include_optional) {
    set_settings_200_response_all_of_update = set_settings_200_response_all_of_update_create(
      "https://bin.1msg.io/1f9aj261"
    );
  } else {
    set_settings_200_response_all_of_update = set_settings_200_response_all_of_update_create(
      "https://bin.1msg.io/1f9aj261"
    );
  }

  return set_settings_200_response_all_of_update;
}


#ifdef set_settings_200_response_all_of_update_MAIN

void test_set_settings_200_response_all_of_update(int include_optional) {
    set_settings_200_response_all_of_update_t* set_settings_200_response_all_of_update_1 = instantiate_set_settings_200_response_all_of_update(include_optional);

	cJSON* jsonset_settings_200_response_all_of_update_1 = set_settings_200_response_all_of_update_convertToJSON(set_settings_200_response_all_of_update_1);
	printf("set_settings_200_response_all_of_update :\n%s\n", cJSON_Print(jsonset_settings_200_response_all_of_update_1));
	set_settings_200_response_all_of_update_t* set_settings_200_response_all_of_update_2 = set_settings_200_response_all_of_update_parseFromJSON(jsonset_settings_200_response_all_of_update_1);
	cJSON* jsonset_settings_200_response_all_of_update_2 = set_settings_200_response_all_of_update_convertToJSON(set_settings_200_response_all_of_update_2);
	printf("repeating set_settings_200_response_all_of_update:\n%s\n", cJSON_Print(jsonset_settings_200_response_all_of_update_2));
}

int main() {
  test_set_settings_200_response_all_of_update(1);
  test_set_settings_200_response_all_of_update(0);

  printf("Hello world \n");
  return 0;
}

#endif // set_settings_200_response_all_of_update_MAIN
#endif // set_settings_200_response_all_of_update_TEST
