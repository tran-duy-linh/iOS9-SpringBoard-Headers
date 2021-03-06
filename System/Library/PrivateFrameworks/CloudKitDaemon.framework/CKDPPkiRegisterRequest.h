/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:47 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKDPPublicKey;

@interface CKDPPkiRegisterRequest : PBRequest <NSCopying> {

	NSString* _currentKeyHash;
	CKDPPublicKey* _publicKey;

}

@property (nonatomic,readonly) BOOL hasCurrentKeyHash; 
@property (nonatomic,retain) NSString * currentKeyHash;              //@synthesize currentKeyHash=_currentKeyHash - In the implementation block
@property (nonatomic,readonly) BOOL hasPublicKey; 
@property (nonatomic,retain) CKDPPublicKey * publicKey;              //@synthesize publicKey=_publicKey - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setPublicKey:(CKDPPublicKey *)arg1 ;
-(BOOL)hasPublicKey;
-(CKDPPublicKey *)publicKey;
-(void)setCurrentKeyHash:(NSString *)arg1 ;
-(BOOL)hasCurrentKeyHash;
-(NSString *)currentKeyHash;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

