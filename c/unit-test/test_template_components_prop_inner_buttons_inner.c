#ifndef template_components_prop_inner_buttons_inner_TEST
#define template_components_prop_inner_buttons_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define template_components_prop_inner_buttons_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/template_components_prop_inner_buttons_inner.h"
template_components_prop_inner_buttons_inner_t* instantiate_template_components_prop_inner_buttons_inner(int include_optional);



template_components_prop_inner_buttons_inner_t* instantiate_template_components_prop_inner_buttons_inner(int include_optional) {
  template_components_prop_inner_buttons_inner_t* template_components_prop_inner_buttons_inner = NULL;
  if (include_optional) {
    template_components_prop_inner_buttons_inner = template_components_prop_inner_buttons_inner_create(
      one_msg_waba_sdk_template_components_prop_inner_buttons_inner_TYPE_"QUICK_REPLY",
      "phone-button-text",
      "https://www.website.com/{{1}}",
      "+1(234) 235-5678",
      list_createList()
    );
  } else {
    template_components_prop_inner_buttons_inner = template_components_prop_inner_buttons_inner_create(
      one_msg_waba_sdk_template_components_prop_inner_buttons_inner_TYPE_"QUICK_REPLY",
      "phone-button-text",
      "https://www.website.com/{{1}}",
      "+1(234) 235-5678",
      list_createList()
    );
  }

  return template_components_prop_inner_buttons_inner;
}


#ifdef template_components_prop_inner_buttons_inner_MAIN

void test_template_components_prop_inner_buttons_inner(int include_optional) {
    template_components_prop_inner_buttons_inner_t* template_components_prop_inner_buttons_inner_1 = instantiate_template_components_prop_inner_buttons_inner(include_optional);

	cJSON* jsontemplate_components_prop_inner_buttons_inner_1 = template_components_prop_inner_buttons_inner_convertToJSON(template_components_prop_inner_buttons_inner_1);
	printf("template_components_prop_inner_buttons_inner :\n%s\n", cJSON_Print(jsontemplate_components_prop_inner_buttons_inner_1));
	template_components_prop_inner_buttons_inner_t* template_components_prop_inner_buttons_inner_2 = template_components_prop_inner_buttons_inner_parseFromJSON(jsontemplate_components_prop_inner_buttons_inner_1);
	cJSON* jsontemplate_components_prop_inner_buttons_inner_2 = template_components_prop_inner_buttons_inner_convertToJSON(template_components_prop_inner_buttons_inner_2);
	printf("repeating template_components_prop_inner_buttons_inner:\n%s\n", cJSON_Print(jsontemplate_components_prop_inner_buttons_inner_2));
}

int main() {
  test_template_components_prop_inner_buttons_inner(1);
  test_template_components_prop_inner_buttons_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // template_components_prop_inner_buttons_inner_MAIN
#endif // template_components_prop_inner_buttons_inner_TEST
