/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationProvisioningProfile : NSObject {
    NSString *_UUID;
    NSString *_allowedApplicationIdentifierEntitlement;
    BOOL _appleInternalProfile;
    BOOL _beta;
    NSDate *_expirationDate;
    BOOL _freeDeveloperProfile;
    BOOL _provisionsAllDevices;
    BOOL _provisionsThisDevice;
    NSString *_signerIdentity;
}

@property (nonatomic, readonly, copy) NSString *UUID;
@property (getter=isAppleInternalProfile, nonatomic, readonly) BOOL appleInternalProfile;
@property (getter=isBeta, nonatomic, readonly) BOOL beta;
@property (nonatomic, readonly, retain) NSDate *expirationDate;
@property (getter=isFreeDeveloperProfile, nonatomic, readonly) BOOL freeDeveloperProfile;
@property (nonatomic, readonly) BOOL provisionsAllDevices;
@property (nonatomic, readonly) BOOL provisionsThisDevice;
@property (nonatomic, readonly, copy) NSString *signerIdentity;

- (id)UUID;
- (BOOL)allowsApplicationIdentifierEntitlement:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)expirationDate;
- (id)initWithSignerIdentity:(id)arg1 profile:(id)arg2;
- (BOOL)isAppleInternalProfile;
- (BOOL)isBeta;
- (BOOL)isFreeDeveloperProfile;
- (BOOL)provisionsAllDevices;
- (BOOL)provisionsThisDevice;
- (id)signerIdentity;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end