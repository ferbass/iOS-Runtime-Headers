/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKEffectPickerView : UIView <CKImpactEffectManagerAnimationDelegateProtocol, UICollectionViewDataSource, UICollectionViewDelegate> {
    _UIBackdropView * _accessibilityBackdropView;
    NSMutableDictionary * _animatedCells;
    NSMutableDictionary * _animationTimers;
    CABackdropLayer * _backdrop;
    UIView * _backgroundView;
    CKBalloonView * _balloonView;
    struct CGPoint { 
        float x; 
        float y; 
    }  _balloonViewOrigin;
    CALayer * _blueContrastLayer;
    UIButton * _closeButton;
    NSLayoutConstraint * _closeButtonBottomConstraint;
    BOOL  _controlColor;
    <CKEffectPickerViewDelegate> * _delegate;
    CKChatControllerDummyAnimator * _dummyAnimator;
    NSMutableArray * _effectDescriptiveLabels;
    NSMutableArray * _effectDotButtons;
    NSMutableArray * _effectIdentifiers;
    UIFont * _effectLabelFont;
    NSMutableArray * _effectLabels;
    NSMutableArray * _effectSendButtons;
    CKFullScreenEffectManager * _fsem;
    UIView * _hintBlackText;
    UIView * _hintContainer;
    UIView * _hintSendButton;
    BOOL  _isAnimating;
    UILabel * _mainLabel;
    NSLayoutConstraint * _mainLabelBottomConstraint;
    NSArray * _momentIdentifiers;
    UILabel * _momentTitleLabel;
    UICollectionView * _momentsCollectionView;
    BOOL  _needsSwitcherAnimation;
    UIPageControl * _pageControl;
    UIPanGestureRecognizer * _panGestureRecognizer;
    NSMutableDictionary * _pausedAnimatedCells;
    UIView * _peekContainer;
    UIView * _roundedContainerView;
    NSLayoutConstraint * _roundedContainerViewHeightConstraint;
    CABackdropLayer * _segmentedBackdrop;
    unsigned int  _selectedIndex;
    UIButton * _sendMomentButton;
    UISegmentedControl * _typeSegmentedControl;
    NSLayoutConstraint * _typeSegmentedControlBottomConstraint;
    BOOL  _usesDarkVibrancyForLayers;
}

@property (nonatomic, retain) _UIBackdropView *accessibilityBackdropView;
@property (nonatomic, retain) NSMutableDictionary *animatedCells;
@property (nonatomic, retain) NSMutableDictionary *animationTimers;
@property (nonatomic, retain) CABackdropLayer *backdrop;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, retain) CKBalloonView *balloonView;
@property (nonatomic) struct CGPoint { float x1; float x2; } balloonViewOrigin;
@property (nonatomic, retain) CALayer *blueContrastLayer;
@property (nonatomic, retain) UIButton *closeButton;
@property (nonatomic, retain) NSLayoutConstraint *closeButtonBottomConstraint;
@property (nonatomic) BOOL controlColor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKEffectPickerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKChatControllerDummyAnimator *dummyAnimator;
@property (nonatomic, retain) NSMutableArray *effectDescriptiveLabels;
@property (nonatomic, retain) NSMutableArray *effectDotButtons;
@property (nonatomic, retain) NSMutableArray *effectIdentifiers;
@property (nonatomic, retain) UIFont *effectLabelFont;
@property (nonatomic, retain) NSMutableArray *effectLabels;
@property (nonatomic, retain) NSMutableArray *effectSendButtons;
@property (nonatomic, retain) CKFullScreenEffectManager *fsem;
@property (readonly) unsigned int hash;
@property (nonatomic) UIView *hintBlackText;
@property (nonatomic, retain) UIView *hintContainer;
@property (nonatomic) UIView *hintSendButton;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic, retain) UILabel *mainLabel;
@property (nonatomic, retain) NSLayoutConstraint *mainLabelBottomConstraint;
@property (nonatomic, copy) NSArray *momentIdentifiers;
@property (nonatomic, retain) UILabel *momentTitleLabel;
@property (nonatomic, retain) UICollectionView *momentsCollectionView;
@property (nonatomic) BOOL needsSwitcherAnimation;
@property (nonatomic, retain) UIPageControl *pageControl;
@property (nonatomic, retain) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic, retain) NSMutableDictionary *pausedAnimatedCells;
@property (nonatomic, retain) UIView *peekContainer;
@property (nonatomic, retain) UIView *roundedContainerView;
@property (nonatomic, retain) NSLayoutConstraint *roundedContainerViewHeightConstraint;
@property (nonatomic, retain) CABackdropLayer *segmentedBackdrop;
@property (nonatomic) unsigned int selectedIndex;
@property (nonatomic, retain) UIButton *sendMomentButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) UISegmentedControl *typeSegmentedControl;
@property (nonatomic, retain) NSLayoutConstraint *typeSegmentedControlBottomConstraint;
@property (nonatomic) BOOL usesDarkVibrancyForLayers;

