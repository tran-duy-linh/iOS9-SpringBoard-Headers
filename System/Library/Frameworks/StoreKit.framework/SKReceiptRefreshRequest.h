/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:49 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKit/SKRequest.h>

@class NSDictionary;

@interface SKReceiptRefreshRequest : SKRequest {

	NSDictionary* _properties;

}

@property (nonatomic,readonly) NSDictionary * receiptProperties;              //@synthesize properties=_properties - In the implementation block
-(void)_handleReply:(id)arg1 ;
-(void)_sendXPCMessage;
-(BOOL)_wantsExpired;
-(BOOL)_wantsRevoked;
-(BOOL)_wantsVPP;
-(id)initWithReceiptProperties:(id)arg1 ;
-(NSDictionary *)receiptProperties;
-(void)dealloc;
@end
