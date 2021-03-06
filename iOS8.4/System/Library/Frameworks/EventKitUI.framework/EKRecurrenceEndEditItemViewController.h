/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:46 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <EventKitUI/EKCellShortener.h>

@class PreferencesValueCell, NSDate, UITableView, UIDatePicker, UITableViewCell, NSString;

@interface EKRecurrenceEndEditItemViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate, EKCellShortener> {

	PreferencesValueCell* _dateCell;
	NSDate* _preNeverEndDate;
	NSDate* _minimumEndDate;
	int _shorteningStatus;
	unsigned _updatingPicker : 1;
	UITableView* _table;
	UIDatePicker* _datePicker;
	UITableViewCell* _datePickerCell;
	NSDate* _repeatEndDate;
	NSDate* _bestInitialDate;

}

@property (nonatomic,copy) NSDate * repeatEndDate;                  //@synthesize repeatEndDate=_repeatEndDate - In the implementation block
@property (nonatomic,copy) NSDate * bestInitialDate;                //@synthesize bestInitialDate=_bestInitialDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 ;
-(void)shortenCell:(id)arg1 ;
-(void)_localeChanged;
-(void)setBestInitialDate:(NSDate *)arg1 ;
-(void)setRepeatEndDate:(NSDate *)arg1 ;
-(void)setMinimumEndDate:(id)arg1 ;
-(NSDate *)repeatEndDate;
-(void)applyMinimumEndDateToPicker;
-(void)updatePicker;
-(id)_stringForEndDate;
-(id)_cellForRow:(long long)arg1 ;
-(void)_updateSelectionForCell:(id)arg1 atRow:(long long)arg2 ;
-(id)_endDateStringForCurrentShorteningStatus;
-(BOOL)fitsPopoverWhenKeyboardActive;
-(NSDate *)bestInitialDate;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)datePickerChanged:(id)arg1 ;
@end

