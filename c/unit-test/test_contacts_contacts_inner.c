#ifndef contacts_contacts_inner_TEST
#define contacts_contacts_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define contacts_contacts_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/contacts_contacts_inner.h"
contacts_contacts_inner_t* instantiate_contacts_contacts_inner(int include_optional);



contacts_contacts_inner_t* instantiate_contacts_contacts_inner(int include_optional) {
  contacts_contacts_inner_t* contacts_contacts_inner = NULL;
  if (include_optional) {
    contacts_contacts_inner = contacts_contacts_inner_create(
      "16315551000",
      "valid",
      "16315551000"
    );
  } else {
    contacts_contacts_inner = contacts_contacts_inner_create(
      "16315551000",
      "valid",
      "16315551000"
    );
  }

  return contacts_contacts_inner;
}


#ifdef contacts_contacts_inner_MAIN

void test_contacts_contacts_inner(int include_optional) {
    contacts_contacts_inner_t* contacts_contacts_inner_1 = instantiate_contacts_contacts_inner(include_optional);

	cJSON* jsoncontacts_contacts_inner_1 = contacts_contacts_inner_convertToJSON(contacts_contacts_inner_1);
	printf("contacts_contacts_inner :\n%s\n", cJSON_Print(jsoncontacts_contacts_inner_1));
	contacts_contacts_inner_t* contacts_contacts_inner_2 = contacts_contacts_inner_parseFromJSON(jsoncontacts_contacts_inner_1);
	cJSON* jsoncontacts_contacts_inner_2 = contacts_contacts_inner_convertToJSON(contacts_contacts_inner_2);
	printf("repeating contacts_contacts_inner:\n%s\n", cJSON_Print(jsoncontacts_contacts_inner_2));
}

int main() {
  test_contacts_contacts_inner(1);
  test_contacts_contacts_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // contacts_contacts_inner_MAIN
#endif // contacts_contacts_inner_TEST
