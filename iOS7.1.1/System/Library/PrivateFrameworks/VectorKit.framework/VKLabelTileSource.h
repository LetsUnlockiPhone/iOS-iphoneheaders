/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKTileSetBackedTileSource.h>

@interface VKLabelTileSource : VKTileSetBackedTileSource {

	shared_ptr<vk::LabelManager>* _labelManager;
	bool _localizeLabels;
	long long _labelScaleFactor;

}

@property (assign,nonatomic) bool localizeLabels;                     //@synthesize localizeLabels=_localizeLabels - In the implementation block
@property (assign,nonatomic) long long labelScaleFactor;              //@synthesize labelScaleFactor=_labelScaleFactor - In the implementation block
-(void)dealloc;
-(id).cxx_construct;
-(void).cxx_destruct;
-(bool)localizeLabels;
-(void)setLocalizeLabels:(bool)arg1 ;
-(long long)labelScaleFactor;
-(void)setLabelScaleFactor:(long long)arg1 ;
-(id)initWithTileSet:(id)arg1 labelManager:(const shared_ptr<vk::LabelManager>*)arg2 ;
-(bool)minimumZoomLevelBoundsCamera;
-(bool)maximumZoomLevelBoundsCamera;
-(id)tileForData:(id)arg1 downloadKey:(const GEOTileKey*)arg2 sourceKey:(const VKTileKey*)arg3 ;
-(long long)defaultMaximumZoomLevel;
-(int)_labelTileType;
@end