+ (float)marginBetweenPickerDotButtons;
+ (BOOL)shouldUseLargeScreenDimension;

- (void).cxx_destruct;
- (void)_accessibilityReduceTransparencyStatusDidChange;
- (void)_adjustMainLabelAndTypeSegmentedControlIfNecessary;
- (void)_animateIn;
- (void)_animateInSendButton:(id)arg1;
- (void)_animateOut;
- (void)_animateOutSendButton:(id)arg1;
- (void)_animateSelectedEffectLabelAtIndex:(unsigned int)arg1 fromPreviousIndex:(unsigned int)arg2;
- (void)_applicationDidEnterBackground;
- (void)_applicationWillEnterForeground;
- (id)_blackTextReplica;
- (id)_defaultSendAnimationContextForAnimationPreview;
- (id)_glyphLayerForButtonAnimationWithGlyphName:(id)arg1;
- (BOOL)_keyboardIsOnTopOfEffectPickerWindow;
- (void)_panGesture:(id)arg1;
- (void)_resizeBalloon;
- (void)_setBalloonText:(id)arg1 withColor:(id)arg2;
- (void)_setNeedsSwitcherAnimationIfNecessary;
- (void)_startSwitcherAnimationIfNecessary;
- (void)_stopBalloonAnimation;
- (void)_touchUpInsideCloseButton:(id)arg1;
- (void)_touchUpInsideDotButton:(id)arg1;
- (void)_touchUpInsideSendButton:(id)arg1;
- (void)_touchUpInsideSendMomentButton:(id)arg1;
- (void)_updateBalloonViewPositionAnimated:(BOOL)arg1;
- (void)_updateMomentsBackgroundColor;
- (void)_updateRoundedContainerView;
- (id)accessibilityBackdropView;
- (void)addAnimationTimerForCell:(id)arg1;
- (void)addEffect:(id)arg1 withDescriptiveText:(id)arg2 withIdentifier:(id)arg3;
- (void)animateMessages:(id)arg1;
- (id)animatedCells;
- (void)animationDidFinishWithContext:(id)arg1;
- (id)animationTimers;
- (void)animationWillBeginWithContext:(id)arg1;
- (id)backdrop;
- (id)backgroundView;
- (id)balloonView;
- (struct CGPoint { float x1; float x2; })balloonViewOrigin;
- (id)blueContrastLayer;
- (void)cancelImpactSelection;
- (id)closeButton;
- (id)closeButtonBottomConstraint;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (BOOL)controlColor;
- (void)dealloc;
- (id)delegate;
- (id)dummyAnimator;
- (id)effectDescriptiveLabels;
- (id)effectDotButtons;
- (id)effectIdentifiers;
- (id)effectLabelFont;
- (id)effectLabels;
- (id)effectSendButtons;
- (void)effectTypeDidChange:(id)arg1;
- (id)fsem;
- (void)handleTouchMoved:(struct CGPoint { float x1; float x2; })arg1;
- (void)handleTouchUp:(struct CGPoint { float x1; float x2; })arg1;
- (id)hintBlackText;
- (id)hintContainer;
- (id)hintSendButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 sendButtonFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 balloonViewOrigin:(struct CGPoint { float x1; float x2; })arg3 composition:(id)arg4 color:(BOOL)arg5;
- (void)invalidateAllAnimationTimers;
- (BOOL)isAnimating;
- (void)layoutSubviews;
- (id)mainLabel;
- (id)mainLabelBottomConstraint;
- (id)momentIdentifiers;
- (id)momentTitleLabel;
- (id)momentsCollectionView;
- (BOOL)needsSwitcherAnimation;
- (id)pageControl;
- (void)pageControlChanged:(id)arg1;
- (id)panGestureRecognizer;
- (id)pausedAnimatedCells;
- (id)peekContainer;
- (void)removeAnimationTimerForCell:(id)arg1;
- (id)roundedContainerView;
- (id)roundedContainerViewHeightConstraint;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)segmentedBackdrop;
- (unsigned int)selectedIndex;
- (int)selectedMomentIndex;
- (id)sendMomentButton;
- (void)setAccessibilityBackdropView:(id)arg1;
- (void)setAnimatedCells:(id)arg1;
- (void)setAnimationTimers:(id)arg1;
- (void)setBackdrop:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setBalloonText:(id)arg1;
- (void)setBalloonView:(id)arg1;
- (void)setBalloonViewOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (void)setBlueContrastLayer:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setCloseButtonBottomConstraint:(id)arg1;
- (void)setCloseButtonYPosition:(float)arg1;
- (void)setControlColor:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDummyAnimator:(id)arg1;
- (void)setEffectDescriptiveLabels:(id)arg1;
- (void)setEffectDotButtons:(id)arg1;
- (void)setEffectIdentifiers:(id)arg1;
- (void)setEffectLabelFont:(id)arg1;
- (void)setEffectLabels:(id)arg1;
- (void)setEffectSendButtons:(id)arg1;
- (void)setFsem:(id)arg1;
- (void)setHintBlackText:(id)arg1;
- (void)setHintContainer:(id)arg1;
- (void)setHintSendButton:(id)arg1;
- (void)setIsAnimating:(BOOL)arg1;
- (void)setMainLabel:(id)arg1;
- (void)setMainLabelBottomConstraint:(id)arg1;
- (void)setMomentIdentifiers:(id)arg1;
- (void)setMomentTitleLabel:(id)arg1;
- (void)setMomentsCollectionView:(id)arg1;
- (void)setNeedsSwitcherAnimation:(BOOL)arg1;
- (void)setPageControl:(id)arg1;
- (void)setPanGestureRecognizer:(id)arg1;
- (void)setPausedAnimatedCells:(id)arg1;
- (void)setPeekContainer:(id)arg1;
- (void)setRoundedContainerView:(id)arg1;
- (void)setRoundedContainerViewHeightConstraint:(id)arg1;
- (void)setSegmentedBackdrop:(id)arg1;
- (void)setSelectedIndex:(unsigned int)arg1;
- (void)setSendMomentButton:(id)arg1;
- (void)setTypeSegmentedControl:(id)arg1;
- (void)setTypeSegmentedControlBottomConstraint:(id)arg1;
- (void)setUsesDarkVibrancyForLayers:(BOOL)arg1;
- (void)startAnimationPreviewForIdentifier:(id)arg1;
- (id)typeSegmentedControl;
- (id)typeSegmentedControlBottomConstraint;
- (void)updateColor:(BOOL)arg1;
- (void)updateHintTransition:(float)arg1;
- (void)updateMomentTitle:(BOOL)arg1;
- (BOOL)usesDarkVibrancyForLayers;

@end