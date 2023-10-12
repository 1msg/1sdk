#ifndef set_commerce_TEST
#define set_commerce_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define set_commerce_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/set_commerce.h"
set_commerce_t* instantiate_set_commerce(int include_optional);



set_commerce_t* instantiate_set_commerce(int include_optional) {
  set_commerce_t* set_commerce = NULL;
  if (include_optional) {
    set_commerce = set_commerce_create(
      true
    );
  } else {
    set_commerce = set_commerce_create(
      true
    );
  }

  return set_commerce;
}


#ifdef set_commerce_MAIN

void test_set_commerce(int include_optional) {
    set_commerce_t* set_commerce_1 = instantiate_set_commerce(include_optional);

	cJSON* jsonset_commerce_1 = set_commerce_convertToJSON(set_commerce_1);
	printf("set_commerce :\n%s\n", cJSON_Print(jsonset_commerce_1));
	set_commerce_t* set_commerce_2 = set_commerce_parseFromJSON(jsonset_commerce_1);
	cJSON* jsonset_commerce_2 = set_commerce_convertToJSON(set_commerce_2);
	printf("repeating set_commerce:\n%s\n", cJSON_Print(jsonset_commerce_2));
}

int main() {
  test_set_commerce(1);
  test_set_commerce(0);

  printf("Hello world \n");
  return 0;
}

#endif // set_commerce_MAIN
#endif // set_commerce_TEST
