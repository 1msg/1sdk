#ifndef commerce_params_TEST
#define commerce_params_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define commerce_params_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/commerce_params.h"
commerce_params_t* instantiate_commerce_params(int include_optional);



commerce_params_t* instantiate_commerce_params(int include_optional) {
  commerce_params_t* commerce_params = NULL;
  if (include_optional) {
    commerce_params = commerce_params_create(
      true,
      true
    );
  } else {
    commerce_params = commerce_params_create(
      true,
      true
    );
  }

  return commerce_params;
}


#ifdef commerce_params_MAIN

void test_commerce_params(int include_optional) {
    commerce_params_t* commerce_params_1 = instantiate_commerce_params(include_optional);

	cJSON* jsoncommerce_params_1 = commerce_params_convertToJSON(commerce_params_1);
	printf("commerce_params :\n%s\n", cJSON_Print(jsoncommerce_params_1));
	commerce_params_t* commerce_params_2 = commerce_params_parseFromJSON(jsoncommerce_params_1);
	cJSON* jsoncommerce_params_2 = commerce_params_convertToJSON(commerce_params_2);
	printf("repeating commerce_params:\n%s\n", cJSON_Print(jsoncommerce_params_2));
}

int main() {
  test_commerce_params(1);
  test_commerce_params(0);

  printf("Hello world \n");
  return 0;
}

#endif // commerce_params_MAIN
#endif // commerce_params_TEST
