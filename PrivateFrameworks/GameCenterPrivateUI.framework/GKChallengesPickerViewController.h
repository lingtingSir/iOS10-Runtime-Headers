/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKChallengesPickerViewController : GKPlayerPickerViewController {
    GKChallenge * _challenge;
    GKChallengesPickerDataSource * _challengesPickerDataSource;
}

@property (nonatomic, retain) GKChallenge *challenge;
@property (nonatomic, retain) GKChallengesPickerDataSource *challengesPickerDataSource;

- (id)challenge;
- (id)challengesPickerDataSource;
- (void)configureDataSource;
- (void)dealloc;
- (void)didBecomeReadyToDisplayData;
- (id)initWithChallenge:(id)arg1 selectedPlayers:(id)arg2;
- (void)setChallenge:(id)arg1;
- (void)setChallengesPickerDataSource:(id)arg1;
- (id)splitingDataSource;
- (void)viewDidLoad;

@end