/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSDGLDataBufferAttribute, TSDGLDataBuffer, TSDGLShader;

@interface KNWipeDataBuffer : NSObject {

	unsigned long long mDirection;
	double mBlurFraction;
	CATransform3D mMVPMatrix;
	CGRect mVertexRect;
	CGRect mTextureRect;
	TSDGLDataBufferAttribute* mSolidPositionAttribute;
	TSDGLDataBufferAttribute* mSolidTexCoordAttribute;
	TSDGLDataBuffer* mSolidDataBuffer;
	TSDGLShader* mSolidShader;
	TSDGLDataBufferAttribute* mWipePositionAttribute;
	TSDGLDataBufferAttribute* mWipeTexCoordAttribute;
	TSDGLDataBufferAttribute* mWipeOpacityAttribute;
	TSDGLDataBuffer* mWipeDataBuffer;
	TSDGLShader* mWipeShader;

}

@property (assign,nonatomic) unsigned long long direction; 
@property (assign,nonatomic) double blurFraction; 
@property (assign,nonatomic) CATransform3D MVPMatrix; 
-(id)initWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 ;
-(SCD_Struct_TS479)p_texCoordFromX:(double)arg1 y:(double)arg2 ;
-(double)blurFraction;
-(void)p_updateVertexInBuffer:(id)arg1 atIndex:(unsigned long long)arg2 x:(double)arg3 y:(double)arg4 opacity:(double)arg5 ;
-(void)updateWipeWithPercent:(double)arg1 solidVertexCount:(unsigned long long*)arg2 wipeVertexCount:(unsigned long long*)arg3 ;
-(void)setMVPMatrix:(CATransform3D)arg1 ;
-(void)drawWipeWithPercent:(double)arg1 opacity:(double)arg2 ;
-(void)setBlurFraction:(double)arg1 ;
-(CATransform3D)MVPMatrix;
-(void)dealloc;
-(void)setDirection:(unsigned long long)arg1 ;
-(unsigned long long)direction;
@end
