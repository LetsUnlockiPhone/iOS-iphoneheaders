/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:54 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/_UISettingsKeyObserver.h>

@class PTXParallaxEngineSettings, CAMediaTimingFunction, UIWindow, UILabel, UIView, NSString;

@interface PTXParallaxReferenceFrame : NSObject <_UISettingsKeyObserver> {

	GLKQuaternion _referenceQuaternion;
	GLKQuaternion _absoluteQuaternion;
	double _lastUpdate;
	CGPoint _lastOffset;
	double _idleStartTime;
	CGPoint _idleStartOffset;
	PTXParallaxEngineSettings* _settings;
	CAMediaTimingFunction* _curveFunction;
	float _smoothingDegree;
	float _referenceShiftSpeed;
	float _distanceMultiplier;
	float _jumpThreshold;
	unsigned long _jumpSound;
	float _idleLeeway;
	float _secondsBeforeIdle;
	float _lockValue;
	float _lockStrength;
	UIWindow* _diagnosticsWindow;
	UILabel* _idleIndicator;
	UIView* _horizontalLockIndicator;
	UIView* _verticalLockIndicator;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(CGPoint)offset;
-(void)reset;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_updateSettings;
-(void)_tearDownDiagnosticsWindow;
-(void)_tearDownDirectionLockIndicators;
-(void)_tearDownIdleIndicator;
-(CGPoint)_currentRawOffset:(_GLKQuaternion)arg1 ;
-(void)_updateSmoothedOffsetForRawOffset:(CGPoint)arg1 ;
-(void)_updateDirectionalLockIndicators;
-(float)_referenceShiftRadiansPerSecondForAngle:(float)arg1 ;
-(void)_showIdleUI:(char)arg1 ;
-(void)_createIdleIndicator;
-(void)_createDirectionLockIndicators;
-(void)_createDiagnosticsWindow;
-(id)initWithReferenceAttitude:(id)arg1 settings:(id)arg2 ;
-(void)updateWithAttitude:(id)arg1 ;
-(int)directionLockStatus;
-(float)directionLockStrength;
-(_GLKQuaternion)_relativeQuaternion:(_GLKQuaternion)arg1 ;
-(void)_updateIdleStateForRawOffset:(CGPoint)arg1 ;
-(void)_updateReferenceAttitude:(_GLKQuaternion)arg1 ;
-(char)_isIdle;
-(CGPoint)_curvedOffset;
@end

