#ifndef phone_prop_TEST
#define phone_prop_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define phone_prop_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/phone_prop.h"
phone_prop_t* instantiate_phone_prop(int include_optional);



phone_prop_t* instantiate_phone_prop(int include_optional) {
  phone_prop_t* phone_prop = NULL;
  if (include_optional) {
    phone_prop = phone_prop_create(
      12020721369
    );
  } else {
    phone_prop = phone_prop_create(
      12020721369
    );
  }

  return phone_prop;
}


#ifdef phone_prop_MAIN

void test_phone_prop(int include_optional) {
    phone_prop_t* phone_prop_1 = instantiate_phone_prop(include_optional);

	cJSON* jsonphone_prop_1 = phone_prop_convertToJSON(phone_prop_1);
	printf("phone_prop :\n%s\n", cJSON_Print(jsonphone_prop_1));
	phone_prop_t* phone_prop_2 = phone_prop_parseFromJSON(jsonphone_prop_1);
	cJSON* jsonphone_prop_2 = phone_prop_convertToJSON(phone_prop_2);
	printf("repeating phone_prop:\n%s\n", cJSON_Print(jsonphone_prop_2));
}

int main() {
  test_phone_prop(1);
  test_phone_prop(0);

  printf("Hello world \n");
  return 0;
}

#endif // phone_prop_MAIN
#endif // phone_prop_TEST
