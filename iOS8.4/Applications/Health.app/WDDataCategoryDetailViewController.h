/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:34 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIViewControllerRestoration.h>

@class NSArray, WDControllerManager, UITableView, NSString;

@interface WDDataCategoryDetailViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIViewControllerRestoration> {

	NSArray* _dataUnitGroups;
	WDControllerManager* _controllerManager;
	UITableView* _tableView;
	char _showListIcon;

}

@property (assign,nonatomic) char showListIcon;                     //@synthesize showListIcon=_showListIcon - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(id)initWithDataUnitGroups:(id)arg1 controllerManager:(id)arg2 ;
-(char)showListIcon;
-(void)setShowListIcon:(char)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
@end
