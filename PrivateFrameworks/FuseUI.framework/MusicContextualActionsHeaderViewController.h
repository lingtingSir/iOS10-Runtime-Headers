/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicContextualActionsHeaderViewController : UIViewController <MusicContextualActionsHeaderLockupViewDelegate> {
    MusicEntityProviderDownloadInformationController * _containerDownloadInformationController;
    MusicEntityViewHorizontalLockupContentDescriptor * _contentDescriptor;
    NSArray * _contextualActions;
    id /* block */  _dismissRequestHandler;
    MusicEntityValueContext * _entityValueContext;
    MusicContextualActionsHeaderLockupView * _lockupView;
    MusicContextualAlertAction * _pendingAlertAction;
    struct CGSize { 
        double width; 
        double height; 
    }  _previousBoundsSize;
    id /* block */  _selectionHandler;
}

@property (nonatomic, readonly, copy) NSArray *contextualActions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissRequestHandler;
@property (nonatomic, readonly) MusicEntityValueContext *entityValueContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ selectionHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_actionsWithClass:(Class)arg1;
- (id)_addToLibraryAlertAction;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)_contentTasteAlertAction;
- (void)_getEntityValueProvider:(id*)arg1 identifierCollection:(id*)arg2;
- (id)_keepLocalAlertAction;
- (id)_libraryUpdateAlertActionPassingTest:(id /* block */)arg1;
- (id)_newContentDescriptorForEntityValueContext:(id)arg1;
- (id)_removeFromLibraryAlertAction;
- (void)_requestDismissalWithDelay:(double)arg1 completionHandler:(id /* block */)arg2;
- (id)_shareAlertAction;
- (void)_updatePreferredContentSizeForced:(bool)arg1;
- (id)contextualActions;
- (void)contextualActionsHeaderLockupViewDidSelectDownloadButton:(id)arg1;
- (void)contextualActionsHeaderLockupViewDidSelectLikeButton:(id)arg1;
- (void)contextualActionsHeaderLockupViewDidSelectShareButton:(id)arg1;
- (void)contextualActionsHeaderLockupViewWasSelected:(id)arg1;
- (void)dealloc;
- (id /* block */)dismissRequestHandler;
- (id)entityValueContext;
- (id)initWithEntityValueContext:(id)arg1 contextualActions:(id)arg2;
- (id /* block */)selectionHandler;
- (void)setDismissRequestHandler:(id /* block */)arg1;
- (void)setSelectionHandler:(id /* block */)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
