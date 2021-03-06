/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIUCBBarButtonVisualProviderIOS.h>

@class _UIUCBKBSelectionBackground;

@interface _UIUCBGroupBarButtonVisualProviderIOS : _UIUCBBarButtonVisualProviderIOS {

	_UIUCBKBSelectionBackground* _selectionBackgroundView;
	BOOL _lightKeyboard;

}
+(id)lightKeyboardProvider;
+(id)darkKeyboardProvider;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)updateButton:(id)arg1 forSelectedState:(BOOL)arg2 ;
-(void)configureButton:(id)arg1 fromBarItem:(id)arg2 ;
-(void)updateButton:(id)arg1 toUseButtonShapes:(BOOL)arg2 ;
@end

