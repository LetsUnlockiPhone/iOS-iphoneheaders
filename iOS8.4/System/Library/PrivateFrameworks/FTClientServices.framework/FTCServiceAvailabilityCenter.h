/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:10 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FTClientServices.framework/FTClientServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FTCServiceAvailabilityCenter : NSObject {

	NSMutableDictionary* _availabilityHandlers;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(BOOL)addListenerID:(id)arg1 forService:(long long)arg2 ;
-(BOOL)removeListenerID:(id)arg1 forService:(long long)arg2 ;
-(long long)availabilityForListenerID:(id)arg1 forService:(long long)arg2 ;
-(BOOL)hasListenerID:(id)arg1 forService:(long long)arg2 ;
-(void)_postNotificationForService:(long long)arg1 availability:(long long)arg2 ;
-(void)_handleServiceMonitorNotification:(id)arg1 ;
-(BOOL)_isValidServiceType:(long long)arg1 ;
-(void)_startListeningToMonitor:(id)arg1 ;
-(id)containerForService:(long long)arg1 create:(BOOL)arg2 ;
-(void)_stopListeningToMonitor:(id)arg1 ;
@end
