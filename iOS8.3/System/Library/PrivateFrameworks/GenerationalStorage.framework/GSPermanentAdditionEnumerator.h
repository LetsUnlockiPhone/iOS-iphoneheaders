/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:51:52 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>
#import <GenerationalStorage/GSAdditionEnumerating.h>

@class NSError, GSPermanentStorage, NSString, NSArray, GSDaemonProxySync;

@interface GSPermanentAdditionEnumerator : NSEnumerator <GSAdditionEnumerating> {

	GSPermanentStorage* _storage;
	NSString* _nameSpace;
	unsigned long long _withOptions;
	unsigned long long _withoutOptions;
	NSArray* _array;
	unsigned _pos;
	GSDaemonProxySync* _proxy;
	NSError* _error;
	id _token;

}

@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(void)dealloc;
-(id)nextObject;
-(NSError *)error;
-(void)_fetchNextBatch;
-(id)initWithStorage:(id)arg1 nameSpace:(id)arg2 withOptions:(unsigned long long)arg3 withoutOptions:(unsigned long long)arg4 ordering:(int)arg5 ;
@end

