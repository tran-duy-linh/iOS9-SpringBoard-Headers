/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:00 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSMutableDictionary, NSString;

@interface SSSoftwareLibraryItem : NSObject <SSXPCCoding> {

	BOOL _beta;
	NSMutableDictionary* _etags;
	BOOL _placeholder;
	BOOL _profileValidated;
	NSMutableDictionary* _propertyValues;

}

@property (assign,getter=isBeta,nonatomic) BOOL beta;                                      //@synthesize beta=_beta - In the implementation block
@property (assign,getter=isPlaceholder,nonatomic) BOOL placeholder;                        //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,getter=isProfileValidated,nonatomic) BOOL profileValidated;              //@synthesize profileValidated=_profileValidated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)dealloc;
-(void)setPlaceholder:(BOOL)arg1 ;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(id)valueForProperty:(id)arg1 ;
-(BOOL)isPlaceholder;
-(BOOL)isBeta;
-(id)ETagForAssetType:(id)arg1 ;
-(BOOL)setETag:(id)arg1 forAssetType:(id)arg2 error:(id*)arg3 ;
-(id)_initWithITunesMetadata:(id)arg1 ;
-(void)setBeta:(BOOL)arg1 ;
-(BOOL)isProfileValidated;
-(void)setProfileValidated:(BOOL)arg1 ;
@end

