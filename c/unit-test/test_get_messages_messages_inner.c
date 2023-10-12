#ifndef get_messages_messages_inner_TEST
#define get_messages_messages_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define get_messages_messages_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/get_messages_messages_inner.h"
get_messages_messages_inner_t* instantiate_get_messages_messages_inner(int include_optional);



get_messages_messages_inner_t* instantiate_get_messages_messages_inner(int include_optional) {
  get_messages_messages_inner_t* get_messages_messages_inner = NULL;
  if (include_optional) {
    get_messages_messages_inner = get_messages_messages_inner_create(
      1,
      "0XzkmGNn4prUAQlzsHApGNRXQ0U",
      "Test message",
      true,
      1,
      0,
      "556123122026@c.us",
      1665396610,
      "556123122026@c.us",
      "chat",
      "780005553535@c.us",
      "0",
      "0",
      {},
      "556123122026"
    );
  } else {
    get_messages_messages_inner = get_messages_messages_inner_create(
      1,
      "0XzkmGNn4prUAQlzsHApGNRXQ0U",
      "Test message",
      true,
      1,
      0,
      "556123122026@c.us",
      1665396610,
      "556123122026@c.us",
      "chat",
      "780005553535@c.us",
      "0",
      "0",
      {},
      "556123122026"
    );
  }

  return get_messages_messages_inner;
}


#ifdef get_messages_messages_inner_MAIN

void test_get_messages_messages_inner(int include_optional) {
    get_messages_messages_inner_t* get_messages_messages_inner_1 = instantiate_get_messages_messages_inner(include_optional);

	cJSON* jsonget_messages_messages_inner_1 = get_messages_messages_inner_convertToJSON(get_messages_messages_inner_1);
	printf("get_messages_messages_inner :\n%s\n", cJSON_Print(jsonget_messages_messages_inner_1));
	get_messages_messages_inner_t* get_messages_messages_inner_2 = get_messages_messages_inner_parseFromJSON(jsonget_messages_messages_inner_1);
	cJSON* jsonget_messages_messages_inner_2 = get_messages_messages_inner_convertToJSON(get_messages_messages_inner_2);
	printf("repeating get_messages_messages_inner:\n%s\n", cJSON_Print(jsonget_messages_messages_inner_2));
}

int main() {
  test_get_messages_messages_inner(1);
  test_get_messages_messages_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // get_messages_messages_inner_MAIN
#endif // get_messages_messages_inner_TEST
