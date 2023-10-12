#ifndef template_namespace_field_TEST
#define template_namespace_field_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define template_namespace_field_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/template_namespace_field.h"
template_namespace_field_t* instantiate_template_namespace_field(int include_optional);



template_namespace_field_t* instantiate_template_namespace_field(int include_optional) {
  template_namespace_field_t* template_namespace_field = NULL;
  if (include_optional) {
    template_namespace_field = template_namespace_field_create(
      "ca300906_cfbc_410b_99fb_dcee8e13d578"
    );
  } else {
    template_namespace_field = template_namespace_field_create(
      "ca300906_cfbc_410b_99fb_dcee8e13d578"
    );
  }

  return template_namespace_field;
}


#ifdef template_namespace_field_MAIN

void test_template_namespace_field(int include_optional) {
    template_namespace_field_t* template_namespace_field_1 = instantiate_template_namespace_field(include_optional);

	cJSON* jsontemplate_namespace_field_1 = template_namespace_field_convertToJSON(template_namespace_field_1);
	printf("template_namespace_field :\n%s\n", cJSON_Print(jsontemplate_namespace_field_1));
	template_namespace_field_t* template_namespace_field_2 = template_namespace_field_parseFromJSON(jsontemplate_namespace_field_1);
	cJSON* jsontemplate_namespace_field_2 = template_namespace_field_convertToJSON(template_namespace_field_2);
	printf("repeating template_namespace_field:\n%s\n", cJSON_Print(jsontemplate_namespace_field_2));
}

int main() {
  test_template_namespace_field(1);
  test_template_namespace_field(0);

  printf("Hello world \n");
  return 0;
}

#endif // template_namespace_field_MAIN
#endif // template_namespace_field_TEST
