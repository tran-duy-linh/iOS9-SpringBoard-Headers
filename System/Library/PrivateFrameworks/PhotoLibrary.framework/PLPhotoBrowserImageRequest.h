/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:14 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PLPhotoBrowserImageRequest : NSObject {

	BOOL _canceled;
	int _imageManagerRequestID;

}

@property (assign,nonatomic) int imageManagerRequestID;              //@synthesize imageManagerRequestID=_imageManagerRequestID - In the implementation block
@property (assign,nonatomic) BOOL canceled;                          //@synthesize canceled=_canceled - In the implementation block
-(void)setCanceled:(BOOL)arg1 ;
-(BOOL)canceled;
-(int)imageManagerRequestID;
-(void)setImageManagerRequestID:(int)arg1 ;
@end
