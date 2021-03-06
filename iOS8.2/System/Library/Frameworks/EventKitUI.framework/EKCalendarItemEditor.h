/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:28 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UITableViewController.h>
#import <EventKitUI/EKCalendarItemEditItemDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol EKCalendarItemEditorDelegate;
@class NSArray, EKUIRecurrenceAlertController, EKCalendarItemEditItem, NSMutableSet, UIBarButtonItem, EKEventStore, EKCalendarItem, UIResponder, _UIAccessDeniedView, NSString;

@interface EKCalendarItemEditor : UITableViewController <EKCalendarItemEditItemDelegate, UIActionSheetDelegate, UIAlertViewDelegate> {

	NSArray* _editItems;
	NSArray* _orderedEditItems;
	id _revertState;
	char _showsTimeZone;
	NSArray* _currentItems;
	EKUIRecurrenceAlertController* _recurrenceAlertController;
	EKCalendarItemEditItem* _currentEditItem;
	char _giveTitleCellKeyboardFocus;
	int _editItemVisibility;
	char _isIgnoringCellHeightChange;
	char _needsCellHeightChange;
	NSMutableSet* _editItemsDisablingDoneButton;
	int _lastAuthorizationStatus;
	char _hasAppeared;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _leftButtonSpacer;
	UIBarButtonItem* _rightButtonSpacer;
	float _leftButtonSpace;
	float _rightButtonSpace;
	char _scrollToNotes;
	char _canHideDoneAndCancelButtons;
	id<EKCalendarItemEditorDelegate> _editorDelegate;
	EKEventStore* _store;
	EKCalendarItem* _calendarItem;
	UIResponder* _responderToRestoreOnAppearence;
	unsigned _visibleSectionToRestoreOnAppearence;
	_UIAccessDeniedView* _accessDeniedView;

}

