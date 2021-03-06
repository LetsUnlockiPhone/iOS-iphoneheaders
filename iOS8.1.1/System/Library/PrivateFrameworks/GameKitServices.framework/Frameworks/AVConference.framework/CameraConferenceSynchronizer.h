/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class VCVideoRule;

@interface CameraConferenceSynchronizer : NSObject {

	BOOL isConference720p;
	BOOL isConferenceOniPad;
	BOOL receivedRequestToChangeCamera;
	BOOL receivedFirstRemoteFrame;
	int cameraHasChangedToCapture;
	int didSendFirstRemoteFrameNotification;
	VCVideoRule* captureRule;
	CGSize localPortraitAspectRatio;
	/*^block*/id remoteFrameNotificationBlock;
	/*^block*/id didStopNotificationBlock;

}

@property (assign,setter=setLocalPortraitAspectRatio:,nonatomic) CGSize localPortraitAspectRatio; 
-(void)dealloc;
-(id)init;
-(void)reset;
-(void)scheduleFirstRemoteFrameNotification:(/*^block*/id)arg1 ;
-(void)setLocalPortraitAspectRatio:(CGSize)arg1 ;
-(void)scheduleCameraChangeToCaptureSettings:(id)arg1 ;
-(void)scheduleCameraChangeToPreviewSettings;
-(void)cameraSizeChangedTo:(CGSize)arg1 ;
-(BOOL)shouldConferenceSendFirstRemoteFrameNotification;
-(void)notifyClientOfRemoteFrame:(double)arg1 ;
-(BOOL)shouldConferenceChangeCameraToCaptureSettings;
-(void)changeCameraToCaptureSettings:(double)arg1 forced:(BOOL)arg2 ;
-(BOOL)shouldConferenceChangeCameraToPreviewSettings;
-(CGSize)localPortraitAspectRatio;
@end

