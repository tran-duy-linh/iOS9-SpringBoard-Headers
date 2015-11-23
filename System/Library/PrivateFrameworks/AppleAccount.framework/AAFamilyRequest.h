/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:22 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class AAGrandSlamSigner;

@interface AAFamilyRequest : AARequest {

	AAGrandSlamSigner* _grandSlamSigner;

}

@property (nonatomic,readonly) BOOL isUserInitiated; 
-(id)initWithGrandSlamSigner:(id)arg1 ;
-(BOOL)isUserInitiated;
-(id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3 ;
-(id)urlRequest;
@end
