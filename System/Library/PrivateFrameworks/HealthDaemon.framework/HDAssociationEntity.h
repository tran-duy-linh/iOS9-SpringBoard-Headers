/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDAssociationEntity : HDHealthEntity
+(id)databaseTable;
+(id)columnsDefinition;
+(long long)protectionClass;
+(id)propertyForSyncProvenance;
+(id)uniquedColumns;
+(id)_propertySettersForDataObject;
+(id)createNonUniqueIndicesForColumns;
+(BOOL)_shouldJoinWithProperty:(id)arg1 joinProperty:(id)arg2 ;
+(id)joinClausesForProperty:(id)arg1 ;
+(BOOL)insertEntriesWithAssociation:(id)arg1 objects:(id)arg2 enforceSameSource:(BOOL)arg3 database:(id)arg4 error:(id*)arg5 ;
+(id)journalEntryForAssociation:(id)arg1 objects:(id)arg2 ;
+(id)_insertAssociationEntryWithAssociation:(id)arg1 object:(id)arg2 provenance:(long long)arg3 database:(id)arg4 error:(id*)arg5 ;
+(BOOL)_insertEntriesWithAssociationUUID:(id)arg1 objectUUIDsData:(id)arg2 provenance:(long long)arg3 healthDaemon:(id)arg4 error:(id*)arg5 ;
+(void)_enumerateObjectIDsWithPredicate:(id)arg1 database:(id)arg2 callback:(/*^block*/id)arg3 ;
+(id)_propertyForForeignProperty:(id)arg1 joinProperty:(id)arg2 ;
+(id)tableAliases;
+(id)associationPropertyForEntityClass:(Class)arg1 ;
+(BOOL)insertEntriesWithAssociation:(id)arg1 objects:(id)arg2 enforceSameSource:(BOOL)arg3 healthDaemon:(id)arg4 error:(id*)arg5 ;
+(BOOL)insertEntriesWithAssociationUUID:(id)arg1 objectUUIDsData:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
+(id)objectIDsForAssociationEntity:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3 ;
+(id)deleteStatementForAssociationWithDatabase:(id)arg1 ;
+(id)deleteStatementForObjectAssociationsWithDatabase:(id)arg1 ;
+(BOOL)_enumerateAssociationsWithPredicate:(id)arg1 excludedSyncStore:(id)arg2 syncAnchorRange:(HDSyncAnchorRange)arg3 lastSyncAnchor:(long long*)arg4 healthDatabase:(id)arg5 error:(id*)arg6 block:(/*^block*/id)arg7 ;
@end
