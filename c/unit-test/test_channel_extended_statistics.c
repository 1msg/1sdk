#ifndef channel_extended_statistics_TEST
#define channel_extended_statistics_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define channel_extended_statistics_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/channel_extended_statistics.h"
channel_extended_statistics_t* instantiate_channel_extended_statistics(int include_optional);



channel_extended_statistics_t* instantiate_channel_extended_statistics(int include_optional) {
  channel_extended_statistics_t* channel_extended_statistics = NULL;
  if (include_optional) {
    channel_extended_statistics = channel_extended_statistics_create(
    );
  } else {
    channel_extended_statistics = channel_extended_statistics_create(
    );
  }

  return channel_extended_statistics;
}


#ifdef channel_extended_statistics_MAIN

void test_channel_extended_statistics(int include_optional) {
    channel_extended_statistics_t* channel_extended_statistics_1 = instantiate_channel_extended_statistics(include_optional);

	cJSON* jsonchannel_extended_statistics_1 = channel_extended_statistics_convertToJSON(channel_extended_statistics_1);
	printf("channel_extended_statistics :\n%s\n", cJSON_Print(jsonchannel_extended_statistics_1));
	channel_extended_statistics_t* channel_extended_statistics_2 = channel_extended_statistics_parseFromJSON(jsonchannel_extended_statistics_1);
	cJSON* jsonchannel_extended_statistics_2 = channel_extended_statistics_convertToJSON(channel_extended_statistics_2);
	printf("repeating channel_extended_statistics:\n%s\n", cJSON_Print(jsonchannel_extended_statistics_2));
}

int main() {
  test_channel_extended_statistics(1);
  test_channel_extended_statistics(0);

  printf("Hello world \n");
  return 0;
}

#endif // channel_extended_statistics_MAIN
#endif // channel_extended_statistics_TEST
