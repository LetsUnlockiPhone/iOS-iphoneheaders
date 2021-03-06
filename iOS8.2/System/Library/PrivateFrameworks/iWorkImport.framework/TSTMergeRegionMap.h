/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:17 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@interface TSTMergeRegionMap : TSPObject {

	hash_map<TSUColumnRowCoordinate, TSUColumnRowCoordinate, TSTCellIDHasher, std::__1::equal_to<TSUColumnRowCoordinate>, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, TSUColumnRowCoordinate> > >* mCellIDToMergeRegionTopLeft;
	hash_map<TSUColumnRowCoordinate, TSUColumnRowSize, TSTCellIDHasher, std::__1::equal_to<TSUColumnRowCoordinate>, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, TSUColumnRowSize> > >* mMergeRegionTopLeftToMergeRegionSize;
	SCD_Struct_TS491 mUnionedMergeRange;

}
+(id)mergeRegionMapFromMap:(id)arg1 intersectingRange:(SCD_Struct_TS491)arg2 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)iterator;
-(id)initRegionMapFromMap:(id)arg1 rowRemapping:(id)arg2 ;
-(SCD_Struct_TS491)unionedMergeRange;
-(SCD_Struct_TS491)mergedRangeForCellID:(SCD_Struct_TS271)arg1 ;
-(char)partiallyIntersectsCellRange:(SCD_Struct_TS491)arg1 ;
-(id)mergedGridIndicesForDimension:(int)arg1 ;
-(id)initRegionMapFromMap:(id)arg1 intersectingRange:(SCD_Struct_TS491)arg2 ;
-(char)find:(SCD_Struct_TS491)arg1 ;
-(char)partiallyIntersectsCellRegion:(id)arg1 ;
-(char)hasRangeSpanningRows;
-(char)insert:(SCD_Struct_TS491)arg1 ;
-(unsigned)count;
-(id)description;
-(id)initWithContext:(id)arg1 ;
-(char)remove:(SCD_Struct_TS491)arg1 ;
@end

