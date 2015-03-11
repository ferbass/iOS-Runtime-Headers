/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOMapServiceTraits, GEORPProblemOptInRequest, NSString;

@interface _GEORPOptInTicket : NSObject <GEOMapServiceFixNotificationTicket> {
    BOOL _canceled;
    GEORPProblemOptInRequest *_request;
    GEOMapServiceTraits *_traits;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(readonly) GEOMapServiceTraits * traits;

- (void)cancel;
- (void)dealloc;
- (id)initWithSubmissionID:(id)arg1 allowNotificationsAtPushToken:(id)arg2 allowContactBackAtEmailAddress:(id)arg3 traits:(id)arg4;
- (void)submitWithHandler:(id)arg1 networkActivity:(id)arg2;
- (id)traits;

@end