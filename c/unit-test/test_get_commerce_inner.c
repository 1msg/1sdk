#ifndef get_commerce_inner_TEST
#define get_commerce_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define get_commerce_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/get_commerce_inner.h"
get_commerce_inner_t* instantiate_get_commerce_inner(int include_optional);



get_commerce_inner_t* instantiate_get_commerce_inner(int include_optional) {
  get_commerce_inner_t* get_commerce_inner = NULL;
  if (include_optional) {
    get_commerce_inner = get_commerce_inner_create(
      "789887292550821",
      true,
      true
    );
  } else {
    get_commerce_inner = get_commerce_inner_create(
      "789887292550821",
      true,
      true
    );
  }

  return get_commerce_inner;
}


#ifdef get_commerce_inner_MAIN

void test_get_commerce_inner(int include_optional) {
    get_commerce_inner_t* get_commerce_inner_1 = instantiate_get_commerce_inner(include_optional);

	cJSON* jsonget_commerce_inner_1 = get_commerce_inner_convertToJSON(get_commerce_inner_1);
	printf("get_commerce_inner :\n%s\n", cJSON_Print(jsonget_commerce_inner_1));
	get_commerce_inner_t* get_commerce_inner_2 = get_commerce_inner_parseFromJSON(jsonget_commerce_inner_1);
	cJSON* jsonget_commerce_inner_2 = get_commerce_inner_convertToJSON(get_commerce_inner_2);
	printf("repeating get_commerce_inner:\n%s\n", cJSON_Print(jsonget_commerce_inner_2));
}

int main() {
  test_get_commerce_inner(1);
  test_get_commerce_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // get_commerce_inner_MAIN
#endif // get_commerce_inner_TEST
