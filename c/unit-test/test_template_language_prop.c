#ifndef template_language_prop_TEST
#define template_language_prop_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define template_language_prop_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/template_language_prop.h"
template_language_prop_t* instantiate_template_language_prop(int include_optional);



template_language_prop_t* instantiate_template_language_prop(int include_optional) {
  template_language_prop_t* template_language_prop = NULL;
  if (include_optional) {
    template_language_prop = template_language_prop_create(
    );
  } else {
    template_language_prop = template_language_prop_create(
    );
  }

  return template_language_prop;
}


#ifdef template_language_prop_MAIN

void test_template_language_prop(int include_optional) {
    template_language_prop_t* template_language_prop_1 = instantiate_template_language_prop(include_optional);

	cJSON* jsontemplate_language_prop_1 = template_language_prop_convertToJSON(template_language_prop_1);
	printf("template_language_prop :\n%s\n", cJSON_Print(jsontemplate_language_prop_1));
	template_language_prop_t* template_language_prop_2 = template_language_prop_parseFromJSON(jsontemplate_language_prop_1);
	cJSON* jsontemplate_language_prop_2 = template_language_prop_convertToJSON(template_language_prop_2);
	printf("repeating template_language_prop:\n%s\n", cJSON_Print(jsontemplate_language_prop_2));
}

int main() {
  test_template_language_prop(1);
  test_template_language_prop(0);

  printf("Hello world \n");
  return 0;
}

#endif // template_language_prop_MAIN
#endif // template_language_prop_TEST
