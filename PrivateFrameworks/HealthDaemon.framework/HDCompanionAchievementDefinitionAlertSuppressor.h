/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCompanionAchievementDefinitionAlertSuppressor : NSObject <HDAchievementDefinitionAlertSuppressor, HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver> {
    bool  _activityGoalIsSet;
    HDProfile * _profile;
    <HDAchievementDefinitionAlertSuppressorDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDAchievementDefinitionAlertSuppressorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_checkForMoveGoalWithDatabase:(id)arg1;
- (bool)alertsAreSuppressed;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (id)delegate;
- (id)initWithProfile:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
