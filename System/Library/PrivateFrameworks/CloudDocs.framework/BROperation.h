/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:43 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface BROperation : NSOperation {

	id _remoteOperation;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned char _uuid[16];
	id _executionTransation;
	BOOL _finished;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize queue=_queue - In the implementation block
@property (getter=isExecuting,readonly) BOOL executing; 
@property (getter=isFinished,readonly) BOOL finished;                                   //@synthesize finished=_finished - In the implementation block
@property (nonatomic,retain) NSObject*<BRCancellable> remoteOperation;                  //@synthesize remoteOperation=_remoteOperation - In the implementation block
-(void)_setExecuting:(BOOL)arg1 ;
-(void)_setFinished:(BOOL)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)remoteObject;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(oneway void)invalidate;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)_setRemoteOperation:(id)arg1 ;
-(oneway void)progressCallbackWithTopic:(id)arg1 userInfo:(id)arg2 ;
-(NSObject*<BRCancellable>)remoteOperation;
-(void)setRemoteOperation:(NSObject*<BRCancellable>)arg1 ;
-(BOOL)_finishIfCancelled;
-(void)completedWithResult:(id)arg1 error:(id)arg2 ;
-(oneway void)setRemoteOperationProxy:(id)arg1 userInfo:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
@end
