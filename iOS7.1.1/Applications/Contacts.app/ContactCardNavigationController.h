/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Contacts.app/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <UIKit/UINavigationController.h>
#import <AddressBookUI/ABNewPersonViewControllerDelegate.h>
#import <AddressBookUI/ABContactViewControllerDelegate.h>
#import <AddressBookUI/ABPresenterDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class ContactCardViewController, UIPopoverController, CNContact;

@interface ContactCardNavigationController : UINavigationController <ABNewPersonViewControllerDelegate, ABContactViewControllerDelegate, ABPresenterDelegate, UIPopoverControllerDelegate> {

	ContactCardViewController* _contactViewController;
	UIPopoverController* _presentedPopover;

}

@property (nonatomic,readonly) CNContact * displayedContact; 
@property (assign,nonatomic,__weak) <ContactCardNavigationControllerDelegate><UINavigationControllerDelegate> * delegate; 
@property (nonatomic,retain) ContactCardViewController * contactViewController;                                                        //@synthesize contactViewController=_contactViewController - In the implementation block
@property (nonatomic,retain) UIPopoverController * presentedPopover;                                                                   //@synthesize presentedPopover=_presentedPopover - In the implementation block
@property (readonly) BOOL isPresentingModalViewController; 
-(id)displayedContact;
-(void)showContact:(id)arg1 ;
-(BOOL)_shouldPresentViewControllerFullscreen:(id)arg1 ;
-(id)presentedPopover;
-(void)setPresentedPopover:(id)arg1 ;
-(void)presentNewPersonViewControllerInGroup:(void*)arg1 source:(void*)arg2 ;
-(id)initWithRecord:(void*)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(id)contactViewController;
-(void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2 ;
-(void)sender:(id)arg1 presentActionSheet:(id)arg2 ;
-(void)sender:(id)arg1 presentViewController:(id)arg2 ;
-(void)sender:(id)arg1 dismissViewController:(id)arg2 ;
-(BOOL)isPresentingModalViewController;
-(void)contactViewController:(id)arg1 didDeleteContact:(id)arg2 ;
-(void)setContactViewController:(id)arg1 ;
-(void)viewDidLoad;
-(void).cxx_destruct;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
@end
