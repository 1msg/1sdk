

# SendProductRequestAllOfAction

Object containing info about product or catalog. Can contain the following fields:  **catalog_id** - id of catalog  **product_retailer_id** - id of product. Only for sending single product.  **sections** - used for sending multiply products. It`s array containing objects with catalog info. See example below.  Example: {\"catalog_id\":\"{{catalog_id}}\",\"sections\":[{\"title\":\"the-section-title\",\"product_items\":[{\"product_retailer_id\":\"{{SKU-1}}\"},{\"product_retailer_id\":\"{{SKU-2}}\"}]},{\"title\":\"the-section-title2\",\"product_items\":[{\"product_retailer_id\":\"{{SKU-1}}\"}]}]}

## Properties

| Name | Type | Description | Notes |
|------------ | ------------- | ------------- | -------------|
|**catalogId** | **String** | id of the catalog |  [optional] |
|**productRetailerId** | **String** | id of the product |  [optional] |
|**sections** | [**List&lt;SendProductRequestAllOfActionSections&gt;**](SendProductRequestAllOfActionSections.md) |  |  [optional] |



