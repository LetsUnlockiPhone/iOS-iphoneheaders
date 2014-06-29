/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DSageFillData.h>

@class TSCH3DFill, NSMutableArray;

@interface TSCH3DFillSageFillData : NSObject <TSCH3DSageFillData> {

	TSCH3DFill* mFill;
	NSMutableArray* mTextures;
	NSMutableArray* mTextureBlendModes;

}
+(id)dataWithFill:(id)arg1 ;
-(id)lightingModel;
-(id)phongMaterials;
-(Color)diffuse;
-(Color)emissive;
-(Color)specular;
-(id)initWithFill:(id)arg1 ;
-(id)textureForIndex:(unsigned long long)arg1 ;
-(bool)isLayerEnabledForIndex:(unsigned long long)arg1 ;
-(float)layerScaleForIndex:(unsigned long long)arg1 ;
-(float)layerRotationForIndex:(unsigned long long)arg1 ;
-(bool)layerIsEnvironmentMapForIndex:(unsigned long long)arg1 ;
-(long long)layerBlendModeForIndex:(unsigned long long)arg1 ;
-(int)layerTilingModeForIndex:(unsigned long long)arg1 ;
-(id)layerLightenPercentageForIndex:(unsigned long long)arg1 ;
-(id)fillSetIdentifier;
-(unsigned long long)diffuseCount;
-(id)diffuseMaterial;
-(void)p_addMaterial:(id)arg1 blendMode:(long long)arg2 ;
-(unsigned long long)modulateCount;
-(id)modulateMaterial;
-(id)materialAtIndex:(unsigned long long)arg1 ;
-(float)shininess;
-(void)dealloc;
-(id)environment;
-(float)opacity;
-(unsigned long long)layerCount;
@end
