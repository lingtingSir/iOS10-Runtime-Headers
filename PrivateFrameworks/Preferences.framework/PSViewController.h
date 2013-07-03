/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSSpecifier, UIViewController<PSController>, PSRootController;

@interface PSViewController : UIViewController <PSController> {
    UIViewController<PSController> *_parentController;
    PSRootController *_rootController;
    PSSpecifier *_specifier;
}


- (void)formSheetViewDidDisappear;
- (void)popupViewDidDisappear;
- (void)statusBarWillAnimateByHeight:(float)arg1;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)didWake;
- (void)didUnlock;
- (void)willUnlock;
- (void)didLock;
- (id)parentController;
- (id)readPreferenceValue:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (BOOL)canBeShownFromSuspendedState;
- (void)pushController:(id)arg1;
- (void)setParentController:(id)arg1;
- (void)setRootController:(id)arg1;
- (void)popupViewWillDisappear;
- (void)formSheetViewWillDisappear;
- (id)rootController;
- (void)setSpecifier:(id)arg1;
- (id)specifier;
- (void)handleURL:(id)arg1;
- (void)dealloc;
- (void)suspend;

@end