/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:10 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <Weather/WeatherHTTPRequest.h>

@interface WeatherXMLHTTPRequest : WeatherHTTPRequest
-(void)failWithError:(id)arg1 ;
-(id)aggregateDictionaryDomain;
-(void)request:(id)arg1 receivedResponseData:(id)arg2 ;
-(void)willProcessDocument;
-(void)processDocument:(xmlDoc*)arg1 ;
-(void)didProcessDocument;
-(void)_forceRawDataDump:(id)arg1 ;
@end
