/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:22 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class NSDate, NSTimeZone;

@interface NSDateCheckingResult : NSTextCheckingResult {

	NSRange _range;
	NSDate* _date;
	NSTimeZone* _timeZone;
	double _duration;
	NSDate* _referenceDate;
	id _underlyingResult;
	BOOL _timeIsSignificant;
	BOOL _timeIsApproximate;
	BOOL _timeIsPast;

}

@property (readonly) NSTimeZone * timeZone; 
@property (readonly) double duration; 
@property (readonly) NSDate * referenceDate; 
@property (readonly) void* underlyingResult; 
@property (readonly) BOOL timeIsSignificant; 
@property (readonly) BOOL timeIsApproximate; 
@property (readonly) BOOL timeIsPast; 
-(id)resultByAdjustingRangesWithOffset:(long long)arg1 ;
-(BOOL)_adjustRangesWithOffset:(long long)arg1 ;
-(void*)underlyingResult;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 ;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 ;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6 timeIsSignificant:(BOOL)arg7 timeIsApproximate:(BOOL)arg8 timeIsPast:(BOOL)arg9 ;
-(NSDate *)referenceDate;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 ;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6 ;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6 timeIsSignificant:(BOOL)arg7 timeIsApproximate:(BOOL)arg8 ;
-(BOOL)timeIsSignificant;
-(BOOL)timeIsApproximate;
-(BOOL)timeIsPast;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(double)duration;
-(id)date;
-(NSRange)range;
-(NSTimeZone *)timeZone;
-(unsigned long long)resultType;
@end

