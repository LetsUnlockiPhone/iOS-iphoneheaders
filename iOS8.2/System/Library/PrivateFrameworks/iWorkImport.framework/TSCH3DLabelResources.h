/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DStringIndexedResources.h>

@class NSMutableDictionary, TSCH3DTextureAtlas;

@interface TSCH3DLabelResources : TSCH3DStringIndexedResources {

	NSMutableDictionary* mCache;
	TSCH3DTextureAtlas* mAtlas;

}

@property (nonatomic,readonly) TSCH3DTextureAtlas * atlas; 
-(void)setParagraphStyle:(id)arg1 atIndex:(const tvec2<int>*)arg2 ;
-(void)setParagraphStyle:(id)arg1 forKey:(unsigned)arg2 atIndex:(const tvec2<int>*)arg3 ;
-(id)resourceAtIndex:(const tvec2<int>*)arg1 string:(id)arg2 bitmapContextInfo:(id)arg3 labelWidth:(float)arg4 ;
-(id)paragraphStyleForKey:(unsigned)arg1 defaultStyle:(id)arg2 ;
-(id)prepareTextureAtlasWithSamples:(float)arg1 ;
-(void)dealloc;
-(id)initWithSize:(const tvec2<int>*)arg1 ;
-(TSCH3DTextureAtlas *)atlas;
@end
