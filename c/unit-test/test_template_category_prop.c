#ifndef template_category_prop_TEST
#define template_category_prop_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define template_category_prop_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/template_category_prop.h"
template_category_prop_t* instantiate_template_category_prop(int include_optional);



template_category_prop_t* instantiate_template_category_prop(int include_optional) {
  template_category_prop_t* template_category_prop = NULL;
  if (include_optional) {
    template_category_prop = template_category_prop_create(
    );
  } else {
    template_category_prop = template_category_prop_create(
    );
  }

  return template_category_prop;
}


#ifdef template_category_prop_MAIN

void test_template_category_prop(int include_optional) {
    template_category_prop_t* template_category_prop_1 = instantiate_template_category_prop(include_optional);

	cJSON* jsontemplate_category_prop_1 = template_category_prop_convertToJSON(template_category_prop_1);
	printf("template_category_prop :\n%s\n", cJSON_Print(jsontemplate_category_prop_1));
	template_category_prop_t* template_category_prop_2 = template_category_prop_parseFromJSON(jsontemplate_category_prop_1);
	cJSON* jsontemplate_category_prop_2 = template_category_prop_convertToJSON(template_category_prop_2);
	printf("repeating template_category_prop:\n%s\n", cJSON_Print(jsontemplate_category_prop_2));
}

int main() {
  test_template_category_prop(1);
  test_template_category_prop(0);

  printf("Hello world \n");
  return 0;
}

#endif // template_category_prop_MAIN
#endif // template_category_prop_TEST
