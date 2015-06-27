/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:24 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface EKAvailabilityCachedSpanRange : NSObject {

	NSMutableArray* _cachedSpans;

}
+(id)_clampDateRangeForSpans:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
+(id)_generateCachedSpansFromSpans:(id)arg1 ;
-(char)_rangeCompletelyCoversPeriodBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)_validateCachedSpansIfDebugLoggingIsEnabled;
-(id)gatherFreshlyCachedSpansBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)injectSpans:(id)arg1 ;
-(id)spans;
-(void)dealloc;
-(id)init;
-(id)description;
@end
