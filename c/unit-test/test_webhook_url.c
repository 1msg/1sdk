#ifndef webhook_url_TEST
#define webhook_url_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_url_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook_url.h"
webhook_url_t* instantiate_webhook_url(int include_optional);



webhook_url_t* instantiate_webhook_url(int include_optional) {
  webhook_url_t* webhook_url = NULL;
  if (include_optional) {
    webhook_url = webhook_url_create(
      "0"
    );
  } else {
    webhook_url = webhook_url_create(
      "0"
    );
  }

  return webhook_url;
}


#ifdef webhook_url_MAIN

void test_webhook_url(int include_optional) {
    webhook_url_t* webhook_url_1 = instantiate_webhook_url(include_optional);

	cJSON* jsonwebhook_url_1 = webhook_url_convertToJSON(webhook_url_1);
	printf("webhook_url :\n%s\n", cJSON_Print(jsonwebhook_url_1));
	webhook_url_t* webhook_url_2 = webhook_url_parseFromJSON(jsonwebhook_url_1);
	cJSON* jsonwebhook_url_2 = webhook_url_convertToJSON(webhook_url_2);
	printf("repeating webhook_url:\n%s\n", cJSON_Print(jsonwebhook_url_2));
}

int main() {
  test_webhook_url(1);
  test_webhook_url(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_url_MAIN
#endif // webhook_url_TEST
