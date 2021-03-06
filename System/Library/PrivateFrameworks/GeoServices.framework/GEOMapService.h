/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSLock, NSArray, NSMutableArray, NSObject;

@interface GEOMapService : NSObject {

	NSLock* _preferredLanguagesLock;
	NSArray* _preferredLanguages;
	NSMutableArray* _placeDataObservers;
	NSObject*<OS_dispatch_queue> _placeDataObserverQueue;
	int _overriddenResultProviderID;

}
+(id)sharedService;
+(void)_attributedGeoMapItemsForPlaceDatasWithType:(int)arg1 placeDatas:(id)arg2 disambiguationLabels:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)_ticketForBatchReverseGeocodeLocations:(id)arg1 shiftLocationsIfNeeded:(BOOL)arg2 additionalPlaceTypes:(int*)arg3 additionalPlaceTypesCount:(unsigned)arg4 traits:(id)arg5 ;
-(id)_ticketForAutoCompleteFragment:(id)arg1 entriesType:(int)arg2 listType:(int)arg3 traits:(id)arg4 ;
-(void)dealloc;
-(id)init;
-(void)_localeChanged:(id)arg1 ;
-(void)applyRAPUpdatedMapItems:(id)arg1 ;
-(int)localSearchProviderID;
-(id)directionsURL;
-(int)_loadOverriddenResultProviderID;
-(void)removePlaceDataRequestObserver:(id)arg1 ;
-(void)addPlaceDataRequestObserver:(id)arg1 ;
-(id)defaultTraits;
-(id)ticketForFreshMUIDs:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 includeETA:(BOOL)arg4 traits:(id)arg5 ;
-(id)ticketForForwardGeocodeAddress:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)ticketForPhoneNumbers:(id)arg1 allowCellularDataForLookup:(BOOL)arg2 traits:(id)arg3 ;
-(id)_cl_ticketForForwardGeocodeAddressDictionary:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)_cl_ticketForForwardGeocodeString:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)ticketForExternalBusinessID:(id)arg1 contentProvider:(id)arg2 includeETA:(BOOL)arg3 traits:(id)arg4 ;
-(id)ticketForFreshBusinessClaimComponentWithMUID:(unsigned long long)arg1 resultProviderID:(int)arg2 traits:(id)arg3 ;
-(id)ticketForMUIDs:(id)arg1 includeETA:(BOOL)arg2 traits:(id)arg3 ;
-(id)ticketForForwardGeocodeAddressDictionary:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)ticketForTransitMUIDs:(id)arg1 includeETA:(BOOL)arg2 endDateForPlacecardSchedulesForThisBatch:(id)arg3 traits:(id)arg4 ;
-(id)ticketForOptInToProblemSubmissionID:(id)arg1 allowContactBackAtEmailAddress:(id)arg2 traits:(id)arg3 ;
-(id)ticketForProblemResubmission:(id)arg1 traits:(id)arg2 ;
-(id)ticketForProblem:(id)arg1 placeForProblemContext:(id)arg2 placeForStartDirectionsSearchInput:(id)arg3 placeForEndDirectionsSearchInput:(id)arg4 pushToken:(id)arg5 allowContactBackAtEmailAddress:(id)arg6 traits:(id)arg7 ;
-(void)submitUsageForTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 targetID:(unsigned long long)arg5 ;
-(id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 maxResults:(unsigned)arg3 includeETA:(BOOL)arg4 traits:(id)arg5 ;
-(id)ticketForBatchReverseGeocodeLocations:(id)arg1 shiftLocationsIfNeeded:(BOOL)arg2 traits:(id)arg3 ;
-(id)_cl_ticketForReverseGeocodeLocation:(id)arg1 traits:(id)arg2 ;
-(void)submitUsageForTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 ;
-(id)ticketForReverseGeocodeCoordinate:(SCD_Struct_GE16)arg1 includeEntryPoints:(BOOL)arg2 shiftLocationsIfNeeded:(BOOL)arg3 includeETA:(BOOL)arg4 traits:(id)arg5 ;
-(void)notifyPlaceDataRequestObserversThatTicket:(id)arg1 didCompleteWithMapItems:(id)arg2 ;
-(id)ticketForMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 paymentNetwork:(id)arg3 transactionDate:(id)arg4 transactionLocation:(id)arg5 traits:(id)arg6 ;
-(void)submitUsageForTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 targetID:(unsigned long long)arg5 transitCardCategory:(int)arg6 transitSystem:(id)arg7 transitDepartureSequence:(id)arg8 ;
-(id)ticketForCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2 ;
-(id)ticketForURLQuery:(id)arg1 coordinate:(SCD_Struct_GE16)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5 maxResults:(unsigned)arg6 traits:(id)arg7 ;
-(id)_ticketForAutocompleteFragment:(id)arg1 type:(int)arg2 traits:(id)arg3 categoryFilter:(id)arg4 ;
-(id)ticketForReverseGeocodeCoordinate:(SCD_Struct_GE16)arg1 includeETA:(BOOL)arg2 shiftLocationsIfNeeded:(BOOL)arg3 traits:(id)arg4 ;
-(id)ticketForPlaceRefinementRequestForContentProvider:(id)arg1 coordinate:(SCD_Struct_GE16*)arg2 addressLine:(id)arg3 placeName:(id)arg4 traits:(id)arg5 ;
-(void)submitUsageForTraits:(id)arg1 userActionsUsageLogMessage:(id)arg2 eventKey:(int)arg3 ;
-(id)ticketForMapItemToRefine:(id)arg1 traits:(id)arg2 ;
-(id)_ticketForFragment:(id)arg1 entriesType:(int)arg2 listType:(int)arg3 traits:(id)arg4 ;
-(id)ticketForPlaceRefinementRequestWithCoordinate:(SCD_Struct_GE16*)arg1 addressLine:(id)arg2 placeName:(id)arg3 traits:(id)arg4 ;
-(id)ticketForPlaceRefinementRequestParameters:(id)arg1 traits:(id)arg2 ;
-(id)ticketForSearchFieldPlaceholderWithTraits:(id)arg1 ;
-(id)ticketforCategory:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)ticketForSearchCategory:(id)arg1 searchString:(id)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
-(id)ticketForSectionedLocalitiesAndLandmarksSearchFragment:(id)arg1 traits:(id)arg2 ;
-(id)ticketForCategoryListWithTraits:(id)arg1 ;
-(id)ticketForForwardGeocodeString:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)ticketForVendorSpecificPlaceRefinementRequestParameters:(id)arg1 traits:(id)arg2 ;
-(id)ticketForSpotlightCategoryListWithTraits:(id)arg1 ;
-(id)ticketForInterleavedAutoCompleteWithBrowseSearchFragment:(id)arg1 categoryFilter:(id)arg2 traits:(id)arg3 ;
-(id)ticketForSectionedInstantSearchFragment:(id)arg1 traits:(id)arg2 ;
-(id)ticketForBatchReverseGeocodeLocations:(id)arg1 shiftLocationsIfNeeded:(BOOL)arg2 additionalPlaceTypes:(int*)arg3 additionalPlaceTypesCount:(unsigned)arg4 traits:(id)arg5 ;
-(id)ticketForSectionedAutoCompleteSearchFragment:(id)arg1 traits:(id)arg2 ;
-(id)ticketForInterleavedInstantSearchFragment:(id)arg1 traits:(id)arg2 ;
-(id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 maxResults:(unsigned)arg3 suppressResultsRequiringAttribution:(BOOL)arg4 includeETA:(BOOL)arg5 traits:(id)arg6 ;
-(id)ticketForInterleavedAutoCompleteSearchFragment:(id)arg1 traits:(id)arg2 ;
-(id)ticketForInterleavedLocalitiesAndLandmarksSearchFragment:(id)arg1 traits:(id)arg2 ;
-(void)submitUsageForTraits:(id)arg1 flyoverAnimationID:(unsigned long long)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 ;
-(void)trackMapItem:(id)arg1 ;
-(id)_searchable_ticketForReverseGeocodeCoordinate:(SCD_Struct_GE16)arg1 includeEntryPoints:(BOOL)arg2 shiftLocationsIfNeeded:(BOOL)arg3 includeETA:(BOOL)arg4 traits:(id)arg5 ;
-(void)submitUsageForTraits:(id)arg1 suggestionEntryMetadatasDisplayed:(id)arg2 categorySelected:(id)arg3 ;
-(id)ticketForMUIDs:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 includeETA:(BOOL)arg4 traits:(id)arg5 ;
-(void)submitUsageForTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 targetID:(unsigned long long)arg5 transitCardCategory:(int)arg6 transitSystem:(id)arg7 transitIncident:(id)arg8 ;
-(void)submitUsageForTraits:(id)arg1 ;
-(id)ticketForPopularNearbyForSearchCategory:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)ticketForBatchPopularNearbyForSearchCategories:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)ticketForFreshComponents:(id)arg1 muid:(unsigned long long)arg2 resultProviderID:(int)arg3 contentProvider:(id)arg4 traits:(id)arg5 ;
-(id)_geoMapItemForData:(id)arg1 withSource:(unsigned long long)arg2 ;
-(id)_geoMapItemForData:(id)arg1 ;
-(id)_geoMapItemsForPlacesInDetails:(id)arg1 ;
-(void)submitUsageForTraits:(id)arg1 actionDetails:(id)arg2 uiTarget:(int)arg3 ;
-(void)resolveMapItemFromHandle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_geoMapItemsForResponseData:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)submitUsageForTraits:(id)arg1 uiTarget:(int)arg2 ;
-(id)handleForMapItem:(id)arg1 ;
-(id)_preferredLanguages;
-(void)submitUsageForTraits:(id)arg1 actionDetails:(id)arg2 routeDetails:(id)arg3 ;
@end

