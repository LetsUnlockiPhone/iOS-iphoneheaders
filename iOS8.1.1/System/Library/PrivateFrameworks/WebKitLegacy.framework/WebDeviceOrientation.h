/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@class WebDeviceOrientationInternal;

@interface WebDeviceOrientation : NSObject {

	WebDeviceOrientationInternal* m_internal;

}
-(id)initWithCoreDeviceOrientation:(PassRefPtr<WebCore::DeviceOrientationData>*)arg1 ;
-(void)dealloc;
-(id)initWithCanProvideAlpha:(BOOL)arg1 alpha:(double)arg2 canProvideBeta:(BOOL)arg3 beta:(double)arg4 canProvideGamma:(BOOL)arg5 gamma:(double)arg6 ;
@end

