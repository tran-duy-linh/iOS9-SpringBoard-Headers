/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:44 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _WKDownloadDelegate <NSObject>
@optional
-(void)_downloadDidStart:(id)arg1;
-(void)_download:(id)arg1 didReceiveResponse:(id)arg2;
-(void)_download:(id)arg1 didReceiveData:(unsigned long long)arg2;
-(id)_download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 allowOverwrite:(BOOL*)arg3;
-(void)_downloadDidFinish:(id)arg1;
-(void)_download:(id)arg1 didFailWithError:(id)arg2;
-(void)_downloadDidCancel:(id)arg1;

@end

