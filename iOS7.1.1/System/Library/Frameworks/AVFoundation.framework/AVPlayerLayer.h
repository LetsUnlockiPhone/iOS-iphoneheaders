/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:31 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <QuartzCore/CALayer.h>

@class AVPlayerLayerInternal, AVPlayer, NSString;

@interface AVPlayerLayer : CALayer {

	AVPlayerLayerInternal* _playerLayer;

}

@property (nonatomic,retain) AVPlayer * player; 
@property (copy) NSString * videoGravity; 
@property (getter=isReadyForDisplay,nonatomic,readonly) bool readyForDisplay; 
@property (nonatomic,readonly) CGRect videoRect; 
+(id)playerLayerWithPlayer:(id)arg1 ;
+(id)keyPathsForValuesAffectingVideoRect;
-(bool)isOverscanSubtitleSupportEnabled;
-(bool)isReadyForDisplay;
-(void)_setSubtitleGravity:(id)arg1 ;
-(void)_updateSubtitleLayerForPlayerLayerBounds:(CGRect)arg1 presentationSize:(CGSize)arg2 playLayerTransform:(CATransform3D)arg3 forceRender:(bool)arg4 ;
-(void)_calculateSubtitleLayerBounds:(CGRect)arg1 presentationSize:(CGSize)arg2 playLayerTransform:(CATransform3D)arg3 shouldUpdateCachedSubtitleSample:(bool)arg4 outBound:(CGRect*)arg5 ;
-(void)_addAnimationsForMaskLayer:(id)arg1 ;
-(void)_addAnimationsForContentLayer:(id)arg1 size:(CGSize)arg2 gravity:(id)arg3 ;
-(void)_addAnimationsForSubtitleLayer:(id)arg1 size:(CGSize)arg2 ;
-(void)_disconnectContentLayerFromPlayer;
-(CGSize)_getAVPlayerCurrentItemPresentationSizeKeyFromPlayer:(id)arg1 ;
-(void)_updatePresentationSize:(CGSize)arg1 forceUpdate:(bool)arg2 ;
-(void)_subtitlesDidChange:(id)arg1 ;
-(void)_updateSubtitles:(id)arg1 forceRender:(bool)arg2 ;
-(void)_setHasPlayerToObserve:(long long)arg1 andShouldObserveIt:(long long)arg2 ;
-(void)_connectContentLayerToPlayer;
-(void)setOverscanSubtitleSupportEnabled:(bool)arg1 ;
-(void)subtitleLayerNeedsLayout:(id)arg1 ;
-(void)_setItem:(id)arg1 readyForDisplay:(bool)arg2 ;
-(bool)_subtitleDisplayEnabled;
-(void)_setSubtitleDisplayEnabled:(bool)arg1 ;
-(id)_subtitleGravity;
-(double)_pctOfSubtitleLayerHeight;
-(CGRect)_videoRectForBounds:(CGRect)arg1 ;
-(CGRect)_minRectToFitVideoAndSubtitlesInBounds:(CGRect)arg1 ;
-(id)videoGravity;
-(void)setVideoGravity:(id)arg1 ;
-(CGRect)videoRect;
-(void)layerDidBecomeVisible:(bool)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)removeAllAnimations;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithLayer:(id)arg1 ;
-(void)finalize;
-(id)player;
-(void)setPlayer:(id)arg1 ;
@end
