/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:50:23 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCopying.h>
#import <Foundation/NSSecureCoding.h>

@interface NSIndexPath : NSObject <NSCopying, NSSecureCoding> {

	unsigned* _indexes;
	unsigned _length;
	void* _reserved;

}

@property (nonatomic,readonly) int ab_group; 
@property (nonatomic,readonly) int ab_item; 
@property (nonatomic,readonly) int item; 
@property (nonatomic,readonly) int section; 
@property (nonatomic,readonly) int row; 
@property (readonly) unsigned length; 
+(id)indexPathWithIconIndex:(unsigned)arg1 listIndex:(unsigned)arg2 ;
+(id)emptyPath;
+(id)indexPathForItem:(int)arg1 inGroup:(int)arg2 ;
+(id)indexPathForItem:(int)arg1 inSection:(int)arg2 ;
+(id)indexPathForRow:(int)arg1 inSection:(int)arg2 ;
+(id)indexPath;
+(char)supportsSecureCoding;
+(id)indexPathWithIndex:(unsigned)arg1 ;
+(id)indexPathWithIndexes:(const unsigned*)arg1 length:(unsigned)arg2 ;
-(id)indexPathWithPrefixPath:(id)arg1 ;
-(unsigned)sbListIndex;
-(unsigned)sbIconIndex;
-(id)subpathFromPosition:(unsigned)arg1 ;
-(char)isPrefixedByPath:(id)arg1 ;
-(id)_subpathWithRange:(NSRange)arg1 ;
-(id)__ck_indexPathShiftedForInsertedIndexes:(id)arg1 deletedIndexes:(id)arg2 ;
-(id)dd_stringValue;
-(int)ab_group;
-(int)ab_item;
-(int)item;
-(int)row;
-(int)section;
-(void)getIndexes:(unsigned*)arg1 range:(NSRange)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)compare:(id)arg1 ;
-(unsigned)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)indexAtPosition:(unsigned)arg1 ;
-(id)indexPathByAddingIndex:(unsigned)arg1 ;
-(id)indexPathByRemovingLastIndex;
-(id)initWithIndexes:(const unsigned*)arg1 length:(unsigned)arg2 ;
-(void)getIndexes:(unsigned*)arg1 ;
-(id)initWithIndex:(unsigned)arg1 ;
@end
