/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <UIKit/UITextField.h>

@interface HKCaretOptionalTextField : UITextField {

	BOOL _allowsSelection;

}

@property (assign,nonatomic) BOOL allowsSelection;              //@synthesize allowsSelection=_allowsSelection - In the implementation block
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setAllowsSelection:(BOOL)arg1 ;
-(BOOL)allowsSelection;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(double)actualMinimumFontSize;
@end
