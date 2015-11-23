/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:22 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppleAccount/AppleAccount-Structs.h>
@class NSString;

@interface AADeviceProvisioningSession : NSObject {

	NSString* _dsid;
	unsigned long long _dsidNumber;
	OpaqueCFHTTPCookieStorageRef _cookieStorageRef;

}
-(id)init;
-(void)addProvisioningInfoToAARequest:(id)arg1 ;
-(void)setCookieStorageRef:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(void)addProvisioningInfoToAARequest:(id)arg1 withFallback:(BOOL)arg2 ;
-(id)deviceProvisioningInfo;
-(void)addProvisioningInfoToURLRequest:(id)arg1 sendEmptyValues:(BOOL)arg2 ;
-(int)synchronizeProvisioningWithData:(id)arg1 ;
-(int)eraseProvisioning;
-(int)provisionDeviceWithData:(id)arg1 ;
-(id)initWithDSID:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
@end
