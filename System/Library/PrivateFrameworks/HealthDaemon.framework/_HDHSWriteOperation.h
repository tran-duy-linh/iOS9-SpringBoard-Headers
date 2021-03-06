/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:28 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CBPeripheral, NSData;

@interface _HDHSWriteOperation : NSObject {

	BOOL _expectResponse;
	CBPeripheral* _peripheral;
	NSData* _data;
	/*^block*/id _completion;

}

@property (nonatomic,retain) CBPeripheral * peripheral;              //@synthesize peripheral=_peripheral - In the implementation block
@property (nonatomic,retain) NSData * data;                          //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) BOOL expectResponse;                    //@synthesize expectResponse=_expectResponse - In the implementation block
@property (nonatomic,copy) id completion;                            //@synthesize completion=_completion - In the implementation block
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(CBPeripheral *)peripheral;
-(void)setPeripheral:(CBPeripheral *)arg1 ;
-(BOOL)expectResponse;
-(void)setExpectResponse:(BOOL)arg1 ;
@end

