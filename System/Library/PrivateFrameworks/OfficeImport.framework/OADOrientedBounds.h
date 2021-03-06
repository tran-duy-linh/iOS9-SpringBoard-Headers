/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OADOrientedBounds : NSObject {

	CGRect mBounds;
	float mRotation;
	unsigned mFlipX : 1;
	unsigned mFlipY : 1;
	int mModeX;
	int mModeY;

}
+(id)orientedBoundsWithBounds:(CGRect)arg1 ;
+(id)orientedBoundsWithBounds:(CGRect)arg1 rotation:(float)arg2 flipX:(BOOL)arg3 flipY:(BOOL)arg4 ;
+(BOOL)directionCloserToVerticalThanToHorizontal:(float)arg1 ;
-(CGRect)bounds;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setRotation:(float)arg1 ;
-(float)rotation;
-(CGRect)boundingBox;
-(id)initWithBounds:(CGRect)arg1 ;
-(void)setFlipY:(BOOL)arg1 ;
-(void)setFlipX:(BOOL)arg1 ;
-(BOOL)flipY;
-(void)setOrientedBounds:(id)arg1 ;
-(BOOL)flipX;
-(id)initWithBounds:(CGRect)arg1 rotation:(float)arg2 flipX:(BOOL)arg3 flipY:(BOOL)arg4 ;
-(CGSize)boundingBoxSize;
-(int)xMode;
-(int)yMode;
-(void)setXMode:(int)arg1 ;
-(void)setYMode:(int)arg1 ;
-(BOOL)isEqualToOrientedBounds:(id)arg1 ;
@end

