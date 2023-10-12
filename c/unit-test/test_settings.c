#ifndef settings_TEST
#define settings_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define settings_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/settings.h"
settings_t* instantiate_settings(int include_optional);



settings_t* instantiate_settings(int include_optional) {
  settings_t* settings = NULL;
  if (include_optional) {
    settings = settings_create(
      "https://bin.1msg.io/1f9aj261"
    );
  } else {
    settings = settings_create(
      "https://bin.1msg.io/1f9aj261"
    );
  }

  return settings;
}


#ifdef settings_MAIN

void test_settings(int include_optional) {
    settings_t* settings_1 = instantiate_settings(include_optional);

	cJSON* jsonsettings_1 = settings_convertToJSON(settings_1);
	printf("settings :\n%s\n", cJSON_Print(jsonsettings_1));
	settings_t* settings_2 = settings_parseFromJSON(jsonsettings_1);
	cJSON* jsonsettings_2 = settings_convertToJSON(settings_2);
	printf("repeating settings:\n%s\n", cJSON_Print(jsonsettings_2));
}

int main() {
  test_settings(1);
  test_settings(0);

  printf("Hello world \n");
  return 0;
}

#endif // settings_MAIN
#endif // settings_TEST
