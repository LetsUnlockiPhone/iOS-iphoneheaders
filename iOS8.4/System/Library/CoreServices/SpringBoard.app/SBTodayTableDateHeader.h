/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:29 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSString;

@interface SBTodayTableDateHeader : NSObject {

	BOOL _shouldSuperscriptOrdinal;
	NSString* _dateString;
	NSRange _ordinalRange;

}

@property (readonly) NSString * dateString;                      //@synthesize dateString=_dateString - In the implementation block
@property (readonly) NSRange ordinalRange;                       //@synthesize ordinalRange=_ordinalRange - In the implementation block
@property (readonly) BOOL shouldSuperscriptOrdinal;              //@synthesize shouldSuperscriptOrdinal=_shouldSuperscriptOrdinal - In the implementation block
+(id)dateHeaderWithDate:(id)arg1 locale:(id)arg2 singleLine:(BOOL)arg3 ;
-(id)initWithDateString:(id)arg1 ordinalRange:(NSRange)arg2 shouldSuperscriptOrdinal:(BOOL)arg3 ;
-(NSRange)ordinalRange;
-(BOOL)shouldSuperscriptOrdinal;
-(void)dealloc;
-(NSString *)dateString;
@end

