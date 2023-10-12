#ifndef send_message_status_TEST
#define send_message_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define send_message_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/send_message_status.h"
send_message_status_t* instantiate_send_message_status(int include_optional);



send_message_status_t* instantiate_send_message_status(int include_optional) {
  send_message_status_t* send_message_status = NULL;
  if (include_optional) {
    send_message_status = send_message_status_create(
      true,
      "gBGGeRhGZTEfAgkJCh2wAz4ZH-8",
      "Sent to 556123122026@c.us",
      "Message has been sent to the provider"
    );
  } else {
    send_message_status = send_message_status_create(
      true,
      "gBGGeRhGZTEfAgkJCh2wAz4ZH-8",
      "Sent to 556123122026@c.us",
      "Message has been sent to the provider"
    );
  }

  return send_message_status;
}


#ifdef send_message_status_MAIN

void test_send_message_status(int include_optional) {
    send_message_status_t* send_message_status_1 = instantiate_send_message_status(include_optional);

	cJSON* jsonsend_message_status_1 = send_message_status_convertToJSON(send_message_status_1);
	printf("send_message_status :\n%s\n", cJSON_Print(jsonsend_message_status_1));
	send_message_status_t* send_message_status_2 = send_message_status_parseFromJSON(jsonsend_message_status_1);
	cJSON* jsonsend_message_status_2 = send_message_status_convertToJSON(send_message_status_2);
	printf("repeating send_message_status:\n%s\n", cJSON_Print(jsonsend_message_status_2));
}

int main() {
  test_send_message_status(1);
  test_send_message_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // send_message_status_MAIN
#endif // send_message_status_TEST
