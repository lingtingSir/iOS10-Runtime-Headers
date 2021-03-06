/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSMetadataExtractor : NSObject {
    JSContext * _context;
    WKWebProcessPlugInFrame * _webProcessPlugInFrame;
    WKWebProcessPlugInScriptWorld * _webProcessPlugInScriptWorld;
}

@property (nonatomic, readonly) JSContext *context;
@property (nonatomic, readonly) WKWebProcessPlugInFrame *webProcessPlugInFrame;

+ (id)metadataExtractorScriptSource;

- (void).cxx_destruct;
- (id)_resultForInvokingFunctionWithName:(id)arg1;
- (id)appleTouchIconURLs;
- (id)context;
- (void)dealloc;
- (id)faviconURLs;
- (id)initWithWebProcessPlugInFrame:(id)arg1;
- (id)initWithWebProcessPlugInFrame:(id)arg1 useNormalWorld:(bool)arg2;
- (id)makeContext;
- (id)webProcessPlugInFrame;

@end
