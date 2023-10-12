/*
 * media_id.h
 *
 * 
 */

#ifndef _media_id_H_
#define _media_id_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct media_id_t media_id_t;




typedef struct media_id_t {
    char *media_id; // string

} media_id_t;

media_id_t *media_id_create(
    char *media_id
);

void media_id_free(media_id_t *media_id);

media_id_t *media_id_parseFromJSON(cJSON *media_idJSON);

cJSON *media_id_convertToJSON(media_id_t *media_id);

#endif /* _media_id_H_ */

