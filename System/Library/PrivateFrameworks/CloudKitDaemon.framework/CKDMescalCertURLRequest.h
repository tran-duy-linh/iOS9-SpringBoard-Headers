/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:46 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSData;

@interface CKDMescalCertURLRequest : CKDURLRequest {

	NSData* _mescalCert;

}

@property (nonatomic,retain) NSData * mescalCert;              //@synthesize mescalCert=_mescalCert - In the implementation block
-(id)url;
-(BOOL)requiresDeviceID;
-(BOOL)requiresSignature;
-(BOOL)allowsAnonymousAccount;
-(long long)serverType;
-(long long)partitionType;
-(BOOL)hasRequestBody;
-(NSData *)mescalCert;
-(id)httpMethod;
-(void)requestDidParsePlaintextObject:(id)arg1 ;
-(void)setMescalCert:(NSData *)arg1 ;
@end

