#ifndef remove_template_request_TEST
#define remove_template_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define remove_template_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/remove_template_request.h"
remove_template_request_t* instantiate_remove_template_request(int include_optional);



remove_template_request_t* instantiate_remove_template_request(int include_optional) {
  remove_template_request_t* remove_template_request = NULL;
  if (include_optional) {
    remove_template_request = remove_template_request_create(
      "start"
    );
  } else {
    remove_template_request = remove_template_request_create(
      "start"
    );
  }

  return remove_template_request;
}


#ifdef remove_template_request_MAIN

void test_remove_template_request(int include_optional) {
    remove_template_request_t* remove_template_request_1 = instantiate_remove_template_request(include_optional);

	cJSON* jsonremove_template_request_1 = remove_template_request_convertToJSON(remove_template_request_1);
	printf("remove_template_request :\n%s\n", cJSON_Print(jsonremove_template_request_1));
	remove_template_request_t* remove_template_request_2 = remove_template_request_parseFromJSON(jsonremove_template_request_1);
	cJSON* jsonremove_template_request_2 = remove_template_request_convertToJSON(remove_template_request_2);
	printf("repeating remove_template_request:\n%s\n", cJSON_Print(jsonremove_template_request_2));
}

int main() {
  test_remove_template_request(1);
  test_remove_template_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // remove_template_request_MAIN
#endif // remove_template_request_TEST
