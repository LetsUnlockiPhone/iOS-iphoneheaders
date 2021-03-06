/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSMutableData.h>

@interface NSConcreteMutableData : NSMutableData {

	unsigned _reserved : 1;
	unsigned _needToZero : 1;
	unsigned _hasVM : 1;
	unsigned _retainCount : 29;
	unsigned long long _length;
	unsigned long long _capacity;
	void* _bytes;

}
-(void)replaceBytesInRange:(NSRange)arg1 withBytes:(const void*)arg2 ;
-(void)increaseLengthBy:(unsigned long long)arg1 ;
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(bool)arg3 deallocator:(/*^block*/ id)arg4 ;
-(void)resetBytesInRange:(NSRange)arg1 ;
-(void)_freeBytes;
-(void)dealloc;
-(id)init;
-(unsigned long long)length;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(const void*)bytes;
-(void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)setLength:(unsigned long long)arg1 ;
-(void)appendData:(id)arg1 ;
-(void*)mutableBytes;
-(id)initWithLength:(unsigned long long)arg1 ;
-(void)finalize;
@end

