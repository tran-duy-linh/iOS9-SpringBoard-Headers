/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:49 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Twitter.framework/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@interface TWTweetComposeViewController : UIViewController

@property (nonatomic,copy) id completionHandler; 
+(BOOL)canSendTweet;
-(/*^block*/id)addDownSampledImageDataByProxyWithPreviewImage:(id)arg1 ;
-(void)setLongitude:(double)arg1 latitude:(double)arg2 name:(id)arg3 ;
-(/*^block*/id)addURLWithProxyPreviewImage:(id)arg1 ;
-(id)init;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(BOOL)addImage:(id)arg1 ;
-(BOOL)removeAllImages;
-(BOOL)addURL:(id)arg1 ;
-(BOOL)setInitialText:(id)arg1 ;
-(BOOL)removeAllURLs;
@end
