/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSNumber, NSString;

@interface EKPersistentLocation : EKPersistentObject <NSCopying> {
}

@property(copy) NSString * title;
@property(copy) NSNumber * latitude;
@property(copy) NSNumber * longitude;
@property(copy) NSNumber * radius;
@property(copy) NSString * addressBookEntityID;

+ (id)relations;
+ (id)defaultPropertiesToLoad;

- (id)alarmOwner;
- (void)setAlarmOwner:(id)arg1;
- (id)calendarItemOwner;
- (void)setCalendarItemOwner:(id)arg1;
- (void)setAddressBookEntityID:(id)arg1;
- (id)addressBookEntityID;
- (int)entityType;
- (void)setRadius:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)radius;
- (void)setLatitude:(id)arg1;
- (void)setLongitude:(id)arg1;
- (id)longitude;
- (id)latitude;
- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end