/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPUserCredentials : PBCodable <NSCopying> {
    NSString * _icloudUserMapsAuthToken;
    NSString * _icloudUserPersonId;
}

@property (nonatomic, readonly) bool hasIcloudUserMapsAuthToken;
@property (nonatomic, readonly) bool hasIcloudUserPersonId;
@property (nonatomic, retain) NSString *icloudUserMapsAuthToken;
@property (nonatomic, retain) NSString *icloudUserPersonId;

+ (id)_credentialsForPrimaryICloudAccount;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIcloudUserMapsAuthToken;
- (bool)hasIcloudUserPersonId;
- (unsigned long long)hash;
- (id)icloudUserMapsAuthToken;
- (id)icloudUserPersonId;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIcloudUserMapsAuthToken:(id)arg1;
- (void)setIcloudUserPersonId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
