/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSData, NSString, NSXPCConnection, NSXPCInterface;

@interface NSURLStorage_CacheClient : NSObject <NSURLStorageCacheClient> {
     /* Encoded args for previous method: v24@0:8^{__CFURLCache=^^?^i@@?@qBqqqqqqqqQ^{__CFString}^{__CFString}^{__CFString}*BB^{sqlite3}^{sqlite3}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}^{CoreLockable}^{CoreLockable}^{CoreLockable}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}{unordered_map<int, __CFURLCacheNode *, __CFURLCache__::HashFunc, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, __CFURLCacheNode *> > >={__hash_table<std::__1::__hash_value_type<int, __CFURLCacheNode *>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, __CFURLCacheNode *>, __CFURLCache__::HashFunc, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, __CFURLCacheNode *>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, __CFURLCacheNode *> > >={unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> > >={__compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> > >=^^{__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> > >={__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *>=^{__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *>}}}{__compressed_pair<unsigned long, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, __CFURLCacheNode *>, __CFURLCache__::HashFunc, true> >=Q}{__compressed_pair<float, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, __CFURLCacheNode *>, std::__1::equal_to<int>, true> >=f}}}{deque<__CFURLCacheNode *, std::__1::allocator<__CFURLCacheNode *> >={__split_buffer<__CFURLCacheNode **, std::__1::allocator<__CFURLCacheNode **> >=^^^{__CFURLCacheNode}^^^{__CFURLCacheNode}^^^{__CFURLCacheNode}{__compressed_pair<__CFURLCacheNode ***, std::__1::allocator<__CFURLCacheNode **> >=^^^{__CFURLCacheNode}}}Q{__compressed_pair<unsigned long, std::__1::allocator<__CFURLCacheNode *> >=Q}}^{__CFRunLoopSource}^{_opaque_pthread_t}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}^{__CFArray}^{__CFArray}BB@@B@^{_CFURLCache}BBqqB^{__asl_object_s}SqBBBBqBBq@^{__CFSet}^{__CFArray}q@{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}^{__CFDictionary}B{bitset<32768>=[512Q]}{_opaque_pthread_mutex_t=q[56c]}B*@}16 */
     /* Encoded args for previous method: @24@0:8^{__CFURLCache=^^?^i@@?@qBqqqqqqqqQ^{__CFString}^{__CFString}^{__CFString}*BB^{sqlite3}^{sqlite3}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}^{CoreLockable}^{CoreLockable}^{CoreLockable}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}^{sqlite3_stmt}{unordered_map<int, __CFURLCacheNode *, __CFURLCache__::HashFunc, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, __CFURLCacheNode *> > >={__hash_table<std::__1::__hash_value_type<int, __CFURLCacheNode *>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, __CFURLCacheNode *>, __CFURLCache__::HashFunc, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, __CFURLCacheNode *>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, __CFURLCacheNode *> > >={unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> > >={__compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> > >=^^{__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> > >={__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *>=^{__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *>}}}{__compressed_pair<unsigned long, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, __CFURLCacheNode *>, __CFURLCache__::HashFunc, true> >=Q}{__compressed_pair<float, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, __CFURLCacheNode *>, std::__1::equal_to<int>, true> >=f}}}{deque<__CFURLCacheNode *, std::__1::allocator<__CFURLCacheNode *> >={__split_buffer<__CFURLCacheNode **, std::__1::allocator<__CFURLCacheNode **> >=^^^{__CFURLCacheNode}^^^{__CFURLCacheNode}^^^{__CFURLCacheNode}{__compressed_pair<__CFURLCacheNode ***, std::__1::allocator<__CFURLCacheNode **> >=^^^{__CFURLCacheNode}}}Q{__compressed_pair<unsigned long, std::__1::allocator<__CFURLCacheNode *> >=Q}}^{__CFRunLoopSource}^{_opaque_pthread_t}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}^{__CFArray}^{__CFArray}BB@@B@^{_CFURLCache}BBqqB^{__asl_object_s}SqBBBBqBBq@^{__CFSet}^{__CFArray}q@{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_mutex_t=q[56c]}^{__CFDictionary}B{bitset<32768>=[512Q]}{_opaque_pthread_mutex_t=q[56c]}B*@}16 */
    struct __CFURLCache { int (**x1)(); int *x2; id x3; id x4; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x5; id x6; long long x7; boolx8; long long x9; long long x10; long long x11; long long x12; long long x13; long long x14; long long x15; long long x16; unsigned long long x17; struct __CFString {} *x18; struct __CFString {} *x19; struct __CFString {} *x20; char *x21; boolx22; boolx23; struct sqlite3 {} *x24; struct sqlite3 {} *x25; struct _opaque_pthread_mutex_t { long long x_26_1_1; BOOL x_26_1_2[56]; } x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; struct CoreLockable {} *x28; struct CoreLockable {} *x29; struct CoreLockable {} *x30; struct sqlite3_stmt {} *x31; struct sqlite3_stmt {} *x32; struct sqlite3_stmt {} *x33; struct sqlite3_stmt {} *x34; struct sqlite3_stmt {} *x35; struct sqlite3_stmt {} *x36; struct sqlite3_stmt {} *x37; struct sqlite3_stmt {} *x38; struct sqlite3_stmt {} *x39; struct sqlite3_stmt {} *x40; struct sqlite3_stmt {} *x41; struct sqlite3_stmt {} *x42; struct sqlite3_stmt {} *x43; struct sqlite3_stmt {} *x44; struct unordered_map<int, __CFURLCacheNode *, __CFURLCache__::HashFunc, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, __CFURLCacheNode *> > > { struct __hash_table<std::__1::__hash_value_type<int, __CFURLCacheNode *>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, __CFURLCacheNode *>, __CFURLCache__::HashFunc, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, __CFURLCacheNode *>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, __CFURLCacheNode *> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> { struct __hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, __CFURLCacheNode *>, __CFURLCache__::HashFunc, true> > { unsigned long long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, __CFURLCacheNode *>, std::__1::equal_to<int>, true> > { float x_4_3_1; } x_1_2_4; } x_45_1_1; } x45; struct deque<__CFURLCacheNode *, std::__1::allocator<__CFURLCacheNode *> > { struct __split_buffer<__CFURLCacheNode **, std::__1::allocator<__CFURLCacheNode **> > { struct __CFURLCacheNode {} ***x_1_2_1; struct __CFURLCacheNode {} ***x_1_2_2; struct __CFURLCacheNode {} ***x_1_2_3; struct __compressed_pair<__CFURLCacheNode ***, std::__1::allocator<__CFURLCacheNode **> > { struct __CFURLCacheNode {} ***x_4_3_1; } x_1_2_4; } x_46_1_1; unsigned long long x_46_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<__CFURLCacheNode *> > { unsigned long long x_3_2_1; } x_46_1_3; } x46; struct __CFRunLoopSource {} *x47; struct _opaque_pthread_t {} *x48; struct _opaque_pthread_mutex_t { long long x_49_1_1; BOOL x_49_1_2[56]; } x49; struct _opaque_pthread_mutex_t { long long x_50_1_1; BOOL x_50_1_2[56]; } x50; struct _opaque_pthread_mutex_t { long long x_51_1_1; BOOL x_51_1_2[56]; } x51; struct _opaque_pthread_mutex_t { long long x_52_1_1; BOOL x_52_1_2[56]; } x52; struct _opaque_pthread_mutex_t { long long x_53_1_1; BOOL x_53_1_2[56]; } x53; struct __CFArray {} *x54; struct __CFArray {} *x55; boolx56; boolx57; id x58; id x59; boolx60; id x61; struct _CFURLCache {} *x62; boolx63; boolx64; long long x65; long long x66; boolx67; struct __asl_object_s {} *x68; unsigned short x69; long long x70; boolx71; boolx72; boolx73; boolx74; long long x75; boolx76; boolx77; long long x78; id x79; struct __CFSet {} *x80; struct __CFArray {} *x81; long long x82; id x83; struct _opaque_pthread_mutex_t { long long x_84_1_1; BOOL x_84_1_2[56]; } x84; struct _opaque_pthread_mutex_t { long long x_85_1_1; BOOL x_85_1_2[56]; } x85; struct __CFDictionary {} *x86; boolx87; struct bitset<32768> { unsigned long long x_88_1_1[512]; } x88; struct _opaque_pthread_mutex_t { long long x_89_1_1; BOOL x_89_1_2[56]; } x89; boolx90; char *x91; id x92; } *_cfCache;
    NSXPCInterface *_netStoreInterface;
    NSXPCConnection *_networkStorageConnection;
    NSString *_path;
    NSData *_sandboxExtensionToken;
    long long _storageSize;
    NSString *_taskManagerIdentifier;
    bool_networkStorageConnectionInterrupted;
}

@property bool networkStorageConnectionInterrupted;

- (void)_associateCFURLCacheInstance:(struct __CFURLCache { int (**x1)(); int *x2; id x3; id x4; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x5; id x6; long long x7; boolx8; long long x9; long long x10; long long x11; long long x12; long long x13; long long x14; long long x15; long long x16; unsigned long long x17; struct __CFString {} *x18; struct __CFString {} *x19; struct __CFString {} *x20; char *x21; boolx22; boolx23; struct sqlite3 {} *x24; struct sqlite3 {} *x25; struct _opaque_pthread_mutex_t { long long x_26_1_1; BOOL x_26_1_2[56]; } x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; struct CoreLockable {} *x28; struct CoreLockable {} *x29; struct CoreLockable {} *x30; struct sqlite3_stmt {} *x31; struct sqlite3_stmt {} *x32; struct sqlite3_stmt {} *x33; struct sqlite3_stmt {} *x34; struct sqlite3_stmt {} *x35; struct sqlite3_stmt {} *x36; struct sqlite3_stmt {} *x37; struct sqlite3_stmt {} *x38; struct sqlite3_stmt {} *x39; struct sqlite3_stmt {} *x40; struct sqlite3_stmt {} *x41; struct sqlite3_stmt {} *x42; struct sqlite3_stmt {} *x43; struct sqlite3_stmt {} *x44; struct unordered_map<int, __CFURLCacheNode *, __CFURLCache__::HashFunc, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, __CFURLCacheNode *> > > { struct __hash_table<std::__1::__hash_value_type<int, __CFURLCacheNode *>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, __CFURLCacheNode *>, __CFURLCache__::HashFunc, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, __CFURLCacheNode *>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, __CFURLCacheNode *> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> { struct __hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, __CFURLCacheNode *>, __CFURLCache__::HashFunc, true> > { unsigned long long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, __CFURLCacheNode *>, std::__1::equal_to<int>, true> > { float x_4_3_1; } x_1_2_4; } x_45_1_1; } x45; struct deque<__CFURLCacheNode *, std::__1::allocator<__CFURLCacheNode *> > { struct __split_buffer<__CFURLCacheNode **, std::__1::allocator<__CFURLCacheNode **> > { struct __CFURLCacheNode {} ***x_1_2_1; struct __CFURLCacheNode {} ***x_1_2_2; struct __CFURLCacheNode {} ***x_1_2_3; struct __compressed_pair<__CFURLCacheNode ***, std::__1::allocator<__CFURLCacheNode **> > { struct __CFURLCacheNode {} ***x_4_3_1; } x_1_2_4; } x_46_1_1; unsigned long long x_46_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<__CFURLCacheNode *> > { unsigned long long x_3_2_1; } x_46_1_3; } x46; struct __CFRunLoopSource {} *x47; struct _opaque_pthread_t {} *x48; struct _opaque_pthread_mutex_t { long long x_49_1_1; BOOL x_49_1_2[56]; } x49; struct _opaque_pthread_mutex_t { long long x_50_1_1; BOOL x_50_1_2[56]; } x50; struct _opaque_pthread_mutex_t { long long x_51_1_1; BOOL x_51_1_2[56]; } x51; struct _opaque_pthread_mutex_t { long long x_52_1_1; BOOL x_52_1_2[56]; } x52; struct _opaque_pthread_mutex_t { long long x_53_1_1; BOOL x_53_1_2[56]; } x53; struct __CFArray {} *x54; struct __CFArray {} *x55; boolx56; boolx57; id x58; id x59; boolx60; id x61; struct _CFURLCache {} *x62; boolx63; boolx64; long long x65; long long x66; boolx67; struct __asl_object_s {} *x68; unsigned short x69; long long x70; boolx71; boolx72; boolx73; boolx74; long long x75; boolx76; boolx77; long long x78; id x79; struct __CFSet {} *x80; struct __CFArray {} *x81; long long x82; id x83; struct _opaque_pthread_mutex_t { long long x_84_1_1; BOOL x_84_1_2[56]; } x84; struct _opaque_pthread_mutex_t { long long x_85_1_1; BOOL x_85_1_2[56]; } x85; struct __CFDictionary {} *x86; boolx87; struct bitset<32768> { unsigned long long x_88_1_1[512]; } x88; struct _opaque_pthread_mutex_t { long long x_89_1_1; BOOL x_89_1_2[56]; } x89; boolx90; char *x91; id x92; }*)arg1;
- (void)_disassociateCFURLCacheInstance;
- (void)_reconnectWithStorageServer;
- (void)addCachedResponse:(id)arg1 key:(id)arg2;
- (void)addCachedResponseWithDictionary:(id)arg1 key:(id)arg2;
- (void)cachedResponseForKey:(id)arg1 handler:(id)arg2;
- (void)copyAllPartitionNamesWithCompletionHandler:(id)arg1;
- (void)copyHostNamesForOptionalPartition:(id)arg1 handler:(id)arg2;
- (bool)createStorageTaskManagerForPath:(id)arg1 maxSize:(long long)arg2 extension:(id)arg3 withIdentifier:(id)arg4;
- (long long)currentDiskUsage;
- (void)dealloc;
- (void)deleteAllHostNames:(id)arg1 forOptionalPartition:(id)arg2;
- (void)deleteAllResponses;
- (void)deleteResponseForRequestWithKey:(id)arg1 withCompletionHandler:(id)arg2;
- (void)deleteResponsesSinceDate:(id)arg1;
- (bool)ensureNetworkStorageDaemonConnection;
- (id)getPath;
- (id)initWithCache:(struct __CFURLCache { int (**x1)(); int *x2; id x3; id x4; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x5; id x6; long long x7; boolx8; long long x9; long long x10; long long x11; long long x12; long long x13; long long x14; long long x15; long long x16; unsigned long long x17; struct __CFString {} *x18; struct __CFString {} *x19; struct __CFString {} *x20; char *x21; boolx22; boolx23; struct sqlite3 {} *x24; struct sqlite3 {} *x25; struct _opaque_pthread_mutex_t { long long x_26_1_1; BOOL x_26_1_2[56]; } x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; struct CoreLockable {} *x28; struct CoreLockable {} *x29; struct CoreLockable {} *x30; struct sqlite3_stmt {} *x31; struct sqlite3_stmt {} *x32; struct sqlite3_stmt {} *x33; struct sqlite3_stmt {} *x34; struct sqlite3_stmt {} *x35; struct sqlite3_stmt {} *x36; struct sqlite3_stmt {} *x37; struct sqlite3_stmt {} *x38; struct sqlite3_stmt {} *x39; struct sqlite3_stmt {} *x40; struct sqlite3_stmt {} *x41; struct sqlite3_stmt {} *x42; struct sqlite3_stmt {} *x43; struct sqlite3_stmt {} *x44; struct unordered_map<int, __CFURLCacheNode *, __CFURLCache__::HashFunc, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, __CFURLCacheNode *> > > { struct __hash_table<std::__1::__hash_value_type<int, __CFURLCacheNode *>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, __CFURLCacheNode *>, __CFURLCache__::HashFunc, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, __CFURLCacheNode *>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, __CFURLCacheNode *> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> *> { struct __hash_node<std::__1::__hash_value_type<int, __CFURLCacheNode *>, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, __CFURLCacheNode *>, __CFURLCache__::HashFunc, true> > { unsigned long long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, __CFURLCacheNode *>, std::__1::equal_to<int>, true> > { float x_4_3_1; } x_1_2_4; } x_45_1_1; } x45; struct deque<__CFURLCacheNode *, std::__1::allocator<__CFURLCacheNode *> > { struct __split_buffer<__CFURLCacheNode **, std::__1::allocator<__CFURLCacheNode **> > { struct __CFURLCacheNode {} ***x_1_2_1; struct __CFURLCacheNode {} ***x_1_2_2; struct __CFURLCacheNode {} ***x_1_2_3; struct __compressed_pair<__CFURLCacheNode ***, std::__1::allocator<__CFURLCacheNode **> > { struct __CFURLCacheNode {} ***x_4_3_1; } x_1_2_4; } x_46_1_1; unsigned long long x_46_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<__CFURLCacheNode *> > { unsigned long long x_3_2_1; } x_46_1_3; } x46; struct __CFRunLoopSource {} *x47; struct _opaque_pthread_t {} *x48; struct _opaque_pthread_mutex_t { long long x_49_1_1; BOOL x_49_1_2[56]; } x49; struct _opaque_pthread_mutex_t { long long x_50_1_1; BOOL x_50_1_2[56]; } x50; struct _opaque_pthread_mutex_t { long long x_51_1_1; BOOL x_51_1_2[56]; } x51; struct _opaque_pthread_mutex_t { long long x_52_1_1; BOOL x_52_1_2[56]; } x52; struct _opaque_pthread_mutex_t { long long x_53_1_1; BOOL x_53_1_2[56]; } x53; struct __CFArray {} *x54; struct __CFArray {} *x55; boolx56; boolx57; id x58; id x59; boolx60; id x61; struct _CFURLCache {} *x62; boolx63; boolx64; long long x65; long long x66; boolx67; struct __asl_object_s {} *x68; unsigned short x69; long long x70; boolx71; boolx72; boolx73; boolx74; long long x75; boolx76; boolx77; long long x78; id x79; struct __CFSet {} *x80; struct __CFArray {} *x81; long long x82; id x83; struct _opaque_pthread_mutex_t { long long x_84_1_1; BOOL x_84_1_2[56]; } x84; struct _opaque_pthread_mutex_t { long long x_85_1_1; BOOL x_85_1_2[56]; } x85; struct __CFDictionary {} *x86; boolx87; struct bitset<32768> { unsigned long long x_88_1_1[512]; } x88; struct _opaque_pthread_mutex_t { long long x_89_1_1; BOOL x_89_1_2[56]; } x89; boolx90; char *x91; id x92; }*)arg1;
- (bool)networkStorageConnectionInterrupted;
- (void)notifyCachedURLResponseBecameFileBacked:(id)arg1 filePath:(id)arg2 forUUID:(id)arg3;
- (void)setMaxSize:(long long)arg1;
- (void)setMinSizeForVMCachedResource:(long long)arg1;
- (void)setNetworkStorageConnectionInterrupted:(bool)arg1;

@end