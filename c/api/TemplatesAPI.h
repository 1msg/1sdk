#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/add_template_request.h"
#include "../model/get_me_401_response.h"
#include "../model/get_templates.h"
#include "../model/object.h"
#include "../model/remove_template_request.h"
#include "../model/send_message_status.h"
#include "../model/send_template_request.h"
#include "../model/set_me.h"


// Create template
//
// Create new template for sending.
//
object_t*
TemplatesAPI_addTemplate(apiClient_t *apiClient, add_template_request_t * add_template_request );


// Remove template
//
// Deleted template can not be restored.
//
set_me_t*
TemplatesAPI_removeTemplate(apiClient_t *apiClient, remove_template_request_t * remove_template_request );


// Send Template Message
//
// Send Template Message to a new or existing chat. Only one of two parameters is needed to determine the destination - chatId or phone.  Example:  {\"template\":\"template_name\",\"language\":{\"policy\":\"deterministic\",\"code\":\"en\"},\"namespace\":\"namespace_id\",\"params\":[{\"type\":\"header\",\"parameters\":[{\"type\":\"image\",\"image\": {\"link\":\"https://...\"}}]},{\"type\":\"body\",\"parameters\":[{\"type\":\"text\",\"text\":\"test\"}]}],\"phone\":\"556123122026\"}
//
send_message_status_t*
TemplatesAPI_sendTemplate(apiClient_t *apiClient, send_template_request_t * send_template_request );


// Get templates list
//
// 
//
get_templates_t*
TemplatesAPI_templatesList(apiClient_t *apiClient);


