/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/WDRun.h>

@class WDCharacterProperties, NSDate;

@interface WDDateTime : WDRun {

	WDCharacterProperties* mProperties;
	NSDate* mDate;

}
-(void)dealloc;
-(id)date;
-(id)properties;
-(void)setProperties:(id)arg1 ;
-(int)runType;
-(void)clearProperties;
-(id)initWithParagraph:(id)arg1 date:(id)arg2 ;
@end

