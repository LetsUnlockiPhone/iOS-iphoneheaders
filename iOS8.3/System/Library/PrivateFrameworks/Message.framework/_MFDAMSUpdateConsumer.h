/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:30:11 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/_MFDAMSBasicConsumer.h>
#import <Message/MFDASyncActionsConsumer.h>

@interface _MFDAMSUpdateConsumer : _MFDAMSBasicConsumer <MFDASyncActionsConsumer>
-(char)handleItems:(id)arg1 ;
-(void)handleResponse:(id)arg1 error:(id)arg2 ;
-(void)drainMailbox;
-(void)receiveSyncActions:(id)arg1 ;
-(void)commitSyncActions;
@end
