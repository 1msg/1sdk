#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "set_me_request.h"


char* verticalset_me_request_ToString(one_msg_waba_sdk_set_me_request_VERTICAL_e vertical) {
    char* verticalArray[] =  { "NULL", "Automotive", "Beauty, Spa and Salon", "Clothing and Apparel", "Education", "Entertainment", "Event Planning and Service", "Finance and Banking", "Food and Grocery", "Public Service", "Hotel and Lodging", "Medical and Health", "Non-profit", "Professional Services", "Shopping and Retail", "Travel and Transportation", "Restaurant", "Other", "" };
	return verticalArray[vertical];
}

one_msg_waba_sdk_set_me_request_VERTICAL_e verticalset_me_request_FromString(char* vertical){
    int stringToReturn = 0;
    char *verticalArray[] =  { "NULL", "Automotive", "Beauty, Spa and Salon", "Clothing and Apparel", "Education", "Entertainment", "Event Planning and Service", "Finance and Banking", "Food and Grocery", "Public Service", "Hotel and Lodging", "Medical and Health", "Non-profit", "Professional Services", "Shopping and Retail", "Travel and Transportation", "Restaurant", "Other", "" };
    size_t sizeofArray = sizeof(verticalArray) / sizeof(verticalArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(vertical, verticalArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

set_me_request_t *set_me_request_create(
    char *about,
    char *address,
    char *description,
    char *email,
    char *phone,
    one_msg_waba_sdk_set_me_request_VERTICAL_e vertical,
    char *photo
    ) {
    set_me_request_t *set_me_request_local_var = malloc(sizeof(set_me_request_t));
    if (!set_me_request_local_var) {
        return NULL;
    }
    set_me_request_local_var->about = about;
    set_me_request_local_var->address = address;
    set_me_request_local_var->description = description;
    set_me_request_local_var->email = email;
    set_me_request_local_var->phone = phone;
    set_me_request_local_var->vertical = vertical;
    set_me_request_local_var->photo = photo;

    return set_me_request_local_var;
}


void set_me_request_free(set_me_request_t *set_me_request) {
    if(NULL == set_me_request){
        return ;
    }
    listEntry_t *listEntry;
    if (set_me_request->about) {
        free(set_me_request->about);
        set_me_request->about = NULL;
    }
    if (set_me_request->address) {
        free(set_me_request->address);
        set_me_request->address = NULL;
    }
    if (set_me_request->description) {
        free(set_me_request->description);
        set_me_request->description = NULL;
    }
    if (set_me_request->email) {
        free(set_me_request->email);
        set_me_request->email = NULL;
    }
    if (set_me_request->phone) {
        free(set_me_request->phone);
        set_me_request->phone = NULL;
    }
    if (set_me_request->photo) {
        free(set_me_request->photo);
        set_me_request->photo = NULL;
    }
    free(set_me_request);
}

cJSON *set_me_request_convertToJSON(set_me_request_t *set_me_request) {
    cJSON *item = cJSON_CreateObject();

    // set_me_request->about
    if(set_me_request->about) {
    if(cJSON_AddStringToObject(item, "about", set_me_request->about) == NULL) {
    goto fail; //String
    }
    }


    // set_me_request->address
    if(set_me_request->address) {
    if(cJSON_AddStringToObject(item, "address", set_me_request->address) == NULL) {
    goto fail; //String
    }
    }


    // set_me_request->description
    if(set_me_request->description) {
    if(cJSON_AddStringToObject(item, "description", set_me_request->description) == NULL) {
    goto fail; //String
    }
    }


    // set_me_request->email
    if(set_me_request->email) {
    if(cJSON_AddStringToObject(item, "email", set_me_request->email) == NULL) {
    goto fail; //String
    }
    }


    // set_me_request->phone
    if(set_me_request->phone) {
    if(cJSON_AddStringToObject(item, "phone", set_me_request->phone) == NULL) {
    goto fail; //String
    }
    }


    // set_me_request->vertical
    if(set_me_request->vertical != one_msg_waba_sdk_set_me_request_VERTICAL_NULL) {
    if(cJSON_AddStringToObject(item, "vertical", verticalset_me_request_ToString(set_me_request->vertical)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // set_me_request->photo
    if(set_me_request->photo) {
    if(cJSON_AddStringToObject(item, "photo", set_me_request->photo) == NULL) {
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

set_me_request_t *set_me_request_parseFromJSON(cJSON *set_me_requestJSON){

    set_me_request_t *set_me_request_local_var = NULL;

    // set_me_request->about
    cJSON *about = cJSON_GetObjectItemCaseSensitive(set_me_requestJSON, "about");
    if (about) { 
    if(!cJSON_IsString(about) && !cJSON_IsNull(about))
    {
    goto end; //String
    }
    }

    // set_me_request->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(set_me_requestJSON, "address");
    if (address) { 
    if(!cJSON_IsString(address) && !cJSON_IsNull(address))
    {
    goto end; //String
    }
    }

    // set_me_request->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(set_me_requestJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // set_me_request->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(set_me_requestJSON, "email");
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // set_me_request->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(set_me_requestJSON, "phone");
    if (phone) { 
    if(!cJSON_IsString(phone) && !cJSON_IsNull(phone))
    {
    goto end; //String
    }
    }

    // set_me_request->vertical
    cJSON *vertical = cJSON_GetObjectItemCaseSensitive(set_me_requestJSON, "vertical");
    one_msg_waba_sdk_set_me_request_VERTICAL_e verticalVariable;
    if (vertical) { 
    if(!cJSON_IsString(vertical))
    {
    goto end; //Enum
    }
    verticalVariable = verticalset_me_request_FromString(vertical->valuestring);
    }

    // set_me_request->photo
    cJSON *photo = cJSON_GetObjectItemCaseSensitive(set_me_requestJSON, "photo");
    if (photo) { 
    if(!cJSON_IsString(photo) && !cJSON_IsNull(photo))
    {
    goto end; //String
    }
    }


    set_me_request_local_var = set_me_request_create (
        about && !cJSON_IsNull(about) ? strdup(about->valuestring) : NULL,
        address && !cJSON_IsNull(address) ? strdup(address->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL,
        phone && !cJSON_IsNull(phone) ? strdup(phone->valuestring) : NULL,
        vertical ? verticalVariable : -1,
        photo && !cJSON_IsNull(photo) ? strdup(photo->valuestring) : NULL
        );

    return set_me_request_local_var;
end:
    return NULL;

}
