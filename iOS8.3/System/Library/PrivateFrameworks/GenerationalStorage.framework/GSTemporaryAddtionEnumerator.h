/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:51:52 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>
#import <GenerationalStorage/GSAdditionEnumerating.h>

@class GSTemporaryStorage, NSString, NSError, NSDirectoryEnumerator, NSArray;

@interface GSTemporaryAddtionEnumerator : NSEnumerator <GSAdditionEnumerating> {

	GSTemporaryStorage* _storage;
	NSString* _nameSpace;
	unsigned long long _withOptions;
	unsigned long long _withoutOption;
	NSError* _error;
	NSDirectoryEnumerator* _enumerator;
	NSArray* _array;
	unsigned _pos;

}

@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(void)dealloc;
-(id)nextObject;
-(NSError *)error;
-(id)initWithStorage:(id)arg1 nameSpace:(id)arg2 withOptions:(unsigned long long)arg3 withoutOptions:(unsigned long long)arg4 ordering:(int)arg5 ;
-(id)_nextURL;
@end

