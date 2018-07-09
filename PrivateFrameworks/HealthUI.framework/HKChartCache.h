/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKChartCache : NSObject {
    NSArray * _bufferedIdentifiers;
    NSMutableDictionary * _cachedResultsByIdentifier;
    <HKChartCacheDataSource> * _dataSource;
    long long  _maxRetryCount;
    NSHashTable * _observers;
    HKOutstandingFetchOperationManager * _operationManager;
    _HKChartCachePendingFetchOperationManager * _pendingFetchOperationsManager;
    NSMutableDictionary * _resultsLoadedByIdentifier;
    bool  _shouldBufferFetchOperations;
}

@property (nonatomic, retain) <HKChartCacheDataSource> *dataSource;
@property (nonatomic, readonly) id dataSourceRespectingType;
@property (nonatomic) long long maxRetryCount;
@property (nonatomic, retain) HKOutstandingFetchOperationManager *operationManager;
@property (nonatomic) bool shouldBufferFetchOperations;

- (void).cxx_destruct;
- (void)_addFetchOperationsForIdentifiers:(id)arg1;
- (void)_alertObserversDidUpdateResults;
- (void)_handleOperationCompletionWithOperation:(id)arg1 identifier:(id)arg2 results:(id)arg3 error:(id)arg4;
- (id)_operationForIdentifier:(id)arg1;
- (void)_removeFetchOperationsForIdentifiers:(id)arg1;
- (void)addObserver:(id)arg1;
- (bool)cacheIsDirtyForIdentifier:(id)arg1;
- (id)cachedResultsForIdentifier:(id)arg1;
- (id)dataSource;
- (id)dataSourceRespectingType;
- (void)fetchResultsForIdentifiers:(id)arg1;
- (id)init;
- (void)invalidateCache;
- (void)invalidateResultsForIdentifiers:(id)arg1;
- (long long)maxRetryCount;
- (id)operationManager;
- (void)removeObserver:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setMaxRetryCount:(long long)arg1;
- (void)setOperationManager:(id)arg1;
- (void)setShouldBufferFetchOperations:(bool)arg1;
- (bool)shouldBufferFetchOperations;

@end