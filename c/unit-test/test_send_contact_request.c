#ifndef send_contact_request_TEST
#define send_contact_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define send_contact_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/send_contact_request.h"
send_contact_request_t* instantiate_send_contact_request(int include_optional);



send_contact_request_t* instantiate_send_contact_request(int include_optional) {
  send_contact_request_t* send_contact_request = NULL;
  if (include_optional) {
    send_contact_request = send_contact_request_create(
      "12020721369@c.us",
      12020721369,
      [{"addresses":[{"city":"Menlo Park","country":"United States","country_code":"us","state":"CA","street":"1 Hacker Way","type":"HOME","zip":"94025"},{"city":"Menlo Park","country":"United States","country_code":"us","state":"CA","street":"200 Jefferson Dr","type":"WORK","zip":"94025"}],"birthday":"2012-08-18","emails":[{"email":"test@fb.com","type":"WORK"},{"email":"test@whatsapp.com","type":"WORK"}],"name":{"first_name":"John","formatted_name":"John Smith","last_name":"Smith"},"org":{"company":"WhatsApp","department":"Design","title":"Manager"},"phones":[{"phone":"+1 (940) 555-1234","type":"HOME"},{"phone":"+1 (650) 555-1234","type":"WORK","wa_id":"16505551234"}],"urls":[{"url":"https://www.facebook.com","type":"WORK"}]}]
    );
  } else {
    send_contact_request = send_contact_request_create(
      "12020721369@c.us",
      12020721369,
      [{"addresses":[{"city":"Menlo Park","country":"United States","country_code":"us","state":"CA","street":"1 Hacker Way","type":"HOME","zip":"94025"},{"city":"Menlo Park","country":"United States","country_code":"us","state":"CA","street":"200 Jefferson Dr","type":"WORK","zip":"94025"}],"birthday":"2012-08-18","emails":[{"email":"test@fb.com","type":"WORK"},{"email":"test@whatsapp.com","type":"WORK"}],"name":{"first_name":"John","formatted_name":"John Smith","last_name":"Smith"},"org":{"company":"WhatsApp","department":"Design","title":"Manager"},"phones":[{"phone":"+1 (940) 555-1234","type":"HOME"},{"phone":"+1 (650) 555-1234","type":"WORK","wa_id":"16505551234"}],"urls":[{"url":"https://www.facebook.com","type":"WORK"}]}]
    );
  }

  return send_contact_request;
}


#ifdef send_contact_request_MAIN

void test_send_contact_request(int include_optional) {
    send_contact_request_t* send_contact_request_1 = instantiate_send_contact_request(include_optional);

	cJSON* jsonsend_contact_request_1 = send_contact_request_convertToJSON(send_contact_request_1);
	printf("send_contact_request :\n%s\n", cJSON_Print(jsonsend_contact_request_1));
	send_contact_request_t* send_contact_request_2 = send_contact_request_parseFromJSON(jsonsend_contact_request_1);
	cJSON* jsonsend_contact_request_2 = send_contact_request_convertToJSON(send_contact_request_2);
	printf("repeating send_contact_request:\n%s\n", cJSON_Print(jsonsend_contact_request_2));
}

int main() {
  test_send_contact_request(1);
  test_send_contact_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // send_contact_request_MAIN
#endif // send_contact_request_TEST
