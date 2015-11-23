/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:28 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableObject;

@interface HDCodableSample : PBCodable <NSCopying> {

	long long _dataType;
	double _endDate;
	double _startDate;
	HDCodableObject* _object;
	SCD_Struct_HD28 _has;

}

@property (nonatomic,readonly) BOOL hasObject; 
@property (nonatomic,retain) HDCodableObject * object;              //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) BOOL hasDataType; 
@property (assign,nonatomic) long long dataType;                    //@synthesize dataType=_dataType - In the implementation block
@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) double startDate;                      //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) double endDate;                        //@synthesize endDate=_endDate - In the implementation block
-(id)decodedStartDate;
-(id)decodedEndDate;
-(id)decodedCategoryType;
-(id)decodedQuantityType;
-(id)decodedWorkoutType;
-(id)decodedCorrelationType;
-(id)_decodedObjectTypeOfClass:(Class)arg1 ;
-(double)startDate;
-(double)endDate;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HDCodableObject *)object;
-(void)setObject:(HDCodableObject *)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDataType:(long long)arg1 ;
-(BOOL)hasStartDate;
-(BOOL)hasEndDate;
-(long long)dataType;
-(BOOL)hasObject;
-(void)setHasDataType:(BOOL)arg1 ;
-(BOOL)hasDataType;
-(void)setHasStartDate:(BOOL)arg1 ;
-(void)setHasEndDate:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setEndDate:(double)arg1 ;
-(void)setStartDate:(double)arg1 ;
@end
