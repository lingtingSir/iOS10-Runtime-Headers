/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUMomentsSettings : PUSettings <UIAlertViewDelegate> {
    BOOL  _allowCollectionInfluence;
    unsigned int  _order;
}

@property (nonatomic) BOOL allowCollectionInfluence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int order;
@property (readonly) Class superclass;

+ (void)_clearSelection;
+ (id)_currentlySelectedAssets;
+ (void)_mergeMoments;
+ (void)_rebuildMoments;
+ (void)_renameCollection;
+ (void)_renameMoment;
+ (void)_splitMomentsWithBoth:(BOOL)arg1;
+ (void)_tagSelectionForCollections;
+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (BOOL)allowCollectionInfluence;
- (unsigned int)order;
- (void)performPostSaveActions;
- (void)setAllowCollectionInfluence:(BOOL)arg1;
- (void)setDefaultValues;
- (void)setOrder:(unsigned int)arg1;

@end