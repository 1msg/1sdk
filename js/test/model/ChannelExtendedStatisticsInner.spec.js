/**
 * 1msg_waba_sdk
 * [1MSG.IO](https://1msg.io/) is the perfect WhatsApp management tool for your business. With us you get full access to the official Whatsapp API/webhooks.  Every API request must contain an Authorize HTTP header with a token.  This is your channel token, which can be found in your channel project on your profile page. Please do not give the token to anyone or post it publicly.  The authorization token must be added to each request in the GET parameter 'token' and always passed to query string (?token={your_token}). Parameters in GET queries pass query string. Parameters in POST requests — through the JSON-encoded request body.   All 'send' methods (except /sendTemplate) will only work when the dialog session with the user is open. Some of our solutions simplify and avoid such limitations, but we urge you to pay more attention to this detail
 *
 * The version of the OpenAPI document: 2.39
 * Contact: hello@1msg.io
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD.
    define(['expect.js', process.cwd()+'/src/index'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    factory(require('expect.js'), require(process.cwd()+'/src/index'));
  } else {
    // Browser globals (root is window)
    factory(root.expect, root.1msgWabaSdk);
  }
}(this, function(expect, 1msgWabaSdk) {
  'use strict';

  var instance;

  beforeEach(function() {
    instance = new 1msgWabaSdk.ChannelExtendedStatisticsInner();
  });

  var getProperty = function(object, getter, property) {
    // Use getter method if present; otherwise, get the property directly.
    if (typeof object[getter] === 'function')
      return object[getter]();
    else
      return object[property];
  }

  var setProperty = function(object, setter, property, value) {
    // Use setter method if present; otherwise, set the property directly.
    if (typeof object[setter] === 'function')
      object[setter](value);
    else
      object[property] = value;
  }

  describe('ChannelExtendedStatisticsInner', function() {
    it('should create an instance of ChannelExtendedStatisticsInner', function() {
      // uncomment below and update the code to test ChannelExtendedStatisticsInner
      //var instance = new 1msgWabaSdk.ChannelExtendedStatisticsInner();
      //expect(instance).to.be.a(1msgWabaSdk.ChannelExtendedStatisticsInner);
    });

    it('should have the property businessInitiatedPaidQuantity (base name: "business_initiated_paid_quantity")', function() {
      // uncomment below and update the code to test the property businessInitiatedPaidQuantity
      //var instance = new 1msgWabaSdk.ChannelExtendedStatisticsInner();
      //expect(instance).to.be();
    });

    it('should have the property businessInitiatedPrice (base name: "business_initiated_price")', function() {
      // uncomment below and update the code to test the property businessInitiatedPrice
      //var instance = new 1msgWabaSdk.ChannelExtendedStatisticsInner();
      //expect(instance).to.be();
    });

    it('should have the property businessInitiatedQuantity (base name: "business_initiated_quantity")', function() {
      // uncomment below and update the code to test the property businessInitiatedQuantity
      //var instance = new 1msgWabaSdk.ChannelExtendedStatisticsInner();
      //expect(instance).to.be();
    });

    it('should have the property freeEntryPoint (base name: "free_entry_point")', function() {
      // uncomment below and update the code to test the property freeEntryPoint
      //var instance = new 1msgWabaSdk.ChannelExtendedStatisticsInner();
      //expect(instance).to.be();
    });

    it('should have the property freeQuantity (base name: "free_quantity")', function() {
      // uncomment below and update the code to test the property freeQuantity
      //var instance = new 1msgWabaSdk.ChannelExtendedStatisticsInner();
      //expect(instance).to.be();
    });

    it('should have the property freeTier (base name: "free_tier")', function() {
      // uncomment below and update the code to test the property freeTier
      //var instance = new 1msgWabaSdk.ChannelExtendedStatisticsInner();
      //expect(instance).to.be();
    });

    it('should have the property paidQuantity (base name: "paid_quantity")', function() {
      // uncomment below and update the code to test the property paidQuantity
      //var instance = new 1msgWabaSdk.ChannelExtendedStatisticsInner();
      //expect(instance).to.be();
    });

    it('should have the property periodDate (base name: "period_date")', function() {
      // uncomment below and update the code to test the property periodDate
      //var instance = new 1msgWabaSdk.ChannelExtendedStatisticsInner();
      //expect(instance).to.be();
    });

    it('should have the property quantity (base name: "quantity")', function() {
      // uncomment below and update the code to test the property quantity
      //var instance = new 1msgWabaSdk.ChannelExtendedStatisticsInner();
      //expect(instance).to.be();
    });

    it('should have the property totalPrice (base name: "total_price")', function() {
      // uncomment below and update the code to test the property totalPrice
      //var instance = new 1msgWabaSdk.ChannelExtendedStatisticsInner();
      //expect(instance).to.be();
    });

    it('should have the property userInitiatedPaidQuantity (base name: "user_initiated_paid_quantity")', function() {
      // uncomment below and update the code to test the property userInitiatedPaidQuantity
      //var instance = new 1msgWabaSdk.ChannelExtendedStatisticsInner();
      //expect(instance).to.be();
    });

    it('should have the property userInitiatedPrice (base name: "user_initiated_price")', function() {
      // uncomment below and update the code to test the property userInitiatedPrice
      //var instance = new 1msgWabaSdk.ChannelExtendedStatisticsInner();
      //expect(instance).to.be();
    });

    it('should have the property userInitiatedQuantity (base name: "user_initiated_quantity")', function() {
      // uncomment below and update the code to test the property userInitiatedQuantity
      //var instance = new 1msgWabaSdk.ChannelExtendedStatisticsInner();
      //expect(instance).to.be();
    });

  });

}));
