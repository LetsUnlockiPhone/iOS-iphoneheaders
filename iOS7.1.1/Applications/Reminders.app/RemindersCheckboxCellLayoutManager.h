/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <UIKit/UITableViewCellLayoutManager.h>

@interface RemindersCheckboxCellLayoutManager : UITableViewCellLayoutManager {

	id _realLayoutManager;

}
+(id)sharedLayoutManager;
-(CGRect)reorderControlEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(CGRect)reorderControlStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(CGRect)contentEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(CGRect)editControlEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(BOOL)editControlShouldFadeForCell:(id)arg1 ;
-(BOOL)reorderControlShouldFadeForCell:(id)arg1 ;
-(CGRect)editControlStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(CGRect)contentStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(void).cxx_destruct;
@end
