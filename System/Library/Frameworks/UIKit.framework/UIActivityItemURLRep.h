/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:04 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, UIImage;

@interface UIActivityItemURLRep : NSObject {

	NSURL* _URL;
	UIImage* _thumbnail;
	long long _attachmentURLType;

}

@property (nonatomic,retain) NSURL * URL;                              //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) UIImage * thumbnail;                      //@synthesize thumbnail=_thumbnail - In the implementation block
@property (assign,nonatomic) long long attachmentURLType;              //@synthesize attachmentURLType=_attachmentURLType - In the implementation block
-(id)scheme;
-(BOOL)isFileURL;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(UIImage *)thumbnail;
-(long long)attachmentURLType;
-(void)setThumbnail:(UIImage *)arg1 ;
-(void)setAttachmentURLType:(long long)arg1 ;
@end

