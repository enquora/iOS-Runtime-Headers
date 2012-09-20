/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSURLRequest, NSObject<OS_xpc_object>;

@interface IMRemoteURLConnection : NSObject  {
    NSURLRequest *_request;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _block;

    NSObject<OS_xpc_object> *_connection;
    BOOL _loading;
    BOOL _forceCellularIfPossible;
}

@property BOOL forceCellularIfPossible;


- (void)cancel;
- (void)dealloc;
- (BOOL)_connect;
- (void)load;
- (BOOL)_disconnect;
- (void)setForceCellularIfPossible:(BOOL)arg1;
- (id)initWithURLRequest:(id)arg1 completionBlock:(id)arg2;
- (BOOL)forceCellularIfPossible;
- (void)_disconnected;

@end