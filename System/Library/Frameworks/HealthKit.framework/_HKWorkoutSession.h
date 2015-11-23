/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:25 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue, _HKWorkoutSessionDelegate;
@class NSObject, NSDate, NSUUID;

@interface _HKWorkoutSession : NSObject <NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _activityType;
	long long _locationType;
	id<_HKWorkoutSessionDelegate> _delegate;
	long long _state;
	NSDate* _startDate;
	NSDate* _endDate;
	NSUUID* _UUID;

}

@property (nonatomic,readonly) unsigned long long activityType;                          //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) long long locationType;                                   //@synthesize locationType=_locationType - In the implementation block
@property (assign,nonatomic,__weak) id<_HKWorkoutSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long state;                                            //@synthesize state=_state - In the implementation block
@property (readonly) NSDate * startDate;                                                 //@synthesize startDate=_startDate - In the implementation block
@property (readonly) NSDate * endDate;                                                   //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSUUID * UUID;                                            //@synthesize UUID=_UUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)_validateWorkoutSession;
-(void)didChangeToState:(long long)arg1 fromState:(long long)arg2 date:(id)arg3 ;
-(void)didFailWithError:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<_HKWorkoutSessionDelegate>)arg1 ;
-(id<_HKWorkoutSessionDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(unsigned long long)activityType;
-(NSUUID *)UUID;
-(id)initWithActivityType:(unsigned long long)arg1 locationType:(long long)arg2 ;
-(long long)locationType;
@end
