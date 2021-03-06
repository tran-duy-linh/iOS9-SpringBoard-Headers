/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:41 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertController.h>

@protocol CKAlertControllerDelegate;
@interface CKAlertController : UIAlertController {

	id<CKAlertControllerDelegate> _alertDelegate;

}

@property (assign,nonatomic) id<CKAlertControllerDelegate> alertDelegate;              //@synthesize alertDelegate=_alertDelegate - In the implementation block
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)allowsRotation;
-(id<CKAlertControllerDelegate>)alertDelegate;
-(void)setAlertDelegate:(id<CKAlertControllerDelegate>)arg1 ;
@end

