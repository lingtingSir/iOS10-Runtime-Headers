/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface Alarm : NSObject <MTAlarmSoundInfoProvider> {
    NSString * _alarmID;
    NSURL * _alarmIDURL;
    bool  _allowsSnooze;
    unsigned int  _daySetting;
    <AlarmDelegate> * _delegate;
    Alarm * _editingProxy;
    unsigned int  _hour;
    bool  _isSleepAlarm;
    NSDate * _lastModified;
    unsigned int  _minute;
    UILocalNotification * _notification;
    bool  _pretendActiveIfProxy;
    NSArray * _repeatDays;
    unsigned int  _revision;
    NSMutableDictionary * _settings;
    UILocalNotification * _snoozedNotification;
    NSString * _sound;
    long long  _soundType;
    NSString * _title;
    NSString * _vibrationID;
    UILocalNotification * _weeklyNotifications;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, retain) NSString *alarmID;
@property (nonatomic, retain) NSURL *alarmIDURL;
@property (nonatomic, readonly) NSString *alarmSoundIdentifier;
@property (nonatomic, readonly) long long alarmSoundType;
@property (nonatomic, copy) NSNumber *alarmSoundVolume;
@property (nonatomic) bool allowsSnooze;
@property (nonatomic) long long bedtimeHour;
@property (nonatomic) long long bedtimeMinute;
@property (nonatomic, copy) NSNumber *bedtimeReminderMinutes;
@property (nonatomic) unsigned int daySetting;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AlarmDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) Alarm *editingProxy;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int hour;
@property (nonatomic) bool isSleepAlarm;
@property (nonatomic, readonly) NSDate *lastModified;
@property (nonatomic) unsigned int minute;
@property (nonatomic, readonly) UILocalNotification *notification;
@property (nonatomic, readonly) NSArray *repeatDays;
@property (nonatomic, readonly) bool repeats;
@property (nonatomic, readonly) unsigned int revision;
@property (nonatomic, readonly) NSDictionary *settings;
@property (getter=isSnoozed, nonatomic, readonly) bool snoozed;
@property (nonatomic, readonly) NSString *sound;
@property (nonatomic, readonly) long long soundType;
@property (nonatomic, copy) NSNumber *soundVolume;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) NSString *uiTitle;
@property (nonatomic, copy) NSString *vibrationID;

+ (id)_newSettingsFromNotification:(id)arg1;
+ (bool)_verifyNotificationSettings:(id)arg1 againstAlarmSettings:(id)arg2;
+ (bool)_verifyNotificationSettings:(id)arg1 againstUserInfo:(id)arg2;
+ (bool)isSnoozeNotification:(id)arg1;
+ (id /* block */)timeComparator;
+ (bool)verifyDaySetting:(id)arg1 withMessageList:(id)arg2;
+ (bool)verifyHourSetting:(id)arg1 withMessageList:(id)arg2;
+ (bool)verifyIdSetting:(id)arg1 withMessageList:(id)arg2;
+ (bool)verifyMinuteSetting:(id)arg1 withMessageList:(id)arg2;
+ (bool)verifySettings:(id)arg1;

- (void).cxx_destruct;
- (id)_newBaseDateComponentsForDay:(long long)arg1;
- (id)_newNotification:(long long)arg1;
- (unsigned long long)_notificationsCount;
- (id)alarmID;
- (id)alarmIDURL;
- (id)alarmSoundIdentifier;
- (long long)alarmSoundType;
- (id)alarmSoundVolume;
- (bool)allowsSnooze;
- (void)applyChangesFromEditingProxy;
- (void)applySettings:(id)arg1;
- (long long)bedtimeHour;
- (long long)bedtimeMinute;
- (id)bedtimeReminderMinutes;
- (void)cancelNotifications;
- (long long)compareTime:(id)arg1;
- (unsigned int)daySetting;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (void)dropEditingProxy;
- (void)dropNotifications;
- (id)editingProxy;
- (void)handleAlarmFired:(id)arg1;
- (void)handleNotificationSnoozed:(id)arg1 notifyDelegate:(bool)arg2;
- (unsigned long long)hash;
- (unsigned int)hour;
- (id)init;
- (id)initWithDefaultValues;
- (id)initWithNotification:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (bool)isSleepAlarm;
- (bool)isSnoozed;
- (id)lastModified;
- (void)markModified;
- (unsigned int)minute;
- (id)nextFireDate;
- (id)nextFireDateAfterDate:(id)arg1;
- (id)nextFireDateAfterDate:(id)arg1 notification:(id)arg2 day:(long long)arg3;
- (id)notification;
- (id)nowDateForOffsetCalculation;
- (void)prepareEditingProxy;
- (void)prepareNotifications;
- (void)refreshActiveState;
- (id)repeatDays;
- (bool)repeats;
- (unsigned int)revision;
- (void)scheduleNotifications;
- (void)setAlarmID:(id)arg1;
- (void)setAlarmIDURL:(id)arg1;
- (void)setAlarmSoundIdentifier:(id)arg1 ofType:(long long)arg2;
- (void)setAlarmSoundVolume:(id)arg1;
- (void)setAllowsSnooze:(bool)arg1;
- (void)setBedtimeHour:(long long)arg1;
- (void)setBedtimeMinute:(long long)arg1;
- (void)setBedtimeReminderMinutes:(id)arg1;
- (void)setDaySetting:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHour:(unsigned int)arg1;
- (void)setIsSleepAlarm:(bool)arg1;
- (void)setMinute:(unsigned int)arg1;
- (void)setSound:(id)arg1 ofType:(long long)arg2;
- (void)setSoundVolume:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVibrationID:(id)arg1;
- (id)settings;
- (id)sound;
- (long long)soundType;
- (id)soundVolume;
- (id)timeZoneForOffsetCalculation;
- (id)title;
- (bool)tryAddNotification:(id)arg1;
- (id)uiTitle;
- (id)vibrationID;

@end
