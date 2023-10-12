#ifndef template_components_prop_TEST
#define template_components_prop_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define template_components_prop_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/template_components_prop.h"
template_components_prop_t* instantiate_template_components_prop(int include_optional);



template_components_prop_t* instantiate_template_components_prop(int include_optional) {
  template_components_prop_t* template_components_prop = NULL;
  if (include_optional) {
    template_components_prop = template_components_prop_create(
    );
  } else {
    template_components_prop = template_components_prop_create(
    );
  }

  return template_components_prop;
}


#ifdef template_components_prop_MAIN

void test_template_components_prop(int include_optional) {
    template_components_prop_t* template_components_prop_1 = instantiate_template_components_prop(include_optional);

	cJSON* jsontemplate_components_prop_1 = template_components_prop_convertToJSON(template_components_prop_1);
	printf("template_components_prop :\n%s\n", cJSON_Print(jsontemplate_components_prop_1));
	template_components_prop_t* template_components_prop_2 = template_components_prop_parseFromJSON(jsontemplate_components_prop_1);
	cJSON* jsontemplate_components_prop_2 = template_components_prop_convertToJSON(template_components_prop_2);
	printf("repeating template_components_prop:\n%s\n", cJSON_Print(jsontemplate_components_prop_2));
}

int main() {
  test_template_components_prop(1);
  test_template_components_prop(0);

  printf("Hello world \n");
  return 0;
}

#endif // template_components_prop_MAIN
#endif // template_components_prop_TEST
