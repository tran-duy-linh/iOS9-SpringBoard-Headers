/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:07 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/WDRun.h>

@class WDCharacterProperties, WDFont;

@interface WDSymbol : WDRun {

	WDCharacterProperties* mProperties;
	WDFont* mFont;
	unsigned short mCharacter;

}
-(void)dealloc;
-(id)description;
-(void)setFont:(id)arg1 ;
-(id)font;
-(id)properties;
-(int)runType;
-(unsigned short)character;
-(id)initWithParagraph:(id)arg1 ;
-(void)setCharacter:(unsigned short)arg1 ;
-(void)clearProperties;
@end

