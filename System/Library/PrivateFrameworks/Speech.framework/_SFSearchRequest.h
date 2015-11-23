/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:46 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Speech.framework/Speech
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface _SFSearchRequest : NSObject {

	long long _searchTypes;
	NSDictionary* _headerFields;
	NSDictionary* _queryParameters;

}

@property (assign,nonatomic) long long searchTypes;                     //@synthesize searchTypes=_searchTypes - In the implementation block
@property (nonatomic,copy) NSDictionary * headerFields;                 //@synthesize headerFields=_headerFields - In the implementation block
@property (nonatomic,copy) NSDictionary * queryParameters;              //@synthesize queryParameters=_queryParameters - In the implementation block
-(void)setSearchTypes:(long long)arg1 ;
-(NSDictionary *)queryParameters;
-(long long)searchTypes;
-(void)setQueryParameters:(NSDictionary *)arg1 ;
-(void)setHeaderFields:(NSDictionary *)arg1 ;
-(NSDictionary *)headerFields;
@end
