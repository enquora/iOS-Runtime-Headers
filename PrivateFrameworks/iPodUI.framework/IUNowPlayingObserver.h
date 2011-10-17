/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class MPSystemNowPlayingController, MPAVController;

@interface IUNowPlayingObserver : NSObject  {
    MPSystemNowPlayingController *_nowPlayingController;
    MPAVController *_player;
}


- (id)initWithPlayer:(id)arg1;
- (void)_rateDidChangeNotification:(id)arg1;
- (void)_playbackStateChanged:(id)arg1;
- (void)_timeDidJumpNotification:(id)arg1;
- (id)_currentItem;
- (void)_repeatTypeChanged:(id)arg1;
- (void)_itemChanged:(id)arg1;
- (void)_contentsChanged:(id)arg1;
- (id)init;
- (void)dealloc;

@end