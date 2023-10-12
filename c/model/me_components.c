#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "me_components.h"


char* verticalme_components_ToString(one_msg_waba_sdk_me_components_VERTICAL_e vertical) {
    char* verticalArray[] =  { "NULL", "Automotive", "Beauty, Spa and Salon", "Clothing and Apparel", "Education", "Entertainment", "Event Planning and Service", "Finance and Banking", "Food and Grocery", "Public Service", "Hotel and Lodging", "Medical and Health", "Non-profit", "Professional Services", "Shopping and Retail", "Travel and Transportation", "Restaurant", "Other", "" };
	return verticalArray[vertical];
}

one_msg_waba_sdk_me_components_VERTICAL_e verticalme_components_FromString(char* vertical){
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

me_components_t *me_components_create(
    char *about,
    char *address,
    char *description,
    char *email,
    char *phone,
    one_msg_waba_sdk_me_components_VERTICAL_e vertical,
    char *photo
    ) {
    me_components_t *me_components_local_var = malloc(sizeof(me_components_t));
    if (!me_components_local_var) {
        return NULL;
    }
    me_components_local_var->about = about;
    me_components_local_var->address = address;
    me_components_local_var->description = description;
    me_components_local_var->email = email;
    me_components_local_var->phone = phone;
    me_components_local_var->vertical = vertical;
    me_components_local_var->photo = photo;

    return me_components_local_var;
}


void me_components_free(me_components_t *me_components) {
    if(NULL == me_components){
        return ;
    }
    listEntry_t *listEntry;
    if (me_components->about) {
        free(me_components->about);
        me_components->about = NULL;
    }
    if (me_components->address) {
        free(me_components->address);
        me_components->address = NULL;
    }
    if (me_components->description) {
        free(me_components->description);
        me_components->description = NULL;
    }
    if (me_components->email) {
        free(me_components->email);
        me_components->email = NULL;
    }
    if (me_components->phone) {
        free(me_components->phone);
        me_components->phone = NULL;
    }
    if (me_components->photo) {
        free(me_components->photo);
        me_components->photo = NULL;
    }
    free(me_components);
}

cJSON *me_components_convertToJSON(me_components_t *me_components) {
    cJSON *item = cJSON_CreateObject();

    // me_components->about
    if(me_components->about) {
    if(cJSON_AddStringToObject(item, "about", me_components->about) == NULL) {
    goto fail; //String
    }
    }


    // me_components->address
    if(me_components->address) {
    if(cJSON_AddStringToObject(item, "address", me_components->address) == NULL) {
    goto fail; //String
    }
    }


    // me_components->description
    if(me_components->description) {
    if(cJSON_AddStringToObject(item, "description", me_components->description) == NULL) {
    goto fail; //String
    }
    }


    // me_components->email
    if(me_components->email) {
    if(cJSON_AddStringToObject(item, "email", me_components->email) == NULL) {
    goto fail; //String
    }
    }


    // me_components->phone
    if(me_components->phone) {
    if(cJSON_AddStringToObject(item, "phone", me_components->phone) == NULL) {
    goto fail; //String
    }
    }


    // me_components->vertical
    if(me_components->vertical != one_msg_waba_sdk_me_components_VERTICAL_NULL) {
    if(cJSON_AddStringToObject(item, "vertical", verticalme_components_ToString(me_components->vertical)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // me_components->photo
    if(me_components->photo) {
    if(cJSON_AddStringToObject(item, "photo", me_components->photo) == NULL) {
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

me_components_t *me_components_parseFromJSON(cJSON *me_componentsJSON){

    me_components_t *me_components_local_var = NULL;

    // me_components->about
    cJSON *about = cJSON_GetObjectItemCaseSensitive(me_componentsJSON, "about");
    if (about) { 
    if(!cJSON_IsString(about) && !cJSON_IsNull(about))
    {
    goto end; //String
    }
    }

    // me_components->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(me_componentsJSON, "address");
    if (address) { 
    if(!cJSON_IsString(address) && !cJSON_IsNull(address))
    {
    goto end; //String
    }
    }

    // me_components->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(me_componentsJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // me_components->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(me_componentsJSON, "email");
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // me_components->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(me_componentsJSON, "phone");
    if (phone) { 
    if(!cJSON_IsString(phone) && !cJSON_IsNull(phone))
    {
    goto end; //String
    }
    }

    // me_components->vertical
    cJSON *vertical = cJSON_GetObjectItemCaseSensitive(me_componentsJSON, "vertical");
    one_msg_waba_sdk_me_components_VERTICAL_e verticalVariable;
    if (vertical) { 
    if(!cJSON_IsString(vertical))
    {
    goto end; //Enum
    }
    verticalVariable = verticalme_components_FromString(vertical->valuestring);
    }

    // me_components->photo
    cJSON *photo = cJSON_GetObjectItemCaseSensitive(me_componentsJSON, "photo");
    if (photo) { 
    if(!cJSON_IsString(photo) && !cJSON_IsNull(photo))
    {
    goto end; //String
    }
    }


    me_components_local_var = me_components_create (
        about && !cJSON_IsNull(about) ? strdup(about->valuestring) : NULL,
        address && !cJSON_IsNull(address) ? strdup(address->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL,
        phone && !cJSON_IsNull(phone) ? strdup(phone->valuestring) : NULL,
        vertical ? verticalVariable : -1,
        photo && !cJSON_IsNull(photo) ? strdup(photo->valuestring) : NULL
        );

    return me_components_local_var;
end:
    return NULL;

}
