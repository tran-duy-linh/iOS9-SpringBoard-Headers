/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:04 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonSupport/DADClientDelegate.h>
#import <DADaemonSupport/DAEventsCalendarSharingResponseConsumer.h>

@class NSString;

@interface DADClientShareResponseDelegate : DADClientDelegate <DAEventsCalendarSharingResponseConsumer> {

	long long _response;
	NSString* _calendarID;
	NSString* _shareID;

}

@property (assign,nonatomic) long long response;                    //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSString * calendarID;                 //@synthesize calendarID=_calendarID - In the implementation block
@property (nonatomic,retain) NSString * shareID;                    //@synthesize shareID=_shareID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finishWithError:(id)arg1 ;
-(void)dealloc;
-(long long)response;
-(NSString *)shareID;
-(void)setShareID:(NSString *)arg1 ;
-(void)shareResponseFinishedWithError:(id)arg1 ;
-(id)initWithAccountID:(id)arg1 client:(id)arg2 response:(long long)arg3 calendarID:(id)arg4 ;
-(void)respondToShareRequest;
-(void)setCalendarID:(NSString *)arg1 ;
-(NSString *)calendarID;
-(void)setResponse:(long long)arg1 ;
@end
