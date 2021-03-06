/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:50:43 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSProgressPublisher.h>

@class NSString, NSXPCConnection, NSMutableDictionary, NSLock, NSMutableSet, NSDictionary;

@interface NSProgress : NSObject <NSProgressPublisher> {

	id _group;
	long long _reserved4;
	id _values;
	id _reserved5;
	/*^block*/id _cancellationHandler;
	/*^block*/id _pausingHandler;
	/*^block*/id _prioritizationHandler;
	unsigned long long _flags;
	id _userInfoProxy;
	NSString* _publisherID;
	NSXPCConnection* _connection;
	int _unpublishingBlockageCount;
	int _disconnectingBlockageCount;
	int _remoteObserverCount;
	NSMutableDictionary* _acknowledgementHandlersByBundleID;
	NSMutableDictionary* _lastNotificationTimesByKey;
	NSMutableDictionary* _userInfoLastNotificationTimesByKey;
	NSLock* _lock;
	NSMutableSet* _childrenGroups;

}

@property (assign,nonatomic) unsigned installState; 
@property (assign,nonatomic) unsigned installPhase; 
@property (assign) long long totalUnitCount; 
@property (assign) long long completedUnitCount; 
@property (copy) NSString * localizedDescription; 
@property (copy) NSString * localizedAdditionalDescription; 
@property (getter=isCancellable) char cancellable; 
@property (getter=isPausable) char pausable; 
@property (getter=isCancelled,readonly) char cancelled; 
@property (getter=isPaused,readonly) char paused; 
@property (copy) id cancellationHandler; 
@property (copy) id pausingHandler; 
@property (getter=isIndeterminate,readonly) char indeterminate; 
@property (readonly) double fractionCompleted; 
@property (copy,readonly) NSDictionary * userInfo; 
@property (copy) NSString * kind; 
@property (getter=isOld,readonly) char old; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)publishingKeyForApp:(id)arg1 withPhase:(unsigned)arg2 ;
+(id)childProgressForBundleID:(id)arg1 andPhase:(unsigned)arg2 ;
+(id)keyPathsForValuesAffectingInstallState;
+(id)keyPathsForValuesAffectingInstallPhase;
+(id)_registrarInterface;
+(id)_publisherInterface;
+(id)_addSubscriberForFileURL:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(id)keyPathsForValuesAffectingLocalizedDescription;
+(id)keyPathsForValuesAffectingLocalizedAdditionalDescription;
+(id)addSubscriberForFileURL:(id)arg1 withPublishingHandler:(/*^block*/id)arg2 ;
+(void)removeSubscriber:(id)arg1 ;
+(id)addSubscriberForFileURL:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(id)_subscriberInterface;
+(id)currentProgress;
+(id)progressWithTotalUnitCount:(long long)arg1 ;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(void)_removeSubscriber:(id)arg1 ;
+(id)_addSubscriberForFileURL:(id)arg1 withPublishingHandler:(/*^block*/id)arg2 ;
+(id)_addSubscriberForCategory:(id)arg1 usingPublishingHandler:(/*^block*/id)arg2 ;
-(void)setInstallState:(unsigned)arg1 ;
-(unsigned)installState;
-(id)initWithParent:(id)arg1 bundleID:(id)arg2 andPhase:(unsigned)arg3 ;
-(unsigned)installPhase;
-(void)setInstallPhase:(unsigned)arg1 ;
-(id)_LSDescription;
-(void)resume;
-(void)setPausingHandler:(id)arg1 ;
-(void)_setCompletedUnitCount:(long long)arg1 totalUnitCount:(long long)arg2 ;
-(void)_setGroup:(id)arg1 ;
-(oneway void)prioritize;
-(void)_updateGroup:(id)arg1 oldFraction:(id)arg2 newFraction:(id)arg3 portion:(long long)arg4 ;
-(void)_removeGroup:(id)arg1 fraction:(id)arg2 portion:(long long)arg3 ;
-(id)_indentedDescription:(unsigned)arg1 ;
-(unsigned)ownedDictionaryCount;
-(id)ownedDictionaryKeyEnumerator;
-(id)ownedDictionaryObjectForKey:(id)arg1 ;
-(void)_addChild:(id)arg1 toGroup:(id)arg2 isPaused:(char*)arg3 isCancelled:(char*)arg4 ;
-(void)__notifyRemoteObserversOfValueForKey:(id)arg1 inUserInfo:(char)arg2 ;
-(void)_unblockUnpublishing;
-(void)_notifyRemoteObserversOfValueForKey:(id)arg1 inUserInfo:(char)arg2 ;
-(void)_setValueForKeys:(/*^block*/id)arg1 settingBlock:(/*^block*/id)arg2 ;
-(void)_updateFractionCompletedFromOldFraction:(id)arg1 toNewFraction:(id)arg2 ;
-(void)_setUserInfoValue:(id)arg1 forKey:(id)arg2 ;
-(void)_unblockDisconnecting;
-(void)_setAcknowledgementHandler:(/*^block*/id)arg1 forAppBundleIdentifier:(id)arg2 ;
-(/*^block*/id)_acknowledgementHandlerForAppBundleIdentifier:(id)arg1 ;
-(oneway void)startProvidingValuesWithInitialAcceptor:(/*^block*/id)arg1 ;
-(oneway void)stopProvidingValues;
-(oneway void)appWithBundleID:(id)arg1 didAcknowledgeWithSuccess:(char)arg2 ;
-(void)setLocalizedAdditionalDescription:(NSString *)arg1 ;
-(NSString *)localizedAdditionalDescription;
-(char)isCancellable;
-(void)setPausable:(char)arg1 ;
-(char)isPausable;
-(id)pausingHandler;
-(void)publish;
-(void)unpublish;
-(void)setAcknowledgementHandler:(/*^block*/id)arg1 forAppBundleIdentifier:(id)arg2 ;
-(/*^block*/id)acknowledgementHandlerForAppBundleIdentifier:(id)arg1 ;
-(void)acknowledgeWithSuccess:(char)arg1 ;
-(char)isOld;
-(id)_publishingAppBundleIdentifier;
-(void)setPrioritizable:(char)arg1 ;
-(char)isPrioritizable;
-(void)setPrioritizationHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)prioritizationHandler;
-(void)handleAcknowledgementByAppWithBundleIdentifier:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_initWithValues:(id)arg1 ;
-(void)_setRemoteValue:(id)arg1 forKey:(id)arg2 inUserInfo:(char)arg3 ;
-(void)handleAcknowledgementByAppWithBundleIdentifer:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)acknowledge;
-(void)becomeCurrentWithPendingUnitCount:(long long)arg1 ;
-(void)resignCurrent;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(NSDictionary *)userInfo;
-(char)isCancelled;
-(void)setCancellationHandler:(id)arg1 ;
-(id)cancellationHandler;
-(NSString *)localizedDescription;
-(char)isIndeterminate;
-(NSString *)kind;
-(double)fractionCompleted;
-(long long)totalUnitCount;
-(long long)completedUnitCount;
-(void)pause;
-(char)isFinished;
-(void)_publish;
-(void)_unpublish;
-(id)initWithParent:(id)arg1 userInfo:(id)arg2 ;
-(void)setTotalUnitCount:(long long)arg1 ;
-(void)setKind:(NSString *)arg1 ;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(void)setCancellable:(char)arg1 ;
-(void)setCompletedUnitCount:(long long)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(char)isPaused;
@end

