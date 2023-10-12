#ifndef me_components_TEST
#define me_components_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define me_components_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/me_components.h"
me_components_t* instantiate_me_components(int include_optional);



me_components_t* instantiate_me_components(int include_optional) {
  me_components_t* me_components = NULL;
  if (include_optional) {
    me_components = me_components_create(
      "Some about info",
      "Neverland, Unexpected st.",
      "Some company description",
      "john@neverland.play",
      "12020721369",
      one_msg_waba_sdk_me_components_VERTICAL_"Other",
      "0"
    );
  } else {
    me_components = me_components_create(
      "Some about info",
      "Neverland, Unexpected st.",
      "Some company description",
      "john@neverland.play",
      "12020721369",
      one_msg_waba_sdk_me_components_VERTICAL_"Other",
      "0"
    );
  }

  return me_components;
}


#ifdef me_components_MAIN

void test_me_components(int include_optional) {
    me_components_t* me_components_1 = instantiate_me_components(include_optional);

	cJSON* jsonme_components_1 = me_components_convertToJSON(me_components_1);
	printf("me_components :\n%s\n", cJSON_Print(jsonme_components_1));
	me_components_t* me_components_2 = me_components_parseFromJSON(jsonme_components_1);
	cJSON* jsonme_components_2 = me_components_convertToJSON(me_components_2);
	printf("repeating me_components:\n%s\n", cJSON_Print(jsonme_components_2));
}

int main() {
  test_me_components(1);
  test_me_components(0);

  printf("Hello world \n");
  return 0;
}

#endif // me_components_MAIN
#endif // me_components_TEST
