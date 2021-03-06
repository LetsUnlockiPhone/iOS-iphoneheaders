/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:21:07 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/MBChunkStore.h>

@protocol OS_dispatch_queue;
@class MBServiceAccount, NSMutableDictionary, NSObject;

@interface MBMockChunkStore : MBChunkStore {

	MBServiceAccount* _serviceAccount;
	NSMutableDictionary* _signaturesByItemID;
	unsigned long long _nextItemID;
	NSObject<OS_dispatch_queue>* _queue;
	BOOL _poison;

}

@property (assign,nonatomic) BOOL poison;              //@synthesize poison=_poison - In the implementation block
-(BOOL)registerItem:(id)arg1 error:(id*)arg2 ;
-(BOOL)putBatch:(id)arg1 error:(id*)arg2 ;
-(BOOL)getBatch:(id)arg1 error:(id*)arg2 ;
-(id)_dataForItem:(id)arg1 ;
-(id)_URLForItem:(id)arg1 ;
-(BOOL)poison;
-(void)setPoison:(BOOL)arg1 ;
-(BOOL)isOpen;
-(void)dealloc;
-(void)close;
-(void)remove;
-(id)initWithAccount:(id)arg1 ;
-(void)open;
@end

