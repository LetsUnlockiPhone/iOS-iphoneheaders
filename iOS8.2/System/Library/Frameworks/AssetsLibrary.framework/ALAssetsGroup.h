/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:15 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AssetsLibrary/AssetsLibrary-Structs.h>
@class ALAssetsGroupPrivate;

@interface ALAssetsGroup : NSObject {

	id _internal;

}

@property (getter=isEditable,nonatomic,readonly) char editable; 
@property (nonatomic,retain) ALAssetsGroupPrivate * internal;                //@synthesize internal=_internal - In the implementation block
-(id)_typeAsString;
-(void)_enumerateAssetsAtIndexes:(id)arg1 options:(unsigned)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)initWithPhotoAlbum:(NSObject*)arg1 library:(id)arg2 type:(unsigned)arg3 ;
-(void)enumerateAssetsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateAssetsWithOptions:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(ALAssetsGroupPrivate *)internal;
-(char)addAsset:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isValid;
-(char)isEditable;
-(id)_uuid;
-(id)valueForProperty:(id)arg1 ;
-(void)setAssetsFilter:(id)arg1 ;
-(void)enumerateAssetsAtIndexes:(id)arg1 options:(unsigned)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setInternal:(ALAssetsGroupPrivate *)arg1 ;
-(CGImageRef)posterImage;
-(int)numberOfAssets;
@end

