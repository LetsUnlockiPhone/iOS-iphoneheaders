/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:42 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKit.framework/Support/calaccessd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol CalSearchDataSink <NSObject>
@optional
-(BOOL)calSearchShouldStopSearching:(id)arg1;
-(void)calSearch:(id)arg1 showResultsStartingOnDate:(double)arg2;

@required
-(void)calSearchComplete:(id)arg1;
-(void)calSearch:(id)arg1 foundOccurrences:(CFArrayRef)arg2 cachedDays:(CFArrayRef)arg3 cachedDaysIndexes:(CFArrayRef)arg4;

@end
