/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIAlertControllerContaining.h>

@protocol OS_dispatch_semaphore;
@class UIAlertController, _UIResilientRemoteViewContainerViewController, NSObject, NSString;

@interface _UIScreenRoutePickerViewController : UIViewController <UIAlertControllerContaining> {

	UIAlertController* _alertController;
	_UIResilientRemoteViewContainerViewController* _childViewController;
	NSObject*<OS_dispatch_semaphore> _remoteViewControllerSemaphore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(long long)modalPresentationStyle;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)_setChildViewController:(id)arg1 ;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(id)remoteViewController;
-(void)_commonInitWithCompletion:(/*^block*/id)arg1 ;
-(id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(BOOL)_requiresCustomPresentationController;
-(id)_containedAlertController;
-(void)disconnectRoute;
-(void)setCurrentOutputDeviceEnabled:(BOOL)arg1 ;
@end

