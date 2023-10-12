#ifndef get_ack_info_TEST
#define get_ack_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define get_ack_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/get_ack_info.h"
get_ack_info_t* instantiate_get_ack_info(int include_optional);



get_ack_info_t* instantiate_get_ack_info(int include_optional) {
  get_ack_info_t* get_ack_info = NULL;
  if (include_optional) {
    get_ack_info = get_ack_info_create(
      list_createList()
    );
  } else {
    get_ack_info = get_ack_info_create(
      list_createList()
    );
  }

  return get_ack_info;
}


#ifdef get_ack_info_MAIN

void test_get_ack_info(int include_optional) {
    get_ack_info_t* get_ack_info_1 = instantiate_get_ack_info(include_optional);

	cJSON* jsonget_ack_info_1 = get_ack_info_convertToJSON(get_ack_info_1);
	printf("get_ack_info :\n%s\n", cJSON_Print(jsonget_ack_info_1));
	get_ack_info_t* get_ack_info_2 = get_ack_info_parseFromJSON(jsonget_ack_info_1);
	cJSON* jsonget_ack_info_2 = get_ack_info_convertToJSON(get_ack_info_2);
	printf("repeating get_ack_info:\n%s\n", cJSON_Print(jsonget_ack_info_2));
}

int main() {
  test_get_ack_info(1);
  test_get_ack_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // get_ack_info_MAIN
#endif // get_ack_info_TEST
