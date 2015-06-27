/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASRecurrence.h>
#import <CoreFoundation/NSCoding.h>

@class ASToDo, NSDate, NSNumber;

@interface ASToDoRecurrence : ASRecurrence <NSCoding> {

	ASToDo* _parentToDo;
	NSDate* _startTime;
	NSNumber* _regenerate;
	NSNumber* _deadOccur;

}

@property (retain) NSDate * startTime;                 //@synthesize startTime=_startTime - In the implementation block
@property (retain) NSNumber * regenerate;              //@synthesize regenerate=_regenerate - In the implementation block
@property (retain) NSNumber * deadOccur;               //@synthesize deadOccur=_deadOccur - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setStartTime:(id)arg1 ;
-(id)startTime;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(id)initWithCalRecurrence:(void*)arg1 parentToDo:(id)arg2 ;
-(void)setDeadOccur:(id)arg1 ;
-(void)saveToCalendarWithParentASToDo:(id)arg1 existingRecord:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 ;
-(void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2 ;
-(void)setUntilString:(id)arg1 ;
-(void)setStartTimeString:(id)arg1 ;
-(void)setRegenerate:(id)arg1 ;
-(id)regenerate;
-(id)deadOccur;
-(BOOL)_requiresParentEvent;
-(id)_untilDateForCalFrameworkWithParentStartDate:(id)arg1 ;
-(id)_transformedUntilDateForActiveSync:(id)arg1 ;
@end
