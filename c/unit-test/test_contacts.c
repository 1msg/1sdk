#ifndef contacts_TEST
#define contacts_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define contacts_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/contacts.h"
contacts_t* instantiate_contacts(int include_optional);



contacts_t* instantiate_contacts(int include_optional) {
  contacts_t* contacts = NULL;
  if (include_optional) {
    contacts = contacts_create(
      list_createList()
    );
  } else {
    contacts = contacts_create(
      list_createList()
    );
  }

  return contacts;
}


#ifdef contacts_MAIN

void test_contacts(int include_optional) {
    contacts_t* contacts_1 = instantiate_contacts(include_optional);

	cJSON* jsoncontacts_1 = contacts_convertToJSON(contacts_1);
	printf("contacts :\n%s\n", cJSON_Print(jsoncontacts_1));
	contacts_t* contacts_2 = contacts_parseFromJSON(jsoncontacts_1);
	cJSON* jsoncontacts_2 = contacts_convertToJSON(contacts_2);
	printf("repeating contacts:\n%s\n", cJSON_Print(jsoncontacts_2));
}

int main() {
  test_contacts(1);
  test_contacts(0);

  printf("Hello world \n");
  return 0;
}

#endif // contacts_MAIN
#endif // contacts_TEST
