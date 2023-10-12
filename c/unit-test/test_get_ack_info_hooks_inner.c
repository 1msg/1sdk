#ifndef get_ack_info_hooks_inner_TEST
#define get_ack_info_hooks_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define get_ack_info_hooks_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/get_ack_info_hooks_inner.h"
get_ack_info_hooks_inner_t* instantiate_get_ack_info_hooks_inner(int include_optional);



get_ack_info_hooks_inner_t* instantiate_get_ack_info_hooks_inner(int include_optional) {
  get_ack_info_hooks_inner_t* get_ack_info_hooks_inner = NULL;
  if (include_optional) {
    get_ack_info_hooks_inner = get_ack_info_hooks_inner_create(
      "gBGGeSaGViBfAgnlzOSHEwK9O6F",
      "message",
      "sent",
      {"billable":true,"category":"business_initiated","pricing_model":"CBP"},
      "1654864094",
      {"id":"c1f5a3a1b9ff6f2e1c43fd31543137e0","origin":{"type":"business_initiated"},"expiration_timestamp":1654943940},
      "556123122026"
    );
  } else {
    get_ack_info_hooks_inner = get_ack_info_hooks_inner_create(
      "gBGGeSaGViBfAgnlzOSHEwK9O6F",
      "message",
      "sent",
      {"billable":true,"category":"business_initiated","pricing_model":"CBP"},
      "1654864094",
      {"id":"c1f5a3a1b9ff6f2e1c43fd31543137e0","origin":{"type":"business_initiated"},"expiration_timestamp":1654943940},
      "556123122026"
    );
  }

  return get_ack_info_hooks_inner;
}


#ifdef get_ack_info_hooks_inner_MAIN

void test_get_ack_info_hooks_inner(int include_optional) {
    get_ack_info_hooks_inner_t* get_ack_info_hooks_inner_1 = instantiate_get_ack_info_hooks_inner(include_optional);

	cJSON* jsonget_ack_info_hooks_inner_1 = get_ack_info_hooks_inner_convertToJSON(get_ack_info_hooks_inner_1);
	printf("get_ack_info_hooks_inner :\n%s\n", cJSON_Print(jsonget_ack_info_hooks_inner_1));
	get_ack_info_hooks_inner_t* get_ack_info_hooks_inner_2 = get_ack_info_hooks_inner_parseFromJSON(jsonget_ack_info_hooks_inner_1);
	cJSON* jsonget_ack_info_hooks_inner_2 = get_ack_info_hooks_inner_convertToJSON(get_ack_info_hooks_inner_2);
	printf("repeating get_ack_info_hooks_inner:\n%s\n", cJSON_Print(jsonget_ack_info_hooks_inner_2));
}

int main() {
  test_get_ack_info_hooks_inner(1);
  test_get_ack_info_hooks_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // get_ack_info_hooks_inner_MAIN
#endif // get_ack_info_hooks_inner_TEST
