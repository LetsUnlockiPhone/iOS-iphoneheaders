/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DADaemonSubCal.bundle/DADaemonSubCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <DADaemonSubCal/DADaemonSubCal-Structs.h>
@class ICSCalendar, NSMutableSet;

@interface SubCalChangeTracker : NSObject {

	ICSCalendar* _icsCalendar;
	CFSetRef _existingEventTags;
	NSMutableSet* _icsEvents;
	bool _forcedRefresh;

}

@property (nonatomic,retain) ICSCalendar * icsCalendar;              //@synthesize icsCalendar=_icsCalendar - In the implementation block
@property (assign) bool forcedRefresh;                               //@synthesize forcedRefresh=_forcedRefresh - In the implementation block
-(void)dealloc;
-(void)reset;
-(void)setForcedRefresh:(bool)arg1 ;
-(bool)forcedRefresh;
-(void)populateExistingEventsFromCalendar:(void*)arg1 ;
-(bool)shouldSaveEvent:(id)arg1 withComponentKey:(id)arg2 ;
-(void)removeNonexistingEventsFromCalendar:(void*)arg1 ;
-(id)icsCalendar;
-(void)setIcsCalendar:(id)arg1 ;
@end

