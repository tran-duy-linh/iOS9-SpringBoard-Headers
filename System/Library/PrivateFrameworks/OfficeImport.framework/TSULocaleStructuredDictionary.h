/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSDictionary, NSMutableDictionary;

@interface TSULocaleStructuredDictionary : NSObject {

	NSDictionary* _dictionary;
	NSMutableDictionary* _cldrLanguageScriptRegionForKey;
	NSMutableDictionary* _cldrLanguageScriptForKey;

}
+(id)dictionaryWithContentsOfFileForLocale:(CFLocaleRef)arg1 inDirectory:(id)arg2 inBundle:(id)arg3 ;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)p_extractLanguage:(id*)arg1 script:(id*)arg2 region:(id*)arg3 fromString:(id)arg4 ;
-(id)p_makeLocaleIdentifierWithLanguage:(id)arg1 script:(id)arg2 region:(id)arg3 ;
-(id)objectForKey:(id)arg1 locale:(CFLocaleRef)arg2 ;
@end

