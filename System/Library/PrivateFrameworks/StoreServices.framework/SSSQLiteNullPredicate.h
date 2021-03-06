/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:00 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSSQLitePropertyPredicate.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SSSQLiteNullPredicate : SSSQLitePropertyPredicate <NSCopying> {

	BOOL _matchesNull;

}

@property (nonatomic,readonly) BOOL matchesNull;              //@synthesize matchesNull=_matchesNull - In the implementation block
+(id)isNullPredicateWithProperty:(id)arg1 ;
+(id)isNotNullPredicateWithProperty:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(BOOL)matchesNull;
@end

