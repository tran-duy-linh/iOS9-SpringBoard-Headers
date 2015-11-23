/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:53 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIOldSliderControl.h>

@class UIView;

@interface UIScrubberControl : UIOldSliderControl {

	SCD_Union_UI41 _sliderAvailableFill;
	double _duration;
	float _lastDisplayedWidth;
	float _maxTrackWidth;
	UIView* _elapsedTimeView;
	UIView* _remainingTimeView;
	id _delegate;
	double _trackingStartTime;
	CGPoint _lastUpdatedPoint;
	float _valueAvailable;
	unsigned _didDrag : 1;
	unsigned _sentScrubbingStart : 1;
	unsigned _autoSizesToFitDuration : 1;
	unsigned _layoutTimeParts : 2;
	unsigned _remainingIsDuration : 1;
	unsigned _delegateDidEnterScrubbingState : 1;
	unsigned _delegateDidChangeScrubValue : 1;
	unsigned _delegateShouldBeginScrubbing : 1;
	unsigned _endingTracking : 1;
	unsigned _showKnob : 1;
	unsigned _largeKnob : 1;
	unsigned _rightCapIsDownloadCap : 1;
	unsigned _requireMomentaryDelay : 1;
	unsigned _showFullWidthComponents : 1;
	unsigned _alwaysShowAllComponentsForDuration : 1;
	unsigned _timeLayoutDisabledCount : 7;
	unsigned _timeLayoutSkippedLayout : 1;
	unsigned _timeLayoutSkippedForcedLayout : 1;
	unsigned _showTimeCentered : 1;
	unsigned _leftCapIsDownloadCap : 1;
	unsigned _allowsAnyValue : 1;
	unsigned _unused : 3;

}
+(BOOL)allowLayeredFillForKnob;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(double)duration;
-(BOOL)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)setDuration:(double)arg1 ;
-(CGRect)hitRect;
-(void)sizeToFit;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_setValue:(float)arg1 andSendAction:(BOOL)arg2 ;
-(void)setTimeColor:(id)arg1 ;
-(void)setTimeShadowColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 maxTrackWidth:(float)arg2 showTimes:(BOOL)arg3 knobStyle:(int)arg4 ;
-(id)createSliderKnobView;
-(void)_resetTimeFrames;
-(CGRect)_rectOfTrack;
-(id)imageForSliderPiece:(int)arg1 ;
-(const SCD_Struct_UI42*)metrics;
-(void)_updateTimes:(BOOL)arg1 ;
-(CGRect)fillBounds;
-(void)drawSliderPiece:(int)arg1 inRect:(CGRect)arg2 ;
-(BOOL)_notAllValueAvailable;
-(CGRect)sliderBounds;
-(void)_updateAvailableFill;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 animationCurve:(int)arg3 ;
-(BOOL)pointInsideKnob:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_sendDelegateDidEnterScrubbingState:(BOOL)arg1 ;
-(float)scrubValue;
-(id)initWithFrame:(CGRect)arg1 maxTrackWidth:(float)arg2 showTimes:(BOOL)arg3 showKnob:(BOOL)arg4 ;
-(void)setPinTimeToOutsideEdges:(BOOL)arg1 ;
-(void)setShowTimeCenteredInAvailableArea:(BOOL)arg1 ;
-(double)requiredAutoUpdateDurationForDuration:(double)arg1 ;
-(BOOL)pointInsideKnob:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)setAllowsAnyValue:(BOOL)arg1 ;
-(void)disableTimesLayout;
-(void)enableTimesLayout;
-(void)setShowFullWidthComponents:(BOOL)arg1 ;
-(void)setShowDuration:(BOOL)arg1 ;
-(void)setScrubbingRequiresMomentaryDelay:(BOOL)arg1 ;
-(void)setValueAvailable:(float)arg1 ;
@end
