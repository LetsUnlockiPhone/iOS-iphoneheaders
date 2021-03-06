/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:39:10 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreAudioKit/CoreAudioKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class CAIAANodeContainer, UIPageControl, CAIAANodeInfo, NSTimer, NSString;

@interface CAInterAppAudioSwitcherView : UIView <UIScrollViewDelegate> {

	OpaqueAudioComponentInstanceRef outputUnit;
	CAIAANodeContainer* nodeView;
	UIPageControl* pageControl;
	CAIAANodeInfo* info;
	NSTimer* refreshTimer;
	char showingAppNames;
	char isHostConnected;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isShowingAppNames) char showingAppNames; 
-(void)audioUnitPropertyChangedListener:(void*)arg1 unit:(OpaqueAudioComponentInstanceRef)arg2 propID:(unsigned long)arg3 scope:(unsigned long)arg4 element:(unsigned long)arg5 ;
-(void)appHasGoneInBackground;
-(void)appHasGoneForeground;
-(char)isHostConnected;
-(void)setOutputAudioUnit:(OpaqueAudioComponentInstanceRef)arg1 ;
-(void)nodePressed:(id)arg1 ;
-(void)changePage:(id)arg1 ;
-(void)updateNodeList;
-(char)isShowingAppNames;
-(void)setShowingAppNames:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(void)removeFromSuperview;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)initialize;
-(void)didMoveToSuperview;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(float)contentWidth;
-(void)startTimer;
-(void)updateInfo;
@end

