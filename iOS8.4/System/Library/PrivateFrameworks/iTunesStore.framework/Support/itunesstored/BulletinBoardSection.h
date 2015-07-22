/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <itunesstored/BBRemoteDataProvider.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, BBDataProviderProxy, NSString, NSArray;

@interface BulletinBoardSection : NSObject <BBRemoteDataProvider> {

	Class _bulletinClass;
	NSMutableArray* _bulletins;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BBDataProviderProxy* _proxy;
	NSString* _sectionID;

}

@property (readonly) NSArray * existingBulletins; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)existingBulletins;
-(void)postBulletin:(id)arg1 ;
-(void)updateBulletin:(id)arg1 ;
-(void)removeBulletinWithRecordID:(id)arg1 ;
-(id)initWithSectionIdentifier:(id)arg1 dispatchQueue:(id)arg2 ;
-(void)setDataProviderProxy:(id)arg1 ;
-(id)_bulletins;
-(void)_saveUserDefaults;
-(CFStringRef)_userDefaultsKey;
-(void)removeAllBulletins;
-(void)dealloc;
-(id)sortDescriptors;
-(id)sectionIdentifier;
-(id)sectionParameters;
-(id)defaultSectionInfo;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)bulletinsFilteredBy:(unsigned long long)arg1 count:(unsigned long long)arg2 lastCleared:(id)arg3 ;
@end
