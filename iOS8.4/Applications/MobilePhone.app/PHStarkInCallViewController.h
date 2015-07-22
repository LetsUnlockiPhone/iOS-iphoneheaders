/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:52 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <MobilePhone/TPStarkInCallViewControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class UIViewController, UIView, TPStarkInCallViewController, PHStarkHardwareControlsBroadcaster, NSString;

@interface PHStarkInCallViewController : SBUIRemoteAlertServiceViewController <UIGestureRecognizerDelegate, TPStarkInCallViewControllerDelegate, UINavigationControllerDelegate> {

	char _nextBackDismissesNavController;
	UIViewController* _contactsViewController;
	UIView* _flippyViewContainer;
	TPStarkInCallViewController* _mainInCallViewController;
	PHStarkHardwareControlsBroadcaster* _hardwareControlBroadcaster;

}

@property (retain) UIView * flippyViewContainer;                                                 //@synthesize flippyViewContainer=_flippyViewContainer - In the implementation block
@property (retain) TPStarkInCallViewController * mainInCallViewController;                       //@synthesize mainInCallViewController=_mainInCallViewController - In the implementation block
@property (retain) PHStarkHardwareControlsBroadcaster * hardwareControlBroadcaster;              //@synthesize hardwareControlBroadcaster=_hardwareControlBroadcaster - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)latestInCallViewController;
-(void)updateTPInCallControllerPhoneCalls;
-(TPStarkInCallViewController *)mainInCallViewController;
-(void)setFlippyViewContainer:(UIView *)arg1 ;
-(UIView *)flippyViewContainer;
-(void)setMainInCallViewController:(TPStarkInCallViewController *)arg1 ;
-(void)currentCallsChangedNotification:(id)arg1 ;
-(void)conferencedCallsChangedNotification:(id)arg1 ;
-(void)incomingCallChangedNotification:(id)arg1 ;
-(void)animateOutIfNecessary;
-(void)queueUpdateToTPIncallControllerPhoneCalls;
-(char)activePhoneCallExists;
-(void)cancelAddCallViewController:(id)arg1 ;
-(void)backPressed:(id)arg1 ;
-(void)dealloc;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)preferredFocusedItem;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)dismissViewControllerAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3 ;
-(void)screenDidDisconnectNotification:(id)arg1 ;
-(void)muteStateChangedNotification:(id)arg1 ;
-(void)presentAddCallViewControllerRequestedFromInCallViewController:(id)arg1 ;
-(void)presentKeypadViewControllerRequestedFromInCallViewController:(id)arg1 ;
-(void)dismissalRequestedFromInCallViewController:(id)arg1 ;
-(void)hardwareControlEventNotification:(id)arg1 ;
-(PHStarkHardwareControlsBroadcaster *)hardwareControlBroadcaster;
-(void)setHardwareControlBroadcaster:(PHStarkHardwareControlsBroadcaster *)arg1 ;
@end
