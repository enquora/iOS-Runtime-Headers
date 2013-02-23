/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableArray, SUMaskProvider, SUMaskedView, SUOverlayTransition, SUScriptFunction, SUScriptWindowContext, SUTouchCaptureView, UIViewController;

@interface SUOverlayViewController : SUViewController {
    struct CGSize { 
        float width; 
        float height; 
    NSMutableArray *_actionQueue;
    UIViewController *_activeViewController;
    UIViewController *_backViewController;
    BOOL _canSwipeToDismiss;
    UIViewController *_frontViewController;
    SUOverlayTransition *_lastFlipTransition;
    } _overlaySize;
    SUOverlayTransition *_presentationTransition;
    SUScriptWindowContext *_scriptWindowContext;
    float _shadowOpacity;
    float _shadowRadius;
    SUScriptFunction *_shouldDismissFunction;
    int _state;
    SUMaskedView *_subviewContainerView;
    SUTouchCaptureView *_touchCaptureView;
}

@property(getter=isActiveOverlay,readonly) BOOL activeOverlay;
@property(readonly) UIViewController * activeViewController;
@property(retain) UIViewController * backViewController;
@property BOOL canSwipeToDismiss;
@property(retain) UIViewController * frontViewController;
@property(retain) SUMaskProvider * maskProvider;
@property(getter=isOnFront,readonly) BOOL onFront;
@property struct CGSize { float x1; float x2; } overlaySize;
@property(retain) SUOverlayTransition * presentationTransition;
@property float shadowOpacity;
@property float shadowRadius;
@property(retain) SUScriptFunction * shouldDismissFunction;

+ (struct CGSize { float x1; float x2; })defaultOverlaySize;

- (id)_activeViewController;
- (void)_applyDisplayProperties;
- (void)_applyOverlayConfiguration:(id)arg1;
- (void)_enqueueAction:(id)arg1;
- (void)_finishFlipAction:(id)arg1;
- (id)_flipTransition;
- (BOOL)_isControllerLoaded:(id)arg1;
- (void)_overlayActionDidFinish;
- (void)_overlayAnimationDidFinish;
- (void)_performFlipAction:(id)arg1;
- (void)_performFlipTransitionAction:(id)arg1;
- (void)_performNextAction;
- (void)_setActiveViewController:(id)arg1 updateInterface:(BOOL)arg2;
- (void)_setShadowVisible:(BOOL)arg1;
- (id)_subviewContainerView;
- (void)_tearDownTouchCaptureView;
- (void)_touchCaptureAction:(id)arg1;
- (id)activeViewController;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)backViewController;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canSwipeToDismiss;
- (id)copyArchivableContext;
- (void)dealloc;
- (void)flipWithTransition:(id)arg1;
- (id)frontViewController;
- (void)imagePageViewTapped:(id)arg1;
- (id)init;
- (id)initWithOverlayConfiguration:(id)arg1;
- (void)invalidateForMemoryPurge;
- (BOOL)isActiveOverlay;
- (BOOL)isOnFront;
- (void)loadView;
- (id)maskProvider;
- (struct CGSize { float x1; float x2; })overlaySize;
- (id)presentationTransition;
- (void)restoreArchivableContext:(id)arg1;
- (id)scriptWindowContext;
- (void)setBackViewController:(id)arg1;
- (void)setCanSwipeToDismiss:(BOOL)arg1;
- (void)setFrontViewController:(id)arg1;
- (void)setMaskProvider:(id)arg1;
- (void)setOverlaySize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPresentationTransition:(id)arg1;
- (void)setScriptWindowContext:(id)arg1;
- (void)setShadowOpacity:(float)arg1;
- (void)setShadowRadius:(float)arg1;
- (void)setShouldDismissFunction:(id)arg1;
- (float)shadowOpacity;
- (float)shadowRadius;
- (id)shouldDismissFunction;
- (BOOL)shouldExcludeFromNavigationHistory;
- (void)storePage:(id)arg1 finishedWithSuccess:(BOOL)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDismissWithTransition:(id)arg1;

@end