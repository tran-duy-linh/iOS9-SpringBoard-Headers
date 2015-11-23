/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:29 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitArtworkDataSource.h>

@protocol GEOTransitShieldDataSource, GEOTransitIconDataSource;
@class NSString;

@interface MKTransitArtwork : NSObject <GEOTransitArtworkDataSource> {

	NSString* _accessibilityText;
	BOOL _hasRoutingIncidentBadge;
	long long _artworkSourceType;
	id<GEOTransitShieldDataSource> _shieldDataSource;
	id<GEOTransitIconDataSource> _iconDataSource;
	long long _artworkUseType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long artworkSourceType;                                  //@synthesize artworkSourceType=_artworkSourceType - In the implementation block
@property (nonatomic,readonly) long long artworkUseType;                                     //@synthesize artworkUseType=_artworkUseType - In the implementation block
@property (nonatomic,readonly) id<GEOTransitShieldDataSource> shieldDataSource;              //@synthesize shieldDataSource=_shieldDataSource - In the implementation block
@property (nonatomic,readonly) id<GEOTransitIconDataSource> iconDataSource;                  //@synthesize iconDataSource=_iconDataSource - In the implementation block
@property (nonatomic,readonly) BOOL hasRoutingIncidentBadge;                                 //@synthesize hasRoutingIncidentBadge=_hasRoutingIncidentBadge - In the implementation block
@property (nonatomic,readonly) NSString * accessibilityText; 
+(id)artworkWithIcon:(id)arg1 accessibilityText:(id)arg2 ;
+(id)artworkWithShield:(id)arg1 accessibilityText:(id)arg2 ;
-(id)initWithIcon:(id)arg1 accessibilityText:(id)arg2 ;
-(id)initWithShield:(id)arg1 accessibilityText:(id)arg2 ;
-(id<GEOTransitIconDataSource>)iconDataSource;
-(long long)artworkUseType;
-(id<GEOTransitShieldDataSource>)shieldDataSource;
-(long long)artworkSourceType;
-(NSString *)accessibilityText;
-(BOOL)hasRoutingIncidentBadge;
@end
