#ifndef commerce_TEST
#define commerce_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define commerce_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/commerce.h"
commerce_t* instantiate_commerce(int include_optional);

#include "test_commerce_params.c"


commerce_t* instantiate_commerce(int include_optional) {
  commerce_t* commerce = NULL;
  if (include_optional) {
    commerce = commerce_create(
       // false, not to have infinite recursion
      instantiate_commerce_params(0)
    );
  } else {
    commerce = commerce_create(
      NULL
    );
  }

  return commerce;
}


#ifdef commerce_MAIN

void test_commerce(int include_optional) {
    commerce_t* commerce_1 = instantiate_commerce(include_optional);

	cJSON* jsoncommerce_1 = commerce_convertToJSON(commerce_1);
	printf("commerce :\n%s\n", cJSON_Print(jsoncommerce_1));
	commerce_t* commerce_2 = commerce_parseFromJSON(jsoncommerce_1);
	cJSON* jsoncommerce_2 = commerce_convertToJSON(commerce_2);
	printf("repeating commerce:\n%s\n", cJSON_Print(jsoncommerce_2));
}

int main() {
  test_commerce(1);
  test_commerce(0);

  printf("Hello world \n");
  return 0;
}

#endif // commerce_MAIN
#endif // commerce_TEST
