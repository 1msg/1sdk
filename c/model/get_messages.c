#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "get_messages.h"



get_messages_t *get_messages_create(
    list_t *messages
    ) {
    get_messages_t *get_messages_local_var = malloc(sizeof(get_messages_t));
    if (!get_messages_local_var) {
        return NULL;
    }
    get_messages_local_var->messages = messages;

    return get_messages_local_var;
}


void get_messages_free(get_messages_t *get_messages) {
    if(NULL == get_messages){
        return ;
    }
    listEntry_t *listEntry;
    if (get_messages->messages) {
        list_ForEach(listEntry, get_messages->messages) {
            get_messages_messages_inner_free(listEntry->data);
        }
        list_freeList(get_messages->messages);
        get_messages->messages = NULL;
    }
    free(get_messages);
}

cJSON *get_messages_convertToJSON(get_messages_t *get_messages) {
    cJSON *item = cJSON_CreateObject();

    // get_messages->messages
    if(get_messages->messages) {
    cJSON *messages = cJSON_AddArrayToObject(item, "messages");
    if(messages == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *messagesListEntry;
    if (get_messages->messages) {
    list_ForEach(messagesListEntry, get_messages->messages) {
    cJSON *itemLocal = get_messages_messages_inner_convertToJSON(messagesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(messages, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

get_messages_t *get_messages_parseFromJSON(cJSON *get_messagesJSON){

    get_messages_t *get_messages_local_var = NULL;

    // define the local list for get_messages->messages
    list_t *messagesList = NULL;

    // get_messages->messages
    cJSON *messages = cJSON_GetObjectItemCaseSensitive(get_messagesJSON, "messages");
    if (messages) { 
    cJSON *messages_local_nonprimitive = NULL;
    if(!cJSON_IsArray(messages)){
        goto end; //nonprimitive container
    }

    messagesList = list_createList();

    cJSON_ArrayForEach(messages_local_nonprimitive,messages )
    {
        if(!cJSON_IsObject(messages_local_nonprimitive)){
            goto end;
        }
        get_messages_messages_inner_t *messagesItem = get_messages_messages_inner_parseFromJSON(messages_local_nonprimitive);

        list_addElement(messagesList, messagesItem);
    }
    }


    get_messages_local_var = get_messages_create (
        messages ? messagesList : NULL
        );

    return get_messages_local_var;
end:
    if (messagesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, messagesList) {
            get_messages_messages_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(messagesList);
        messagesList = NULL;
    }
    return NULL;

}
