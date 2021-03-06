/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:08:55 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNRenderer.h>

@interface SCNOffscreenRenderer : SCNRenderer

@property (nonatomic,readonly) unsigned textureID; 
@property (assign,nonatomic) unsigned antialiasingMode; 
+(id)offscreenRendererWithContext:(id)arg1 size:(CGSize)arg2 ;
-(void)_deleteFramebuffer;
-(void)_createFramebufferIfNeeded;
-(unsigned)_sampleCount;
-(void)_bindFramebuffer;
-(void)render;
-(void)_resolveAndDiscard;
-(void)_unbindFramebuffer;
-(id)_initWithOptions:(id)arg1 isPrivateRenderer:(char)arg2 privateRendererOwner:(id)arg3 clearsOnDraw:(char)arg4 context:(void*)arg5 size:(CGSize)arg6 ;
-(CGImageRef)createCGImageSnapshot:(double)arg1 ;
-(UIImage*)snapshotAtTime:(double)arg1 ;
-(unsigned)antialiasingMode;
-(void)setAntialiasingMode:(unsigned)arg1 ;
-(CGImageRef)copySnapshotWithSize:(CGSize)arg1 ;
-(unsigned)textureID;
-(void)dealloc;
-(UIImage*)snapshot;
@end

