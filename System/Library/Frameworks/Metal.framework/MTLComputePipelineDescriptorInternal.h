/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:35 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLComputePipelineDescriptor.h>

@interface MTLComputePipelineDescriptorInternal : MTLComputePipelineDescriptor {

	MTLComputePipelineDescriptorPrivate* _private;

}
-(void)setComputeFunction:(id)arg1 ;
-(void)validateWithDevice:(id)arg1 ;
-(id)computeFunction;
-(const MTLComputePipelineDescriptorPrivate*)_descriptorPrivate;
-(void)setThreadGroupSizeIsMultipleOfThreadExecutionWidth:(BOOL)arg1 ;
-(BOOL)threadGroupSizeIsMultipleOfThreadExecutionWidth;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
@end
