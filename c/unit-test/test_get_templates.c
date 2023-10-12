#ifndef get_templates_TEST
#define get_templates_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define get_templates_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/get_templates.h"
get_templates_t* instantiate_get_templates(int include_optional);



get_templates_t* instantiate_get_templates(int include_optional) {
  get_templates_t* get_templates = NULL;
  if (include_optional) {
    get_templates = get_templates_create(
      3,
      list_createList()
    );
  } else {
    get_templates = get_templates_create(
      3,
      list_createList()
    );
  }

  return get_templates;
}


#ifdef get_templates_MAIN

void test_get_templates(int include_optional) {
    get_templates_t* get_templates_1 = instantiate_get_templates(include_optional);

	cJSON* jsonget_templates_1 = get_templates_convertToJSON(get_templates_1);
	printf("get_templates :\n%s\n", cJSON_Print(jsonget_templates_1));
	get_templates_t* get_templates_2 = get_templates_parseFromJSON(jsonget_templates_1);
	cJSON* jsonget_templates_2 = get_templates_convertToJSON(get_templates_2);
	printf("repeating get_templates:\n%s\n", cJSON_Print(jsonget_templates_2));
}

int main() {
  test_get_templates(1);
  test_get_templates(0);

  printf("Hello world \n");
  return 0;
}

#endif // get_templates_MAIN
#endif // get_templates_TEST
