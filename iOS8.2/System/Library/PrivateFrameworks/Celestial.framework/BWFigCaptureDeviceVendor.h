/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:35 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface BWFigCaptureDeviceVendor : NSObject
+(void)initialize;
+(void)_setupDeviceCloseTimer;
+(void)powerOnDefaultVideoDevice;
+(OpaqueFigCaptureDeviceRef)copyDefaultVideoDeviceWithStealingBehavior:(int)arg1 ;
+(OpaqueFigCaptureStreamRef)copyStreamWithPosition:(int)arg1 forDevice:(OpaqueFigCaptureDeviceRef)arg2 ;
+(void)takeBackVideoDevice:(OpaqueFigCaptureDeviceRef)arg1 ;
+(void)invalidateVideoDevice:(OpaqueFigCaptureDeviceRef)arg1 ;
+(char)activeDeviceEquals:(OpaqueFigCaptureDeviceRef)arg1 ;
+(char)videoCaptureDeviceFirmwareIsLoaded;
@end

