/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:48 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLGenericAlbum.h>
#import <PhotoLibraryServices/PLAlbumContainer.h>

@class NSOrderedSet, NSString;

@interface PLManagedFolder : PLGenericAlbum <PLAlbumContainer> {

	char _adjustingChildOrderKeys;
	char _needsPersistenceUpdate;

}

@property (nonatomic,retain) NSOrderedSet * childCollections; 
@property (assign,nonatomic) char needsPersistenceUpdate;                         //@synthesize needsPersistenceUpdate=_needsPersistenceUpdate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned containersCount; 
@property (nonatomic,readonly) unsigned albumsCount; 
@property (nonatomic,readonly) char isFolder; 
@property (nonatomic,copy,readonly) id albumsSortingComparator; 
@property (nonatomic,readonly) int filter; 
@property (nonatomic,readonly) unsigned unreadAlbumsCount; 
@property (nonatomic,retain,readonly) NSString * _prettyDescription; 
@property (nonatomic,retain,readonly) NSString * _typeDescription; 
+(id)entityName;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)insertInManagedObjectContext:(id)arg1 ;
-(unsigned)count;
-(id)identifier;
-(char)isEmpty;
-(id)albums;
-(id)mutableAssets;
-(char)canPerformEditOperation:(unsigned)arg1 ;
-(id)assets;
-(unsigned)approximateCount;
-(unsigned)assetsCount;
-(unsigned)photosCount;
-(unsigned)videosCount;
-(void)persistMetadataToFileSystem;
-(id)newOrderKeyChild:(id)arg1 ;
-(void)prepareForDeletion;
-(char)isValidKindForPersistence;
-(void)removePersistedFileSystemData;
-(void)willSave;
-(void)setNeedsPersistenceUpdate:(char)arg1 ;
-(void)didSave;
-(char)needsPersistenceUpdate;
-(unsigned)albumsCount;
-(id)childToOrderKeyMap;
-(id)sortedOrderKeysForChildrenUsingMap:(id)arg1 ;
-(id)childKeyForOrdering;
-(NSString *)_prettyDescription;
-(int)filter;
-(id)containers;
-(char)canEditContainers;
-(id)containersRelationshipName;
-(unsigned)containersCount;
-(short)albumListType;
-(NSString *)_typeDescription;
-(char)hasAtLeastOneAlbum;
-(char)canEditAlbums;
-(id)albumsSortingComparator;
-(void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3 ;
-(char)albumHasFixedOrder:(NSObject*)arg1 ;
-(void)setNeedsReordering;
-(char)needsReordering;
-(void)updateAlbumsOrderIfNeeded;
-(void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2 ;
-(unsigned)unreadAlbumsCount;
-(void)addChildCollections:(id)arg1 ;
-(char)_childOrderKeysAreValid;
-(void)_handleChildOrderKeys;
-(void)insertObject:(id)arg1 inChildCollectionsAtIndex:(unsigned)arg2 ;
-(void)removeObjectFromChildCollectionsAtIndex:(unsigned)arg1 ;
-(void)replaceObjectInChildCollectionsAtIndex:(unsigned)arg1 withObject:(id)arg2 ;
-(void)insertChildCollections:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeChildCollectionsAtIndexes:(id)arg1 ;
-(void)replaceChildCollectionsAtIndexes:(id)arg1 withChildCollections:(id)arg2 ;
-(void)addChildCollectionsObject:(id)arg1 ;
-(void)removeChildCollectionsObject:(id)arg1 ;
-(void)removeChildCollections:(id)arg1 ;
-(void)refreshCollections;
@end

