/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:58 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren, CoreDAVLeafItem, CalDAVCalendarServerChangesItem;

@interface CalDAVCalendarServerRecurrenceItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _master;
	CoreDAVLeafItem* _recurrenceID;
	CalDAVCalendarServerChangesItem* _changes;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * master;                     //@synthesize master=_master - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * recurrenceID;                         //@synthesize recurrenceID=_recurrenceID - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerChangesItem * changes;              //@synthesize changes=_changes - In the implementation block
@property (nonatomic,readonly) BOOL isMaster; 
-(BOOL)isMaster;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setMaster:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)master;
-(CalDAVCalendarServerChangesItem *)changes;
-(void)setChanges:(CalDAVCalendarServerChangesItem *)arg1 ;
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(id)copyParseRules;
-(void)setRecurrenceID:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVLeafItem *)recurrenceID;
@end

