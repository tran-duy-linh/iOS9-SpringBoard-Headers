//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _UILegibilityImageSet;

@interface SBIconPageIndicatorImageSetResult : NSObject
{
    _UILegibilityImageSet *_pageIndicatorSet;
    _UILegibilityImageSet *_enabledPageIndicatorSet;
}

@property(readonly, retain, nonatomic) _UILegibilityImageSet *enabledPageIndicatorSet; // @synthesize enabledPageIndicatorSet=_enabledPageIndicatorSet;
@property(readonly, retain, nonatomic) _UILegibilityImageSet *pageIndicatorSet; // @synthesize pageIndicatorSet=_pageIndicatorSet;
- (void)dealloc;
- (id)initWithIndicatorSet:(id)arg1 enabledIndicatorSet:(id)arg2;

@end

