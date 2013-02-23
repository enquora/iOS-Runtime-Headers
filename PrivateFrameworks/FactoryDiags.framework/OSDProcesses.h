/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

@class NSMutableDictionary;

@interface OSDProcesses : NSObject {
    NSMutableDictionary *_processes;
}

+ (id)getProcesses;

- (void)dealloc;
- (id)getCachedProcesses;
- (id)getProcesses;
- (id)init;
- (void)prettyPrintToLog;
- (id)refreshProcesses;
- (id)taskInfoForPID:(int)arg1;
- (id)threadInfoForPort:(unsigned int)arg1 withUsageAccumulator:(double*)arg2;

@end