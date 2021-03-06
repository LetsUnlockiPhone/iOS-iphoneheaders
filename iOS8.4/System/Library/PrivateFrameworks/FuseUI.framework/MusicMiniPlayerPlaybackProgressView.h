/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIView.h>
#import <FuseUI/MusicPlaybackProgressScrubbing.h>

@protocol MusicPlaybackProgressScrubberDelegate;
@class UIView, NSString;

@interface MusicMiniPlayerPlaybackProgressView : UIView <MusicPlaybackProgressScrubbing> {

	BOOL _alwaysLive;
	double _currentTime;
	double _currentTimeSetTimeInterval;
	UIView* _minimumTrackView;
	BOOL _needsAnimationUpdate;
	CGSize _previousKnownSize;
	float _rate;
	double _totalDuration;
	id<MusicPlaybackProgressScrubberDelegate> _scrubberDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isAlwaysLive,nonatomic) BOOL alwaysLive; 
@property (nonatomic,readonly) long long currentScrubSpeed; 
@property (assign,nonatomic,__weak) id<MusicPlaybackProgressScrubberDelegate> scrubberDelegate;              //@synthesize scrubberDelegate=_scrubberDelegate - In the implementation block
@property (nonatomic,readonly) double effectiveCurrentTime; 
@property (assign,nonatomic) float rate; 
@property (assign,getter=isScrubbingEnabled,nonatomic) BOOL scrubbingEnabled; 
@property (assign,nonatomic) double totalDuration; 
-(BOOL)isAlwaysLive;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(long long)currentScrubSpeed;
-(id<MusicPlaybackProgressScrubberDelegate>)scrubberDelegate;
-(void)setScrubberDelegate:(id<MusicPlaybackProgressScrubberDelegate>)arg1 ;
-(void)setCurrentTime:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(void)_setNeedsAnimationUpdate;
-(void)_updateAnimations;
-(double)effectiveCurrentTime;
-(BOOL)_setCurrentTime:(double)arg1 ;
-(double)_valueForTime:(double)arg1 ;
-(void)_layoutTrackViewsForValue:(double)arg1 ;
-(void)_removeAllTrackAnimations;
-(void)cancelScrubbing;
-(void)setAlwaysLive:(BOOL)arg1 ;
-(BOOL)isScrubbingEnabled;
-(void)setScrubbingEnabled:(BOOL)arg1 ;
-(double)totalDuration;
-(void)setTotalDuration:(double)arg1 ;
-(float)rate;
-(void)setRate:(float)arg1 ;
@end

