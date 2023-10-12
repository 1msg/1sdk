#ifndef contacts_request_TEST
#define contacts_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define contacts_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/contacts_request.h"
contacts_request_t* instantiate_contacts_request(int include_optional);



contacts_request_t* instantiate_contacts_request(int include_optional) {
  contacts_request_t* contacts_request = NULL;
  if (include_optional) {
    contacts_request = contacts_request_create(
      "wait",
      true,
      ["16315551000","+1 631 555 1001","6315551002","+1 (631) 555-1004","1-631-555-1005"]
    );
  } else {
    contacts_request = contacts_request_create(
      "wait",
      true,
      ["16315551000","+1 631 555 1001","6315551002","+1 (631) 555-1004","1-631-555-1005"]
    );
  }

  return contacts_request;
}


#ifdef contacts_request_MAIN

void test_contacts_request(int include_optional) {
    contacts_request_t* contacts_request_1 = instantiate_contacts_request(include_optional);

	cJSON* jsoncontacts_request_1 = contacts_request_convertToJSON(contacts_request_1);
	printf("contacts_request :\n%s\n", cJSON_Print(jsoncontacts_request_1));
	contacts_request_t* contacts_request_2 = contacts_request_parseFromJSON(jsoncontacts_request_1);
	cJSON* jsoncontacts_request_2 = contacts_request_convertToJSON(contacts_request_2);
	printf("repeating contacts_request:\n%s\n", cJSON_Print(jsoncontacts_request_2));
}

int main() {
  test_contacts_request(1);
  test_contacts_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // contacts_request_MAIN
#endif // contacts_request_TEST
