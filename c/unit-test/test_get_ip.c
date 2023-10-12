#ifndef get_ip_TEST
#define get_ip_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define get_ip_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/get_ip.h"
get_ip_t* instantiate_get_ip(int include_optional);



get_ip_t* instantiate_get_ip(int include_optional) {
  get_ip_t* get_ip = NULL;
  if (include_optional) {
    get_ip = get_ip_create(
      "213.74.84.72"
    );
  } else {
    get_ip = get_ip_create(
      "213.74.84.72"
    );
  }

  return get_ip;
}


#ifdef get_ip_MAIN

void test_get_ip(int include_optional) {
    get_ip_t* get_ip_1 = instantiate_get_ip(include_optional);

	cJSON* jsonget_ip_1 = get_ip_convertToJSON(get_ip_1);
	printf("get_ip :\n%s\n", cJSON_Print(jsonget_ip_1));
	get_ip_t* get_ip_2 = get_ip_parseFromJSON(jsonget_ip_1);
	cJSON* jsonget_ip_2 = get_ip_convertToJSON(get_ip_2);
	printf("repeating get_ip:\n%s\n", cJSON_Print(jsonget_ip_2));
}

int main() {
  test_get_ip(1);
  test_get_ip(0);

  printf("Hello world \n");
  return 0;
}

#endif // get_ip_MAIN
#endif // get_ip_TEST
