#ifndef get_me_TEST
#define get_me_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define get_me_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/get_me.h"
get_me_t* instantiate_get_me(int include_optional);



get_me_t* instantiate_get_me(int include_optional) {
  get_me_t* get_me = NULL;
  if (include_optional) {
    get_me = get_me_create(
      "Some about info",
      "Neverland, Unexpected st.",
      "Some company description",
      "john@neverland.play",
      "12020721369",
      one_msg_waba_sdk_get_me_VERTICAL_"Other",
      "https://pps.whatsapp.net/sample.jpg"
    );
  } else {
    get_me = get_me_create(
      "Some about info",
      "Neverland, Unexpected st.",
      "Some company description",
      "john@neverland.play",
      "12020721369",
      one_msg_waba_sdk_get_me_VERTICAL_"Other",
      "https://pps.whatsapp.net/sample.jpg"
    );
  }

  return get_me;
}


#ifdef get_me_MAIN

void test_get_me(int include_optional) {
    get_me_t* get_me_1 = instantiate_get_me(include_optional);

	cJSON* jsonget_me_1 = get_me_convertToJSON(get_me_1);
	printf("get_me :\n%s\n", cJSON_Print(jsonget_me_1));
	get_me_t* get_me_2 = get_me_parseFromJSON(jsonget_me_1);
	cJSON* jsonget_me_2 = get_me_convertToJSON(get_me_2);
	printf("repeating get_me:\n%s\n", cJSON_Print(jsonget_me_2));
}

int main() {
  test_get_me(1);
  test_get_me(0);

  printf("Hello world \n");
  return 0;
}

#endif // get_me_MAIN
#endif // get_me_TEST
