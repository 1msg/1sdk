#ifndef get_messages_TEST
#define get_messages_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define get_messages_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/get_messages.h"
get_messages_t* instantiate_get_messages(int include_optional);



get_messages_t* instantiate_get_messages(int include_optional) {
  get_messages_t* get_messages = NULL;
  if (include_optional) {
    get_messages = get_messages_create(
      list_createList()
    );
  } else {
    get_messages = get_messages_create(
      list_createList()
    );
  }

  return get_messages;
}


#ifdef get_messages_MAIN

void test_get_messages(int include_optional) {
    get_messages_t* get_messages_1 = instantiate_get_messages(include_optional);

	cJSON* jsonget_messages_1 = get_messages_convertToJSON(get_messages_1);
	printf("get_messages :\n%s\n", cJSON_Print(jsonget_messages_1));
	get_messages_t* get_messages_2 = get_messages_parseFromJSON(jsonget_messages_1);
	cJSON* jsonget_messages_2 = get_messages_convertToJSON(get_messages_2);
	printf("repeating get_messages:\n%s\n", cJSON_Print(jsonget_messages_2));
}

int main() {
  test_get_messages(1);
  test_get_messages(0);

  printf("Hello world \n");
  return 0;
}

#endif // get_messages_MAIN
#endif // get_messages_TEST
