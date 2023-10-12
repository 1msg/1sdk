#ifndef set_me_TEST
#define set_me_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define set_me_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/set_me.h"
set_me_t* instantiate_set_me(int include_optional);



set_me_t* instantiate_set_me(int include_optional) {
  set_me_t* set_me = NULL;
  if (include_optional) {
    set_me = set_me_create(
      "success"
    );
  } else {
    set_me = set_me_create(
      "success"
    );
  }

  return set_me;
}


#ifdef set_me_MAIN

void test_set_me(int include_optional) {
    set_me_t* set_me_1 = instantiate_set_me(include_optional);

	cJSON* jsonset_me_1 = set_me_convertToJSON(set_me_1);
	printf("set_me :\n%s\n", cJSON_Print(jsonset_me_1));
	set_me_t* set_me_2 = set_me_parseFromJSON(jsonset_me_1);
	cJSON* jsonset_me_2 = set_me_convertToJSON(set_me_2);
	printf("repeating set_me:\n%s\n", cJSON_Print(jsonset_me_2));
}

int main() {
  test_set_me(1);
  test_set_me(0);

  printf("Hello world \n");
  return 0;
}

#endif // set_me_MAIN
#endif // set_me_TEST
