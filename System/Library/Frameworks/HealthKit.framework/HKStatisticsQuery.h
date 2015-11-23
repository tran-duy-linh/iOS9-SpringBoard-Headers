/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:25 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>

@interface HKStatisticsQuery : HKQuery {

	/*^block*/id _completionHandler;
	unsigned long long _options;
	unsigned long long _mergeStrategy;

}

@property (nonatomic,readonly) id completionHandler;                        //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                  //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) unsigned long long mergeStrategy;              //@synthesize mergeStrategy=_mergeStrategy - In the implementation block
+(Class)_queryServerDataObjectClass;
-(void)_queue_cleanupAfterDeactivation;
-(void)_queue_configureQueryServerDataObject:(id)arg1 ;
-(void)_queue_validate;
-(/*^block*/id)_queue_errorHandler;
-(id)initWithQuantityType:(id)arg1 quantitySamplePredicate:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)completionHandler;
-(unsigned long long)options;
-(unsigned long long)mergeStrategy;
-(void)deliverStatistics:(id)arg1 forQuery:(id)arg2 ;
-(void)setMergeStrategy:(unsigned long long)arg1 ;
@end
