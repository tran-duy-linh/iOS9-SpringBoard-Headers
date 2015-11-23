/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:03 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface OCXContentType : NSObject {

	NSString* mContentType;
	NSString* mPath;
	NSString* mExtension;

}

@property (nonatomic,readonly) NSString * contentType; 
@property (nonatomic,readonly) NSString * path; 
-(void)dealloc;
-(NSString *)path;
-(NSString *)contentType;
-(id)initWithContentType:(id)arg1 path:(id)arg2 ;
-(BOOL)isOverride;
-(void)writeToStreamWriter:(id)arg1 ;
-(id)initWithContentType:(id)arg1 extension:(id)arg2 ;
@end
