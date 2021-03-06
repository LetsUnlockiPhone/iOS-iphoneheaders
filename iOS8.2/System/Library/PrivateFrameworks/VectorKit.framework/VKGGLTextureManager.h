/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:38 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/GEOResourceManifestTileGroupObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, VKResourceManager, NSString;

@interface VKGGLTextureManager : NSObject <GEOResourceManifestTileGroupObserver> {

	unsigned _tileGroupIdentifier;
	NSObject*<OS_dispatch_queue> _textureQueue;
	map<std::__1::basic_string<char>, std::__1::shared_ptr<ggl::Texture2D>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<ggl::Texture2D> > > >* _textureDictionary;
	VKResourceManager* _resourceManager;
	Device* _device;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)purge;
-(id)initWithTileGroupIdentifier:(unsigned)arg1 resourceManager:(id)arg2 device:(Device*)arg3 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(shared_ptr<ggl::Texture2D>*)textureWithName:(id)arg1 forScale:(float)arg2 ;
-(shared_ptr<ggl::Texture2D>*)textureWithName:(id)arg1 forScale:(float)arg2 mipmap:(char)arg3 repeatWrap:(char)arg4 ;
-(shared_ptr<ggl::Texture2D>*)textureWithName:(id)arg1 mipmap:(char)arg2 repeatWrap:(char)arg3 ;
-(id)dataWithName:(id)arg1 fromResourceManager:(id)arg2 ;
-(shared_ptr<ggl::Texture2D>*)textureWithName:(id)arg1 ;
@end

