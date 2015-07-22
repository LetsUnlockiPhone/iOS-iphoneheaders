/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:14 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FUChartDataSetDataSource;
@class NSArray;

@interface FUChartDataSet : NSObject {

	NSArray* _data;
	NSArray* _labels;
	id<FUChartDataSetDataSource> _dataSource;
	long long _tag;

}

@property (assign,nonatomic,__weak) id<FUChartDataSetDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) long long tag;                                               //@synthesize tag=_tag - In the implementation block
-(void)setDataSource:(id<FUChartDataSetDataSource>)arg1 ;
-(void)reloadData;
-(id)description;
-(id<FUChartDataSetDataSource>)dataSource;
-(long long)tag;
-(void)setTag:(long long)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(id)minXValue;
-(id)maxXValue;
-(void)normalizeDataWithMinYValue:(id)arg1 maxYValue:(id)arg2 minXValue:(id)arg3 maxXValue:(id)arg4 ;
-(unsigned long long)_getNumberOfDataPoints;
-(id)_getChartPointAtIndex:(unsigned long long)arg1 ;
-(id)_getLabels;
-(id)_getPointAtIndex:(unsigned long long)arg1 ;
-(id)_getPoints;
-(unsigned long long)numDataPoints;
-(id)yValueForPointAtIndex:(unsigned long long)arg1 ;
-(id)yValueForPointAtIndex:(unsigned long long)arg1 key:(id)arg2 ;
-(id)xValueForPointAtIndex:(unsigned long long)arg1 ;
-(id)labelsForPointAtIndex:(unsigned long long)arg1 ;
-(id)labelsForSet;
-(void)normalizeData;
-(void)reloadDataPointAtIndex:(unsigned long long)arg1 ;
-(void)addDataPointWithXValue:(id)arg1 yValue:(id)arg2 ;
-(void)removeDataPointAtIndex:(unsigned long long)arg1 ;
-(id)_getChartPoints;
-(id)pointAtIndex:(unsigned long long)arg1 ;
@end
