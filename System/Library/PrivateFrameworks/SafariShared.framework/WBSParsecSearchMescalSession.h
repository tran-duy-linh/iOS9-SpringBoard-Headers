/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:37 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SafariShared/SafariShared-Structs.h>
@interface WBSParsecSearchMescalSession : NSObject {

	BOOL _complete;
	FPSAPContextOpaque_Ref _session;
	FairPlayHWInfo_ _hardwareInfo;
	unsigned long long _versionNumber;

}
-(void)dealloc;
-(id)init;
-(id)signatureStringForData:(id)arg1 ;
-(id)initWithVersionNumber:(unsigned long long)arg1 ;
-(id)exchangedDataForData:(id)arg1 ;
-(BOOL)_getHardwareInfo:(FairPlayHWInfo_*)arg1 ;
@end

