/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:21:44 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebUI/WBSHistory.h>

@interface WBUHistory : WBSHistory
-(id)init;
-(Class)_historyItemClass;
-(id)_createHistoryStore;
-(void)_removeAllVisitedLinks;
-(void)_addVisitedLinksForItemsIfNeeded:(id)arg1 ;
-(char)historyStoreShouldCheckDatabaseIntegrity:(id)arg1 ;
-(void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg1 ;
@end
