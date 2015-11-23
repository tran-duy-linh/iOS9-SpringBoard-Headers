/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface HMDApplicationVendorIDStoreValue : NSObject <NSSecureCoding> {

	BOOL _spiClient;
	NSData* _vendorIdSha1;
	NSString* _applicationBundleId;
	NSString* _companionAppBundleId;

}

@property (nonatomic,readonly) NSData * vendorIdSha1;                        //@synthesize vendorIdSha1=_vendorIdSha1 - In the implementation block
@property (nonatomic,readonly) NSString * applicationBundleId;               //@synthesize applicationBundleId=_applicationBundleId - In the implementation block
@property (nonatomic,readonly) NSString * companionAppBundleId;              //@synthesize companionAppBundleId=_companionAppBundleId - In the implementation block
@property (nonatomic,readonly) BOOL spiClient;                               //@synthesize spiClient=_spiClient - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSData *)vendorIdSha1;
-(NSString *)applicationBundleId;
-(NSString *)companionAppBundleId;
-(BOOL)spiClient;
-(id)initWithVendorIDSha1:(id)arg1 applicationBundleId:(id)arg2 companionAppBundleId:(id)arg3 spiClient:(BOOL)arg4 ;
@end
