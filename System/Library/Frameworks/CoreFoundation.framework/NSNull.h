/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:11 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/CAAction.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSNull : NSObject <CAAction, NSCopying, NSSecureCoding>
+(id)null;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)ml_stringValueForSQL;
-(void)ml_bindToSQLiteStatement:(sqlite3_stmtRef)arg1 atPosition:(int)arg2 ;
-(void)cl_json_serializeValue:(value_ostream*)arg1 ;
-(id)cl_json_serializeKey;
-(void)cl_json_serializeValue:(value_ostream*)arg1 ;
-(id)cl_json_serializeKey;
-(id)CAMLType;
-(void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

