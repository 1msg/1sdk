#ifndef get_templates_templates_inner_TEST
#define get_templates_templates_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define get_templates_templates_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/get_templates_templates_inner.h"
get_templates_templates_inner_t* instantiate_get_templates_templates_inner(int include_optional);



get_templates_templates_inner_t* instantiate_get_templates_templates_inner(int include_optional) {
  get_templates_templates_inner_t* get_templates_templates_inner = NULL;
  if (include_optional) {
    get_templates_templates_inner = get_templates_templates_inner_create(
      one_msg_waba_sdk_get_templates_templates_inner__"MARKETING",
      list_createList(),
      one_msg_waba_sdk_get_templates_templates_inner__"en",
      "start",
      "ca300906_cfbc_410b_99fb_dcee8e13d578",
      "NONE",
      "approved"
    );
  } else {
    get_templates_templates_inner = get_templates_templates_inner_create(
      one_msg_waba_sdk_get_templates_templates_inner__"MARKETING",
      list_createList(),
      one_msg_waba_sdk_get_templates_templates_inner__"en",
      "start",
      "ca300906_cfbc_410b_99fb_dcee8e13d578",
      "NONE",
      "approved"
    );
  }

  return get_templates_templates_inner;
}


#ifdef get_templates_templates_inner_MAIN

void test_get_templates_templates_inner(int include_optional) {
    get_templates_templates_inner_t* get_templates_templates_inner_1 = instantiate_get_templates_templates_inner(include_optional);

	cJSON* jsonget_templates_templates_inner_1 = get_templates_templates_inner_convertToJSON(get_templates_templates_inner_1);
	printf("get_templates_templates_inner :\n%s\n", cJSON_Print(jsonget_templates_templates_inner_1));
	get_templates_templates_inner_t* get_templates_templates_inner_2 = get_templates_templates_inner_parseFromJSON(jsonget_templates_templates_inner_1);
	cJSON* jsonget_templates_templates_inner_2 = get_templates_templates_inner_convertToJSON(get_templates_templates_inner_2);
	printf("repeating get_templates_templates_inner:\n%s\n", cJSON_Print(jsonget_templates_templates_inner_2));
}

int main() {
  test_get_templates_templates_inner(1);
  test_get_templates_templates_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // get_templates_templates_inner_MAIN
#endif // get_templates_templates_inner_TEST
