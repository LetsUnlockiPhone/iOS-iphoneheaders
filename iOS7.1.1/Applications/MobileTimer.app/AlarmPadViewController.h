/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <MobileTimer/EditAlarmViewControllerDelegate.h>
#import <MobileTimer/AlarmDelegate.h>
#import <MobileTimer/AlarmActiveDelegate.h>
#import <MobileTimer/StateManagement.h>

@class UIPopoverController, EditAlarmViewController, AlarmCollectionEditController, UILongPressGestureRecognizer, Alarm, CADisplayLink;

@interface AlarmPadViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIPopoverControllerDelegate, UIGestureRecognizerDelegate, EditAlarmViewControllerDelegate, AlarmDelegate, AlarmActiveDelegate, StateManagement> {

	UIPopoverController* _addOrEditPopover;
	EditAlarmViewController* _addController;
	AlarmCollectionEditController* _editListController;
	CGRect _previousAlarmsViewport;
	UILongPressGestureRecognizer* _alarmDragRecognizer;
	Alarm* _draggingAlarm;
	CADisplayLink* _dragScrollDisplayLink;
	BOOL _dragScrollingUp;
	double _dragScrollTimestamp;

}
-(void)showAddView;
-(void)dismissAddViewController:(id)arg1 ;
-(void)activeChangedForAlarm:(id)arg1 active:(BOOL)arg2 ;
-(void)didEditAlarm:(id)arg1 ;
-(void)didDeleteAlarm:(id)arg1 ;
-(void)didSuspend;
-(id)selectedAlarm;
-(void)refreshButtonStates;
-(void)showEditView;
-(void)selectAlarm:(id)arg1 scroll:(BOOL)arg2 ;
-(void)handleAlarmDrag:(id)arg1 ;
-(void)beginAlarmDrag;
-(void)updateAlarmDrag;
-(void)endAlarmDragAndSave:(BOOL)arg1 ;
-(void)scrollAlarmSchedule:(id)arg1 ;
-(void)commitAddOrEditOperation;
-(void)cleanUpPopover;
-(void)dealloc;
-(id)init;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)contentView;
-(void)viewDidLayoutSubviews;
-(BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewDidUnload;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(id)defaultPNGName;
-(BOOL)popoverControllerShouldDismissPopover:(id)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)reloadState;
-(void)alarmDidUpdate:(id)arg1 ;
-(void)saveState;
@end
