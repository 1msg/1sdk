#ifndef chat_id_prop_TEST
#define chat_id_prop_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define chat_id_prop_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/chat_id_prop.h"
chat_id_prop_t* instantiate_chat_id_prop(int include_optional);



chat_id_prop_t* instantiate_chat_id_prop(int include_optional) {
  chat_id_prop_t* chat_id_prop = NULL;
  if (include_optional) {
    chat_id_prop = chat_id_prop_create(
      "12020721369@c.us"
    );
  } else {
    chat_id_prop = chat_id_prop_create(
      "12020721369@c.us"
    );
  }

  return chat_id_prop;
}


#ifdef chat_id_prop_MAIN

void test_chat_id_prop(int include_optional) {
    chat_id_prop_t* chat_id_prop_1 = instantiate_chat_id_prop(include_optional);

	cJSON* jsonchat_id_prop_1 = chat_id_prop_convertToJSON(chat_id_prop_1);
	printf("chat_id_prop :\n%s\n", cJSON_Print(jsonchat_id_prop_1));
	chat_id_prop_t* chat_id_prop_2 = chat_id_prop_parseFromJSON(jsonchat_id_prop_1);
	cJSON* jsonchat_id_prop_2 = chat_id_prop_convertToJSON(chat_id_prop_2);
	printf("repeating chat_id_prop:\n%s\n", cJSON_Print(jsonchat_id_prop_2));
}

int main() {
  test_chat_id_prop(1);
  test_chat_id_prop(0);

  printf("Hello world \n");
  return 0;
}

#endif // chat_id_prop_MAIN
#endif // chat_id_prop_TEST
