#ifndef media_id_TEST
#define media_id_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define media_id_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/media_id.h"
media_id_t* instantiate_media_id(int include_optional);



media_id_t* instantiate_media_id(int include_optional) {
  media_id_t* media_id = NULL;
  if (include_optional) {
    media_id = media_id_create(
      "ed2c7be7-b779-4ba8-a17c-6722f37be2a7"
    );
  } else {
    media_id = media_id_create(
      "ed2c7be7-b779-4ba8-a17c-6722f37be2a7"
    );
  }

  return media_id;
}


#ifdef media_id_MAIN

void test_media_id(int include_optional) {
    media_id_t* media_id_1 = instantiate_media_id(include_optional);

	cJSON* jsonmedia_id_1 = media_id_convertToJSON(media_id_1);
	printf("media_id :\n%s\n", cJSON_Print(jsonmedia_id_1));
	media_id_t* media_id_2 = media_id_parseFromJSON(jsonmedia_id_1);
	cJSON* jsonmedia_id_2 = media_id_convertToJSON(media_id_2);
	printf("repeating media_id:\n%s\n", cJSON_Print(jsonmedia_id_2));
}

int main() {
  test_media_id(1);
  test_media_id(0);

  printf("Hello world \n");
  return 0;
}

#endif // media_id_MAIN
#endif // media_id_TEST
