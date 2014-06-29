/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString;

@interface VMUCallTreeNode : NSObject {

	VMUCallTreeNode* _parent;
	NSString* _name;
	unsigned long long _address;
	unsigned _count;
	unsigned long long _numBytes;
	unsigned _numChildren;
	SCD_Union_VM2* _un;

}
+(id)rootForSamples:(id)arg1 symbolicator:(CSTypeRef)arg2 sampler:(id)arg3 options:(unsigned long long)arg4 ;
+(id)nodeWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned)arg3 numBytes:(unsigned long long)arg4 ;
+(id)rootForSamples:(id)arg1 symbolicator:(CSTypeRef)arg2 ;
+(id)makeFakeRootForNode:(id)arg1 ;
+(id)rootForTraceData:(id)arg1 ;
-(unsigned long long)numBytes;
-(void)dealloc;
-(unsigned)count;
-(id)name;
-(long long)compare:(id)arg1 ;
-(void)setChildren:(id)arg1 ;
-(void)addChild:(id)arg1 ;
-(id)childAtIndex:(unsigned)arg1 ;
-(unsigned long long)address;
-(bool)isPseudo;
-(id)pseudoNodeTopOfStackChild;
-(id)sortedChildrenWithPseudoNode;
-(id)largestTopOfStackPath;
-(id)initWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned)arg3 numBytes:(unsigned long long)arg4 ;
-(unsigned)numChildren;
-(void)setNumChildren:(unsigned)arg1 ;
-(void)getBrowserName:(id)arg1 ;
-(id)findOrAddChildWithName:(id)arg1 address:(unsigned long long)arg2 nodeSearchType:(int)arg3 isLeafNode:(bool)arg4 ;
-(long long)compareSizeAndCount:(id)arg1 ;
-(void)parseNameIntoSymbol:(id*)arg1 library:(id*)arg2 loadAddress:(unsigned long long*)arg3 offset:(unsigned long long*)arg4 address:(unsigned long long*)arg5 suffix:(id*)arg6 ;
-(id)pseudoName;
-(id)sortedChildrenWithPseudoNode:(id)arg1 withCompare:(SEL)arg2 ;
-(void)countFunctionOccurrencesInTree:(id)arg1 ;
-(id)fullOutputWithThreshold:(unsigned)arg1 showPseudoNodes:(bool)arg2 ;
-(bool)callTreeHasBranches;
-(id)stringFromCallTreeIndentIfNoBranches:(bool)arg1 showPseudoNodes:(bool)arg2 ;
-(id)filterOutSymbols:(id)arg1 required:(id)arg2 ;
-(id)chargeLibrariesInSet:(id)arg1 toCaller:(id)arg2 parentLibrary:(id)arg3 ;
-(id)pruneCount:(unsigned)arg1 ;
-(id)pruneMallocSize:(unsigned long long)arg1 ;
-(id)findOrAddChildWithName:(id)arg1 address:(unsigned long long)arg2 ;
-(void)addTraceEvent:(id)arg1 forTraceData:(id)arg2 ;
-(id)allChildren;
-(id)browserName;
-(bool)symbolNameIsUnknown;
-(bool)isMallocBlockContentNode;
-(id)nameWithoutOffset;
-(id)nameWithStringsForSymbol:(id)arg1 library:(id)arg2 loadAddress:(id)arg3 offset:(id)arg4 address:(id)arg5 suffix:(id)arg6 ;
-(long long)comparePuttingMainThreadFirst:(id)arg1 ;
-(id)fullOutputWithThreshold:(unsigned)arg1 ;
-(id)stringFromCallTreeIndentIfNoBranches:(bool)arg1 ;
-(id)invertedNode;
-(id)filterOutSymbols:(id)arg1 ;
-(id)chargeLibrariesToCallers:(id)arg1 keepBoundaries:(bool)arg2 ;
-(id)chargeSystemLibrariesToCallersAndKeepBoundaries:(bool)arg1 ;
-(id)parent;
@end
