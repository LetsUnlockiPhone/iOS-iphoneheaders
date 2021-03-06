/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:47:07 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKRecurrenceChooserController.h>
#import <EventKitUI/EKUIDividedGridViewControllerDelegate.h>

@class EKUIDividedGridViewTableViewCell, NSString;

@interface EKRecurrenceGridChooserController : EKRecurrenceChooserController <EKUIDividedGridViewControllerDelegate> {

	EKUIDividedGridViewTableViewCell* _tableViewCell;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)gridViewType;
-(id)cellLabels;
-(id)tableViewCell;
-(id)allCells;
-(void)refreshCells;
-(void)selectCell:(id)arg1 atIndex:(int)arg2 ;
-(void)dividedGridViewControllerDidLayout:(id)arg1 ;
-(void)dividedGridViewController:(id)arg1 didSelectCell:(id)arg2 atIndex:(int)arg3 ;
-(id)cellForRow:(int)arg1 ;
-(float)heightForRow:(int)arg1 ;
-(char)drawBackgroundForRow:(int)arg1 ;
-(void)prepareForDisplay;
@end

