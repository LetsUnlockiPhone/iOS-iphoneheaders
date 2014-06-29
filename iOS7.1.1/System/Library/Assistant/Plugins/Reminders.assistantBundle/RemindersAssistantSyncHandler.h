/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/Plugins/Reminders.assistantBundle/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AFSyncHandler.h>

@class EKEventStore, NSString, NSMutableArray;

@interface RemindersAssistantSyncHandler : NSObject <AFSyncHandler> {

	EKEventStore* _eventStore;
	NSString* _finalAnchor;
	NSMutableArray* _postAnchors;
	NSMutableArray* _domainObjects;

}
-(id)identifierForCalendar:(id)arg1 ;
-(void)syncDidEnd;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 forKey:(id)arg3 beginInfo:(id)arg4 ;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(id)calculateFinalAnchor:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
@end
