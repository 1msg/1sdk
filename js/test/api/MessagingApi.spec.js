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
    instance = new 1msgWabaSdk.MessagingApi();
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

  describe('MessagingApi', function() {
    describe('messagesList', function() {
      it('should call messagesList successfully', function(done) {
        //uncomment below and update the code to test messagesList
        //instance.messagesList(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('readMessage', function() {
      it('should call readMessage successfully', function(done) {
        //uncomment below and update the code to test readMessage
        //instance.readMessage(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('sendContact', function() {
      it('should call sendContact successfully', function(done) {
        //uncomment below and update the code to test sendContact
        //instance.sendContact(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('sendFile', function() {
      it('should call sendFile successfully', function(done) {
        //uncomment below and update the code to test sendFile
        //instance.sendFile(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('sendList', function() {
      it('should call sendList successfully', function(done) {
        //uncomment below and update the code to test sendList
        //instance.sendList(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('sendLocation', function() {
      it('should call sendLocation successfully', function(done) {
        //uncomment below and update the code to test sendLocation
        //instance.sendLocation(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('sendMessage', function() {
      it('should call sendMessage successfully', function(done) {
        //uncomment below and update the code to test sendMessage
        //instance.sendMessage(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
  });

}));
