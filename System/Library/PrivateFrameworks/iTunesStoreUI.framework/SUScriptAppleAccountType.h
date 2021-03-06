/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:19 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class ACAccountType, NSString;

@interface SUScriptAppleAccountType : SUScriptObject {

	ACAccountType* _accountType;

}

@property (nonatomic,readonly) ACAccountType * nativeAccountType;              //@synthesize accountType=_accountType - In the implementation block
@property (readonly) id accessGranted; 
@property (readonly) NSString * accountTypeDescription; 
@property (readonly) NSString * identifier; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(ACAccountType *)nativeAccountType;
-(id)initWithACAccountType:(id)arg1 ;
-(id)accessGranted;
-(NSString *)accountTypeDescription;
@end

