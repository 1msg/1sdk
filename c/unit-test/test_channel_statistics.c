#ifndef channel_statistics_TEST
#define channel_statistics_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define channel_statistics_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/channel_statistics.h"
channel_statistics_t* instantiate_channel_statistics(int include_optional);



channel_statistics_t* instantiate_channel_statistics(int include_optional) {
  channel_statistics_t* channel_statistics = NULL;
  if (include_optional) {
    channel_statistics = channel_statistics_create(
      "03.2022",
      400.0313
    );
  } else {
    channel_statistics = channel_statistics_create(
      "03.2022",
      400.0313
    );
  }

  return channel_statistics;
}


#ifdef channel_statistics_MAIN

void test_channel_statistics(int include_optional) {
    channel_statistics_t* channel_statistics_1 = instantiate_channel_statistics(include_optional);

	cJSON* jsonchannel_statistics_1 = channel_statistics_convertToJSON(channel_statistics_1);
	printf("channel_statistics :\n%s\n", cJSON_Print(jsonchannel_statistics_1));
	channel_statistics_t* channel_statistics_2 = channel_statistics_parseFromJSON(jsonchannel_statistics_1);
	cJSON* jsonchannel_statistics_2 = channel_statistics_convertToJSON(channel_statistics_2);
	printf("repeating channel_statistics:\n%s\n", cJSON_Print(jsonchannel_statistics_2));
}

int main() {
  test_channel_statistics(1);
  test_channel_statistics(0);

  printf("Hello world \n");
  return 0;
}

#endif // channel_statistics_MAIN
#endif // channel_statistics_TEST
