/*
 * upload_media.h
 *
 * 
 */

#ifndef _upload_media_H_
#define _upload_media_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct upload_media_t upload_media_t;




typedef struct upload_media_t {
    char *body; // string

} upload_media_t;

upload_media_t *upload_media_create(
    char *body
);

void upload_media_free(upload_media_t *upload_media);

upload_media_t *upload_media_parseFromJSON(cJSON *upload_mediaJSON);

cJSON *upload_media_convertToJSON(upload_media_t *upload_media);

#endif /* _upload_media_H_ */

