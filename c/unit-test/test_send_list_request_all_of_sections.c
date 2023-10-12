#ifndef send_list_request_all_of_sections_TEST
#define send_list_request_all_of_sections_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define send_list_request_all_of_sections_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/send_list_request_all_of_sections.h"
send_list_request_all_of_sections_t* instantiate_send_list_request_all_of_sections(int include_optional);



send_list_request_all_of_sections_t* instantiate_send_list_request_all_of_sections(int include_optional) {
  send_list_request_all_of_sections_t* send_list_request_all_of_sections = NULL;
  if (include_optional) {
    send_list_request_all_of_sections = send_list_request_all_of_sections_create(
      "Some title",
      list_createList()
    );
  } else {
    send_list_request_all_of_sections = send_list_request_all_of_sections_create(
      "Some title",
      list_createList()
    );
  }

  return send_list_request_all_of_sections;
}


#ifdef send_list_request_all_of_sections_MAIN

void test_send_list_request_all_of_sections(int include_optional) {
    send_list_request_all_of_sections_t* send_list_request_all_of_sections_1 = instantiate_send_list_request_all_of_sections(include_optional);

	cJSON* jsonsend_list_request_all_of_sections_1 = send_list_request_all_of_sections_convertToJSON(send_list_request_all_of_sections_1);
	printf("send_list_request_all_of_sections :\n%s\n", cJSON_Print(jsonsend_list_request_all_of_sections_1));
	send_list_request_all_of_sections_t* send_list_request_all_of_sections_2 = send_list_request_all_of_sections_parseFromJSON(jsonsend_list_request_all_of_sections_1);
	cJSON* jsonsend_list_request_all_of_sections_2 = send_list_request_all_of_sections_convertToJSON(send_list_request_all_of_sections_2);
	printf("repeating send_list_request_all_of_sections:\n%s\n", cJSON_Print(jsonsend_list_request_all_of_sections_2));
}

int main() {
  test_send_list_request_all_of_sections(1);
  test_send_list_request_all_of_sections(0);

  printf("Hello world \n");
  return 0;
}

#endif // send_list_request_all_of_sections_MAIN
#endif // send_list_request_all_of_sections_TEST
