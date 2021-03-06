/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:01 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIActiveOrientationObserver.h>

@class SBAppSliderWindow, UIViewController, NSMutableSet, SBWindow;

@interface SBAppSliderWindowController : NSObject <SBUIActiveOrientationObserver> {

	SBAppSliderWindow* _window;
	UIViewController* _rootViewController;
	int _trueWindowOrientation;
	int _overrideWindowOrientation;
	NSMutableSet* _rotationPreventionReasons;

}

@property (nonatomic,retain) UIViewController * rootViewController; 
@property (nonatomic,readonly) SBWindow * window; 
-(void)overrideWindowOrientation:(int)arg1 ;
-(void)clearOverrideWindowOrientation;
-(void)setAllowRotation:(BOOL)arg1 forReason:(id)arg2 ;
-(void)_rotateIfNecessaryTo:(int)arg1 withDuration:(double)arg2 forOverride:(BOOL)arg3 ;
-(void)_setOverrideWindowOrientation:(int)arg1 ;
-(void)_setTrueWindowOrientation:(int)arg1 ;
-(BOOL)_shouldAllowRotation:(BOOL)arg1 ;
-(BOOL)_hasOrientationOverride;
-(int)windowOrientationWithoutOverrides;
-(void)_windowDidBecomeVisible:(id)arg1 ;
-(void)activeInterfaceOrientationWillChangeToOrientation:(int)arg1 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(int)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(int)arg3 ;
-(void)dealloc;
-(id)window;
-(void)setRootViewController:(id)arg1 ;
-(id)rootViewController;
-(id)initWithRootViewController:(id)arg1 ;
-(int)windowOrientation;
@end

