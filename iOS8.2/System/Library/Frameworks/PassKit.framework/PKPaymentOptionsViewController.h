/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:46 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <PassKit/ABPeoplePickerNavigationControllerDelegate.h>
#import <PassKit/ABPostalAddressEditorDelegate.h>

@protocol PKPaymentOptionsViewControllerDelegate;
@class PKPaymentOptionsModel, ABPostalAddressEditorNavigationController, PKPassSnapshotter, NSString;

@interface PKPaymentOptionsViewController : UITableViewController <ABPeoplePickerNavigationControllerDelegate, ABPostalAddressEditorDelegate> {

	PKPaymentOptionsModel* _optionsModel;
	int _optionsStyle;
	ABPostalAddressEditorNavigationController* _addressEditorViewController;
	PKPassSnapshotter* _passSnapshotter;
	NSString* _title;
	id<PKPaymentOptionsViewControllerDelegate> _delegate;
	/*^block*/id _pickedABPropertyHandler;

}

@property (assign,nonatomic) id<PKPaymentOptionsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id pickedABPropertyHandler;                                         //@synthesize pickedABPropertyHandler=_pickedABPropertyHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)postalAddressEditorDidCancel:(id)arg1 ;
-(void)postalAddressEditor:(id)arg1 finishedEditingProperty:(int)arg2 contact:(id)arg3 ;
-(void)postalAddressEditor:(id)arg1 finishedEditingContact:(id)arg2 ;
-(id)initWithTitle:(id)arg1 optionsStyle:(int)arg2 ;
-(void)setPaymentPassOptions:(id)arg1 selectedIndex:(int)arg2 optionsChangedHandler:(/*^block*/id)arg3 ;
-(void)setBillingAddressOptions:(id)arg1 selectedIndex:(int)arg2 optionsChangedHandler:(/*^block*/id)arg3 ;
-(void)setShippingAddressOptions:(id)arg1 selectedIndex:(int)arg2 optionsChangedHandler:(/*^block*/id)arg3 ;
-(void)setEmailOptions:(id)arg1 selectedIndex:(int)arg2 optionsChangedHandler:(/*^block*/id)arg3 ;
-(void)setPhoneOptions:(id)arg1 selectedIndex:(int)arg2 optionsChangedHandler:(/*^block*/id)arg3 ;
-(void)setShippingMethods:(id)arg1 currencyCode:(id)arg2 selectedIndex:(int)arg3 optionsChangedHandler:(/*^block*/id)arg4 ;
-(void)_handleDone:(id)arg1 ;
-(void)_showAddressEntryViewControllerForOptionsGroup:(id)arg1 ;
-(void)_showABPickerForPropertyID:(int)arg1 optionsGroup:(id)arg2 ;
-(void)_showEntryViewControllerForPropertyID:(int)arg1 optionsGroup:(id)arg2 ;
-(id)_passSnapshotter;
-(void)setPickedABPropertyHandler:(id)arg1 ;
-(char)_presentedModally;
-(id)pickedABPropertyHandler;
-(void)dealloc;
-(void)setDelegate:(id<PKPaymentOptionsViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id<PKPaymentOptionsViewControllerDelegate>)delegate;
-(id)title;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
@end

