/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSData, NSError, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSThread, NSURL, NSURLConnection, NSURLRequest, NSURLResponse;

@interface QLPreviewParts : NSObject {
    struct { 
        int version; 
        int (*retain)(); 
        int (*release)(); 
        int (*copyDescription)(); 
        int (*equal)(); 
    NSURLConnection *_connection;
    void *_convertFunction;
    NSData *_data;
    id _delegate;
    NSString *_fileName;
    int _pageCount;
    float _pageHeight;
    float _pageWidth;
    NSString *_password;
    BOOL _progressive;
    NSURL *_url;
    NSString *_uti;
    BOOL cancelled;
    BOOL computed;
    NSThread *delegateCallbackThread;
    NSMutableDictionary *encodingsForURLs;
    BOOL htmlErrorDisabled;
    NSError *mainError;
    NSMutableSet *outstandingURLs;
    NSURLResponse *previewResponse;
    NSURL *previewURL;
    NSMutableSet *registeredURLs;
    const void *representedObject;
    } representedObjectCallbacks;
    long representedObjectProtection;
}

@property(readonly) NSSet * attachmentURLs;
@property(getter=isCancelled,readonly) BOOL cancelled;
@property(getter=isComputed,readonly) BOOL computed;
@property(retain) NSURLConnection * connection;
@property(retain) NSData * data;
@property id delegate;
@property(retain) NSString * fileName;
@property BOOL htmlErrorDisabled;
@property(readonly) int pageCount;
@property(readonly) float pageHeight;
@property(readonly) float pageWidth;
@property(retain) NSString * password;
@property(readonly) NSURLRequest * previewRequest;
@property(readonly) NSURLResponse * previewResponse;
@property(readonly) NSURL * previewURL;
@property BOOL progressive;
@property(retain) NSURL * url;
@property(retain) NSString * uti;

+ (BOOL)isSafeRequest:(id)arg1;
+ (BOOL)isSafeURL:(id)arg1;
+ (void)registerPreview:(id)arg1;
+ (id)relativeStringForSafeURL:(id)arg1;
+ (id)safeURLScheme;
+ (void)unregisterPreview:(id)arg1;

- (void)_discardRepresentedObjectSafely;
- (void)_protectRepresentedObjectSafely;
- (void)_registerURL:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3;
- (id)_requestForURL:(id)arg1;
- (id)_voidRequest;
- (void)appendData:(id)arg1 forURL:(id)arg2 lastChunk:(BOOL)arg3;
- (id)attachmentURLs;
- (void)cancel;
- (unsigned long)cfEncodingForAttachmentURL:(id)arg1;
- (void)computePreview;
- (void)computePreviewInThread;
- (id)connection;
- (id)data;
- (void)dealloc;
- (id)delegate;
- (const void*)documentObject;
- (id)fileName;
- (BOOL)htmlErrorDisabled;
- (BOOL)isCancelled;
- (BOOL)isComputed;
- (id)mimeTypeForAttachmentURL:(id)arg1;
- (id)newAttachmentURLWithID:(id)arg1 properties:(id)arg2;
- (id)newSafeAttachmentURLWithID:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3;
- (int)pageCount;
- (float)pageHeight;
- (float)pageWidth;
- (id)password;
- (id)previewRequest;
- (id)previewResponse;
- (id)previewURL;
- (BOOL)progressive;
- (id)safeRequestForRequest:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocumentObject:(const void*)arg1 callbacks:(const struct { int x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); }*)arg2;
- (void)setError:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setHtmlErrorDisabled:(BOOL)arg1;
- (void)setPassword:(id)arg1;
- (void)setProgressive:(BOOL)arg1;
- (void)setUrl:(id)arg1;
- (void)setUti:(id)arg1;
- (void)startComputingPreview;
- (void)startDataRepresentationWithContentType:(id)arg1 properties:(id)arg2;
- (id)url;
- (id)uti;

@end