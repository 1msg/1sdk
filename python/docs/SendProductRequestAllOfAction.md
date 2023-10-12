# SendProductRequestAllOfAction

Object containing info about product or catalog. Can contain the following fields:  **catalog_id** - id of catalog  **product_retailer_id** - id of product. Only for sending single product.  **sections** - used for sending multiply products. It`s array containing objects with catalog info. See example below.  Example: {\"catalog_id\":\"{{catalog_id}}\",\"sections\":[{\"title\":\"the-section-title\",\"product_items\":[{\"product_retailer_id\":\"{{SKU-1}}\"},{\"product_retailer_id\":\"{{SKU-2}}\"}]},{\"title\":\"the-section-title2\",\"product_items\":[{\"product_retailer_id\":\"{{SKU-1}}\"}]}]}

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**catalog_id** | **str** | id of the catalog | [optional] 
**product_retailer_id** | **str** | id of the product | [optional] 
**sections** | [**List[SendProductRequestAllOfActionSections]**](SendProductRequestAllOfActionSections.md) |  | [optional] 

## Example

```python
from openapi_client.models.send_product_request_all_of_action import SendProductRequestAllOfAction

# TODO update the JSON string below
json = "{}"
# create an instance of SendProductRequestAllOfAction from a JSON string
send_product_request_all_of_action_instance = SendProductRequestAllOfAction.from_json(json)
# print the JSON string representation of the object
print SendProductRequestAllOfAction.to_json()

# convert the object into a dict
send_product_request_all_of_action_dict = send_product_request_all_of_action_instance.to_dict()
# create an instance of SendProductRequestAllOfAction from a dict
send_product_request_all_of_action_form_dict = send_product_request_all_of_action.from_dict(send_product_request_all_of_action_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