@property (assign,nonatomic,__weak) id<EKCalendarItemEditorDelegate> editorDelegate;              //@synthesize editorDelegate=_editorDelegate - In the implementation block
@property (nonatomic,retain) EKEventStore * store;                                                //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) EKCalendarItem * calendarItem;                                       //@synthesize calendarItem=_calendarItem - In the implementation block
@property (assign,nonatomic) char scrollToNotes;                                                  //@synthesize scrollToNotes=_scrollToNotes - In the implementation block
@property (nonatomic,retain) UIResponder * responderToRestoreOnAppearence;                        //@synthesize responderToRestoreOnAppearence=_responderToRestoreOnAppearence - In the implementation block
@property (assign,nonatomic) unsigned visibleSectionToRestoreOnAppearence;                        //@synthesize visibleSectionToRestoreOnAppearence=_visibleSectionToRestoreOnAppearence - In the implementation block
@property (assign,nonatomic) char showsTimeZone;                                                  //@synthesize showsTimeZone=_showsTimeZone - In the implementation block
@property (assign,nonatomic) char canHideDoneAndCancelButtons;                                    //@synthesize canHideDoneAndCancelButtons=_canHideDoneAndCancelButtons - In the implementation block
@property (readonly) EKCalendarItemEditItem * currentEditItem;                                    //@synthesize currentEditItem=_currentEditItem - In the implementation block
@property (assign,nonatomic) float navBarLeftContentInset; 
@property (assign,nonatomic) float navBarRightContentInset; 
@property (nonatomic,retain) _UIAccessDeniedView * accessDeniedView;                              //@synthesize accessDeniedView=_accessDeniedView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(EKEventStore *)store;
-(void)setStore:(EKEventStore *)arg1 ;
-(EKCalendarItem *)calendarItem;
-(void)setEditorDelegate:(id<EKCalendarItemEditorDelegate>)arg1 ;
-(void)refreshStartAndEndDates;
-(char)saveWithSpan:(int)arg1 animated:(char)arg2 ;
-(void)cancelEditingWithDelegateNotification:(char)arg1 ;
-(void)completeWithAction:(int)arg1 animated:(char)arg2 ;
-(char)scrollToNotes;
-(void)setScrollToNotes:(char)arg1 ;
-(char)canHideDoneAndCancelButtons;
-(void)setCanHideDoneAndCancelButtons:(char)arg1 ;
-(void)handleTapOutside;
-(void)completeAndSave;
-(char)willPresentDialogOnSave;
-(void)setNavBarLeftContentInset:(float)arg1 ;
-(float)navBarLeftContentInset;
-(void)setNavBarRightContentInset:(float)arg1 ;
-(float)navBarRightContentInset;
-(void)editItem:(id)arg1 textViewShouldReturn:(id)arg2 ;
-(id)viewControllerForEditItem:(id)arg1 ;
-(void)editItemDidStartEditing:(id)arg1 ;
-(void)editItemDidEndEditing:(id)arg1 ;
-(void)editItem:(id)arg1 didCommitFromDetailViewController:(char)arg2 ;
-(void)editItemTextChanged:(id)arg1 ;
-(void)editItemRequiresHeightChange:(id)arg1 ;
-(void)editItem:(id)arg1 wantsKeyboardPinned:(char)arg2 ;
-(void)editItemWantsInjectableViewControllerToBeShown:(id)arg1 ;
-(void)_localeChanged;
-(void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 ;
-(void)editItem:(id)arg1 wantsDoneButtonDisabled:(char)arg2 ;
-(void)editItemRequiresPopoverSizeUpdate:(id)arg1 ;
-(void)setCalendarItem:(EKCalendarItem *)arg1 ;
-(id)preferredTitle;
-(unsigned)tableSectionForEditItem:(id)arg1 ;
-(void)refreshInvitees;
-(void)refreshLocation;
-(void)deleteClicked:(id)arg1 ;
-(id)_editItems;
-(EKCalendarItemEditItem *)currentEditItem;
-(id)_orderedEditItems;
-(char)saveCalendarItemWithSpan:(int)arg1 error:(id*)arg2 ;
-(id)defaultTitleForCalendarItem;
-(id)_nameForDeleteButton;
-(void)setupDeleteButton;
-(id)defaultAlertTitle;
-(id)notificationNamesForLocaleChange;
-(void)_copyEventForPossibleRevert;
-(void)_revertEvent;
-(char)_canDetachSingleOccurrence;
-(id)_viewForSheet;
-(id)defaultAlertTitleForEditItem:(id)arg1 ;
-(int)rowNumberForEditItem:(id)arg1 ;
-(void)editItem:(id)arg1 wantsRowReload:(id)arg2 ;
-(void)prepareEditItems;
-(void)setEditItemVisibility:(int)arg1 animated:(char)arg2 ;
-(char)shouldDisplayEditItem:(id)arg1 withVisibility:(int)arg2 ;
-(void)customizeActionSheet:(id)arg1 ;
-(char)allowsDeletingFutureOccurrences;
-(_UIAccessDeniedView *)accessDeniedView;
-(void)setAccessDeniedView:(_UIAccessDeniedView *)arg1 ;
-(void)tableViewDidStartReload:(id)arg1 ;
-(void)storeChanged:(id)arg1 ;
-(void)setupForEvent;
-(void)_tableViewWillUpdateHeights;
-(void)_tableViewDidUpdateHeights;
-(void)_configureVisibleItems;
-(void)_updateCurrentEditItemsFromVisibility:(int)arg1 toVisibility:(int)arg2 animated:(char)arg3 ;
-(void)setResponderToRestoreOnAppearence:(UIResponder *)arg1 ;
-(unsigned)visibleSectionToRestoreOnAppearence;
-(void)setVisibleSectionToRestoreOnAppearence:(unsigned)arg1 ;
-(void)_setWantsToEnableDoneButton:(char)arg1 ;
-(UIResponder *)responderToRestoreOnAppearence;
-(void)_pinKeyboard:(char)arg1 ;
-(void)_setShowingAccessDeniedView:(char)arg1 showSettingsInstructions:(char)arg2 ;
-(void)_keyboardWillHide;
-(void)_completeWithAction:(int)arg1 animated:(char)arg2 notify:(char)arg3 ;
-(void)_presentDetachSheet;
-(char)_performSave:(int)arg1 animated:(char)arg2 ;
-(void)_setCalendarItemOnEditItems;
-(char)_canEnableDoneButton;
-(void)_setDoneAndCancelButtonVisible:(char)arg1 ;
-(void)_setWantsToEnableDoneButtonAfterTextChanged;
-(void)_reallyHandleCellHeightChange;
-(int)firstTableRowForEditItem:(id)arg1 ;
-(void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 rowReloads:(id)arg4 ;
-(id)_editItemAtIndexPath:(id)arg1 firstRowIndex:(int*)arg2 ;
-(void)_performDelete:(int)arg1 ;
-(void)editItem:(id)arg1 performActionsOnCellAtSubitem:(unsigned)arg2 actions:(/*^block*/id)arg3 ;
-(void)editItem:(id)arg1 wantsRowsScrolledToVisible:(id)arg2 ;
-(int)editItemVisibility;
-(id<EKCalendarItemEditorDelegate>)editorDelegate;
-(char)showsTimeZone;
-(void)setShowsTimeZone:(char)arg1 ;
-(unsigned)entityType;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)applicationDidResume;
-(unsigned)supportedInterfaceOrientations;
-(void)tableViewDidFinishReload:(id)arg1 ;
-(CGSize)preferredContentSize;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)done:(id)arg1 ;
-(void)_keyboardWillChangeFrame:(id)arg1 ;
-(void)cancel:(id)arg1 ;
@end

