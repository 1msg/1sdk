#ifndef get_commerce_TEST
#define get_commerce_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define get_commerce_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/get_commerce.h"
get_commerce_t* instantiate_get_commerce(int include_optional);



get_commerce_t* instantiate_get_commerce(int include_optional) {
  get_commerce_t* get_commerce = NULL;
  if (include_optional) {
    get_commerce = get_commerce_create(
    );
  } else {
    get_commerce = get_commerce_create(
    );
  }

  return get_commerce;
}


#ifdef get_commerce_MAIN

void test_get_commerce(int include_optional) {
    get_commerce_t* get_commerce_1 = instantiate_get_commerce(include_optional);

	cJSON* jsonget_commerce_1 = get_commerce_convertToJSON(get_commerce_1);
	printf("get_commerce :\n%s\n", cJSON_Print(jsonget_commerce_1));
	get_commerce_t* get_commerce_2 = get_commerce_parseFromJSON(jsonget_commerce_1);
	cJSON* jsonget_commerce_2 = get_commerce_convertToJSON(get_commerce_2);
	printf("repeating get_commerce:\n%s\n", cJSON_Print(jsonget_commerce_2));
}

int main() {
  test_get_commerce(1);
  test_get_commerce(0);

  printf("Hello world \n");
  return 0;
}

#endif // get_commerce_MAIN
#endif // get_commerce_TEST
