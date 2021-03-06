/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:31 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface MPContentTasteController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _pendingUpdateRecordByPlaylistGlobalID;
	NSMutableDictionary* _pendingUpdateRecordByStoreAdamID;

}
+(BOOL)MPU_tasteTypeSupportedForContentItemIdentifierCollection:(id)arg1 ;
+(id)_mediaLibrary;
+(id)sharedController;
-(void)MPU_setTasteType:(unsigned long long)arg1 forContentItemIdentifierCollection:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)MPU_tasteTypeForContentItemIdentifierCollection:(id)arg1 ;
-(void)_deviceMediaLibraryDidChangeNotification:(id)arg1 ;
-(void)_removePendingUpdateRecordForPlaylistGlobalID:(id)arg1 token:(id)arg2 ;
-(void)_removePendingUpdateRecordForStoreAdamID:(long long)arg1 token:(id)arg2 ;
-(id)_addPendingUpdateRecordForPlaylistGlobalID:(id)arg1 contentTasteType:(unsigned long long)arg2 ;
-(id)_addPendingUpdateRecordForStoreAdamID:(long long)arg1 contentTasteType:(unsigned long long)arg2 ;
-(id)_libraryPlaylistWithGlobalID:(id)arg1 ;
-(void)setTasteType:(unsigned long long)arg1 forMediaEntity:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)_libraryEntityWithStoreID:(long long)arg1 contentType:(unsigned long long)arg2 ;
-(unsigned long long)tasteTypeForMediaEntity:(id)arg1 ;
-(id)_ML3QueryWithEntityClass:(Class)arg1 predicate:(id)arg2 options:(long long)arg3 ;
-(void)setTasteType:(unsigned long long)arg1 forPlaylistGlobalID:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setTasteType:(unsigned long long)arg1 forStoreAdamID:(long long)arg2 withContentType:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(unsigned long long)tasteTypeForPlaylistGlobalID:(id)arg1 ;
-(unsigned long long)tasteTypeForStoreAdamID:(long long)arg1 ;
-(void)dealloc;
-(id)init;
@end

