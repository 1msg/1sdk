#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/media_id.h"
#include "../model/upload_media.h"


// Upload media & get mediaId
//
// Upload media and get mediaId. Uploaded media can be sent in template
//
media_id_t*
MediaAPI_uploadMedia(apiClient_t *apiClient, upload_media_t * upload_media );


