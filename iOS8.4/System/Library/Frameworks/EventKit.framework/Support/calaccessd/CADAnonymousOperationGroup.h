/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:42 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKit.framework/Support/calaccessd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <calaccessd/CADOperationGroup.h>
#import <calaccessd/CADAnonymousInterface.h>

@interface CADAnonymousOperationGroup : CADOperationGroup <CADAnonymousInterface>
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
-(void)CADGetAccessStatusForEntityType:(int)arg1 reply:(/*^block*/id)arg2 ;
@end
