/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSSetVolumeMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int sessionIdentifier : 1; 
        unsigned int volume : 1; 
    } _has;
    int _sessionIdentifier;
    float _volume;
}

@property BOOL hasSessionIdentifier;
@property BOOL hasVolume;
@property int sessionIdentifier;
@property float volume;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasSessionIdentifier;
- (BOOL)hasVolume;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)sessionIdentifier;
- (void)setHasSessionIdentifier:(BOOL)arg1;
- (void)setHasVolume:(BOOL)arg1;
- (void)setSessionIdentifier:(int)arg1;
- (void)setVolume:(float)arg1;
- (float)volume;
- (void)writeTo:(id)arg1;

@end