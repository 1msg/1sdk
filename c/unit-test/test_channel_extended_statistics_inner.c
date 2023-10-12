#ifndef channel_extended_statistics_inner_TEST
#define channel_extended_statistics_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define channel_extended_statistics_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/channel_extended_statistics_inner.h"
channel_extended_statistics_inner_t* instantiate_channel_extended_statistics_inner(int include_optional);



channel_extended_statistics_inner_t* instantiate_channel_extended_statistics_inner(int include_optional) {
  channel_extended_statistics_inner_t* channel_extended_statistics_inner = NULL;
  if (include_optional) {
    channel_extended_statistics_inner = channel_extended_statistics_inner_create(
      1,
      0.0691,
      2,
      0,
      1,
      1,
      1,
      "2022-11-01T00:00:00Z",
      2,
      0.0691,
      1,
      0.0691,
      2
    );
  } else {
    channel_extended_statistics_inner = channel_extended_statistics_inner_create(
      1,
      0.0691,
      2,
      0,
      1,
      1,
      1,
      "2022-11-01T00:00:00Z",
      2,
      0.0691,
      1,
      0.0691,
      2
    );
  }

  return channel_extended_statistics_inner;
}


#ifdef channel_extended_statistics_inner_MAIN

void test_channel_extended_statistics_inner(int include_optional) {
    channel_extended_statistics_inner_t* channel_extended_statistics_inner_1 = instantiate_channel_extended_statistics_inner(include_optional);

	cJSON* jsonchannel_extended_statistics_inner_1 = channel_extended_statistics_inner_convertToJSON(channel_extended_statistics_inner_1);
	printf("channel_extended_statistics_inner :\n%s\n", cJSON_Print(jsonchannel_extended_statistics_inner_1));
	channel_extended_statistics_inner_t* channel_extended_statistics_inner_2 = channel_extended_statistics_inner_parseFromJSON(jsonchannel_extended_statistics_inner_1);
	cJSON* jsonchannel_extended_statistics_inner_2 = channel_extended_statistics_inner_convertToJSON(channel_extended_statistics_inner_2);
	printf("repeating channel_extended_statistics_inner:\n%s\n", cJSON_Print(jsonchannel_extended_statistics_inner_2));
}

int main() {
  test_channel_extended_statistics_inner(1);
  test_channel_extended_statistics_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // channel_extended_statistics_inner_MAIN
#endif // channel_extended_statistics_inner_TEST
