/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:36 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SASportsAthlete;

@interface SASportsMatchupPlaySummary : AceObject <SAAceSerializable>

@property (assign,nonatomic) BOOL appliesToAwayTeam; 
@property (assign,nonatomic) BOOL appliesToHomeTeam; 
@property (nonatomic,copy) NSString * nonFormattedTime; 
@property (nonatomic,retain) SASportsAthlete * offensivePlayer; 
@property (nonatomic,copy) NSString * summaryDescription; 
@property (nonatomic,copy) NSString * time; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)matchupPlaySummary;
+(id)matchupPlaySummaryWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTime:(NSString *)arg1 ;
-(NSString *)time;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)appliesToAwayTeam;
-(void)setAppliesToAwayTeam:(BOOL)arg1 ;
-(BOOL)appliesToHomeTeam;
-(void)setAppliesToHomeTeam:(BOOL)arg1 ;
-(NSString *)nonFormattedTime;
-(void)setNonFormattedTime:(NSString *)arg1 ;
-(SASportsAthlete *)offensivePlayer;
-(void)setOffensivePlayer:(SASportsAthlete *)arg1 ;
-(NSString *)summaryDescription;
-(void)setSummaryDescription:(NSString *)arg1 ;
@end
