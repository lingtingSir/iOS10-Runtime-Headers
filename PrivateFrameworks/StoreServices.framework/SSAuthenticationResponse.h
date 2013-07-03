/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, NSDictionary, NSNumber, NSHTTPURLResponse;

@interface SSAuthenticationResponse : NSObject  {
    NSDictionary *_responseDictionary;
    int _urlBagType;
    NSHTTPURLResponse *_urlResponse;
}

@property int URLBagType;
@property(readonly) NSDictionary * responseDictionary;
@property(readonly) NSHTTPURLResponse * URLResponse;
@property(readonly) NSString * accountName;
@property(readonly) int accountKind;
@property(readonly) NSNumber * accountUniqueIdentifier;
@property(readonly) int availableServiceTypes;
@property(readonly) NSString * creditsString;
@property(readonly) int enabledServiceTypes;
@property(getter=isNewCustomer,readonly) BOOL newCustomer;
@property(readonly) NSString * storeFrontIdentifier;
@property(readonly) NSString * token;
@property(readonly) NSNumber * failureType;
@property(readonly) int responseType;
@property(readonly) NSString * userMessage;


- (int)responseType;
- (id)URLResponse;
- (void)setURLBagType:(int)arg1;
- (id)responseDictionary;
- (id)userMessage;
- (int)_responseTypeForStatusValue:(int)arg1;
- (int)_responseTypeForErrorNumber:(int)arg1;
- (int)_responseTypeForFailureType:(int)arg1;
- (id)accountUniqueIdentifier;
- (id)_valueForFirstAvailableKey:(id)arg1;
- (id)failureType;
- (id)newAccount;
- (id)initWithURLResponse:(id)arg1 dictionary:(id)arg2;
- (int)URLBagType;
- (int)availableServiceTypes;
- (int)accountKind;
- (id)creditsString;
- (int)enabledServiceTypes;
- (id)storeFrontIdentifier;
- (BOOL)isNewCustomer;
- (id)accountName;
- (id)token;
- (void)dealloc;

@end