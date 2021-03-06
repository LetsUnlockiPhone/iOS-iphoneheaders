/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:00:49 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/Plugins/ChatKitAssistant.assistantBundle/ChatKitAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObjectCommit.h>
#import <ChatKitAssistant/AFServiceCommand.h>

@class NSDate, NSString;

@interface CKAssistantSMSSend : SADomainObjectCommit <AFServiceCommand> {

	NSDate* _dateSent;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sendSMS:(id)arg1 toAddresses:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_connectToDaemonIfNeeded;
-(id)_getAddressesFromRecipients:(id)arg1 ;
-(id)_validateSMS:(id)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(id)errorWithDescription:(id)arg1 ;
@end

