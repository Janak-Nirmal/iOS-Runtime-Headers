/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class MPAVItem, MPURatingControl, MusicLyricsView, MusicNowPlayingPlaybackControlsView, MusicNowPlayingTitlesView, RUPurchaseAlbumView, RUStationActionsViewController, RUTrackActionsModalItem, RUTrackActionsViewController, RUTrackDownloadView, SKStoreProductViewController, UIActionSheet, UINavigationBar, UINavigationItem, UIPopoverController, UITapGestureRecognizer, UIView, UIViewController;

@interface MusicNowPlayingViewController : UIViewController <MusicNowPlayingPlaybackControlsViewDelegate, MPPlaybackControlsDelegate, MPURatingControlDelegate, MPTransportControlsTarget, RUStationActionsViewControllerDelegate, RUTrackActionsDelegate, RUTrackDownloadViewDelegate, SKStoreProductViewControllerDelegate, UIActionSheetDelegate, UIGestureRecognizerDelegate, UIModalItemDelegate, UIPopoverControllerDelegate> {
    BOOL _canMarqueeText;
    UIView *_contentView;
    UIViewController *_contentViewController;
    UINavigationItem *_effectiveNavigationItem;
    BOOL _hasProperApplicationStateForWantingVideoLayer;
    BOOL _hasVisibilityForWantingVideoLayer;
    UIView *_infoButtonContainerView;
    BOOL _isDetailScrubbing;
    BOOL _isShowingRatings;
    MPAVItem *_item;
    UIViewController *_lastPresentedViewController;
    MusicLyricsView *_lyricsView;
    UINavigationBar *_padFakeNavigationBar;
    MusicNowPlayingPlaybackControlsView *_playbackControlsView;
    UINavigationItem *_previousNavigationItem;
    SKStoreProductViewController *_productViewController;
    RUPurchaseAlbumView *_purchaseAlbumView;
    MPURatingControl *_ratingControl;
    UIActionSheet *_repeatActionSheet;
    UIPopoverController *_stationActionsPopoverController;
    UIView *_stationActionsPresentationView;
    RUStationActionsViewController *_stationActionsViewController;
    BOOL _supportsCoverFlow;
    UITapGestureRecognizer *_tapGestureRecognizer;
    MusicNowPlayingTitlesView *_titlesView;
    RUTrackActionsModalItem *_trackActionsModalItem;
    UIPopoverController *_trackActionsPopoverController;
    RUTrackActionsViewController *_trackActionsViewController;
    RUTrackDownloadView *_trackDownloadView;
    BOOL _visuallyEngagedAds;
    BOOL _wantsVideoLayer;
}

- (void).cxx_destruct;
- (BOOL)MPH_supportsCoverFlow;
- (void)_addStationFromItem:(id)arg1 usingArtist:(BOOL)arg2;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applyAttributesForItem:(id)arg1 toTrackActioningObject:(id)arg2;
- (void)_bufferingStateDidChangeNotification:(id)arg1;
- (void)_cleanupForDeallocationContentView:(id)arg1 contentViewController:(id)arg2;
- (void)_completeAdditionOfStation:(id)arg1 fromItem:(id)arg2 usingArtist:(BOOL)arg3 canShowAlert:(BOOL)arg4;
- (struct CGSize { float x1; float x2; })_contentViewSizeForItem:(id)arg1 orientation:(int)arg2;
- (id)_createContentViewForItem:(id)arg1 contentViewController:(id*)arg2;
- (BOOL)_displayingActionSheet;
- (void)_flipsideAction:(id)arg1;
- (void)_handleTrackAction:(int)arg1 withItem:(id)arg2;
- (void)_infoButtonAction:(id)arg1;
- (void)_itemAlbumBuyButtonInfoDidChangeNotification:(id)arg1;
- (void)_itemAlbumStoreIDDidChangeNotification:(id)arg1;
- (void)_itemArtworkDidChangeNotification:(id)arg1;
- (void)_itemDidChangeNotification:(id)arg1;
- (void)_itemIsExplicitDidChangeNotification:(id)arg1;
- (BOOL)_itemSupportsRatings:(id)arg1;
- (void)_itemTitlesDidChangeNotification:(id)arg1;
- (void)_layoutForOrientation:(int)arg1;
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1;
- (void)_playbackContentsDidChangeNotification:(id)arg1;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)_popIfNecessary;
- (void)_prepareToAddStation;
- (void)_purchaseAlbumButtonAction:(id)arg1;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)_radioPurchaseAllowedDidChangeNotification:(id)arg1;
- (void)_removeAdViewNotification:(id)arg1;
- (void)_scaleAndSetModalItemArtworkImageToCurrentArtworkImage;
- (void)_setShowingRatings:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setWantsVideoLayer:(BOOL)arg1 forItem:(id)arg2;
- (BOOL)_shouldShowTransitionFromItem:(id)arg1 toItem:(id)arg2 isForwards:(BOOL*)arg3;
- (void)_startGeniusPlaylistFromCurrentItem;
- (void)_statusBarHeightChangedNotification:(id)arg1;
- (void)_tapAction:(id)arg1;
- (void)_updateContentView:(id)arg1 forItem:(id)arg2;
- (void)_updateControlVisibilityForOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)_updateForCurrentItemAnimated:(BOOL)arg1;
- (void)_updateMarqueeStatusAllowingCurrentMarqueeToFinish:(BOOL)arg1;
- (void)_updateNavigationItemAnimated:(BOOL)arg1;
- (void)_updateTitles;
- (void)_updateWantsVideoLayer;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)controlsOverlay:(id)arg1 detailSliderTrackingDidChangeScrubSpeed:(int)arg2;
- (unsigned int)controlsOverlay:(id)arg1 playbackSpeedForItem:(id)arg2;
- (BOOL)controlsOverlay:(id)arg1 shouldUseDetailScrubberForItem:(id)arg2;
- (void)controlsOverlayDetailSliderTrackingDidBegin:(id)arg1;
- (void)controlsOverlayDetailSliderTrackingDidEnd:(id)arg1;
- (void)controlsOverlayDidClickPlaybackSpeedButton:(id)arg1;
- (void)crossedTimeMakerWithEvent:(id)arg1;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)modalItem:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (BOOL)music_supportsMiniPlayer;
- (BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (BOOL)playbackControls:(id)arg1 changedRepeatType:(unsigned int)arg2;
- (BOOL)playbackControls:(id)arg1 changedShuffleType:(unsigned int)arg2;
- (void)playbackControls:(id)arg1 didTapRadioNewStationFromItem:(id)arg2 usingArtist:(BOOL)arg3;
- (BOOL)playbackControlsDidTapGeniusButton:(id)arg1;
- (void)playbackControlsDidTapInfoButton:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)ratingDidChangeForRatingControl:(id)arg1;
- (unsigned int)repeatTypeForPlaybackControls:(id)arg1;
- (unsigned int)shuffleTypeForPlaybackControls:(id)arg1;
- (void)stationActionsViewController:(id)arg1 didFinishAction:(int)arg2 withObject:(id)arg3 error:(id)arg4;
- (void)stationActionsViewController:(id)arg1 willBeginAction:(int)arg2;
- (void)trackActioningObject:(id)arg1 didSelectAction:(int)arg2 atIndex:(int)arg3;
- (void)trackDownloadView:(id)arg1 stateDidChangeToState:(int)arg2;
- (void)trackDownloadViewWillTransition:(id)arg1;
- (BOOL)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
