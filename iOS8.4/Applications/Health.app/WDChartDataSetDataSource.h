/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:34 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WDChartDataSetDataSource <NSObject>
@optional
-(id)dataSet:(id)arg1 annotationForPointAtIndex:(unsigned)arg2;
-(id)dataPointsForSet:(id)arg1;

@required
-(unsigned)numberOfDataPointsForDataSet:(id)arg1;
-(id)dataSet:(id)arg1 chartPointForIndex:(unsigned)arg2;

@end

