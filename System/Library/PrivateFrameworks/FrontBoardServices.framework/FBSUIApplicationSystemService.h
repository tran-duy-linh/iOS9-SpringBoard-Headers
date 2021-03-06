/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:11 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBSUIApplicationSystemServiceDelegate;
@class NSObject, NSString;

@interface FBSUIApplicationSystemService : NSObject {

	NSObject*<OS_dispatch_queue> _delegateQueue;
	id<FBSUIApplicationSystemServiceDelegate> _delegate;

}

@property (assign,nonatomic) id<FBSUIApplicationSystemServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long badgeNumber; 
@property (nonatomic,copy) NSString * badgeString; 
@property (nonatomic,readonly) double backgroundTimeRemaining; 
@property (assign,nonatomic) double currentBacklightLevel; 
-(void)setDelegate:(id<FBSUIApplicationSystemServiceDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FBSUIApplicationSystemServiceDelegate>)delegate;
-(void)suspendCurrentApplication;
-(void)setBadgeString:(NSString *)arg1 ;
-(long long)badgeNumber;
-(void)setBadgeNumber:(long long)arg1 ;
-(long long)activeInterfaceOrientation;
-(double)backgroundTimeRemaining;
-(id)initWithQueue:(id)arg1 ;
-(BOOL)setNextWakeInterval:(double)arg1 ;
-(void)setCurrentBacklightLevel:(double)arg1 ;
-(double)currentBacklightLevel;
-(id)_getBadgeValue;
-(NSString *)badgeString;
@end

