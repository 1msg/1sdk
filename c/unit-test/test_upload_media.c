#ifndef upload_media_TEST
#define upload_media_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define upload_media_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/upload_media.h"
upload_media_t* instantiate_upload_media(int include_optional);



upload_media_t* instantiate_upload_media(int include_optional) {
  upload_media_t* upload_media = NULL;
  if (include_optional) {
    upload_media = upload_media_create(
      "0"
    );
  } else {
    upload_media = upload_media_create(
      "0"
    );
  }

  return upload_media;
}


#ifdef upload_media_MAIN

void test_upload_media(int include_optional) {
    upload_media_t* upload_media_1 = instantiate_upload_media(include_optional);

	cJSON* jsonupload_media_1 = upload_media_convertToJSON(upload_media_1);
	printf("upload_media :\n%s\n", cJSON_Print(jsonupload_media_1));
	upload_media_t* upload_media_2 = upload_media_parseFromJSON(jsonupload_media_1);
	cJSON* jsonupload_media_2 = upload_media_convertToJSON(upload_media_2);
	printf("repeating upload_media:\n%s\n", cJSON_Print(jsonupload_media_2));
}

int main() {
  test_upload_media(1);
  test_upload_media(0);

  printf("Hello world \n");
  return 0;
}

#endif // upload_media_MAIN
#endif // upload_media_TEST
