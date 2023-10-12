#ifndef channel_status_TEST
#define channel_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define channel_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/channel_status.h"
channel_status_t* instantiate_channel_status(int include_optional);



channel_status_t* instantiate_channel_status(int include_optional) {
  channel_status_t* channel_status = NULL;
  if (include_optional) {
    channel_status = channel_status_create(
      one_msg_waba_sdk_channel_status_STATUS_"connected"
    );
  } else {
    channel_status = channel_status_create(
      one_msg_waba_sdk_channel_status_STATUS_"connected"
    );
  }

  return channel_status;
}


#ifdef channel_status_MAIN

void test_channel_status(int include_optional) {
    channel_status_t* channel_status_1 = instantiate_channel_status(include_optional);

	cJSON* jsonchannel_status_1 = channel_status_convertToJSON(channel_status_1);
	printf("channel_status :\n%s\n", cJSON_Print(jsonchannel_status_1));
	channel_status_t* channel_status_2 = channel_status_parseFromJSON(jsonchannel_status_1);
	cJSON* jsonchannel_status_2 = channel_status_convertToJSON(channel_status_2);
	printf("repeating channel_status:\n%s\n", cJSON_Print(jsonchannel_status_2));
}

int main() {
  test_channel_status(1);
  test_channel_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // channel_status_MAIN
#endif // channel_status_TEST
