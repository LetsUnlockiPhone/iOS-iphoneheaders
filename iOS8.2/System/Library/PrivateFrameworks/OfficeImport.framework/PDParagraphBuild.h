/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:41 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/PDBuild.h>

@class NSMutableArray;

@interface PDParagraphBuild : PDBuild {

	NSMutableArray* mTimeNodeDataList;
	double mAutoAdvanceTime;
	char mIsReversedParagraphOrder;
	int mBuildLevel;
	int mType;

}
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(double)autoAdvanceTime;
-(char)isReversedParagraphOrder;
-(int)buildLevel;
-(id)timeNodeDataList;
-(unsigned)timeNodeDataListCount;
-(id)timeNodeDataAtIndex:(unsigned)arg1 ;
-(id)addTimeNodeData;
-(void)setAutoAdvanceTime:(double)arg1 ;
-(void)setIsReversedParagraphOrder:(char)arg1 ;
-(void)setBuildLevel:(int)arg1 ;
@end

