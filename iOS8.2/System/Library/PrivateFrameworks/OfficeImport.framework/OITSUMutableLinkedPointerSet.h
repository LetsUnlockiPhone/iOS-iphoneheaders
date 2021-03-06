/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:34 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSFastEnumeration.h>

@class OITSULinkedPointerSetEntry;

@interface OITSUMutableLinkedPointerSet : NSObject <NSFastEnumeration> {

	CFDictionaryRef mDictionary;
	OITSULinkedPointerSetEntry* mHead;
	OITSULinkedPointerSetEntry* mTail;

}
-(unsigned)countByEnumeratingWithState:(SCD_Struct_OI17*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(void)removeObject:(id)arg1 ;
-(unsigned)count;
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(id)firstObject;
-(char)isEqual:(id)arg1 ;
-(char)containsObject:(id)arg1 ;
-(id)array;
-(id)reverseObjectEnumerator;
-(id)objectEnumerator;
-(id)objectEnumeratorAfterObject:(id)arg1 ;
-(char)hasObjects;
-(void)insertFirstObject:(id)arg1 ;
@end

