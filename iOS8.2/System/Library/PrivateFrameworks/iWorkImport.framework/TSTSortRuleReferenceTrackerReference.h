/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:18 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TSCETrackedReference;

@interface TSTSortRuleReferenceTrackerReference : NSObject {

	unsigned char mColumnIndex;
	TSCETrackedReference* mTrackedReference;

}

@property (assign,nonatomic) unsigned char columnIndex; 
@property (nonatomic,retain) TSCETrackedReference * trackedReference; 
+(id)referenceWithColumnIndex:(unsigned char)arg1 trackedReference:(id)arg2 ;
-(char)hasTrackedReferenceEqualTo:(id)arg1 ;
-(id)initWithColumnIndex:(unsigned char)arg1 trackedReference:(id)arg2 ;
-(TSCETrackedReference *)trackedReference;
-(void)setTrackedReference:(TSCETrackedReference *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setColumnIndex:(unsigned char)arg1 ;
-(unsigned char)columnIndex;
@end

