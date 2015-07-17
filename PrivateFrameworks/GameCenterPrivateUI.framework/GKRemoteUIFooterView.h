/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKRemoteUIFooterView : UIView <RemoteUITableFooter> {
    float  _bottomMargin;
    int  _layoutStyle;
    float  _leftMargin;
    float  _paragraphMargin;
    float  _rightMargin;
    BOOL  _shouldApplyGameCenterTheme;
    GKLabel * _textLabel;
}

@property (nonatomic) float bottomMargin;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) int layoutStyle;
@property (nonatomic) float leftMargin;
@property (nonatomic) float paragraphMargin;
@property (nonatomic) float rightMargin;
@property (nonatomic) BOOL shouldApplyGameCenterTheme;
@property (readonly) Class superclass;
@property (nonatomic, retain) GKLabel *textLabel;

- (id)attributedStringForString:(id)arg1 withStyle:(id)arg2;
- (float)bottomMargin;
- (void)dealloc;
- (float)footerHeightForWidth:(float)arg1 inTableView:(id)arg2;
- (id)initWithAttributes:(id)arg1;
- (int)layoutStyle;
- (float)leftMargin;
- (float)paragraphMargin;
- (float)rightMargin;
- (void)setBottomMargin:(float)arg1;
- (void)setLayoutStyle:(int)arg1;
- (void)setLeftMargin:(float)arg1;
- (void)setParagraphMargin:(float)arg1;
- (void)setRightMargin:(float)arg1;
- (void)setShouldApplyGameCenterTheme:(BOOL)arg1;
- (void)setTextLabel:(id)arg1;
- (BOOL)shouldApplyGameCenterTheme;
- (id)textLabel;

@end