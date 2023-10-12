#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "get_me.h"


char* verticalget_me_ToString(one_msg_waba_sdk_get_me_VERTICAL_e vertical) {
    char* verticalArray[] =  { "NULL", "Automotive", "Beauty, Spa and Salon", "Clothing and Apparel", "Education", "Entertainment", "Event Planning and Service", "Finance and Banking", "Food and Grocery", "Public Service", "Hotel and Lodging", "Medical and Health", "Non-profit", "Professional Services", "Shopping and Retail", "Travel and Transportation", "Restaurant", "Other", "" };
	return verticalArray[vertical];
}

one_msg_waba_sdk_get_me_VERTICAL_e verticalget_me_FromString(char* vertical){
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

get_me_t *get_me_create(
    char *about,
    char *address,
    char *description,
    char *email,
    char *phone,
    one_msg_waba_sdk_get_me_VERTICAL_e vertical,
    char *photo
    ) {
    get_me_t *get_me_local_var = malloc(sizeof(get_me_t));
    if (!get_me_local_var) {
        return NULL;
    }
    get_me_local_var->about = about;
    get_me_local_var->address = address;
    get_me_local_var->description = description;
    get_me_local_var->email = email;
    get_me_local_var->phone = phone;
    get_me_local_var->vertical = vertical;
    get_me_local_var->photo = photo;

    return get_me_local_var;
}


void get_me_free(get_me_t *get_me) {
    if(NULL == get_me){
        return ;
    }
    listEntry_t *listEntry;
    if (get_me->about) {
        free(get_me->about);
        get_me->about = NULL;
    }
    if (get_me->address) {
        free(get_me->address);
        get_me->address = NULL;
    }
    if (get_me->description) {
        free(get_me->description);
        get_me->description = NULL;
    }
    if (get_me->email) {
        free(get_me->email);
        get_me->email = NULL;
    }
    if (get_me->phone) {
        free(get_me->phone);
        get_me->phone = NULL;
    }
    if (get_me->photo) {
        free(get_me->photo);
        get_me->photo = NULL;
    }
    free(get_me);
}

cJSON *get_me_convertToJSON(get_me_t *get_me) {
    cJSON *item = cJSON_CreateObject();

    // get_me->about
    if(get_me->about) {
    if(cJSON_AddStringToObject(item, "about", get_me->about) == NULL) {
    goto fail; //String
    }
    }


    // get_me->address
    if(get_me->address) {
    if(cJSON_AddStringToObject(item, "address", get_me->address) == NULL) {
    goto fail; //String
    }
    }


    // get_me->description
    if(get_me->description) {
    if(cJSON_AddStringToObject(item, "description", get_me->description) == NULL) {
    goto fail; //String
    }
    }


    // get_me->email
    if(get_me->email) {
    if(cJSON_AddStringToObject(item, "email", get_me->email) == NULL) {
    goto fail; //String
    }
    }


    // get_me->phone
    if(get_me->phone) {
    if(cJSON_AddStringToObject(item, "phone", get_me->phone) == NULL) {
    goto fail; //String
    }
    }


    // get_me->vertical
    if(get_me->vertical != one_msg_waba_sdk_get_me_VERTICAL_NULL) {
    if(cJSON_AddStringToObject(item, "vertical", verticalget_me_ToString(get_me->vertical)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // get_me->photo
    if(get_me->photo) {
    if(cJSON_AddStringToObject(item, "photo", get_me->photo) == NULL) {
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

get_me_t *get_me_parseFromJSON(cJSON *get_meJSON){

    get_me_t *get_me_local_var = NULL;

    // get_me->about
    cJSON *about = cJSON_GetObjectItemCaseSensitive(get_meJSON, "about");
    if (about) { 
    if(!cJSON_IsString(about) && !cJSON_IsNull(about))
    {
    goto end; //String
    }
    }

    // get_me->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(get_meJSON, "address");
    if (address) { 
    if(!cJSON_IsString(address) && !cJSON_IsNull(address))
    {
    goto end; //String
    }
    }

    // get_me->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(get_meJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // get_me->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(get_meJSON, "email");
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // get_me->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(get_meJSON, "phone");
    if (phone) { 
    if(!cJSON_IsString(phone) && !cJSON_IsNull(phone))
    {
    goto end; //String
    }
    }

    // get_me->vertical
    cJSON *vertical = cJSON_GetObjectItemCaseSensitive(get_meJSON, "vertical");
    one_msg_waba_sdk_get_me_VERTICAL_e verticalVariable;
    if (vertical) { 
    if(!cJSON_IsString(vertical))
    {
    goto end; //Enum
    }
    verticalVariable = verticalget_me_FromString(vertical->valuestring);
    }

    // get_me->photo
    cJSON *photo = cJSON_GetObjectItemCaseSensitive(get_meJSON, "photo");
    if (photo) { 
    if(!cJSON_IsString(photo) && !cJSON_IsNull(photo))
    {
    goto end; //String
    }
    }


    get_me_local_var = get_me_create (
        about && !cJSON_IsNull(about) ? strdup(about->valuestring) : NULL,
        address && !cJSON_IsNull(address) ? strdup(address->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL,
        phone && !cJSON_IsNull(phone) ? strdup(phone->valuestring) : NULL,
        vertical ? verticalVariable : -1,
        photo && !cJSON_IsNull(photo) ? strdup(photo->valuestring) : NULL
        );

    return get_me_local_var;
end:
    return NULL;

}
