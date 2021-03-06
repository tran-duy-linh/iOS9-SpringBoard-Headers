/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:18 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>

@class EKCalendar, UITableViewCell;

@interface EKEventCalendarDetailItem : EKEventDetailItem {

	EKCalendar* _calendar;
	UITableViewCell* _cell;

}
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(BOOL)hasDetailViewControllerAtIndex:(unsigned long long)arg1 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(void)_contentSizeCategoryChanged:(id)arg1 ;
-(BOOL)editItemViewControllerCommit:(id)arg1 ;
-(BOOL)_calendarCanBeChanged;
-(void)dealloc;
-(id)init;
-(void)reset;
@end

