#ifndef send_list_request_all_of_rows_TEST
#define send_list_request_all_of_rows_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define send_list_request_all_of_rows_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/send_list_request_all_of_rows.h"
send_list_request_all_of_rows_t* instantiate_send_list_request_all_of_rows(int include_optional);



send_list_request_all_of_rows_t* instantiate_send_list_request_all_of_rows(int include_optional) {
  send_list_request_all_of_rows_t* send_list_request_all_of_rows = NULL;
  if (include_optional) {
    send_list_request_all_of_rows = send_list_request_all_of_rows_create(
      "1",
      "Some option",
      "Some description"
    );
  } else {
    send_list_request_all_of_rows = send_list_request_all_of_rows_create(
      "1",
      "Some option",
      "Some description"
    );
  }

  return send_list_request_all_of_rows;
}


#ifdef send_list_request_all_of_rows_MAIN

void test_send_list_request_all_of_rows(int include_optional) {
    send_list_request_all_of_rows_t* send_list_request_all_of_rows_1 = instantiate_send_list_request_all_of_rows(include_optional);

	cJSON* jsonsend_list_request_all_of_rows_1 = send_list_request_all_of_rows_convertToJSON(send_list_request_all_of_rows_1);
	printf("send_list_request_all_of_rows :\n%s\n", cJSON_Print(jsonsend_list_request_all_of_rows_1));
	send_list_request_all_of_rows_t* send_list_request_all_of_rows_2 = send_list_request_all_of_rows_parseFromJSON(jsonsend_list_request_all_of_rows_1);
	cJSON* jsonsend_list_request_all_of_rows_2 = send_list_request_all_of_rows_convertToJSON(send_list_request_all_of_rows_2);
	printf("repeating send_list_request_all_of_rows:\n%s\n", cJSON_Print(jsonsend_list_request_all_of_rows_2));
}

int main() {
  test_send_list_request_all_of_rows(1);
  test_send_list_request_all_of_rows(0);

  printf("Hello world \n");
  return 0;
}

#endif // send_list_request_all_of_rows_MAIN
#endif // send_list_request_all_of_rows_TEST
