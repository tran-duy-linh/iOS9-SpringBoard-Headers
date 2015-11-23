/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:18 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLPreheatItem.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, UIImage, NSString;

@interface PLJPEGPreheatItem : PLPreheatItem {

	NSObject*<OS_dispatch_queue> _queue;
	UIImage* _cachedImage;
	BOOL _cachedImageCancelled;
	unsigned long long _requestID;
	NSObject*<OS_dispatch_group> _requestGroup;
	NSObject*<OS_dispatch_group> _waitGroup;
	BOOL _dataIsLoading;
	unsigned _loadingOptions;
	unsigned _cancelled;
	unsigned _hasCachedImage;
	NSString* _imagePath;

}

@property (nonatomic,readonly) unsigned options;                          //@synthesize loadingOptions=_loadingOptions - In the implementation block
@property (nonatomic,copy,readonly) NSString * imagePath;                 //@synthesize imagePath=_imagePath - In the implementation block
@property (setter=_setHasCachedImage:) BOOL _hasCachedImage; 
+(id)jpegDataLoadSemaphore;
-(NSString *)imagePath;
-(void)dealloc;
-(BOOL)isCancelled;
-(unsigned)options;
-(void)_cancel;
-(void)startPreheatRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_cacheImage;
-(BOOL)_hasCachedImage;
-(CFDictionaryRef)decodeSessionOptions;
-(id)createDecodedImage:(CGImageRef)arg1 data:(id)arg2 ;
-(void)_setHasCachedImage:(BOOL)arg1 ;
-(id)preheatData;
-(void)_uncancel;
-(void)_leaveWaitGroupIfNeeded;
-(void)loadPreheatDataWithHandler:(/*^block*/id)arg1 ;
-(id)initWithImagePath:(id)arg1 format:(int)arg2 imageType:(long long)arg3 optimalSourcePixelSize:(CGSize)arg4 options:(unsigned)arg5 ;
-(id)cachedImage:(BOOL*)arg1 ;
-(id)cachedImageIfAvailable:(BOOL*)arg1 ;
-(BOOL)addImageHandler:(/*^block*/id)arg1 ;
-(id)initialDecodeSessionOptions;
-(void)cancelPreheatRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)originalIsJpeg;
@end
