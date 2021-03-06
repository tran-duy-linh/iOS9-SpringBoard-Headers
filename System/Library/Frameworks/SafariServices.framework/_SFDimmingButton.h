/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:43 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@interface _SFDimmingButton : UIButton {

	double _normalImageAlpha;
	double _highlightedImageAlpha;
	double _highlightAnimationDuration;

}

@property (assign,nonatomic) double normalImageAlpha;                        //@synthesize normalImageAlpha=_normalImageAlpha - In the implementation block
@property (assign,nonatomic) double highlightedImageAlpha;                   //@synthesize highlightedImageAlpha=_highlightedImageAlpha - In the implementation block
@property (assign,nonatomic) double highlightAnimationDuration;              //@synthesize highlightAnimationDuration=_highlightAnimationDuration - In the implementation block
-(void)setNormalImageAlpha:(double)arg1 ;
-(void)setHighlightedImageAlpha:(double)arg1 ;
-(void)setHighlightAnimationDuration:(double)arg1 ;
-(void)_updateImageAlpha;
-(double)normalImageAlpha;
-(double)highlightedImageAlpha;
-(double)highlightAnimationDuration;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
@end

