#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "media_id.h"



media_id_t *media_id_create(
    char *media_id
    ) {
    media_id_t *media_id_local_var = malloc(sizeof(media_id_t));
    if (!media_id_local_var) {
        return NULL;
    }
    media_id_local_var->media_id = media_id;

    return media_id_local_var;
}


void media_id_free(media_id_t *media_id) {
    if(NULL == media_id){
        return ;
    }
    listEntry_t *listEntry;
    if (media_id->media_id) {
        free(media_id->media_id);
        media_id->media_id = NULL;
    }
    free(media_id);
}

cJSON *media_id_convertToJSON(media_id_t *media_id) {
    cJSON *item = cJSON_CreateObject();

    // media_id->media_id
    if(media_id->media_id) {
    if(cJSON_AddStringToObject(item, "mediaId", media_id->media_id) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

media_id_t *media_id_parseFromJSON(cJSON *media_idJSON){

    media_id_t *media_id_local_var = NULL;

    // media_id->media_id
    cJSON *media_id = cJSON_GetObjectItemCaseSensitive(media_idJSON, "mediaId");
    if (media_id) { 
    if(!cJSON_IsString(media_id) && !cJSON_IsNull(media_id))
    {
    goto end; //String
    }
    }


    media_id_local_var = media_id_create (
        media_id && !cJSON_IsNull(media_id) ? strdup(media_id->valuestring) : NULL
        );

    return media_id_local_var;
end:
    return NULL;

}
