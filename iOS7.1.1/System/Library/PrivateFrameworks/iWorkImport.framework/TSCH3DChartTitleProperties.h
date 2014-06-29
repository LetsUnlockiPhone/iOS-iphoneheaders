/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCHChartInfo, TSCH3DLabelResources, TSCH3DChartTitlePositioner;

@interface TSCH3DChartTitleProperties : NSObject {

	TSCHChartInfo* mInfo;
	TSCH3DLabelResources* mLabels;
	bool mHidden;
	TSCH3DChartTitlePositioner* mCachedPositioner;

}

@property (nonatomic,readonly) TSCH3DLabelResources * labels; 
@property (nonatomic,readonly) TSCHChartInfo * chartInfo; 
@property (assign,nonatomic) bool hidden; 
@property (nonatomic,retain) TSCH3DChartTitlePositioner * cachedPositioner; 
+(id)propertiesWithInfo:(id)arg1 styleIndex:(unsigned long long)arg2 ;
-(id)chartInfo;
-(id)initWithInfo:(id)arg1 styleIndex:(unsigned long long)arg2 ;
-(id)cachedPositioner;
-(void)setCachedPositioner:(id)arg1 ;
-(void)dealloc;
-(void)setHidden:(bool)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(bool)hidden;
-(id)labels;
@end
