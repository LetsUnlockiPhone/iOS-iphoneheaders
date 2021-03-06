/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:47:17 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKCalendarItemEditor.h>

@class EKEventDateEditItem, UIColor, EKEvent;

@interface EKEventEditor : EKCalendarItemEditor {

	EKEventDateEditItem* _dateItem;
	char _isTransitioning;
	char _showAttachments;
	UIColor* _backgroundColor;

}

@property (nonatomic,retain) EKEvent * event; 
@property (assign,nonatomic) char showAttachments;                   //@synthesize showAttachments=_showAttachments - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(void)refreshStartAndEndDates;
-(char)showAttachments;
-(void)setShowAttachments:(char)arg1 ;
-(id)preferredTitle;
-(id)_calendarItemIndexSet;
-(void)refreshInvitees;
-(void)refreshLocation;
-(id)_editItems;
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
-(unsigned)entityType;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(char)shouldAutorotate;
-(CGSize)preferredContentSize;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)setEvent:(EKEvent *)arg1 ;
-(EKEvent *)event;
@end

