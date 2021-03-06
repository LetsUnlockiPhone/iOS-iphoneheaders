/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSDictionary;

@interface PFUbiquityKnowledgeVector : NSObject <NSCoding, NSCopying> {

	NSDictionary* _kv;
	NSDictionary* _storeKVDict;
	unsigned long long _hash;

}

@property (nonatomic,readonly) unsigned long long hash;                //@synthesize hash=_hash - In the implementation block
@property (nonatomic,readonly) unsigned long long length; 
+(id)createSetOfAllPeerIDsInKnowledgeVectors:(id)arg1 ;
+(id)createKnowledgeVectorDictionaryFromString:(id)arg1 ;
-(id)transactionNumberForPeerID:(id)arg1 ;
-(id)initWithStoreKnowledgeVectorDictionary:(id)arg1 ;
-(void)updateWithKnowledgeVector:(id)arg1 ;
-(bool)isZeroVector;
-(bool)isAncestorOfKnowledgeVector:(id)arg1 ;
-(id)allPeerIDs;
-(bool)conflictsWithKnowledgeVector:(id)arg1 ;
-(id)createStoreKnowledgeVectorDictionary;
-(id)newKnowledgeVectorByDecrementingPeerWithID:(id)arg1 ;
-(id)createKnowledgeVectorString;
-(id)newKnowledgeVectorBySubtractingVector:(id)arg1 ;
-(id)initWithKnowledgeVectorString:(id)arg1 ;
-(id)initWithKnowledgeVectorDictionary:(id)arg1 ;
-(id)newKnowledgeVectorByAddingKnowledgeVector:(id)arg1 ;
-(id)createAncestorVectorForConflictingVector:(id)arg1 ;
-(id)newKnowledgeVectorByIncrementingPeerWithID:(id)arg1 ;
-(id)createSetOfAllPeerIDsWithOtherVector:(id)arg1 ;
-(void)_updateHash;
-(id)initFromCopy:(id)arg1 storeKVDict:(id)arg2 hash:(unsigned long long)arg3 ;
-(id)initWithKnowledgeVectorDictionary:(id)arg1 andStoreKnowledgeVectorDictionary:(id)arg2 ;
-(bool)hasPeerIDInCommonWith:(id)arg1 ;
-(bool)isDescendantOfKnowledgeVector:(id)arg1 ;
-(void)decrementToMinimumWithKnowledgeVector:(id)arg1 ;
-(bool)canMergeWithKnowledgeVector:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone)arg1 ;
-(long long)compare:(id)arg1 ;
@end

