/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PrototypeTools/PTSRowTableViewCell.h>

@class UIButton;

@interface PTSDrillDownRowTableViewCell : PTSRowTableViewCell {

	UIButton* _actionButton;

}
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateCellCharacteristics;
-(void)_createActionButton;
-(void)_destroyActionButton;
-(void)_actionPress;
@end

