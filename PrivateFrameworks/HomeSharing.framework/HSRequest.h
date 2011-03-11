/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class NSDictionary, NSString, NSData;

@interface HSRequest : NSObject  {
    NSString *_action;
    NSData *_bodyData;
    NSDictionary *_headers;
    NSDictionary *_arguments;
    struct __CFHTTPMessage { } *_message;
    int _method;
}

@property int method;
@property(copy) NSData * bodyData;
@property(readonly) NSString * action;

+ (id)request;

- (id)bodyData;
- (int)method;
- (id)action;
- (void)dealloc;
- (void)setValue:(id)arg1 forHeaderField:(id)arg2;
- (void)setMethod:(int)arg1;
- (void)setValue:(id)arg1 forArgument:(id)arg2;
- (BOOL)acceptsGzipEncoding;
- (id)canonicalResponseForResponse:(id)arg1;
- (id)initWithAction:(id)arg1;
- (id)requestURLForBaseURL:(id)arg1 sessionID:(unsigned int)arg2;
- (id)_defaultHeaderFields;
- (id)_methodStringForMethod:(int)arg1;
- (void)setBodyData:(id)arg1;
- (struct __CFHTTPMessage { }*)CFHTTPMessageForBaseURL:(id)arg1 sessionID:(unsigned int)arg2;
- (id)requestURLForConnection:(id)arg1;

@end