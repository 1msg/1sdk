#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "upload_media.h"



upload_media_t *upload_media_create(
    char *body
    ) {
    upload_media_t *upload_media_local_var = malloc(sizeof(upload_media_t));
    if (!upload_media_local_var) {
        return NULL;
    }
    upload_media_local_var->body = body;

    return upload_media_local_var;
}


void upload_media_free(upload_media_t *upload_media) {
    if(NULL == upload_media){
        return ;
    }
    listEntry_t *listEntry;
    if (upload_media->body) {
        free(upload_media->body);
        upload_media->body = NULL;
    }
    free(upload_media);
}

cJSON *upload_media_convertToJSON(upload_media_t *upload_media) {
    cJSON *item = cJSON_CreateObject();

    // upload_media->body
    if (!upload_media->body) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "body", upload_media->body) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

upload_media_t *upload_media_parseFromJSON(cJSON *upload_mediaJSON){

    upload_media_t *upload_media_local_var = NULL;

    // upload_media->body
    cJSON *body = cJSON_GetObjectItemCaseSensitive(upload_mediaJSON, "body");
    if (!body) {
        goto end;
    }

    
    if(!cJSON_IsString(body))
    {
    goto end; //String
    }


    upload_media_local_var = upload_media_create (
        strdup(body->valuestring)
        );

    return upload_media_local_var;
end:
    return NULL;

}
