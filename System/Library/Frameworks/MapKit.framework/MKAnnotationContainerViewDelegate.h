/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:27 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKAnnotationContainerViewDelegate <NSObject>
@optional
-(void)annotationContainerDidFinishMapsTransitionExpanding:(id)arg1;

@required
-(BOOL)annotationContainerIsRotated:(id)arg1;
-(void)annotationContainer:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
-(BOOL)annotationContainerShouldAlignToPixels:(id)arg1;
-(void)annotationContainer:(id)arg1 scrollToRevealCalloutWithOffset:(CGPoint)arg2 annotationCoordinate:(SCD_Struct_MK1)arg3 completionHandler:(/*^block*/id)arg4;
-(void)calloutDidAppearForAnnotationView:(id)arg1 inContainer:(id)arg2;
-(void)annotationContainerWillAnimateBubble:(id)arg1;
-(double)annotationContainer:(id)arg1 pinDropDistanceForCoordinate:(SCD_Struct_MK1)arg2 maxDistance:(double*)arg3;
-(CGRect*)visibleRectInView:(id)arg1;
-(void)annotationContainerDidDropPins:(id)arg1;
-(CGRect*)visibleCenteringRectInView:(id)arg1;
-(void)annotationContainerDidAnimateBubble:(id)arg1;
-(void)annotationContainerWillDropPins:(id)arg1;
-(SCD_Struct_MK1*)convertPoint:(CGPoint)arg1 toCoordinateFromView:(id)arg2;
-(double)annotationContainerZoomScale:(id)arg1;
-(CGPoint*)convertCoordinate:(SCD_Struct_MK1)arg1 toPointToView:(id)arg2;
-(CGRect*)annotationContainerVisibleRect:(id)arg1;

@end

