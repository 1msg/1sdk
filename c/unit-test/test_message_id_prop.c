#ifndef message_id_prop_TEST
#define message_id_prop_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define message_id_prop_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/message_id_prop.h"
message_id_prop_t* instantiate_message_id_prop(int include_optional);



message_id_prop_t* instantiate_message_id_prop(int include_optional) {
  message_id_prop_t* message_id_prop = NULL;
  if (include_optional) {
    message_id_prop = message_id_prop_create(
      "0XzkmGNn4prUAQlzsHApGNRXQ0U"
    );
  } else {
    message_id_prop = message_id_prop_create(
      "0XzkmGNn4prUAQlzsHApGNRXQ0U"
    );
  }

  return message_id_prop;
}


#ifdef message_id_prop_MAIN

void test_message_id_prop(int include_optional) {
    message_id_prop_t* message_id_prop_1 = instantiate_message_id_prop(include_optional);

	cJSON* jsonmessage_id_prop_1 = message_id_prop_convertToJSON(message_id_prop_1);
	printf("message_id_prop :\n%s\n", cJSON_Print(jsonmessage_id_prop_1));
	message_id_prop_t* message_id_prop_2 = message_id_prop_parseFromJSON(jsonmessage_id_prop_1);
	cJSON* jsonmessage_id_prop_2 = message_id_prop_convertToJSON(message_id_prop_2);
	printf("repeating message_id_prop:\n%s\n", cJSON_Print(jsonmessage_id_prop_2));
}

int main() {
  test_message_id_prop(1);
  test_message_id_prop(0);

  printf("Hello world \n");
  return 0;
}

#endif // message_id_prop_MAIN
#endif // message_id_prop_TEST
