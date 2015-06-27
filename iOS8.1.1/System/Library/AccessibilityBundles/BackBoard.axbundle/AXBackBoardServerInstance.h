/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:25:43 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/AccessibilityBundles/BackBoard.axbundle/BackBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AXBackBoardServerInstanceDelegate;
#import <BackBoard/BackBoard-Structs.h>
@class AXIPCServer, NSMutableArray;

@interface AXBackBoardServerInstance : NSObject {

	AXIPCServer* _server;
	id<AXBackBoardServerInstanceDelegate> _delegate;
	NSMutableArray* _eventListeners;
	NSMutableArray* _zoomListeners;
	NSMutableArray* _eventTapClients;

}

@property (assign,nonatomic) id<AXBackBoardServerInstanceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)backBoardServerInstance;
+(id)backBoardServerInstanceIfExists;
-(id)_handleItemChooserVisible:(id)arg1 ;
-(BOOL)_inPreBoardMode;
-(void)zoomListener:(float)arg1 zoomFrame:(CGRect)arg2 ;
-(id)_gaxBackboard;
-(void)eventListener:(id)arg1 ;
-(id)_handleRegisterZoomConflict:(id)arg1 ;
-(id)_handleZoomAdjustment:(id)arg1 ;
-(id)_handleConvertFrameWithContextId:(id)arg1 ;
-(id)_handlePostEvent:(id)arg1 ;
-(id)_handleUserEventOccurred:(id)arg1 ;
-(id)_handleEventListenerRegistration:(id)arg1 ;
-(id)_handleZoomListenerRegistration:(id)arg1 ;
-(id)_handleWakeUpIfNecessary:(id)arg1 ;
-(id)_handleRegisterAssistiveTouchPID:(id)arg1 ;
-(id)_handleRegisterAccessibilityUIPID:(id)arg1 ;
-(id)_handleRegisterSiriViewServicePID:(id)arg1 ;
-(id)_handleLockScreenDimTimerEnabled:(id)arg1 ;
-(id)_handleGetGuidedAccessAvailability:(id)arg1 ;
-(id)_handleSetInPreBoardMode:(id)arg1 ;
-(id)_handleInPreBoardMode:(id)arg1 ;
-(id)_handleIsGuidedAccessActive:(id)arg1 ;
-(id)_handleIsGuidedAccessSelfLockedToRequestingApp:(id)arg1 ;
-(id)_handleSetGuidedAccessEnabledByRequestingApp:(id)arg1 ;
-(id)_handleInvertColorsChange:(id)arg1 ;
-(id)_setAXPreferenceAsMobile:(id)arg1 ;
-(id)_handleIsHearingControlEnabled:(id)arg1 ;
-(id)_handleEnableEventTap:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<AXBackBoardServerInstanceDelegate>)arg1 ;
-(id<AXBackBoardServerInstanceDelegate>)delegate;
-(id)_initServer;
-(void)_initializeHandlers;
@end
