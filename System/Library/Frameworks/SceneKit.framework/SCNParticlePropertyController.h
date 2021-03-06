/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:45 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CAAnimation, SCNNode, NSString;

@interface SCNParticlePropertyController : NSObject <NSSecureCoding, NSCopying> {

	CAAnimation* _animation;
	long long _inputMode;
	double _inputScale;
	double _inputBias;
	SCNNode* _inputOrigin;
	NSString* _inputProperty;
	id _c3dAnimation;

}

@property (nonatomic,retain) CAAnimation * animation; 
@property (assign,nonatomic) long long inputMode; 
@property (assign,nonatomic) double inputScale; 
@property (assign,nonatomic) double inputBias; 
@property (assign,nonatomic,__weak) SCNNode * inputOrigin; 
@property (nonatomic,copy) NSString * inputProperty; 
+(id)particlePropertyControllerWithAnimation:(id)arg1 ;
+(id)controllerWithAnimation:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)setC3dAnimation:(id)arg1 ;
-(double)inputScale;
-(double)inputBias;
-(SCNNode *)inputOrigin;
-(NSString *)inputProperty;
-(id)c3dAnimation;
-(void)setInputScale:(double)arg1 ;
-(void)setInputBias:(double)arg1 ;
-(void)setInputOrigin:(SCNNode *)arg1 ;
-(void)setInputProperty:(NSString *)arg1 ;
-(void)_customEncodingOfSCNParticlePropertyController:(id)arg1 ;
-(void)_customDecodingOfSCNParticlePropertyController:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CAAnimation *)animation;
-(void)setInputMode:(long long)arg1 ;
-(long long)inputMode;
-(void)setAnimation:(CAAnimation *)arg1 ;
@end

