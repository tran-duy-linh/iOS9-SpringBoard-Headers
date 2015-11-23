/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:36 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKCSSMediaQueryList.h>

@class NSMutableArray, NSString;

@interface IKCSSMediaQueryAndList : IKCSSMediaQueryList {

	NSMutableArray* _queryList;
	BOOL _negated;
	NSString* _type;

}

@property (nonatomic,retain) NSString * type;              //@synthesize type=_type - In the implementation block
@property (assign) BOOL negated;                           //@synthesize negated=_negated - In the implementation block
-(unsigned long long)count;
-(id)init;
-(id)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(BOOL)evaluate;
-(id)subQueryAtIndex:(unsigned long long)arg1 ;
-(void)addQuery:(id)arg1 ;
-(id)expressionList;
-(BOOL)negated;
-(void)setNegated:(BOOL)arg1 ;
@end
