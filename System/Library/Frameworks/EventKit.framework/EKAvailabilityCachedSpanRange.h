/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:16 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface EKAvailabilityCachedSpanRange : NSObject {

	NSMutableArray* _cachedSpans;

}
+(id)_clampDateRangeForSpans:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
+(id)_generateCachedSpansFromSpans:(id)arg1 ;
-(id)gatherFreshlyCachedSpansBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)injectSpans:(id)arg1 ;
-(BOOL)_rangeCompletelyCoversPeriodBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)_validateCachedSpansIfDebugLoggingIsEnabled;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)spans;
@end

