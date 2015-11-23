/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:07 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _DECDataProtectionMonitorDelegate, OS_dispatch_queue;
@class NSObject;

@interface _DECDataProtectionMonitor : NSObject {

	id<_DECDataProtectionMonitorDelegate> _delegate;
	long long _encryptedDataAvailability;
	BOOL _unlockedSinceBoot;
	long long _dataProtectionStatus;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic,__weak) id<_DECDataProtectionMonitorDelegate> delegate; 
@property (nonatomic,readonly) long long encryptedDataAvailability; 
@property (nonatomic,readonly) BOOL unlockedSinceBoot; 
@property (nonatomic,readonly) long long dataProtectionStatus;                                   //@synthesize dataProtectionStatus=_dataProtectionStatus - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                 //@synthesize queue=_queue - In the implementation block
+(id)_DECDataProtectionMonitorLockStateToString:(long long)arg1 ;
+(id)_DECDataProtectionMonitorEncryptedDataAvailabilityToString:(long long)arg1 ;
+(id)_DECDataProtectionMonitorDataProtectionStatus:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<_DECDataProtectionMonitorDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<_DECDataProtectionMonitorDelegate>)delegate;
-(void)_registerForKeyBagNotifications;
-(void)setDataProtectionStatus:(long long)arg1 ;
-(BOOL)dataProtectionEnabled;
-(long long)dataProtectionStatus;
-(BOOL)unlockedSinceBoot;
-(void)setUnlockedSinceBoot:(BOOL)arg1 ;
-(void)setEncryptedDataAvailability:(long long)arg1 ;
-(long long)encryptedDataAvailability;
-(void)handkeKeybagLockStatusChange:(long long)arg1 ;
-(void)handleUnlockedSinceBoot;
@end
